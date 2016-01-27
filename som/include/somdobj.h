
/*
 * This file was generated by the SOM Compiler.
 * FileName: somdobj.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.17
 *     SOM Emitter emith: 2.47
 */

/*
 *    Interface for CORBA Object Reference.
 * 
 *    This is the class that implements the behavior of CORBA object references,
 *    e.g., get_implementation, get_interface, duplicate, release, etc.
 * 
 *    In addition, there are some private methods, which are exposed only to
 *    the ORB classes, to implement the ORB functions related to object
 *    references (e.g., ORB_object_to_string).
 * 
 *    In DSOM, there is also another derivation of this class:  SOMDClientProxy.
 *    This subclass inherits the implementation of this class, but extends it
 *    by overriding somDispatch with a "remote dispatch" method, and caches the
 *    binding to the server process.  Whenever a remote object is accessed, it
 *    is represented in the client process by a SOMDClientProxy object.
 * 
 * 
 */


#ifndef SOM_SOMDObject_h
#define SOM_SOMDObject_h


/*
 * Passthru lines: File: "C.h", "before"
 */

#include <somdtype.h>


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
#ifndef SOMDObject
#define SOMDObject SOMObject
#endif
#include <somobj.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */
#ifndef Container
    #define Container SOMObject
#endif /* Container */
#ifndef ImplementationDef
    #define ImplementationDef SOMObject
#endif /* ImplementationDef */
#ifndef InterfaceDef
    #define InterfaceDef SOMObject
#endif /* InterfaceDef */
#ifndef NVList
    #define NVList SOMObject
#endif /* NVList */
#ifndef Context
    #define Context SOMObject
#endif /* Context */
#ifndef Request
    #define Request SOMObject
#endif /* Request */

/*
 * End of bindings for IDL types.
 */

#define SOMDObject_MajorVersion 2
#define SOMDObject_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define SOMDObjectNewClass c
#pragma linkage(c, system)
#define SOMDObjectClassData d
#define SOMDObjectCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define SOMDObject_classObj SOMDObjectClassData.classObject
#define _SOMDObject SOMDObject_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK SOMDObjectNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(SOMDObjectNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct SOMDObjectClassDataStructure {
	SOMClass *classObject;
	somMToken get_implementation;
	somMToken get_interface;
	somMToken set_to_nil;
	somMethodProc *is_nil;
	somMToken is_SOM_ref;
	somMToken is_constant;
	somMToken is_proxy;
	somMToken duplicate;
	somMToken release;
	somMToken create_request;
	somMToken create_request_args;
	somMToken _get_somd_tag;
	somMToken _get_somd_flags;
	somMToken _set_somd_flags;
	somMToken _get_somd_impl;
	somMToken _set_somd_impl;
	somMToken _get_somd_rid;
	somMToken _set_somd_rid;
	somMToken _get_somd_id;
	somMToken _set_somd_id;
} SOMDLINK SOMDObjectClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct SOMDObjectCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK SOMDObjectCClassData;

/*
 * New and Renew macros for SOMDObject
 */
#define SOMDObjectNew() \
   ( _SOMDObject ? \
	_somNew(_SOMDObject) \
	: ( SOMDObjectNewClass(\
		SOMDObject_MajorVersion, \
		SOMDObject_MinorVersion),\
	   _somNew(_SOMDObject)))
#define SOMDObjectRenew(buf) \
   ( _SOMDObject ? \
	_somRenew(_SOMDObject, buf) \
	: ( SOMDObjectNewClass(\
		SOMDObject_MajorVersion, \
		SOMDObject_MinorVersion),\
	   _somRenew(_SOMDObject, buf)))

/*
 * Override method: somDefaultInit
 */
#define SOMDObject_somDefaultInit(somSelf,ctrl) \
	SOMObject_somDefaultInit(somSelf,ctrl)

/*
 * Override method: somDestruct
 */
#define SOMDObject_somDestruct(somSelf,doFree,ctrl) \
	SOMObject_somDestruct(somSelf,doFree,ctrl)

/*
 * Override method: somDumpSelfInt
 */
#define SOMDObject_somDumpSelfInt(somSelf,level) \
	SOMObject_somDumpSelfInt(somSelf,level)

