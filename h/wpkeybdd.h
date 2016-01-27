
/*
 * This file was generated by the SOM Compiler.
 * FileName: G:\cwpsh\rel\os2c\include\base\os2\wpkeybdd.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.14
 *     SOM Emitter emith: 2.43
 */

/*
 *   Module Header
 * 
 *   Module Name: WPKEYBDD
 * 
 *   OS/2 Presentation Manager Workplace class definitions
 * 
 *   Copyright (c) International Business Machines Corporation 1991, 1992
 * 
 */


#ifndef SOM_WPDevKeyboard_h
#define SOM_WPDevKeyboard_h


/*
 * Passthru lines: File: "C.h", "before"
 */



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
#ifndef WPDevKeyboard
#define WPDevKeyboard SOMObject
#endif
#include <wpdevice.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */
#ifndef WPFolder
    #define WPFolder SOMObject
#endif /* WPFolder */
#ifndef M_WPObject
    #define M_WPObject SOMObject
#endif /* M_WPObject */
#ifndef WPObject
    #define WPObject SOMObject
#endif /* WPObject */
#ifndef WPImageFile
    #define WPImageFile SOMObject
#endif /* WPImageFile */
#ifndef M_WPTransient
    #define M_WPTransient SOMObject
#endif /* M_WPTransient */
#ifndef M_WPDevice
    #define M_WPDevice SOMObject
#endif /* M_WPDevice */
#ifndef M_WPDevKeyboard
    #define M_WPDevKeyboard SOMObject
#endif /* M_WPDevKeyboard */

/*
 * End of bindings for IDL types.
 */

#define WPDevKeyboard_MajorVersion 1
#define WPDevKeyboard_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define WPDevKeyboardNewClass wpkeybddc
#pragma linkage(wpkeybddc, system)
#define WPDevKeyboardClassData wpkeybddd
#define WPDevKeyboardCClassData wpkeybddx
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */

/*
 * Include the meta class file
 */
#include <wpkeybdd.h>
/*--------------Migration------------*/
#define WPDevKeyboard_classObj WPDevKeyboardClassData.classObject
#define _WPDevKeyboard WPDevKeyboard_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK WPDevKeyboardNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(WPDevKeyboardNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct WPDevKeyboardClassDataStructure {
	SOMClass *classObject;
} SOMDLINK WPDevKeyboardClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct WPDevKeyboardCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK WPDevKeyboardCClassData;

/*
 * New and Renew macros for WPDevKeyboard
 */
#define WPDevKeyboardNew() \
   ( _WPDevKeyboard ? \
	_somNew(_WPDevKeyboard) \
	: ( WPDevKeyboardNewClass(\
		WPDevKeyboard_MajorVersion, \
		WPDevKeyboard_MinorVersion),\
	   _somNew(_WPDevKeyboard)))
