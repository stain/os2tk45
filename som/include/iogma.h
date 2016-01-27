
/*
 * This file was generated by the SOM Compiler.
 * FileName: iogma.h.
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


#ifndef SOM_SOMPIOGroupMgrAbstract_h
#define SOM_SOMPIOGroupMgrAbstract_h


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
#ifndef SOMPIOGroupMgrAbstract
#define SOMPIOGroupMgrAbstract SOMObject
#endif
/*
 *  This is the abstract class for an IO Group Manager object.  An IO Group
 *  Manager is a class which is used by the Persistent Storage Manager
 *  (see psm.sc) for storing/restoring persistent objects and groups of
 *  persistent objects.
 * 
 *  An IO Group Manager object is the principle object which knows the
 *  stored format of a group of objects stored on some media.  The IO
 *  Group Manager does not know how an individual object is formatted.
 *  The stored format of an individual object is known only by the
 *  encoder/decoder for that object. The encoder/decoder for an object
 *  is invoked by the IO Group Manager.
 * 
 *  There may be many IO Group Managers available in the system. The
 *  IO Group Manager which is used to store a given persistent object is
 *  determined by the persistent ID (see pid.sc) of that object. The
 *  class name of the IO Group Manager is part of the persistent ID.
 */
#include <somobj.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */
#ifndef SOMPMediaInterfaceAbstract
    #define SOMPMediaInterfaceAbstract SOMObject
#endif /* SOMPMediaInterfaceAbstract */
#ifndef SOMPIOGroup
    #define SOMPIOGroup SOMObject
#endif /* SOMPIOGroup */
#ifndef SOMPPersistentId
    #define SOMPPersistentId SOMObject
#endif /* SOMPPersistentId */
#ifndef SOMPPersistentObject
    #define SOMPPersistentObject SOMObject
#endif /* SOMPPersistentObject */

/*
 * End of bindings for IDL types.
 */

#define SOMPIOGroupMgrAbstract_MajorVersion 2
#define SOMPIOGroupMgrAbstract_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define SOMPIOGroupMgrAbstractNewClass c
#pragma linkage(c, system)
#define SOMPIOGroupMgrAbstractClassData d
#define SOMPIOGroupMgrAbstractCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define SOMPIOGroupMgrAbstract_classObj SOMPIOGroupMgrAbstractClassData.classObject
#define _SOMPIOGroupMgrAbstract SOMPIOGroupMgrAbstract_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK SOMPIOGroupMgrAbstractNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(SOMPIOGroupMgrAbstractNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct SOMPIOGroupMgrAbstractClassDataStructure {
	SOMClass *classObject;
	somMToken sompNewMediaInterface;
	somMToken sompGetMediaInterface;
	somMToken sompFreeMediaInterface;
	somMToken sompInstantiateMediaInterface;
	somMToken sompWriteGroup;
	somMToken sompReadGroup;
	somMToken sompReadObjectData;
	somMToken sompGroupExists;
	somMToken sompObjectInGroup;
	somMToken sompMediaFormatOk;
	somMToken sompDeleteObjectFromGroup;
} SOMDLINK SOMPIOGroupMgrAbstractClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct SOMPIOGroupMgrAbstractCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK SOMPIOGroupMgrAbstractCClassData;

/*
 * New and Renew macros for SOMPIOGroupMgrAbstract
 */
#define SOMPIOGroupMgrAbstractNew() \
   ( _SOMPIOGroupMgrAbstract ? \
	_somNew(_SOMPIOGroupMgrAbstract) \
	: ( SOMPIOGroupMgrAbstractNewClass(\
		SOMPIOGroupMgrAbstract_MajorVersion, \
		SOMPIOGroupMgrAbstract_MinorVersion),\
	   _somNew(_SOMPIOGroupMgrAbstract)))
#define SOMPIOGroupMgrAbstractRenew(buf) \
   ( _SOMPIOGroupMgrAbstract ? \
	_somRenew(_SOMPIOGroupMgrAbstract, buf) \
	: ( SOMPIOGroupMgrAbstractNewClass(\
		SOMPIOGroupMgrAbstract_MajorVersion, \
		SOMPIOGroupMgrAbstract_MinorVersion),\
	   _somRenew(_SOMPIOGroupMgrAbstract, buf)))

