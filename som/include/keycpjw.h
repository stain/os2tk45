
/*
 * This file was generated by the SOM Compiler.
 * FileName: keycpjw.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.17
 *     SOM Emitter emith: 2.47
 */

/*
 * Public definition of class.
 */


#ifndef SOM_dictKeyCharPjw_h
#define SOM_dictKeyCharPjw_h


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
#ifndef dictKeyCharPjw
#define dictKeyCharPjw SOMObject
#endif
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

#define dictKeyCharPjw_MajorVersion 0
#define dictKeyCharPjw_MinorVersion 0

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define dictKeyCharPjwNewClass c
#pragma linkage(c, system)
#define dictKeyCharPjwClassData d
#define dictKeyCharPjwCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define dictKeyCharPjw_classObj dictKeyCharPjwClassData.classObject
#define _dictKeyCharPjw dictKeyCharPjw_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK dictKeyCharPjwNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(dictKeyCharPjwNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct dictKeyCharPjwClassDataStructure {
	SOMClass *classObject;
} SOMDLINK dictKeyCharPjwClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct dictKeyCharPjwCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK dictKeyCharPjwCClassData;

/*
 * New and Renew macros for dictKeyCharPjw
 */
#define dictKeyCharPjwNew() \
   ( _dictKeyCharPjw ? \
	_somNew(_dictKeyCharPjw) \
	: ( dictKeyCharPjwNewClass(\
		dictKeyCharPjw_MajorVersion, \
		dictKeyCharPjw_MinorVersion),\
	   _somNew(_dictKeyCharPjw)))
#define dictKeyCharPjwRenew(buf) \
   ( _dictKeyCharPjw ? \
	_somRenew(_dictKeyCharPjw, buf) \
	: ( dictKeyCharPjwNewClass(\
		dictKeyCharPjw_MajorVersion, \
		dictKeyCharPjw_MinorVersion),\
	   _somRenew(_dictKeyCharPjw, buf)))
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define dictKeyCharPjw_somDefaultInit SOMObject_somDefaultInit
#define dictKeyCharPjw_somDestruct SOMObject_somDestruct
#define dictKeyCharPjw_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define dictKeyCharPjw_somDefaultAssign SOMObject_somDefaultAssign
#define dictKeyCharPjw_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define dictKeyCharPjw_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define dictKeyCharPjw_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define dictKeyCharPjw_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define dictKeyCharPjw_somDefaultVAssign SOMObject_somDefaultVAssign
#define dictKeyCharPjw_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define dictKeyCharPjw_somInit SOMObject_somInit
#define dictKeyCharPjw_somFree SOMObject_somFree
#define dictKeyCharPjw_somUninit SOMObject_somUninit
#define dictKeyCharPjw_somGetClass SOMObject_somGetClass
#define dictKeyCharPjw_somGetClassName SOMObject_somGetClassName
#define dictKeyCharPjw_somGetSize SOMObject_somGetSize
#define dictKeyCharPjw_somIsA SOMObject_somIsA
#define dictKeyCharPjw_somIsInstanceOf SOMObject_somIsInstanceOf
#define dictKeyCharPjw_somRespondsTo SOMObject_somRespondsTo
#define dictKeyCharPjw_somDispatch SOMObject_somDispatch
#define dictKeyCharPjw_somClassDispatch SOMObject_somClassDispatch
#define dictKeyCharPjw_somCastObj SOMObject_somCastObj
#define dictKeyCharPjw_somResetObj SOMObject_somResetObj
#define dictKeyCharPjw_somDispatchV SOMObject_somDispatchV
#define dictKeyCharPjw_somDispatchL SOMObject_somDispatchL
#define dictKeyCharPjw_somDispatchA SOMObject_somDispatchA
#define dictKeyCharPjw_somDispatchD SOMObject_somDispatchD
#define dictKeyCharPjw_somPrintSelf SOMObject_somPrintSelf
#define dictKeyCharPjw_somDumpSelf SOMObject_somDumpSelf
#define dictKeyCharPjw_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_dictKeyCharPjw_h */