#define WPDevKeyboardRenew(buf) \
   ( _WPDevKeyboard ? \
	_somRenew(_WPDevKeyboard, buf) \
	: ( WPDevKeyboardNewClass(\
		WPDevKeyboard_MajorVersion, \
		WPDevKeyboard_MinorVersion),\
	   _somRenew(_WPDevKeyboard, buf)))
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define WPDevKeyboard_wpAddDeviceDevice1Page WPDevice_wpAddDeviceDevice1Page
#define WPDevKeyboard_wpAddDeviceDevice2Page WPDevice_wpAddDeviceDevice2Page
#define WPDevKeyboard_wpAddDeviceDMA1Page WPDevice_wpAddDeviceDMA1Page
#define WPDevKeyboard_wpAddDeviceIRQ1Page WPDevice_wpAddDeviceIRQ1Page
#define WPDevKeyboard_wpAddDeviceMemory1Page WPDevice_wpAddDeviceMemory1Page
#define WPDevKeyboard_wpAddDeviceIO1Page WPDevice_wpAddDeviceIO1Page
#define WPDevKeyboard_wpAddSettingsPages WPObject_wpAddSettingsPages
#define WPDevKeyboard_wpInitData WPObject_wpInitData
#define WPDevKeyboard_wpModifyPopupMenu WPObject_wpModifyPopupMenu
#define WPDevKeyboard_wpQueryDetailsData WPObject_wpQueryDetailsData
#define WPDevKeyboard_wpRestoreState WPObject_wpRestoreState
#define WPDevKeyboard_wpSaveState WPObject_wpSaveState
#define WPDevKeyboard_wpSetup WPObject_wpSetup
#define WPDevKeyboard_wpUnInitData WPObject_wpUnInitData
#define WPDevKeyboard_wpCnrInsertObject WPObject_wpCnrInsertObject
#define WPDevKeyboard_wpQueryHandle WPObject_wpQueryHandle
#define WPDevKeyboard_wpCopyObject WPObject_wpCopyObject
#define WPDevKeyboard_somDefaultInit SOMObject_somDefaultInit
#define WPDevKeyboard_somDestruct SOMObject_somDestruct
#define WPDevKeyboard_wpQueryIcon WPObject_wpQueryIcon
#define WPDevKeyboard_wpSaveImmediate WPObject_wpSaveImmediate
#define WPDevKeyboard_wpIdentify WPObject_wpIdentify
#define WPDevKeyboard_wpAddObjectGeneralPage WPObject_wpAddObjectGeneralPage
#define WPDevKeyboard_wpAddObjectGeneralPage2 WPObject_wpAddObjectGeneralPage2
#define WPDevKeyboard_wpAddObjectWindowPage WPObject_wpAddObjectWindowPage
#define WPDevKeyboard_wpAddToObjUseList WPObject_wpAddToObjUseList
#define WPDevKeyboard_wpAllocMem WPObject_wpAllocMem
#define WPDevKeyboard_wpAppendObject WPObject_wpAppendObject
#define WPDevKeyboard_wpAssertObjectMutexSem WPObject_wpAssertObjectMutexSem
#define WPDevKeyboard_wpClose WPObject_wpClose
#define WPDevKeyboard_wpCnrRemoveObject WPObject_wpCnrRemoveObject
#define WPDevKeyboard_wpCnrSetEmphasis WPObject_wpCnrSetEmphasis
#define WPDevKeyboard_wpConfirmDelete WPObject_wpConfirmDelete
#define WPDevKeyboard_wpConfirmObjectTitle WPObject_wpConfirmObjectTitle
#define WPDevKeyboard_wpCopiedFromTemplate WPObject_wpCopiedFromTemplate
#define WPDevKeyboard_wpCreateAnother WPObject_wpCreateAnother
#define WPDevKeyboard_wpCreateFromTemplate WPObject_wpCreateFromTemplate
#define WPDevKeyboard_wpCreateShadowObject WPObject_wpCreateShadowObject
#define WPDevKeyboard_wpDelete WPObject_wpDelete
#define WPDevKeyboard_wpDeleteFromObjUseList WPObject_wpDeleteFromObjUseList
#define WPDevKeyboard_wpDisplayHelp WPObject_wpDisplayHelp
#define WPDevKeyboard_wpDisplayMenu WPObject_wpDisplayMenu
#define WPDevKeyboard_wpDoesObjectMatch WPObject_wpDoesObjectMatch
#define WPDevKeyboard_wpDraggedOverObject WPObject_wpDraggedOverObject
#define WPDevKeyboard_wpDragOver WPObject_wpDragOver
#define WPDevKeyboard_wpDrop WPObject_wpDrop
#define WPDevKeyboard_wpDroppedOnObject WPObject_wpDroppedOnObject
#define WPDevKeyboard_wpEndConversation WPObject_wpEndConversation
#define WPDevKeyboard_wpFilterPopupMenu WPObject_wpFilterPopupMenu
#define WPDevKeyboard_wpFilterMenu WPObject_wpFilterMenu
#define WPDevKeyboard_wpFindUseItem WPObject_wpFindUseItem
#define WPDevKeyboard_wpFormatDragItem WPObject_wpFormatDragItem
#define WPDevKeyboard_wpFree WPObject_wpFree
#define WPDevKeyboard_wpFreeMem WPObject_wpFreeMem
#define WPDevKeyboard_wpHide WPObject_wpHide
#define WPDevKeyboard_wpInsertPopupMenuItems WPObject_wpInsertPopupMenuItems
#define WPDevKeyboard_wpInsertMenuItems WPObject_wpInsertMenuItems
#define WPDevKeyboard_wpInsertSettingsPage WPObject_wpInsertSettingsPage
#define WPDevKeyboard_wpMenuItemHelpSelected WPObject_wpMenuItemHelpSelected
#define WPDevKeyboard_wpMenuItemSelected WPObject_wpMenuItemSelected
#define WPDevKeyboard_wpModifyMenu WPObject_wpModifyMenu
#define WPDevKeyboard_wpMoveObject WPObject_wpMoveObject
#define WPDevKeyboard_wpOpen WPObject_wpOpen
#define WPDevKeyboard_wpPrintObject WPObject_wpPrintObject
#define WPDevKeyboard_wpQueryConcurrentView WPObject_wpQueryConcurrentView
#define WPDevKeyboard_wpQueryButtonAppearance WPObject_wpQueryButtonAppearance
#define WPDevKeyboard_wpQueryConfirmations WPObject_wpQueryConfirmations
#define WPDevKeyboard_wpQueryDefaultHelp WPObject_wpQueryDefaultHelp
#define WPDevKeyboard_wpQueryDefaultView WPObject_wpQueryDefaultView
#define WPDevKeyboard_wpQueryError WPObject_wpQueryError
#define WPDevKeyboard_wpSetFolder WPObject_wpSetFolder
#define WPDevKeyboard_wpQueryFolder WPObject_wpQueryFolder
#define WPDevKeyboard_wpQueryIconData WPObject_wpQueryIconData
#define WPDevKeyboard_wpQueryMinWindow WPObject_wpQueryMinWindow
#define WPDevKeyboard_wpQueryNameClashOptions WPObject_wpQueryNameClashOptions
#define WPDevKeyboard_wpQueryStyle WPObject_wpQueryStyle
#define WPDevKeyboard_wpSetTaskRec WPObject_wpSetTaskRec
#define WPDevKeyboard_wpFindTaskRec WPObject_wpFindTaskRec
#define WPDevKeyboard_wpQueryTitle WPObject_wpQueryTitle
#define WPDevKeyboard_wpRegisterView WPObject_wpRegisterView
#define WPDevKeyboard_wpReleaseObjectMutexSem WPObject_wpReleaseObjectMutexSem
#define WPDevKeyboard_wpRender WPObject_wpRender
#define WPDevKeyboard_wpRenderComplete WPObject_wpRenderComplete
#define WPDevKeyboard_wpReplaceObject WPObject_wpReplaceObject
#define WPDevKeyboard_wpRequestObjectMutexSem WPObject_wpRequestObjectMutexSem
#define WPDevKeyboard_wpRestore WPObject_wpRestore
#define WPDevKeyboard_wpRestoreData WPObject_wpRestoreData
#define WPDevKeyboard_wpRestoreLong WPObject_wpRestoreLong
#define WPDevKeyboard_wpRestoreString WPObject_wpRestoreString
#define WPDevKeyboard_wpSaveData WPObject_wpSaveData
#define WPDevKeyboard_wpSaveDeferred WPObject_wpSaveDeferred
#define WPDevKeyboard_wpSaveLong WPObject_wpSaveLong
#define WPDevKeyboard_wpSaveString WPObject_wpSaveString
#define WPDevKeyboard_wpScanSetupString WPObject_wpScanSetupString
#define WPDevKeyboard_wpSetConcurrentView WPObject_wpSetConcurrentView
#define WPDevKeyboard_wpSetButtonAppearance WPObject_wpSetButtonAppearance
#define WPDevKeyboard_wpSetDefaultHelp WPObject_wpSetDefaultHelp
#define WPDevKeyboard_wpSetDefaultView WPObject_wpSetDefaultView
#define WPDevKeyboard_wpSetError WPObject_wpSetError
#define WPDevKeyboard_wpQueryScreenGroupID WPObject_wpQueryScreenGroupID
#define WPDevKeyboard_wpSetupOnce WPObject_wpSetupOnce
#define WPDevKeyboard_wpSetIcon WPObject_wpSetIcon
#define WPDevKeyboard_wpSetIconData WPObject_wpSetIconData
#define WPDevKeyboard_wpSetMinWindow WPObject_wpSetMinWindow
#define WPDevKeyboard_wpModifyStyle WPObject_wpModifyStyle
#define WPDevKeyboard_wpSetTitle WPObject_wpSetTitle
#define WPDevKeyboard_wpSwitchTo WPObject_wpSwitchTo
#define WPDevKeyboard_wpViewObject WPObject_wpViewObject
#define WPDevKeyboard_wpQueryTrueStyle WPObject_wpQueryTrueStyle
#define WPDevKeyboard_wpUnlockObject WPObject_wpUnlockObject
#define WPDevKeyboard_wpObjectReady WPObject_wpObjectReady
#define WPDevKeyboard_wpIsObjectInitialized WPObject_wpIsObjectInitialized
#define WPDevKeyboard_wpCreateShadowObjectExt WPObject_wpCreateShadowObjectExt
#define WPDevKeyboard_wpCnrDeleteUseItem WPObject_wpCnrDeleteUseItem
#define WPDevKeyboard_wpIsDeleteable WPObject_wpIsDeleteable
#define WPDevKeyboard_wpQueryCoreRecord WPObject_wpQueryCoreRecord
#define WPDevKeyboard_wpSetObjectID WPObject_wpSetObjectID
#define WPDevKeyboard_wpQueryObjectID WPObject_wpQueryObjectID
#define WPDevKeyboard_wpSetDefaultIconPos WPObject_wpSetDefaultIconPos
#define WPDevKeyboard_wpQueryDefaultIconPos WPObject_wpQueryDefaultIconPos
#define WPDevKeyboard_wpCnrRefreshDetails WPObject_wpCnrRefreshDetails
#define WPDevKeyboard_wpFindViewItem WPObject_wpFindViewItem
#define WPDevKeyboard_wpLockObject WPObject_wpLockObject
#define WPDevKeyboard_wpIsLocked WPObject_wpIsLocked
#define WPDevKeyboard_wpQueryContainerFlagPtr WPObject_wpQueryContainerFlagPtr
#define WPDevKeyboard_wpWaitForClose WPObject_wpWaitForClose
#define WPDevKeyboard_wpSetMenuStyle WPObject_wpSetMenuStyle
#define WPDevKeyboard_wpQueryMenuStyle WPObject_wpQueryMenuStyle
#define WPDevKeyboard_wpSetStyle WPObject_wpSetStyle
#define WPDevKeyboard_somInit SOMObject_somInit
#define WPDevKeyboard_somUninit SOMObject_somUninit
#define WPDevKeyboard_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define WPDevKeyboard_somDefaultAssign SOMObject_somDefaultAssign
#define WPDevKeyboard_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define WPDevKeyboard_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define WPDevKeyboard_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define WPDevKeyboard_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define WPDevKeyboard_somDefaultVAssign SOMObject_somDefaultVAssign
#define WPDevKeyboard_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define WPDevKeyboard_somFree SOMObject_somFree
#define WPDevKeyboard_somGetClass SOMObject_somGetClass
#define WPDevKeyboard_somGetClassName SOMObject_somGetClassName
#define WPDevKeyboard_somGetSize SOMObject_somGetSize
#define WPDevKeyboard_somIsA SOMObject_somIsA
#define WPDevKeyboard_somIsInstanceOf SOMObject_somIsInstanceOf
#define WPDevKeyboard_somRespondsTo SOMObject_somRespondsTo
#define WPDevKeyboard_somDispatch SOMObject_somDispatch
#define WPDevKeyboard_somClassDispatch SOMObject_somClassDispatch
#define WPDevKeyboard_somCastObj SOMObject_somCastObj
#define WPDevKeyboard_somResetObj SOMObject_somResetObj
#define WPDevKeyboard_somDispatchV SOMObject_somDispatchV
#define WPDevKeyboard_somDispatchL SOMObject_somDispatchL
#define WPDevKeyboard_somDispatchA SOMObject_somDispatchA
#define WPDevKeyboard_somDispatchD SOMObject_somDispatchD
#define WPDevKeyboard_somPrintSelf SOMObject_somPrintSelf
#define WPDevKeyboard_somDumpSelf SOMObject_somDumpSelf
#define WPDevKeyboard_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_WPDevKeyboard_h */