/*
 * New Method: sompNewMediaInterface
 */
typedef void   SOMLINK somTP_SOMPIOGroupMgrAbstract_sompNewMediaInterface(SOMPIOGroupMgrAbstract *somSelf, Environment *ev, 
		string IOInfo);
#pragma linkage(somTP_SOMPIOGroupMgrAbstract_sompNewMediaInterface, system)
typedef somTP_SOMPIOGroupMgrAbstract_sompNewMediaInterface *somTD_SOMPIOGroupMgrAbstract_sompNewMediaInterface;
/*
 *  Gets a new Media Interface for this IO Group Mgr and prepares it
 *  for I/O.  This method must be called prior to calling any of the
 *  other methods of this class since other methods rely on the media
 *  interface.
 */
#define somMD_SOMPIOGroupMgrAbstract_sompNewMediaInterface "::SOMPIOGroupMgrAbstract::sompNewMediaInterface"
#define SOMPIOGroupMgrAbstract_sompNewMediaInterface(somSelf,ev,IOInfo) \
    (SOM_Resolve(somSelf, SOMPIOGroupMgrAbstract, sompNewMediaInterface) \
	(somSelf,ev,IOInfo))
#ifndef SOMGD_sompNewMediaInterface
    #if (defined(_sompNewMediaInterface) || defined(__sompNewMediaInterface))
        #undef _sompNewMediaInterface
        #undef __sompNewMediaInterface
        #define SOMGD_sompNewMediaInterface 1
    #else
        #define _sompNewMediaInterface SOMPIOGroupMgrAbstract_sompNewMediaInterface
    #endif /* _sompNewMediaInterface */
#endif /* SOMGD_sompNewMediaInterface */

/*
 * New Method: sompGetMediaInterface
 */
typedef SOMPMediaInterfaceAbstract*   SOMLINK somTP_SOMPIOGroupMgrAbstract_sompGetMediaInterface(SOMPIOGroupMgrAbstract *somSelf, Environment *ev);
#pragma linkage(somTP_SOMPIOGroupMgrAbstract_sompGetMediaInterface, system)
typedef somTP_SOMPIOGroupMgrAbstract_sompGetMediaInterface *somTD_SOMPIOGroupMgrAbstract_sompGetMediaInterface;
/*
 *  Returns this group's media interface. If sompNewMediaInterface
 *  has not been called first, this method returns NULL.
 *  This method also returns NULL after (the last) sompFreeMediaInterface.
 */
#define somMD_SOMPIOGroupMgrAbstract_sompGetMediaInterface "::SOMPIOGroupMgrAbstract::sompGetMediaInterface"
#define SOMPIOGroupMgrAbstract_sompGetMediaInterface(somSelf,ev) \
    (SOM_Resolve(somSelf, SOMPIOGroupMgrAbstract, sompGetMediaInterface) \
	(somSelf,ev))
#ifndef SOMGD_sompGetMediaInterface
    #if (defined(_sompGetMediaInterface) || defined(__sompGetMediaInterface))
        #undef _sompGetMediaInterface
        #undef __sompGetMediaInterface
        #define SOMGD_sompGetMediaInterface 1
    #else
        #define _sompGetMediaInterface SOMPIOGroupMgrAbstract_sompGetMediaInterface
    #endif /* _sompGetMediaInterface */
#endif /* SOMGD_sompGetMediaInterface */

/*
 * New Method: sompFreeMediaInterface
 */
typedef void   SOMLINK somTP_SOMPIOGroupMgrAbstract_sompFreeMediaInterface(SOMPIOGroupMgrAbstract *somSelf, Environment *ev);
#pragma linkage(somTP_SOMPIOGroupMgrAbstract_sompFreeMediaInterface, system)
typedef somTP_SOMPIOGroupMgrAbstract_sompFreeMediaInterface *somTD_SOMPIOGroupMgrAbstract_sompFreeMediaInterface;
/*
 *  Frees this IOGroup Mgr's media interface.
 */
#define somMD_SOMPIOGroupMgrAbstract_sompFreeMediaInterface "::SOMPIOGroupMgrAbstract::sompFreeMediaInterface"
#define SOMPIOGroupMgrAbstract_sompFreeMediaInterface(somSelf,ev) \
    (SOM_Resolve(somSelf, SOMPIOGroupMgrAbstract, sompFreeMediaInterface) \
	(somSelf,ev))