/*
 * New Method: get_implementation
 */
typedef ImplementationDef*   SOMLINK somTP_SOMDObject_get_implementation(SOMDObject *somSelf, Environment *ev);
#pragma linkage(somTP_SOMDObject_get_implementation, system)
typedef somTP_SOMDObject_get_implementation *somTD_SOMDObject_get_implementation;
/*
 *  Returns the implementation definition for the referenced object.
 */
#define somMD_SOMDObject_get_implementation "::SOMDObject::get_implementation"
#define SOMDObject_get_implementation(somSelf,ev) \
    (SOM_Resolve(somSelf, SOMDObject, get_implementation) \
	(somSelf,ev))
#ifndef SOMGD_get_implementation
    #if (defined(_get_implementation) || defined(__get_implementation))
        #undef _get_implementation
        #undef __get_implementation
        #define SOMGD_get_implementation 1
    #else
        #define _get_implementation SOMDObject_get_implementation
    #endif /* _get_implementation */
#endif /* SOMGD_get_implementation */

/*
 * New Method: get_interface
 */
typedef InterfaceDef*   SOMLINK somTP_SOMDObject_get_interface(SOMDObject *somSelf, Environment *ev);
#pragma linkage(somTP_SOMDObject_get_interface, system)
typedef somTP_SOMDObject_get_interface *somTD_SOMDObject_get_interface;
/*
 *  Returns the interface definition for the referenced object.
 */
#define somMD_SOMDObject_get_interface "::SOMDObject::get_interface"
#define SOMDObject_get_interface(somSelf,ev) \
    (SOM_Resolve(somSelf, SOMDObject, get_interface) \
	(somSelf,ev))
#ifndef SOMGD_get_interface
    #if (defined(_get_interface) || defined(__get_interface))
        #undef _get_interface
        #undef __get_interface
        #define SOMGD_get_interface 1
    #else
        #define _get_interface SOMDObject_get_interface
    #endif /* _get_interface */
#endif /* SOMGD_get_interface */

/*
 * Direct call procedure
 */
typedef boolean   SOMLINK somTP_SOMDObject_is_nil(SOMDObject *somSelf, Environment *ev);
#pragma linkage(somTP_SOMDObject_is_nil, system)
typedef somTP_SOMDObject_is_nil *somTD_SOMDObject_is_nil;
#define SOMDObject_is_nil ((somTD_SOMDObject_is_nil) SOMDObjectClassData.is_nil)
#ifndef SOMGD_is_nil
    #if (defined(_is_nil) || defined(__is_nil))
        #undef _is_nil
        #undef __is_nil
        #define SOMGD_is_nil 1
    #else
        #define _is_nil SOMDObject_is_nil
    #endif /* _is_nil */
#endif /* SOMGD_is_nil */

/*
 * New Method: is_SOM_ref
 */
typedef boolean   SOMLINK somTP_SOMDObject_is_SOM_ref(SOMDObject *somSelf, Environment *ev);
#pragma linkage(somTP_SOMDObject_is_SOM_ref, system)
typedef somTP_SOMDObject_is_SOM_ref *somTD_SOMDObject_is_SOM_ref;
/*
 *  Returns TRUE if object reference was created by SOMOA::create_SOM_ref
 *  else returns FALSE.
 */
#define somMD_SOMDObject_is_SOM_ref "::SOMDObject::is_SOM_ref"
#define SOMDObject_is_SOM_ref(somSelf,ev) \
    (SOM_Resolve(somSelf, SOMDObject, is_SOM_ref) \
	(somSelf,ev))
#ifndef SOMGD_is_SOM_ref
    #if (defined(_is_SOM_ref) || defined(__is_SOM_ref))
        #undef _is_SOM_ref
        #undef __is_SOM_ref
        #define SOMGD_is_SOM_ref 1
    #else
        #define _is_SOM_ref SOMDObject_is_SOM_ref
    #endif /* _is_SOM_ref */
#endif /* SOMGD_is_SOM_ref */

/*
 * New Method: is_constant
 */