#ifndef SOM_M_WPDevKeyboard_h
#define SOM_M_WPDevKeyboard_h


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
#ifndef M_WPDevKeyboard
#define M_WPDevKeyboard SOMObject
#endif
/*
 *  New class methods section
 */
#include <wpdevice.h>

/*
 * Start of bindings for IDL types
 */


/*
 * End of bindings for IDL types.
 */

#define M_WPDevKeyboard_MajorVersion 1
#define M_WPDevKeyboard_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define M_WPDevKeyboardNewClass wpkeybddc
#pragma linkage(wpkeybddc, system)
#define M_WPDevKeyboardClassData wpkeybddd
#define M_WPDevKeyboardCClassData wpkeybddx
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define M_WPDevKeyboard_classObj M_WPDevKeyboardClassData.classObject
#define _M_WPDevKeyboard M_WPDevKeyboard_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK M_WPDevKeyboardNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(M_WPDevKeyboardNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct M_WPDevKeyboardClassDataStructure {
	SOMClass *classObject;
} SOMDLINK M_WPDevKeyboardClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct M_WPDevKeyboardCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK M_WPDevKeyboardCClassData;

/*
 * New and Renew macros for M_WPDevKeyboard
 */
#define M_WPDevKeyboardNew() \
   ( _M_WPDevKeyboard ? \
	_somNew(_M_WPDevKeyboard) \
	: ( M_WPDevKeyboardNewClass(\
		M_WPDevKeyboard_MajorVersion, \
		M_WPDevKeyboard_MinorVersion),\
	   _somNew(_M_WPDevKeyboard)))