#ifndef SOMGD_sompFreeMediaInterface
    #if (defined(_sompFreeMediaInterface) || defined(__sompFreeMediaInterface))
        #undef _sompFreeMediaInterface
        #undef __sompFreeMediaInterface
        #define SOMGD_sompFreeMediaInterface 1
    #else
        #define _sompFreeMediaInterface SOMPIOGroupMgrAbstract_sompFreeMediaInterface
    #endif /* _sompFreeMediaInterface */
#endif /* SOMGD_sompFreeMediaInterface */

/*
 * New Method: sompInstantiateMediaInterface
 */
typedef SOMPMediaInterfaceAbstract*   SOMLINK somTP_SOMPIOGroupMgrAbstract_sompInstantiateMediaInterface(SOMPIOGroupMgrAbstract *somSelf, Environment *ev);
#pragma linkage(somTP_SOMPIOGroupMgrAbstract_sompInstantiateMediaInterface, system)
typedef somTP_SOMPIOGroupMgrAbstract_sompInstantiateMediaInterface *somTD_SOMPIOGroupMgrAbstract_sompInstantiateMediaInterface;
/*
 *  Override this if you want to change the MediaInterface
 *  this IOGroupMananager uses to write out IO Groups.
 */
#define somMD_SOMPIOGroupMgrAbstract_sompInstantiateMediaInterface "::SOMPIOGroupMgrAbstract::sompInstantiateMediaInterface"
#define SOMPIOGroupMgrAbstract_sompInstantiateMediaInterface(somSelf,ev) \
    (SOM_Resolve(somSelf, SOMPIOGroupMgrAbstract, sompInstantiateMediaInterface) \
	(somSelf,ev))
#ifndef SOMGD_sompInstantiateMediaInterface
    #if (defined(_sompInstantiateMediaInterface) || defined(__sompInstantiateMediaInterface))
        #undef _sompInstantiateMediaInterface
        #undef __sompInstantiateMediaInterface
        #define SOMGD_sompInstantiateMediaInterface 1
    #else
        #define _sompInstantiateMediaInterface SOMPIOGroupMgrAbstract_sompInstantiateMediaInterface
    #endif /* _sompInstantiateMediaInterface */
#endif /* SOMGD_sompInstantiateMediaInterface */

/*
 * New Method: sompWriteGroup
 */
typedef boolean   SOMLINK somTP_SOMPIOGroupMgrAbstract_sompWriteGroup(SOMPIOGroupMgrAbstract *somSelf, Environment *ev, 
		SOMPPersistentObject* thisPo);
#pragma linkage(somTP_SOMPIOGroupMgrAbstract_sompWriteGroup, system)
typedef somTP_SOMPIOGroupMgrAbstract_sompWriteGroup *somTD_SOMPIOGroupMgrAbstract_sompWriteGroup;
/*
 *  Store the object and everything grouped with it or just store
 *  the object given. It is the choice of the IO Group Mgr implementor.
 * 
 *  To store the object and all the others grouped with,
 *  invoke _sompGetIOGroup(thisPo) to get the group and then
 *  iterate across the group, storing each object. If a group is
 *  stored this method must return TRUE.
 *  Note:
 *  Only objects in the IO Group which have been marked as "dirty"
 *  should be stored. (See po.idl for methods to get the state of a
 *  persistent object.)
 * 
 *  If the IO Group Mgr is written to store only the given object,
 *  this method must return FALSE.
 * 
 *  OLD INTERFACE...
 *  void sompWriteGroup(in SOMPIOGroup thisGroup) raises(SOMPError::sompException);
 */
#define somMD_SOMPIOGroupMgrAbstract_sompWriteGroup "::SOMPIOGroupMgrAbstract::sompWriteGroup"
#define SOMPIOGroupMgrAbstract_sompWriteGroup(somSelf,ev,thisPo) \
    (SOM_Resolve(somSelf, SOMPIOGroupMgrAbstract, sompWriteGroup) \
	(somSelf,ev,thisPo))
#ifndef SOMGD_sompWriteGroup
    #if (defined(_sompWriteGroup) || defined(__sompWriteGroup))
        #undef _sompWriteGroup
        #undef __sompWriteGroup
        #define SOMGD_sompWriteGroup 1
    #else
        #define _sompWriteGroup SOMPIOGroupMgrAbstract_sompWriteGroup
    #endif /* _sompWriteGroup */