typedef boolean   SOMLINK somTP_SOMDObject_is_constant(SOMDObject *somSelf, Environment *ev);
#pragma linkage(somTP_SOMDObject_is_constant, system)
typedef somTP_SOMDObject_is_constant *somTD_SOMDObject_is_constant;
/*
 *  Returns TRUE if object reference was created by SOMOA::create_constant
 *  else returns FALSE.
 */
#define somMD_SOMDObject_is_constant "::SOMDObject::is_constant"
#define SOMDObject_is_constant(somSelf,ev) \
    (SOM_Resolve(somSelf, SOMDObject, is_constant) \
	(somSelf,ev))
#ifndef SOMGD_is_constant
    #if (defined(_is_constant) || defined(__is_constant))
        #undef _is_constant
        #undef __is_constant
        #define SOMGD_is_constant 1
    #else
        #define _is_constant SOMDObject_is_constant
    #endif /* _is_constant */
#endif /* SOMGD_is_constant */

/*
 * New Method: is_proxy
 */
typedef boolean   SOMLINK somTP_SOMDObject_is_proxy(SOMDObject *somSelf, Environment *ev);
#pragma linkage(somTP_SOMDObject_is_proxy, system)
typedef somTP_SOMDObject_is_proxy *somTD_SOMDObject_is_proxy;
/*
 *  Returns TRUE if object reference (self) is a DSOM client proxy object
 *  (i.e., the target object is remote).  Returns FALSE if the referenced
 *  object is in the same process as the reference.
 * 
 *  The default implementation returns FALSE.  Proxy classes which are
 *  subclasses of SOMDObject (like SOMDClientProxy) should override this
 *  method to return TRUE.
 */
#define somMD_SOMDObject_is_proxy "::SOMDObject::is_proxy"
#define SOMDObject_is_proxy(somSelf,ev) \
    (SOM_Resolve(somSelf, SOMDObject, is_proxy) \
	(somSelf,ev))
#ifndef SOMGD_is_proxy
    #if (defined(_is_proxy) || defined(__is_proxy))
        #undef _is_proxy
        #undef __is_proxy
        #define SOMGD_is_proxy 1
    #else
        #define _is_proxy SOMDObject_is_proxy
    #endif /* _is_proxy */
#endif /* SOMGD_is_proxy */

/*
 * New Method: duplicate
 */
typedef SOMDObject*   SOMLINK somTP_SOMDObject_duplicate(SOMDObject *somSelf, Environment *ev);
#pragma linkage(somTP_SOMDObject_duplicate, system)
typedef somTP_SOMDObject_duplicate *somTD_SOMDObject_duplicate;
/*
 *  Makes a duplicate of the object reference.
 *  OWNERSHIP of returned object is transferred to the caller.
 *  Call release to free the object.
 */
#define somMD_SOMDObject_duplicate "::SOMDObject::duplicate"
#define SOMDObject_duplicate(somSelf,ev) \
    (SOM_Resolve(somSelf, SOMDObject, duplicate) \
	(somSelf,ev))
#ifndef SOMGD_duplicate
    #if (defined(_duplicate) || defined(__duplicate))
        #undef _duplicate
        #undef __duplicate
        #define SOMGD_duplicate 1
    #else
        #define _duplicate SOMDObject_duplicate
    #endif /* _duplicate */
#endif /* SOMGD_duplicate */

/*
 * New Method: release
 */
typedef void   SOMLINK somTP_SOMDObject_release(SOMDObject *somSelf, Environment *ev);
#pragma linkage(somTP_SOMDObject_release, system)
typedef somTP_SOMDObject_release *somTD_SOMDObject_release;
/*
 *  Releases the memory associated with the object reference.
 */
#define somMD_SOMDObject_release "::SOMDObject::release"
#define SOMDObject_release(somSelf,ev) \
    (SOM_Resolve(somSelf, SOMDObject, release) \
	(somSelf,ev))
#ifndef SOMGD_release
    #if (defined(_release) || defined(__release))
        #undef _release
        #undef __release
        #define SOMGD_release 1
    #else
        #define _release SOMDObject_release
    #endif /* _release */
#endif /* SOMGD_release */

/*
 * New Method: create_request
 */
typedef ORBStatus   SOMLINK somTP_SOMDObject_create_request(SOMDObject *somSelf, Environment *ev, 
		Context* ctx, 
		Identifier operation, 
		NVList* arg_list, 
		NamedValue* result, 
		Request** request, 
		Flags req_flags);
