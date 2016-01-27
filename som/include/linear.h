
/*
 * This file was generated by the SOM Compiler.
 * FileName: linear.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.17
 *     SOM Emitter emith: 2.47
 */

/*
 *    COMPONENT_NAME: somr
 * 
 *    ORIGINS: 27
 * 
 * 
 *    10H9767, 10H9769  (C) COPYRIGHT International Business Machines Corp. 1992,1994
 *    All Rights Reserved
 *    Licensed Materials - Property of IBM
 *    US Government Users Restricted Rights - Use, duplication or
 *    disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
 * 
 */


#ifndef SOM_SOMRLinearizable_h
#define SOM_SOMRLinearizable_h


#include <som.h>

/*
 * -- This emitter treats Method Tokens as Thunks by default.
 * -- Use the sc modifier "nothunks" to change this default
 */
#undef somresolve_
#define somresolve_(obj,mToken) ((somMethodProc*)((void)obj, mToken))

/*
 * Define the class name as an object type
 */
#ifndef SOMRLinearizable
#define SOMRLinearizable SOMObject
#endif
/*
 * This is a mixin class which defines the property "linearizable".
 * Any object that supports the two methods "somrGetState" and
 * "somrSetState" is linearizable.  This is an abstract base class
 * and hence any derived class MUST OVERRIDE these two methods.
 */
#include <somobj.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */

/*
 * End of bindings for IDL types.
 */

#define SOMRLinearizable_MajorVersion 2
#define SOMRLinearizable_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define SOMRLinearizableNewClass c
#pragma linkage(c, system)
#define SOMRLinearizableClassData d
#define SOMRLinearizableCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define SOMRLinearizable_classObj SOMRLinearizableClassData.classObject
#define _SOMRLinearizable SOMRLinearizable_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK SOMRLinearizableNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(SOMRLinearizableNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct SOMRLinearizableClassDataStructure {
	SOMClass *classObject;
	somMToken somrGetState;
	somMToken somrSetState;
} SOMDLINK SOMRLinearizableClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct SOMRLinearizableCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK SOMRLinearizableCClassData;

/*
 * New and Renew macros for SOMRLinearizable
 */
#define SOMRLinearizableNew() \
   ( _SOMRLinearizable ? \
	_somNew(_SOMRLinearizable) \
	: ( SOMRLinearizableNewClass(\
		SOMRLinearizable_MajorVersion, \
		SOMRLinearizable_MinorVersion),\
	   _somNew(_SOMRLinearizable)))
#define SOMRLinearizableRenew(buf) \
   ( _SOMRLinearizable ? \
	_somRenew(_SOMRLinearizable, buf) \
	: ( SOMRLinearizableNewClass(\
		SOMRLinearizable_MajorVersion, \
		SOMRLinearizable_MinorVersion),\
	   _somRenew(_SOMRLinearizable, buf)))

/*
 * New Method: somrGetState
 */
typedef void   SOMLINK somTP_SOMRLinearizable_somrGetState(SOMRLinearizable *somSelf, Environment *ev, 
		string* buf);
#pragma linkage(somTP_SOMRLinearizable_somrGetState, system)
typedef somTP_SOMRLinearizable_somrGetState *somTD_SOMRLinearizable_somrGetState;
/*
 *  Converts its internal state into a linear string and returns a
 *  pointer to the string (the length of the string is in the
 *  first sizeof(int) bytes of this string).   The implementer of this
 *  method should allocate the necessary memory for the string.
 *  The OWNERSHIP of this string is transferred to the caller of this method.
 */
#define somMD_SOMRLinearizable_somrGetState "::SOMRLinearizable::somrGetState"
#define SOMRLinearizable_somrGetState(somSelf,ev,buf) \
    (SOM_Resolve(somSelf, SOMRLinearizable, somrGetState) \
	(somSelf,ev,buf))
#ifndef SOMGD_somrGetState
    #if (defined(_somrGetState) || defined(__somrGetState))
        #undef _somrGetState
        #undef __somrGetState
        #define SOMGD_somrGetState 1
    #else
        #define _somrGetState SOMRLinearizable_somrGetState
    #endif /* _somrGetState */
#endif /* SOMGD_somrGetState */

/*
 * New Method: somrSetState
 */
typedef void   SOMLINK somTP_SOMRLinearizable_somrSetState(SOMRLinearizable *somSelf, Environment *ev, 
		string buf);
#pragma linkage(somTP_SOMRLinearizable_somrSetState, system)
typedef somTP_SOMRLinearizable_somrSetState *somTD_SOMRLinearizable_somrSetState;
/*
 *  The reverse of Get State. It converts the given linear string into
 *  its internal state.  The ownership of buf stays with the caller.
 */
#define somMD_SOMRLinearizable_somrSetState "::SOMRLinearizable::somrSetState"
#define SOMRLinearizable_somrSetState(somSelf,ev,buf) \
    (SOM_Resolve(somSelf, SOMRLinearizable, somrSetState) \
	(somSelf,ev,buf))
#ifndef SOMGD_somrSetState
    #if (defined(_somrSetState) || defined(__somrSetState))
        #undef _somrSetState
        #undef __somrSetState
        #define SOMGD_somrSetState 1
    #else
        #define _somrSetState SOMRLinearizable_somrSetState
    #endif /* _somrSetState */
#endif /* SOMGD_somrSetState */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define SOMRLinearizable_somDefaultInit SOMObject_somDefaultInit
#define SOMRLinearizable_somDestruct SOMObject_somDestruct
#define SOMRLinearizable_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define SOMRLinearizable_somDefaultAssign SOMObject_somDefaultAssign
#define SOMRLinearizable_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define SOMRLinearizable_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define SOMRLinearizable_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define SOMRLinearizable_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define SOMRLinearizable_somDefaultVAssign SOMObject_somDefaultVAssign
#define SOMRLinearizable_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define SOMRLinearizable_somInit SOMObject_somInit
#define SOMRLinearizable_somFree SOMObject_somFree
#define SOMRLinearizable_somUninit SOMObject_somUninit
#define SOMRLinearizable_somGetClass SOMObject_somGetClass
#define SOMRLinearizable_somGetClassName SOMObject_somGetClassName
#define SOMRLinearizable_somGetSize SOMObject_somGetSize
#define SOMRLinearizable_somIsA SOMObject_somIsA
#define SOMRLinearizable_somIsInstanceOf SOMObject_somIsInstanceOf
#define SOMRLinearizable_somRespondsTo SOMObject_somRespondsTo
#define SOMRLinearizable_somDispatch SOMObject_somDispatch
#define SOMRLinearizable_somClassDispatch SOMObject_somClassDispatch
#define SOMRLinearizable_somCastObj SOMObject_somCastObj
#define SOMRLinearizable_somResetObj SOMObject_somResetObj
#define SOMRLinearizable_somDispatchV SOMObject_somDispatchV
#define SOMRLinearizable_somDispatchL SOMObject_somDispatchL
#define SOMRLinearizable_somDispatchA SOMObject_somDispatchA
#define SOMRLinearizable_somDispatchD SOMObject_somDispatchD
#define SOMRLinearizable_somPrintSelf SOMObject_somPrintSelf
#define SOMRLinearizable_somDumpSelf SOMObject_somDumpSelf
#define SOMRLinearizable_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_SOMRLinearizable_h */