#endif /* SOMGD_sompWriteGroup */

/*
 * New Method: sompReadGroup
 */
typedef SOMPPersistentObject*   SOMLINK somTP_SOMPIOGroupMgrAbstract_sompReadGroup(SOMPIOGroupMgrAbstract *somSelf, Environment *ev, 
		SOMPPersistentId* objectID);
#pragma linkage(somTP_SOMPIOGroupMgrAbstract_sompReadGroup, system)
typedef somTP_SOMPIOGroupMgrAbstract_sompReadGroup *somTD_SOMPIOGroupMgrAbstract_sompReadGroup;
/*
 *  At the very least, this method will instantiate the persistent object which
 *  is specified by the given objectID and return that object. This method
 *  may be implemented to instantiate all the objects stored in the same group
 *  as the specified object. It may restore objects and mark them as
 *  SOMP_STATE_STABLE, however this is typically accomplished via the
 *  sompReadObjectData.
 *  The returned object is NULL if an error is encountered and
 *  an exception is raised.
 *  OLD INTERFACE...
 *  SOMPIOGroup sompReadGroup(in string IOInfo) raises(SOMPError::sompException);
 *  Restores the IO Group with the name given in <IOInfo>.
 *  The instance data of the objects in the IO Group is not read.
 *  The returned IO Group is NULL if an error is encountered and
 *  an exception is raised.
 */
#define somMD_SOMPIOGroupMgrAbstract_sompReadGroup "::SOMPIOGroupMgrAbstract::sompReadGroup"
#define SOMPIOGroupMgrAbstract_sompReadGroup(somSelf,ev,objectID) \
    (SOM_Resolve(somSelf, SOMPIOGroupMgrAbstract, sompReadGroup) \
	(somSelf,ev,objectID))
#ifndef SOMGD_sompReadGroup
    #if (defined(_sompReadGroup) || defined(__sompReadGroup))
        #undef _sompReadGroup
        #undef __sompReadGroup
        #define SOMGD_sompReadGroup 1
    #else
        #define _sompReadGroup SOMPIOGroupMgrAbstract_sompReadGroup
    #endif /* _sompReadGroup */
#endif /* SOMGD_sompReadGroup */

/*
 * New Method: sompReadObjectData
 */
typedef void   SOMLINK somTP_SOMPIOGroupMgrAbstract_sompReadObjectData(SOMPIOGroupMgrAbstract *somSelf, Environment *ev, 
		SOMPPersistentObject* thisPo);
#pragma linkage(somTP_SOMPIOGroupMgrAbstract_sompReadObjectData, system)
typedef somTP_SOMPIOGroupMgrAbstract_sompReadObjectData *somTD_SOMPIOGroupMgrAbstract_sompReadObjectData;
/*
 *  Read the given persistent object's data from storage.
 */
#define somMD_SOMPIOGroupMgrAbstract_sompReadObjectData "::SOMPIOGroupMgrAbstract::sompReadObjectData"
#define SOMPIOGroupMgrAbstract_sompReadObjectData(somSelf,ev,thisPo) \
    (SOM_Resolve(somSelf, SOMPIOGroupMgrAbstract, sompReadObjectData) \
	(somSelf,ev,thisPo))
#ifndef SOMGD_sompReadObjectData
    #if (defined(_sompReadObjectData) || defined(__sompReadObjectData))
        #undef _sompReadObjectData
        #undef __sompReadObjectData
        #define SOMGD_sompReadObjectData 1
    #else
        #define _sompReadObjectData SOMPIOGroupMgrAbstract_sompReadObjectData
    #endif /* _sompReadObjectData */
#endif /* SOMGD_sompReadObjectData */

/*
 * New Method: sompGroupExists
 */
typedef boolean   SOMLINK somTP_SOMPIOGroupMgrAbstract_sompGroupExists(SOMPIOGroupMgrAbstract *somSelf, Environment *ev, 
		string IOInfo);
#pragma linkage(somTP_SOMPIOGroupMgrAbstract_sompGroupExists, system)
typedef somTP_SOMPIOGroupMgrAbstract_sompGroupExists *somTD_SOMPIOGroupMgrAbstract_sompGroupExists;
/*
 *  See if the IO Group with the name given in <IOInfo> exists in persistent
 *  storage. Returns TRUE if group exists, FALSE otherwise.
 */