#pragma linkage(somTP_SOMDObject_create_request, system)
typedef somTP_SOMDObject_create_request *somTD_SOMDObject_create_request;
/*
 *  Creates a request to execute a particular operation on the
 *  referenced object.
 * 
 *  CORBA 1.1 introduces this method in this class, but DSOM actually
 *  implements this method in the SOMDClientProxy subclass.
 */
#define somMD_SOMDObject_create_request "::SOMDObject::create_request"
#define SOMDObject_create_request(somSelf,ev,ctx,operation,arg_list,result,request,req_flags) \
    (SOM_Resolve(somSelf, SOMDObject, create_request) \
	(somSelf,ev,ctx,operation,arg_list,result,request,req_flags))
#ifndef SOMGD_create_request
    #if (defined(_create_request) || defined(__create_request))
        #undef _create_request
        #undef __create_request
        #define SOMGD_create_request 1
    #else
        #define _create_request SOMDObject_create_request
    #endif /* _create_request */
#endif /* SOMGD_create_request */

/*
 * New Method: create_request_args
 */
typedef ORBStatus   SOMLINK somTP_SOMDObject_create_request_args(SOMDObject *somSelf, Environment *ev, 
		Identifier operation, 
		NVList** arg_list, 
		NamedValue* result);
#pragma linkage(somTP_SOMDObject_create_request_args, system)
typedef somTP_SOMDObject_create_request_args *somTD_SOMDObject_create_request_args;
/*
 *  Creates the appropriate arg_list (NVList) for the specified operation.
 *  Also creates a NamedValue to hold the result.
 *  (Similar in function to ORB_create_operation_list.)
 * 
 *  This method is defined in this class, as a companion to the
 *  "create_request" method, but DSOM implements this method in the
 *  SOMDClientProxy subclass.
 */
#define somMD_SOMDObject_create_request_args "::SOMDObject::create_request_args"
#define SOMDObject_create_request_args(somSelf,ev,operation,arg_list,result) \
    (SOM_Resolve(somSelf, SOMDObject, create_request_args) \
	(somSelf,ev,operation,arg_list,result))
#ifndef SOMGD_create_request_args
    #if (defined(_create_request_args) || defined(__create_request_args))
        #undef _create_request_args
        #undef __create_request_args
        #define SOMGD_create_request_args 1
    #else
        #define _create_request_args SOMDObject_create_request_args
    #endif /* _create_request_args */
#endif /* SOMGD_create_request_args */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define SOMDObject_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define SOMDObject_somDefaultAssign SOMObject_somDefaultAssign
#define SOMDObject_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define SOMDObject_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define SOMDObject_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define SOMDObject_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define SOMDObject_somDefaultVAssign SOMObject_somDefaultVAssign
#define SOMDObject_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define SOMDObject_somInit SOMObject_somInit
#define SOMDObject_somFree SOMObject_somFree
#define SOMDObject_somUninit SOMObject_somUninit
#define SOMDObject_somGetClass SOMObject_somGetClass
#define SOMDObject_somGetClassName SOMObject_somGetClassName
#define SOMDObject_somGetSize SOMObject_somGetSize
#define SOMDObject_somIsA SOMObject_somIsA
#define SOMDObject_somIsInstanceOf SOMObject_somIsInstanceOf
#define SOMDObject_somRespondsTo SOMObject_somRespondsTo
#define SOMDObject_somDispatch SOMObject_somDispatch
#define SOMDObject_somClassDispatch SOMObject_somClassDispatch
#define SOMDObject_somCastObj SOMObject_somCastObj
#define SOMDObject_somResetObj SOMObject_somResetObj
#define SOMDObject_somDispatchV SOMObject_somDispatchV
#define SOMDObject_somDispatchL SOMObject_somDispatchL
#define SOMDObject_somDispatchA SOMObject_somDispatchA
#define SOMDObject_somDispatchD SOMObject_somDispatchD
#define SOMDObject_somPrintSelf SOMObject_somPrintSelf
#define SOMDObject_somDumpSelf SOMObject_somDumpSelf
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_SOMDObject_h */
