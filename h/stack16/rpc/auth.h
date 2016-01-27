/********************************************************copyrite.xmc***/
/*                                                                     */
/*   Licensed Materials - Property of IBM                              */
/*                                                                     */
/*   This module is "Restricted Materials of IBM":                     */
/*      Program Number:   5798RXW                                      */
/*      Program Name:     IBM TCP/IP Version 1.2 for OS/2              */
/*   (C) Copyright IBM Corporation. 1990, 1991.                        */
/*                                                                     */
/*   See IBM Copyright Instructions.                                   */
/*                                                                     */
/********************************************************copyrite.xmc***/
#ifndef __AUTH_32H
#define __AUTH_32H

/*
 * Sun RPC is a product of Sun Microsystems, Inc. and is provided for
 * unrestricted use provided that this legend is included on all tape
 * media and as a part of the software program in whole or part.  Users
 * may copy or modify Sun RPC without charge, but are not authorized
 * to license or distribute it to anyone else except as part of a product or
 * program developed by the user.
 *
 * SUN RPC IS PROVIDED AS IS WITH NO WARRANTIES OF ANY KIND INCLUDING THE
 * WARRANTIES OF DESIGN, MERCHANTIBILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE, OR ARISING FROM A COURSE OF DEALING, USAGE OR TRADE PRACTICE.
 *
 * Sun RPC is provided with no support and without any obligation on the
 * part of Sun Microsystems, Inc. to assist in its use, correction,
 * modification or enhancement.
 *
 * SUN MICROSYSTEMS, INC. SHALL HAVE NO LIABILITY WITH RESPECT TO THE
 * INFRINGEMENT OF COPYRIGHTS, TRADE SECRETS OR ANY PATENTS BY SUN RPC
 * OR ANY PART THEREOF.
 *
 * In no event will Sun Microsystems, Inc. be liable for any lost revenue
 * or profits or other special, indirect and consequential damages, even if
 * Sun has been advised of the possibility of such damages.
 *
 * Sun Microsystems, Inc.
 * 2550 Garcia Avenue
 * Mountain View, California  94043
 */
/*      @(#)auth.h 1.1 86/02/03 SMI      */

/*
 * auth.h, Authentication interface.
 *
 * Copyright (C) 1984, Sun Microsystems, Inc.
 *
 * The data structures are completely opaque to the client.  The client
 * is required to pass a AUTH * to routines that create rpc
 * "sessions".
 */


#define MAX_AUTH_BYTES  400


/*
 * Status returned from authentication check
 */
enum auth_stat {
        AUTH_OK=0,
        /*
         * failed at remote end
         */
        AUTH_BADCRED=1,                 /* bogus credentials (seal broken) */
        AUTH_REJECTEDCRED=2,            /* client should begin new session */
        AUTH_BADVERF=3,                 /* bogus verifier (seal broken) */
        AUTH_REJECTEDVERF=4,            /* verifier expired or was replayed */
        AUTH_TOOWEAK=5,                 /* rejected due to security reasons */
        /*
         * failed locally
        */
        AUTH_INVALIDRESP=6,             /* bogus response verifier */
        AUTH_FAILED=7                   /* some unknown reason */
};


union des_block {
        struct {
                u_long high;
                u_long low;
        } key;
        char c[8];
};


/*
 * Authentication info.  Opaque to client.
 */
struct opaque_auth {
        enum_t  oa_flavor;              /* flavor of auth */
        caddr_t oa_base;                /* address of more auth stuff */
        u_int   oa_length;              /* not to exceed MAX_AUTH_BYTES */
};


/*
 * Auth handle, interface to client side authenticators.
 */
typedef struct auth {
        struct  opaque_auth     ah_cred;
        struct  opaque_auth     ah_verf;
        union   des_block       ah_key;
        struct auth_ops {
                void    (*ah_nextverf)(struct auth *);
                int     (*ah_marshal)(struct auth *, XDR *); /* nextverf & serialize */
                int     (*ah_validate)(struct auth *, struct opaque_auth *); /* validate varifier */
                int     (*ah_refresh)(struct auth *);                     /* refresh credentials */
                void    (*ah_destroy)(struct auth *);                     /* destroy this structure */
        } *ah_ops;
        caddr_t ah_private;
} AUTH;


/*
 * Authentication ops.
 * The ops and the auth handle provide the interface to the authenticators.
 *
 * AUTH *auth;
 * XDR  *xdrs;
 * struct opaque_auth verf;
 */
#define AUTH_NEXTVERF(auth)             \
                ((*((auth)->ah_ops->ah_nextverf))(auth))
#define auth_nextverf(auth)             \
                ((*((auth)->ah_ops->ah_nextverf))(auth))

#define AUTH_MARSHALL(auth, xdrs)       \
                ((*((auth)->ah_ops->ah_marshal))(auth, xdrs))
#define auth_marshall(auth, xdrs)       \
                ((*((auth)->ah_ops->ah_marshal))(auth, xdrs))

#define AUTH_VALIDATE(auth, verfp)      \
                ((*((auth)->ah_ops->ah_validate))((auth), verfp))
#define auth_validate(auth, verfp)      \
                ((*((auth)->ah_ops->ah_validate))((auth), verfp))

#define AUTH_REFRESH(auth)              \
                ((*((auth)->ah_ops->ah_refresh))(auth))
#define auth_refresh(auth)              \
                ((*((auth)->ah_ops->ah_refresh))(auth))

#define AUTH_DESTROY(auth)              \
                ((*((auth)->ah_ops->ah_destroy))(auth))
#define auth_destroy(auth)              \
                ((*((auth)->ah_ops->ah_destroy))(auth))


extern struct opaque_auth _null_auth;


/*
 * These are the various implementations of client side authenticators.
 */

/*
 * Unix style authentication
 * AUTH *authunix_create(machname, uid, gid, len, aup_gids)
 *      char *machname;
 *      int uid;
 *      int gid;
 *      int len;
 *      int *aup_gids;
 */
extern AUTH *authunix_create(char *, int, int, int, int *);
extern AUTH *authunix_create_default(void); /* takes no parameters */
extern AUTH *authnone_create(void);         /* takes no parameters */

#define AUTH_NULL       0
#define AUTH_UNIX       1               /* unix style (uid, gids) */
#define AUTH_SHORT      2               /* short hand unix style */

#endif /* __AUTH_32H */