#define somMD_SOMPIOGroupMgrAbstract_sompGroupExists "::SOMPIOGroupMgrAbstract::sompGroupExists"
#define SOMPIOGroupMgrAbstract_sompGroupExists(somSelf,ev,IOInfo) \
    (SOM_Resolve(somSelf, SOMPIOGroupMgrAbstract, sompGroupExists) \
	(somSelf,ev,IOInfo))
#ifndef SOMGD_sompGroupExists
    #if (defined(_sompGroupExists) || defined(__sompGroupExists))
        #undef _sompGroupExists
        #undef __sompGroupExists
        #define SOMGD_sompGroupExists 1
    #else
        #define _sompGroupExists SOMPIOGroupMgrAbstract_sompGroupExists
    #endif /* _sompGroupExists */
#endif /* SOMGD_sompGroupExists */

/*
 * New Method: sompObjectInGroup
 */
typedef boolean   SOMLINK somTP_SOMPIOGroupMgrAbstract_sompObjectInGroup(SOMPIOGroupMgrAbstract *somSelf, Environment *ev, 
		SOMPPersistentId* objectID);
#pragma linkage(somTP_SOMPIOGroupMgrAbstract_sompObjectInGroup, system)
typedef somTP_SOMPIOGroupMgrAbstract_sompObjectInGroup *somTD_SOMPIOGroupMgrAbstract_sompObjectInGroup;
/*
 *  See if the persisent object specified by <objectID> is in the group.
 *  If so, return TRUE, otherwise FALSE.
 */
#define somMD_SOMPIOGroupMgrAbstract_sompObjectInGroup "::SOMPIOGroupMgrAbstract::sompObjectInGroup"
#define SOMPIOGroupMgrAbstract_sompObjectInGroup(somSelf,ev,objectID) \
    (SOM_Resolve(somSelf, SOMPIOGroupMgrAbstract, sompObjectInGroup) \
	(somSelf,ev,objectID))
#ifndef SOMGD_sompObjectInGroup
    #if (defined(_sompObjectInGroup) || defined(__sompObjectInGroup))
        #undef _sompObjectInGroup
        #undef __sompObjectInGroup
        #define SOMGD_sompObjectInGroup 1
    #else
        #define _sompObjectInGroup SOMPIOGroupMgrAbstract_sompObjectInGroup
    #endif /* _sompObjectInGroup */
#endif /* SOMGD_sompObjectInGroup */

/*
 * New Method: sompMediaFormatOk
 */
typedef boolean   SOMLINK somTP_SOMPIOGroupMgrAbstract_sompMediaFormatOk(SOMPIOGroupMgrAbstract *somSelf, Environment *ev, 
		string mediaFormatName);
#pragma linkage(somTP_SOMPIOGroupMgrAbstract_sompMediaFormatOk, system)
typedef somTP_SOMPIOGroupMgrAbstract_sompMediaFormatOk *somTD_SOMPIOGroupMgrAbstract_sompMediaFormatOk;
/*
 *  Check to see if the given mediaFormatName is supported by this
 *  IO Group Manager. If it is, returns TRUE, otherwise returns FALSE.
 */
#define somMD_SOMPIOGroupMgrAbstract_sompMediaFormatOk "::SOMPIOGroupMgrAbstract::sompMediaFormatOk"
#define SOMPIOGroupMgrAbstract_sompMediaFormatOk(somSelf,ev,mediaFormatName) \
    (SOM_Resolve(somSelf, SOMPIOGroupMgrAbstract, sompMediaFormatOk) \
	(somSelf,ev,mediaFormatName))
#ifndef SOMGD_sompMediaFormatOk
    #if (defined(_sompMediaFormatOk) || defined(__sompMediaFormatOk))
        #undef _sompMediaFormatOk
        #undef __sompMediaFormatOk
        #define SOMGD_sompMediaFormatOk 1
    #else
        #define _sompMediaFormatOk SOMPIOGroupMgrAbstract_sompMediaFormatOk
    #endif /* _sompMediaFormatOk */
#endif /* SOMGD_sompMediaFormatOk */

