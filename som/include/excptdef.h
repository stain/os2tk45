
/*
 * This file was generated by the SOM Compiler.
 * FileName: excptdef.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.17
 *     SOM Emitter emith: 2.47
 */

#ifndef SOM_ExceptionDef_h
#define SOM_ExceptionDef_h


/*
 * Passthru lines: File: "C.h", "before"
 */

    #include <somtcnst.h>
    #include <somir.h>
    #include <containd.h>


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
#ifndef ExceptionDef
#define ExceptionDef SOMObject
#endif
/*
 *  This interface is used to access information associated with
 *  exceptions defined in an IDL file.
 * 
 *  See CORBA 1.1, 7.5.10, p.138
 */
#include <containd.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */
#ifndef Container
    #define Container SOMObject
#endif /* Container */
typedef
struct ExceptionDef_ExceptionDescription {
Identifier name;
RepositoryId id;
RepositoryId defined_in;
TypeCode type;
} ExceptionDef_ExceptionDescription;
/*
 *  The inherited describe method returns an instance of this
 *  (ExceptionDescription) structure in the "value" member of the
 *  Description structure defined in the Contained interface.
 */


#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_ExceptionDescription
    #ifdef ExceptionDescription
        #undef ExceptionDescription
        #define SOMTGD_ExceptionDescription 1
    #else
        #define ExceptionDescription ExceptionDef_ExceptionDescription
    #endif /* ExceptionDescription */
#endif /* SOMTGD_ExceptionDescription */
#endif /* SOM_DONT_USE_SHORT_NAMES */

/*
 * End of bindings for IDL types.
 */

#define ExceptionDef_MajorVersion 2
#define ExceptionDef_MinorVersion 3

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define ExceptionDefNewClass c
#pragma linkage(c, system)
#define ExceptionDefClassData d
#define ExceptionDefCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define ExceptionDef_classObj ExceptionDefClassData.classObject
#define _ExceptionDef ExceptionDef_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK ExceptionDefNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(ExceptionDefNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct ExceptionDefClassDataStructure {
	SOMClass *classObject;
	somMToken _get_type;
	somMToken _set_type;
} SOMDLINK ExceptionDefClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct ExceptionDefCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK ExceptionDefCClassData;

/*
 * New and Renew macros for ExceptionDef
 */
#define ExceptionDefNew() \
   ( _ExceptionDef ? \
	_somNew(_ExceptionDef) \
	: ( ExceptionDefNewClass(\
		ExceptionDef_MajorVersion, \
		ExceptionDef_MinorVersion),\
	   _somNew(_ExceptionDef)))
#define ExceptionDefRenew(buf) \
   ( _ExceptionDef ? \
	_somRenew(_ExceptionDef, buf) \
	: ( ExceptionDefNewClass(\
		ExceptionDef_MajorVersion, \
		ExceptionDef_MinorVersion),\
	   _somRenew(_ExceptionDef, buf)))

/*
 * Override method: somDefaultInit
 */
#define ExceptionDef_somDefaultInit(somSelf,ctrl) \
	SOMObject_somDefaultInit(somSelf,ctrl)

/*
 * Override method: somDestruct
 */
#define ExceptionDef_somDestruct(somSelf,doFree,ctrl) \
	SOMObject_somDestruct(somSelf,doFree,ctrl)

/*
 * Override method: somDumpSelf
 */
#define ExceptionDef_somDumpSelf(somSelf,level) \
	SOMObject_somDumpSelf(somSelf,level)

/*
 * Override method: somDumpSelfInt
 */
#define ExceptionDef_somDumpSelfInt(somSelf,level) \
	SOMObject_somDumpSelfInt(somSelf,level)

/*
 * Override method: describe
 */
#define ExceptionDef_describe(somSelf,ev) \
	Contained_describe(somSelf,ev)

/*
 * New Method: _get_type
 */
typedef TypeCode   SOMLINK somTP_ExceptionDef__get_type(ExceptionDef *somSelf, Environment *ev);
#pragma linkage(somTP_ExceptionDef__get_type, system)
typedef somTP_ExceptionDef__get_type *somTD_ExceptionDef__get_type;
/*
 *  The TypeCode of the receiving object.  The memory used to hold
 *  the TypeCode is contained in the receiving object, which retains
 *  ownership.  Hence, do not free the returned TypeCode.  If you want
 *  to obtain a separate copy, use the TypeCode_copy operation.
 */
