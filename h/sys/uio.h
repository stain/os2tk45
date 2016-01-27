/*
 * Copyright (c) 1982, 1986, 1993, 1994
 *      The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *      This product includes software developed by the University of
 *      California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *      @(#)uio.h       8.5 (Berkeley) 2/22/94
 */

#ifndef _SYS_UIO_H_
#define _SYS_UIO_H_

#ifdef TCPV40HDRS
#error error: sys\uio.h is for TCP/IP toolkit 5.0 or later releases only
#else
/*
 * XXX
 * iov_base should be a void *.
 */
struct iovec {
        char    *iov_base;      /* Base address. */
#ifdef __32BIT__
        size_t   iov_len;       /* Length. */
#else
        long     iov_len;       /* Length. */
#endif
};

enum    uio_rw { UIO_READ, UIO_WRITE };

/* Segment flag values. */
enum uio_seg {
        UIO_USERSPACE,          /* from user data space */
        UIO_SYSSPACE,           /* from system space */
        UIO_USERISPACE          /* from user I space */
};

#ifndef KERNEL
#include <sys/cdefs.h>

__BEGIN_DECLS
ssize_t _System readv __TCPPROTO((int, const struct iovec *, int));
ssize_t _System writev __TCPPROTO((int, const struct iovec *, int));
__END_DECLS
#else
#include <private/uio.h>
#endif /* !KERNEL */

#endif /* TCPV40HDRS */
#endif /* !_SYS_UIO_H_ */