/*
 * New Method: sompDeleteObjectFromGroup
 */
typedef void   SOMLINK somTP_SOMPIOGroupMgrAbstract_sompDeleteObjectFromGroup(SOMPIOGroupMgrAbstract *somSelf, Environment *ev, 
		SOMPPersistentId* objectID);
#pragma linkage(somTP_SOMPIOGroupMgrAbstract_sompDeleteObjectFromGroup, system)
typedef somTP_SOMPIOGroupMgrAbstract_sompDeleteObjectFromGroup *somTD_SOMPIOGroupMgrAbstract_sompDeleteObjectFromGroup;
/*
 *  Delete the persisent object specified by <objectID>.
 */
#define somMD_SOMPIOGroupMgrAbstract_sompDeleteObjectFromGroup "::SOMPIOGroupMgrAbstract::sompDeleteObjectFromGroup"
#define SOMPIOGroupMgrAbstract_sompDeleteObjectFromGroup(somSelf,ev,objectID) \
    (SOM_Resolve(somSelf, SOMPIOGroupMgrAbstract, sompDeleteObjectFromGroup) \
	(somSelf,ev,objectID))
#ifndef SOMGD_sompDeleteObjectFromGroup
    #if (defined(_sompDeleteObjectFromGroup) || defined(__sompDeleteObjectFromGroup))
        #undef _sompDeleteObjectFromGroup
        #undef __sompDeleteObjectFromGroup
        #define SOMGD_sompDeleteObjectFromGroup 1
    #else
        #define _sompDeleteObjectFromGroup SOMPIOGroupMgrAbstract_sompDeleteObjectFromGroup
    #endif /* _sompDeleteObjectFromGroup */
#endif /* SOMGD_sompDeleteObjectFromGroup */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define SOMPIOGroupMgrAbstract_somDefaultInit SOMObject_somDefaultInit
#define SOMPIOGroupMgrAbstract_somDestruct SOMObject_somDestruct
#define SOMPIOGroupMgrAbstract_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define SOMPIOGroupMgrAbstract_somDefaultAssign SOMObject_somDefaultAssign
#define SOMPIOGroupMgrAbstract_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define SOMPIOGroupMgrAbstract_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define SOMPIOGroupMgrAbstract_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define SOMPIOGroupMgrAbstract_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define SOMPIOGroupMgrAbstract_somDefaultVAssign SOMObject_somDefaultVAssign
#define SOMPIOGroupMgrAbstract_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define SOMPIOGroupMgrAbstract_somInit SOMObject_somInit
#define SOMPIOGroupMgrAbstract_somFree SOMObject_somFree
#define SOMPIOGroupMgrAbstract_somUninit SOMObject_somUninit
#define SOMPIOGroupMgrAbstract_somGetClass SOMObject_somGetClass
#define SOMPIOGroupMgrAbstract_somGetClassName SOMObject_somGetClassName
#define SOMPIOGroupMgrAbstract_somGetSize SOMObject_somGetSize
#define SOMPIOGroupMgrAbstract_somIsA SOMObject_somIsA
#define SOMPIOGroupMgrAbstract_somIsInstanceOf SOMObject_somIsInstanceOf
#define SOMPIOGroupMgrAbstract_somRespondsTo SOMObject_somRespondsTo
#define SOMPIOGroupMgrAbstract_somDispatch SOMObject_somDispatch
#define SOMPIOGroupMgrAbstract_somClassDispatch SOMObject_somClassDispatch
#define SOMPIOGroupMgrAbstract_somCastObj SOMObject_somCastObj
#define SOMPIOGroupMgrAbstract_somResetObj SOMObject_somResetObj
#define SOMPIOGroupMgrAbstract_somDispatchV SOMObject_somDispatchV
#define SOMPIOGroupMgrAbstract_somDispatchL SOMObject_somDispatchL
#define SOMPIOGroupMgrAbstract_somDispatchA SOMObject_somDispatchA
#define SOMPIOGroupMgrAbstract_somDispatchD SOMObject_somDispatchD
#define SOMPIOGroupMgrAbstract_somPrintSelf SOMObject_somPrintSelf
#define SOMPIOGroupMgrAbstract_somDumpSelf SOMObject_somDumpSelf
#define SOMPIOGroupMgrAbstract_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_SOMPIOGroupMgrAbstract_h */