#define M_WPDevKeyboardRenew(buf) \
   ( _M_WPDevKeyboard ? \
	_somRenew(_M_WPDevKeyboard, buf) \
	: ( M_WPDevKeyboardNewClass(\
		M_WPDevKeyboard_MajorVersion, \
		M_WPDevKeyboard_MinorVersion),\
	   _somRenew(_M_WPDevKeyboard, buf)))

/*
 * Override method: wpclsInitData
 */
#define M_WPDevKeyboard_wpclsInitData(somSelf) \
	M_WPObject_wpclsInitData(somSelf)

/*
 * Override method: wpclsQueryIconData
 */
#define M_WPDevKeyboard_wpclsQueryIconData(somSelf,pIconInfo) \
	M_WPObject_wpclsQueryIconData(somSelf,pIconInfo)

/*
 * Override method: wpclsQueryTitle
 */
#define M_WPDevKeyboard_wpclsQueryTitle(somSelf) \
	M_WPObject_wpclsQueryTitle(somSelf)

/*
 * Override method: wpclsUnInitData
 */
#define M_WPDevKeyboard_wpclsUnInitData(somSelf) \
	M_WPObject_wpclsUnInitData(somSelf)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define M_WPDevKeyboard_wpclsQueryDefaultHelp M_WPObject_wpclsQueryDefaultHelp
