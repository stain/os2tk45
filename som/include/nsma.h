
/*
 * This file was generated by the SOM Compiler.
 * FileName: nsma.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.17
 *     SOM Emitter emith: 2.47
 */

/*
 *    COMPONENT_NAME: somp
 * 
 *    ORIGINS: 27
 * 
 * 
 *     25H7912  (C)  COPYRIGHT International Business Machines Corp. 1992,1994,1996
 *    All Rights Reserved
 *    Licensed Materials - Property of IBM
 *    US Government Users Restricted Rights - Use, duplication or
 *    disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
 * 
 */


#ifndef SOM_SOMPNameSpaceMgr_h
#define SOM_SOMPNameSpaceMgr_h


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
#ifndef SOMPNameSpaceMgr
#define SOMPNameSpaceMgr SOMObject
#endif
/*
 *  This class is responsible for mapping persistent IDs
 *  to persistent objects and groups of objects.
 * 
 *  The NameSpaceMgr maintains a set of IO Group objects.
 * 
 *  All objects which have been restored by the Persistent Storage Mgr
 *  can be reached by the single instance of the NameSpaceMgr maintained
 *  for the persistence framework. (See psm.csc)
 */
#include <somobj.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */
#ifndef Iterator
    #define Iterator SOMObject
#endif /* Iterator */
#ifndef SOMPIOGroup
    #define SOMPIOGroup SOMObject
#endif /* SOMPIOGroup */
#ifndef dictKeyInt
    #define dictKeyInt SOMObject
#endif /* dictKeyInt */
#ifndef dictKeyChar
    #define dictKeyChar SOMObject
#endif /* dictKeyChar */
#ifndef SOMPKeyedSet
    #define SOMPKeyedSet SOMObject
#endif /* SOMPKeyedSet */
#ifndef SOMPPersistentId
    #define SOMPPersistentId SOMObject
#endif /* SOMPPersistentId */
#ifndef SOMPPersistentObject
    #define SOMPPersistentObject SOMObject
#endif /* SOMPPersistentObject */

/*
 * End of bindings for IDL types.
 */

#define SOMPNameSpaceMgr_MajorVersion 2
#define SOMPNameSpaceMgr_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define SOMPNameSpaceMgrNewClass c
#pragma linkage(c, system)
#define SOMPNameSpaceMgrClassData d
#define SOMPNameSpaceMgrCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */

/*
 * Include the metaclass file
 */
#ifndef SOM_SOMMSingleInstance_h
#include <snglicls.h>
#endif
/*--------------Migration------------*/
#define SOMPNameSpaceMgr_classObj SOMPNameSpaceMgrClassData.classObject
#define _SOMPNameSpaceMgr SOMPNameSpaceMgr_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK SOMPNameSpaceMgrNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(SOMPNameSpaceMgrNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct SOMPNameSpaceMgrClassDataStructure {
	SOMClass *classObject;
	somMToken sompFindPersistentObjectById;
	somMToken sompFindGroupById;
	somMToken sompRegisterGroup;
	somMToken sompUnRegisterGroup;
} SOMDLINK SOMPNameSpaceMgrClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct SOMPNameSpaceMgrCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK SOMPNameSpaceMgrCClassData;

/*
 * New and Renew macros for SOMPNameSpaceMgr
 */
#define SOMPNameSpaceMgrNew() \
   ( _SOMPNameSpaceMgr ? \
	_somNew(_SOMPNameSpaceMgr) \
	: ( SOMPNameSpaceMgrNewClass(\
		SOMPNameSpaceMgr_MajorVersion, \
		SOMPNameSpaceMgr_MinorVersion),\
	   _somNew(_SOMPNameSpaceMgr)))
#define SOMPNameSpaceMgrRenew(buf) \
   ( _SOMPNameSpaceMgr ? \
	_somRenew(_SOMPNameSpaceMgr, buf) \
	: ( SOMPNameSpaceMgrNewClass(\
		SOMPNameSpaceMgr_MajorVersion, \
		SOMPNameSpaceMgr_MinorVersion),\
	   _somRenew(_SOMPNameSpaceMgr, buf)))

/*
 * Override method: somInit
 */
#define SOMPNameSpaceMgr_somInit(somSelf) \
	SOMObject_somInit(somSelf)

/*
 * Override method: somUninit
 */
#define SOMPNameSpaceMgr_somUninit(somSelf) \
	SOMObject_somUninit(somSelf)

/*
 * Override method: somDumpSelfInt
 */
#define SOMPNameSpaceMgr_somDumpSelfInt(somSelf,level) \
	SOMObject_somDumpSelfInt(somSelf,level)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define SOMPNameSpaceMgr_somDefaultInit SOMObject_somDefaultInit
#define SOMPNameSpaceMgr_somDestruct SOMObject_somDestruct
#define SOMPNameSpaceMgr_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define SOMPNameSpaceMgr_somDefaultAssign SOMObject_somDefaultAssign
#define SOMPNameSpaceMgr_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define SOMPNameSpaceMgr_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define SOMPNameSpaceMgr_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define SOMPNameSpaceMgr_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define SOMPNameSpaceMgr_somDefaultVAssign SOMObject_somDefaultVAssign
#define SOMPNameSpaceMgr_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define SOMPNameSpaceMgr_somFree SOMObject_somFree
#define SOMPNameSpaceMgr_somGetClass SOMObject_somGetClass
#define SOMPNameSpaceMgr_somGetClassName SOMObject_somGetClassName
#define SOMPNameSpaceMgr_somGetSize SOMObject_somGetSize
#define SOMPNameSpaceMgr_somIsA SOMObject_somIsA
#define SOMPNameSpaceMgr_somIsInstanceOf SOMObject_somIsInstanceOf
#define SOMPNameSpaceMgr_somRespondsTo SOMObject_somRespondsTo
#define SOMPNameSpaceMgr_somDispatch SOMObject_somDispatch
#define SOMPNameSpaceMgr_somClassDispatch SOMObject_somClassDispatch
#define SOMPNameSpaceMgr_somCastObj SOMObject_somCastObj
#define SOMPNameSpaceMgr_somResetObj SOMObject_somResetObj
#define SOMPNameSpaceMgr_somDispatchV SOMObject_somDispatchV
#define SOMPNameSpaceMgr_somDispatchL SOMObject_somDispatchL
#define SOMPNameSpaceMgr_somDispatchA SOMObject_somDispatchA
#define SOMPNameSpaceMgr_somDispatchD SOMObject_somDispatchD
#define SOMPNameSpaceMgr_somPrintSelf SOMObject_somPrintSelf
#define SOMPNameSpaceMgr_somDumpSelf SOMObject_somDumpSelf
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_SOMPNameSpaceMgr_h */