#define somMD_ExceptionDef__get_type "::ExceptionDef::_get_type"
#define ExceptionDef__get_type(somSelf,ev) \
    (SOM_Resolve(somSelf, ExceptionDef, _get_type) \
	(somSelf,ev))
#ifndef SOMGD_get_type
    #if (defined(_get_type) || defined(__get_type))
        #undef _get_type
        #undef __get_type
        #define SOMGD_get_type 1
    #else
        #define __get_type ExceptionDef__get_type
    #endif /* __get_type */
#endif /* SOMGD_get_type */

/*
 * New Method: _set_type
 */
typedef void   SOMLINK somTP_ExceptionDef__set_type(ExceptionDef *somSelf, Environment *ev, 
		TypeCode type);
#pragma linkage(somTP_ExceptionDef__set_type, system)
typedef somTP_ExceptionDef__set_type *somTD_ExceptionDef__set_type;
/*
 *  The TypeCode of the receiving object.  The memory used to hold
 *  the TypeCode is contained in the receiving object, which retains
 *  ownership.  Hence, do not free the returned TypeCode.  If you want
 *  to obtain a separate copy, use the TypeCode_copy operation.
 */
#define somMD_ExceptionDef__set_type "::ExceptionDef::_set_type"
#define ExceptionDef__set_type(somSelf,ev,type) \
    (SOM_Resolve(somSelf, ExceptionDef, _set_type) \
	(somSelf,ev,type))
#ifndef SOMGD_set_type
    #if (defined(_set_type) || defined(__set_type))
        #undef _set_type
        #undef __set_type
        #define SOMGD_set_type 1
    #else
        #define __set_type ExceptionDef__set_type
    #endif /* __set_type */
#endif /* SOMGD_set_type */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define ExceptionDef__get_name Contained__get_name
#define ExceptionDef__set_name Contained__set_name
#define ExceptionDef__get_id Contained__get_id
#define ExceptionDef__set_id Contained__set_id
#define ExceptionDef__get_defined_in Contained__get_defined_in
#define ExceptionDef__set_defined_in Contained__set_defined_in
#define ExceptionDef__get_somModifiers Contained__get_somModifiers
#define ExceptionDef__set_somModifiers Contained__set_somModifiers
#define ExceptionDef_within Contained_within
#define ExceptionDef_somFree SOMObject_somFree
#define ExceptionDef_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define ExceptionDef_somDefaultAssign SOMObject_somDefaultAssign
#define ExceptionDef_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define ExceptionDef_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define ExceptionDef_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define ExceptionDef_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define ExceptionDef_somDefaultVAssign SOMObject_somDefaultVAssign
#define ExceptionDef_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define ExceptionDef_somInit SOMObject_somInit
#define ExceptionDef_somUninit SOMObject_somUninit
#define ExceptionDef_somGetClass SOMObject_somGetClass
#define ExceptionDef_somGetClassName SOMObject_somGetClassName
#define ExceptionDef_somGetSize SOMObject_somGetSize
#define ExceptionDef_somIsA SOMObject_somIsA
#define ExceptionDef_somIsInstanceOf SOMObject_somIsInstanceOf
#define ExceptionDef_somRespondsTo SOMObject_somRespondsTo
#define ExceptionDef_somDispatch SOMObject_somDispatch
#define ExceptionDef_somClassDispatch SOMObject_somClassDispatch
#define ExceptionDef_somCastObj SOMObject_somCastObj
#define ExceptionDef_somResetObj SOMObject_somResetObj
#define ExceptionDef_somDispatchV SOMObject_somDispatchV
#define ExceptionDef_somDispatchL SOMObject_somDispatchL
#define ExceptionDef_somDispatchA SOMObject_somDispatchA
#define ExceptionDef_somDispatchD SOMObject_somDispatchD
#define ExceptionDef_somPrintSelf SOMObject_somPrintSelf
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_ExceptionDef_h */