#define M_WPDevKeyboard_wpclsQueryDefaultView M_WPObject_wpclsQueryDefaultView
#define M_WPDevKeyboard_wpclsQueryDetailsInfo M_WPObject_wpclsQueryDetailsInfo
#define M_WPDevKeyboard_wpclsQueryStyle M_WPObject_wpclsQueryStyle
#define M_WPDevKeyboard_wpclsObjectFromHandle M_WPObject_wpclsObjectFromHandle
#define M_WPDevKeyboard_wpclsCreateDefaultTemplates M_WPObject_wpclsCreateDefaultTemplates
#define M_WPDevKeyboard_wpclsMakeAwake M_WPObject_wpclsMakeAwake
#define M_WPDevKeyboard_wpclsNew M_WPObject_wpclsNew
#define M_WPDevKeyboard_wpclsQueryDetails M_WPObject_wpclsQueryDetails
#define M_WPDevKeyboard_wpclsQueryExtendedCriteria M_WPObject_wpclsQueryExtendedCriteria
#define M_WPDevKeyboard_wpclsQueryFolder M_WPObject_wpclsQueryFolder
#define M_WPDevKeyboard_wpclsQueryIcon M_WPObject_wpclsQueryIcon
#define M_WPDevKeyboard_wpclsQuerySearchInfo M_WPObject_wpclsQuerySearchInfo
#define M_WPDevKeyboard_wpclsFindObjectFirst M_WPObject_wpclsFindObjectFirst
#define M_WPDevKeyboard_wpclsFindObjectNext M_WPObject_wpclsFindObjectNext
#define M_WPDevKeyboard_wpclsFindObjectEnd M_WPObject_wpclsFindObjectEnd
#define M_WPDevKeyboard_wpclsSetError M_WPObject_wpclsSetError
#define M_WPDevKeyboard_wpclsQueryError M_WPObject_wpclsQueryError
#define M_WPDevKeyboard_wpclsQuerySettingsPageSize M_WPObject_wpclsQuerySettingsPageSize
#define M_WPDevKeyboard_wpclsQueryObject M_WPObject_wpclsQueryObject
#define M_WPDevKeyboard_wpclsQueryButtonAppearance M_WPObject_wpclsQueryButtonAppearance
#define M_WPDevKeyboard_wpclsDecUsage M_WPObject_wpclsDecUsage
#define M_WPDevKeyboard_wpclsIncUsage M_WPObject_wpclsIncUsage
#define M_WPDevKeyboard_wpclsInsertMultipleObjects M_WPObject_wpclsInsertMultipleObjects
#define M_WPDevKeyboard_wpclsFindOneObject M_WPObject_wpclsFindOneObject
#define M_WPDevKeyboard_wpclsSetSettingsPageSize M_WPObject_wpclsSetSettingsPageSize
#define M_WPDevKeyboard_wpclsSetIconData M_WPObject_wpclsSetIconData
#define M_WPDevKeyboard_wpclsSetIcon M_WPObject_wpclsSetIcon
#define M_WPDevKeyboard_wpclsRemoveObjects M_WPObject_wpclsRemoveObjects
#define M_WPDevKeyboard_somUninit SOMObject_somUninit
#define M_WPDevKeyboard_somClassReady SOMClass_somClassReady
#define M_WPDevKeyboard_somNew SOMClass_somNew
#define M_WPDevKeyboard_somRenew SOMClass_somRenew
#define M_WPDevKeyboard__get_somDataAlignment SOMClass__get_somDataAlignment
#define M_WPDevKeyboard__get_somInstanceDataOffsets SOMClass__get_somInstanceDataOffsets
#define M_WPDevKeyboard__get_somDirectInitClasses SOMClass__get_somDirectInitClasses
#define M_WPDevKeyboard__set_somDirectInitClasses SOMClass__set_somDirectInitClasses
#define M_WPDevKeyboard_somNewNoInit SOMClass_somNewNoInit
#define M_WPDevKeyboard_somRenewNoInit SOMClass_somRenewNoInit
#define M_WPDevKeyboard_somRenewNoZero SOMClass_somRenewNoZero
#define M_WPDevKeyboard_somRenewNoInitNoZero SOMClass_somRenewNoInitNoZero
#define M_WPDevKeyboard_somAllocate SOMClass_somAllocate
#define M_WPDevKeyboard_somDeallocate SOMClass_somDeallocate
#define M_WPDevKeyboard__get_somClassAllocate SOMClass__get_somClassAllocate
#define M_WPDevKeyboard__get_somClassDeallocate SOMClass__get_somClassDeallocate
#define M_WPDevKeyboard_somGetInstanceInitMask SOMClass_somGetInstanceInitMask
#define M_WPDevKeyboard_somGetInstanceDestructionMask SOMClass_somGetInstanceDestructionMask
#define M_WPDevKeyboard_somGetInstanceAssignmentMask SOMClass_somGetInstanceAssignmentMask
#define M_WPDevKeyboard_somInitClass SOMClass_somInitClass
#define M_WPDevKeyboard_somInitMIClass SOMClass_somInitMIClass
#define M_WPDevKeyboard_somAddStaticMethod SOMClass_somAddStaticMethod
#define M_WPDevKeyboard_somAddDynamicMethod SOMClass_somAddDynamicMethod
#define M_WPDevKeyboard_somOverrideSMethod SOMClass_somOverrideSMethod
#define M_WPDevKeyboard_somGetApplyStub SOMClass_somGetApplyStub
#define M_WPDevKeyboard_somGetClassData SOMClass_somGetClassData
#define M_WPDevKeyboard_somSetClassData SOMClass_somSetClassData
#define M_WPDevKeyboard_somGetClassMtab SOMClass_somGetClassMtab
#define M_WPDevKeyboard_somGetInstanceOffset SOMClass_somGetInstanceOffset
#define M_WPDevKeyboard_somGetInstancePartSize SOMClass_somGetInstancePartSize
#define M_WPDevKeyboard_somGetInstanceSize SOMClass_somGetInstanceSize
#define M_WPDevKeyboard_somGetInstanceToken SOMClass_somGetInstanceToken
#define M_WPDevKeyboard_somGetMemberToken SOMClass_somGetMemberToken
#define M_WPDevKeyboard_somGetMethodData SOMClass_somGetMethodData
#define M_WPDevKeyboard_somGetRdStub SOMClass_somGetRdStub
#define M_WPDevKeyboard_somGetMethodDescriptor SOMClass_somGetMethodDescriptor
#define M_WPDevKeyboard_somGetMethodIndex SOMClass_somGetMethodIndex
#define M_WPDevKeyboard_somGetMethodToken SOMClass_somGetMethodToken
#define M_WPDevKeyboard_somGetName SOMClass_somGetName
#define M_WPDevKeyboard_somGetNthMethodData SOMClass_somGetNthMethodData
#define M_WPDevKeyboard_somGetNthMethodInfo SOMClass_somGetNthMethodInfo
#define M_WPDevKeyboard_somGetNumMethods SOMClass_somGetNumMethods
#define M_WPDevKeyboard_somGetNumStaticMethods SOMClass_somGetNumStaticMethods
#define M_WPDevKeyboard_somGetParent SOMClass_somGetParent
#define M_WPDevKeyboard_somGetParents SOMClass_somGetParents
#define M_WPDevKeyboard_somGetPClsMtab SOMClass_somGetPClsMtab
#define M_WPDevKeyboard_somGetPClsMtabs SOMClass_somGetPClsMtabs
#define M_WPDevKeyboard_somGetVersionNumbers SOMClass_somGetVersionNumbers
#define M_WPDevKeyboard_somSetMethodDescriptor SOMClass_somSetMethodDescriptor
#define M_WPDevKeyboard_somFindMethod SOMClass_somFindMethod
#define M_WPDevKeyboard_somFindMethodOk SOMClass_somFindMethodOk
#define M_WPDevKeyboard_somFindSMethod SOMClass_somFindSMethod
#define M_WPDevKeyboard_somFindSMethodOk SOMClass_somFindSMethodOk
#define M_WPDevKeyboard_somLookupMethod SOMClass_somLookupMethod
#define M_WPDevKeyboard_somCheckVersion SOMClass_somCheckVersion
#define M_WPDevKeyboard_somDescendedFrom SOMClass_somDescendedFrom
#define M_WPDevKeyboard_somSupportsMethod SOMClass_somSupportsMethod
#define M_WPDevKeyboard_somDefinedMethod SOMClass_somDefinedMethod
#define M_WPDevKeyboard_somOverrideMtab SOMClass_somOverrideMtab
#define M_WPDevKeyboard_somDefaultInit SOMObject_somDefaultInit
#define M_WPDevKeyboard_somDestruct SOMObject_somDestruct
#define M_WPDevKeyboard_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define M_WPDevKeyboard_somDefaultAssign SOMObject_somDefaultAssign
#define M_WPDevKeyboard_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define M_WPDevKeyboard_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define M_WPDevKeyboard_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define M_WPDevKeyboard_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define M_WPDevKeyboard_somDefaultVAssign SOMObject_somDefaultVAssign
#define M_WPDevKeyboard_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define M_WPDevKeyboard_somInit SOMObject_somInit
#define M_WPDevKeyboard_somFree SOMObject_somFree
#define M_WPDevKeyboard_somGetClass SOMObject_somGetClass
#define M_WPDevKeyboard_somGetClassName SOMObject_somGetClassName
#define M_WPDevKeyboard_somGetSize SOMObject_somGetSize
#define M_WPDevKeyboard_somIsA SOMObject_somIsA
#define M_WPDevKeyboard_somIsInstanceOf SOMObject_somIsInstanceOf
#define M_WPDevKeyboard_somRespondsTo SOMObject_somRespondsTo
#define M_WPDevKeyboard_somDispatch SOMObject_somDispatch
#define M_WPDevKeyboard_somClassDispatch SOMObject_somClassDispatch
#define M_WPDevKeyboard_somCastObj SOMObject_somCastObj
#define M_WPDevKeyboard_somResetObj SOMObject_somResetObj
#define M_WPDevKeyboard_somDispatchV SOMObject_somDispatchV
#define M_WPDevKeyboard_somDispatchL SOMObject_somDispatchL
#define M_WPDevKeyboard_somDispatchA SOMObject_somDispatchA
#define M_WPDevKeyboard_somDispatchD SOMObject_somDispatchD
#define M_WPDevKeyboard_somPrintSelf SOMObject_somPrintSelf
#define M_WPDevKeyboard_somDumpSelf SOMObject_somDumpSelf
#define M_WPDevKeyboard_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_M_WPDevKeyboard_h */
