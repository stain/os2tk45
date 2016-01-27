
/*
 * This file was generated by the SOM Compiler.
 * FileName: G:\cwpsh\rel\os2c\include\base\os2\wpurl.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.14
 *     SOM Emitter emith: 2.43
 */

/*
 *    Module Name: WPURL
 * 
 *    OS/2 Work Place Shell - Base URL object class
 * 
 *    Copyright (C) 1996 IBM Corporation
 * 
 */


#ifndef SOM_WPUrl_h
#define SOM_WPUrl_h


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
#ifndef WPUrl
#define WPUrl SOMObject
#endif
#include <wpdataf.h>

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
#ifndef M_WPFileSystem
    #define M_WPFileSystem SOMObject
#endif /* M_WPFileSystem */
#ifndef M_WPDataFile
    #define M_WPDataFile SOMObject
#endif /* M_WPDataFile */
#ifndef M_WPUrl
    #define M_WPUrl SOMObject
#endif /* M_WPUrl */

/*
 * End of bindings for IDL types.
 */

#define WPUrl_MajorVersion 1
#define WPUrl_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define WPUrlNewClass url_c
#pragma linkage(url_c, system)
#define WPUrlClassData url_d
#define WPUrlCClassData url_x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */

/*
 * Include the meta class file
 */
#include <wpurl.h>
/*--------------Migration------------*/
#define WPUrl_classObj WPUrlClassData.classObject
#define _WPUrl WPUrl_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK WPUrlNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(WPUrlNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct WPUrlClassDataStructure {
	SOMClass *classObject;
	somMToken WPUrlPrivate1;
	somMToken WPUrlPrivate2;
	somMToken WPUrlPrivate3;
	somMToken WPUrlPrivate4;
	somMToken WPUrlPrivate5;
} SOMDLINK WPUrlClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct WPUrlCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK WPUrlCClassData;

/*
 * New and Renew macros for WPUrl
 */
#define WPUrlNew() \
   ( _WPUrl ? \
	_somNew(_WPUrl) \
	: ( WPUrlNewClass(\
		WPUrl_MajorVersion, \
		WPUrl_MinorVersion),\
	   _somNew(_WPUrl)))
#define WPUrlRenew(buf) \
   ( _WPUrl ? \
	_somRenew(_WPUrl, buf) \
	: ( WPUrlNewClass(\
		WPUrl_MajorVersion, \
		WPUrl_MinorVersion),\
	   _somRenew(_WPUrl, buf)))

/*
 * Override method: wpObjectReady
 */
#define WPUrl_wpObjectReady(somSelf,ulCode,refObject) \
	WPObject_wpObjectReady(somSelf,ulCode,refObject)

/*
 * Override method: wpOpen
 */
#define WPUrl_wpOpen(somSelf,hwndCnr,ulView,param) \
	WPObject_wpOpen(somSelf,hwndCnr,ulView,param)

/*
 * Override method: wpSwitchTo
 */
#define WPUrl_wpSwitchTo(somSelf,View) \
	WPObject_wpSwitchTo(somSelf,View)

/*
 * Override method: wpSetup
 */
#define WPUrl_wpSetup(somSelf,pszSetupString) \
	WPObject_wpSetup(somSelf,pszSetupString)

/*
 * Override method: wpSetupOnce
 */
#define WPUrl_wpSetupOnce(somSelf,pszSetupString) \
	WPObject_wpSetupOnce(somSelf,pszSetupString)

/*
 * Override method: wpSaveState
 */
#define WPUrl_wpSaveState(somSelf) \
	WPObject_wpSaveState(somSelf)

/*
 * Override method: wpQueryDetailsData
 */
#define WPUrl_wpQueryDetailsData(somSelf,ppDetailsData,pcp) \
	WPObject_wpQueryDetailsData(somSelf,ppDetailsData,pcp)

/*
 * Override method: wpRestoreState
 */
#define WPUrl_wpRestoreState(somSelf,ulReserved) \
	WPObject_wpRestoreState(somSelf,ulReserved)

/*
 * Override method: somDefaultInit
 */
#define WPUrl_somDefaultInit(somSelf,ctrl) \
	SOMObject_somDefaultInit(somSelf,ctrl)

/*
 * Override method: somDestruct
 */
#define WPUrl_somDestruct(somSelf,doFree,ctrl) \
	SOMObject_somDestruct(somSelf,doFree,ctrl)

/*
 * Override method: wpAddSettingsPages
 */
#define WPUrl_wpAddSettingsPages(somSelf,hwndNotebook) \
	WPObject_wpAddSettingsPages(somSelf,hwndNotebook)

/*
 * Override method: wpCreateFromTemplate
 */
#define WPUrl_wpCreateFromTemplate(somSelf,folder,fLock) \
	WPObject_wpCreateFromTemplate(somSelf,folder,fLock)

/*
 * Override method: wpCreateAnother
 */
#define WPUrl_wpCreateAnother(somSelf,pszTitle,pszSetupEnv,Folder) \
	WPObject_wpCreateAnother(somSelf,pszTitle,pszSetupEnv,Folder)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define WPUrl_wpAddBecomePage WPDataFile_wpAddBecomePage
#define WPUrl_wpAddFileTypePage WPDataFile_wpAddFileTypePage
#define WPUrl_wpPrintMetaFile WPDataFile_wpPrintMetaFile
#define WPUrl_wpPrintPifFile WPDataFile_wpPrintPifFile
#define WPUrl_wpPrintPrinterSpecificFile WPDataFile_wpPrintPrinterSpecificFile
#define WPUrl_wpPrintUnknownFile WPDataFile_wpPrintUnknownFile
#define WPUrl_wpQueryAssociatedProgram WPDataFile_wpQueryAssociatedProgram
#define WPUrl_wpSetAssociatedFileIcon WPDataFile_wpSetAssociatedFileIcon
#define WPUrl_wpQueryAssociatedFileIcon WPDataFile_wpQueryAssociatedFileIcon
#define WPUrl_wpSetContentsFromPointer WPDataFile_wpSetContentsFromPointer
#define WPUrl_wpQueryPointerFromContents WPDataFile_wpQueryPointerFromContents
#define WPUrl_wpSetContentsFromHandle WPDataFile_wpSetContentsFromHandle
#define WPUrl_wpQueryHandleFromContents WPDataFile_wpQueryHandleFromContents
#define WPUrl_wpRenderFromClipboard WPDataFile_wpRenderFromClipboard
#define WPUrl_SetUpdateIndicator WPDataFile_SetUpdateIndicator
#define WPUrl_QueryUpdateIndicator WPDataFile_QueryUpdateIndicator
#define WPUrl_SetNeedSave WPDataFile_SetNeedSave
#define WPUrl_QueryNeedSave WPDataFile_QueryNeedSave
#define WPUrl_wpSetDefaultBidiSettings WPDataFile_wpSetDefaultBidiSettings
#define WPUrl_wpQueryDefaultBidiSettings WPDataFile_wpQueryDefaultBidiSettings
#define WPUrl_wpSetBidiValues WPDataFile_wpSetBidiValues
#define WPUrl_wpQueryBidiValues WPDataFile_wpQueryBidiValues
#define WPUrl_wpInsertBidiPage WPDataFile_wpInsertBidiPage
#define WPUrl_wpSaveBidiState WPDataFile_wpSaveBidiState
#define WPUrl_wpRestoreBidiState WPDataFile_wpRestoreBidiState
#define WPUrl_wpInitBidiData WPDataFile_wpInitBidiData
#define WPUrl_wpBidiSetup WPDataFile_wpBidiSetup
#define WPUrl_wpSettingsNotebook WPDataFile_wpSettingsNotebook
#define WPUrl_wpDragOver WPObject_wpDragOver
#define WPUrl_wpSetDefaultView WPObject_wpSetDefaultView
#define WPUrl_wpSetRealName WPFileSystem_wpSetRealName
#define WPUrl_wpSetType WPFileSystem_wpSetType
#define WPUrl_wpAddObjectWindowPage WPObject_wpAddObjectWindowPage
#define WPUrl_wpPrintObject WPObject_wpPrintObject
#define WPUrl_wpModifyMenu WPObject_wpModifyMenu
#define WPUrl_wpMenuItemSelected WPObject_wpMenuItemSelected
#define WPUrl_wpMenuItemHelpSelected WPObject_wpMenuItemHelpSelected
#define WPUrl_wpQueryDefaultHelp WPObject_wpQueryDefaultHelp
#define WPUrl_wpFormatDragItem WPObject_wpFormatDragItem
#define WPUrl_wpConfirmRenameFileWithExt WPFileSystem_wpConfirmRenameFileWithExt
#define WPUrl_wpQueryIcon WPObject_wpQueryIcon
#define WPUrl_wpInitData WPObject_wpInitData
#define WPUrl_wpRender WPObject_wpRender
#define WPUrl_wpConfirmKeepAssoc WPFileSystem_wpConfirmKeepAssoc
#define WPUrl_wpQueryType WPFileSystem_wpQueryType
#define WPUrl_wpSetAttr WPFileSystem_wpSetAttr
#define WPUrl_wpQueryAttr WPFileSystem_wpQueryAttr
#define WPUrl_wpAddFile1Page WPFileSystem_wpAddFile1Page
#define WPUrl_wpAddFile2Page WPFileSystem_wpAddFile2Page
#define WPUrl_wpAddFile3Page WPFileSystem_wpAddFile3Page
#define WPUrl_wpAddFileMenuPage WPFileSystem_wpAddFileMenuPage
#define WPUrl_wpQueryCreation WPFileSystem_wpQueryCreation
#define WPUrl_wpQueryLastAccess WPFileSystem_wpQueryLastAccess
#define WPUrl_wpQueryLastWrite WPFileSystem_wpQueryLastWrite
#define WPUrl_wpQueryFileSize WPFileSystem_wpQueryFileSize
#define WPUrl_wpQueryEASize WPFileSystem_wpQueryEASize
#define WPUrl_wpSetDateInfo WPFileSystem_wpSetDateInfo
#define WPUrl_wpSetFileSizeInfo WPFileSystem_wpSetFileSizeInfo
#define WPUrl_wpRefresh WPFileSystem_wpRefresh
#define WPUrl_wpQueryRefreshFlags WPFileSystem_wpQueryRefreshFlags
#define WPUrl_wpSetRefreshFlags WPFileSystem_wpSetRefreshFlags
#define WPUrl_wpPrintPlainTextFile WPFileSystem_wpPrintPlainTextFile
#define WPUrl_wpSetTitleAndRenameFile WPFileSystem_wpSetTitleAndRenameFile
#define WPUrl_wpVerifyUpdateAccess WPFileSystem_wpVerifyUpdateAccess
#define WPUrl_wpQueryEASupport WPFileSystem_wpQueryEASupport
#define WPUrl_wpAddUserItemsToPopupMenu WPFileSystem_wpAddUserItemsToPopupMenu
#define WPUrl_wpIsDiskSwapped WPFileSystem_wpIsDiskSwapped
#define WPUrl_wpQueryRealName WPFileSystem_wpQueryRealName
#define WPUrl_wpQueryFilename WPFileSystem_wpQueryFilename
#define WPUrl_wpQueryDisk WPFileSystem_wpQueryDisk
#define WPUrl_wpQueryDateInfo WPFileSystem_wpQueryDateInfo
#define WPUrl_wpQueryFileSizeL WPFileSystem_wpQueryFileSizeL
#define WPUrl_wpSetFileSizeL WPFileSystem_wpSetFileSizeL
#define WPUrl_wpUnInitData WPObject_wpUnInitData
#define WPUrl_wpQueryHandle WPObject_wpQueryHandle
#define WPUrl_wpSaveImmediate WPObject_wpSaveImmediate
#define WPUrl_wpSetTitle WPObject_wpSetTitle
#define WPUrl_wpViewObject WPObject_wpViewObject
#define WPUrl_wpCopyObject WPObject_wpCopyObject
#define WPUrl_wpMoveObject WPObject_wpMoveObject
#define WPUrl_wpQueryIconData WPObject_wpQueryIconData
#define WPUrl_wpSetIconData WPObject_wpSetIconData
#define WPUrl_wpDraggedOverObject WPObject_wpDraggedOverObject
#define WPUrl_wpDroppedOnObject WPObject_wpDroppedOnObject
#define WPUrl_wpQueryNameClashOptions WPObject_wpQueryNameClashOptions
#define WPUrl_wpAppendObject WPObject_wpAppendObject
#define WPUrl_wpReplaceObject WPObject_wpReplaceObject
#define WPUrl_wpQueryStyle WPObject_wpQueryStyle
#define WPUrl_wpFilterMenu WPObject_wpFilterMenu
#define WPUrl_wpDoesObjectMatch WPObject_wpDoesObjectMatch
#define WPUrl_wpIdentify WPObject_wpIdentify
#define WPUrl_wpIsDeleteable WPObject_wpIsDeleteable
#define WPUrl_wpAddObjectGeneralPage WPObject_wpAddObjectGeneralPage
#define WPUrl_wpAddObjectGeneralPage2 WPObject_wpAddObjectGeneralPage2
#define WPUrl_wpAddToObjUseList WPObject_wpAddToObjUseList
#define WPUrl_wpAllocMem WPObject_wpAllocMem
#define WPUrl_wpAssertObjectMutexSem WPObject_wpAssertObjectMutexSem
#define WPUrl_wpClose WPObject_wpClose
#define WPUrl_wpCnrInsertObject WPObject_wpCnrInsertObject
#define WPUrl_wpCnrRemoveObject WPObject_wpCnrRemoveObject
#define WPUrl_wpCnrSetEmphasis WPObject_wpCnrSetEmphasis
#define WPUrl_wpConfirmDelete WPObject_wpConfirmDelete
#define WPUrl_wpConfirmObjectTitle WPObject_wpConfirmObjectTitle
#define WPUrl_wpCopiedFromTemplate WPObject_wpCopiedFromTemplate
#define WPUrl_wpCreateShadowObject WPObject_wpCreateShadowObject
#define WPUrl_wpDelete WPObject_wpDelete
#define WPUrl_wpDeleteFromObjUseList WPObject_wpDeleteFromObjUseList
#define WPUrl_wpDisplayHelp WPObject_wpDisplayHelp
#define WPUrl_wpDisplayMenu WPObject_wpDisplayMenu
#define WPUrl_wpDrop WPObject_wpDrop
#define WPUrl_wpEndConversation WPObject_wpEndConversation
#define WPUrl_wpFilterPopupMenu WPObject_wpFilterPopupMenu
#define WPUrl_wpFindUseItem WPObject_wpFindUseItem
#define WPUrl_wpFree WPObject_wpFree
#define WPUrl_wpFreeMem WPObject_wpFreeMem
#define WPUrl_wpHide WPObject_wpHide
#define WPUrl_wpInsertPopupMenuItems WPObject_wpInsertPopupMenuItems
#define WPUrl_wpInsertMenuItems WPObject_wpInsertMenuItems
#define WPUrl_wpInsertSettingsPage WPObject_wpInsertSettingsPage
#define WPUrl_wpModifyPopupMenu WPObject_wpModifyPopupMenu
#define WPUrl_wpQueryConcurrentView WPObject_wpQueryConcurrentView
#define WPUrl_wpQueryButtonAppearance WPObject_wpQueryButtonAppearance
#define WPUrl_wpQueryConfirmations WPObject_wpQueryConfirmations
#define WPUrl_wpQueryDefaultView WPObject_wpQueryDefaultView
#define WPUrl_wpQueryError WPObject_wpQueryError
#define WPUrl_wpSetFolder WPObject_wpSetFolder
#define WPUrl_wpQueryFolder WPObject_wpQueryFolder
#define WPUrl_wpQueryMinWindow WPObject_wpQueryMinWindow
#define WPUrl_wpSetTaskRec WPObject_wpSetTaskRec
#define WPUrl_wpFindTaskRec WPObject_wpFindTaskRec
#define WPUrl_wpQueryTitle WPObject_wpQueryTitle
#define WPUrl_wpRegisterView WPObject_wpRegisterView
#define WPUrl_wpReleaseObjectMutexSem WPObject_wpReleaseObjectMutexSem
#define WPUrl_wpRenderComplete WPObject_wpRenderComplete
#define WPUrl_wpRequestObjectMutexSem WPObject_wpRequestObjectMutexSem
#define WPUrl_wpRestore WPObject_wpRestore
#define WPUrl_wpRestoreData WPObject_wpRestoreData
#define WPUrl_wpRestoreLong WPObject_wpRestoreLong
#define WPUrl_wpRestoreString WPObject_wpRestoreString
#define WPUrl_wpSaveData WPObject_wpSaveData
#define WPUrl_wpSaveDeferred WPObject_wpSaveDeferred
#define WPUrl_wpSaveLong WPObject_wpSaveLong
#define WPUrl_wpSaveString WPObject_wpSaveString
#define WPUrl_wpScanSetupString WPObject_wpScanSetupString
#define WPUrl_wpSetConcurrentView WPObject_wpSetConcurrentView
#define WPUrl_wpSetButtonAppearance WPObject_wpSetButtonAppearance
#define WPUrl_wpSetDefaultHelp WPObject_wpSetDefaultHelp
#define WPUrl_wpSetError WPObject_wpSetError
#define WPUrl_wpQueryScreenGroupID WPObject_wpQueryScreenGroupID
#define WPUrl_wpSetIcon WPObject_wpSetIcon
#define WPUrl_wpSetMinWindow WPObject_wpSetMinWindow
#define WPUrl_wpModifyStyle WPObject_wpModifyStyle
#define WPUrl_wpQueryTrueStyle WPObject_wpQueryTrueStyle
#define WPUrl_wpUnlockObject WPObject_wpUnlockObject
#define WPUrl_wpIsObjectInitialized WPObject_wpIsObjectInitialized
#define WPUrl_wpCreateShadowObjectExt WPObject_wpCreateShadowObjectExt
#define WPUrl_wpCnrDeleteUseItem WPObject_wpCnrDeleteUseItem
#define WPUrl_wpQueryCoreRecord WPObject_wpQueryCoreRecord
#define WPUrl_wpSetObjectID WPObject_wpSetObjectID
#define WPUrl_wpQueryObjectID WPObject_wpQueryObjectID
#define WPUrl_wpSetDefaultIconPos WPObject_wpSetDefaultIconPos
#define WPUrl_wpQueryDefaultIconPos WPObject_wpQueryDefaultIconPos
#define WPUrl_wpCnrRefreshDetails WPObject_wpCnrRefreshDetails
#define WPUrl_wpFindViewItem WPObject_wpFindViewItem
#define WPUrl_wpLockObject WPObject_wpLockObject
#define WPUrl_wpIsLocked WPObject_wpIsLocked
#define WPUrl_wpQueryContainerFlagPtr WPObject_wpQueryContainerFlagPtr
#define WPUrl_wpWaitForClose WPObject_wpWaitForClose
#define WPUrl_wpSetMenuStyle WPObject_wpSetMenuStyle
#define WPUrl_wpQueryMenuStyle WPObject_wpQueryMenuStyle
#define WPUrl_wpSetStyle WPObject_wpSetStyle
#define WPUrl_somInit SOMObject_somInit
#define WPUrl_somUninit SOMObject_somUninit
#define WPUrl_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define WPUrl_somDefaultAssign SOMObject_somDefaultAssign
#define WPUrl_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define WPUrl_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define WPUrl_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define WPUrl_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define WPUrl_somDefaultVAssign SOMObject_somDefaultVAssign
#define WPUrl_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define WPUrl_somFree SOMObject_somFree
#define WPUrl_somGetClass SOMObject_somGetClass
#define WPUrl_somGetClassName SOMObject_somGetClassName
#define WPUrl_somGetSize SOMObject_somGetSize
#define WPUrl_somIsA SOMObject_somIsA
#define WPUrl_somIsInstanceOf SOMObject_somIsInstanceOf
#define WPUrl_somRespondsTo SOMObject_somRespondsTo
#define WPUrl_somDispatch SOMObject_somDispatch
#define WPUrl_somClassDispatch SOMObject_somClassDispatch
#define WPUrl_somCastObj SOMObject_somCastObj
#define WPUrl_somResetObj SOMObject_somResetObj
#define WPUrl_somDispatchV SOMObject_somDispatchV
#define WPUrl_somDispatchL SOMObject_somDispatchL
#define WPUrl_somDispatchA SOMObject_somDispatchA
#define WPUrl_somDispatchD SOMObject_somDispatchD
#define WPUrl_somPrintSelf SOMObject_somPrintSelf
#define WPUrl_somDumpSelf SOMObject_somDumpSelf
#define WPUrl_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_WPUrl_h */

#ifndef SOM_M_WPUrl_h
#define SOM_M_WPUrl_h


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
#ifndef M_WPUrl
#define M_WPUrl SOMObject
#endif
#include <wpdataf.h>

/*
 * Start of bindings for IDL types
 */


/*
 * End of bindings for IDL types.
 */

#define M_WPUrl_MajorVersion 1
#define M_WPUrl_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define M_WPUrlNewClass urlM_c
#pragma linkage(urlM_c, system)
#define M_WPUrlClassData urlM_d
#define M_WPUrlCClassData urlM_x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define M_WPUrl_classObj M_WPUrlClassData.classObject
#define _M_WPUrl M_WPUrl_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK M_WPUrlNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(M_WPUrlNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct M_WPUrlClassDataStructure {
	SOMClass *classObject;
} SOMDLINK M_WPUrlClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct M_WPUrlCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK M_WPUrlCClassData;

/*
 * New and Renew macros for M_WPUrl
 */
#define M_WPUrlNew() \
   ( _M_WPUrl ? \
	_somNew(_M_WPUrl) \
	: ( M_WPUrlNewClass(\
		M_WPUrl_MajorVersion, \
		M_WPUrl_MinorVersion),\
	   _somNew(_M_WPUrl)))
#define M_WPUrlRenew(buf) \
   ( _M_WPUrl ? \
	_somRenew(_M_WPUrl, buf) \
	: ( M_WPUrlNewClass(\
		M_WPUrl_MajorVersion, \
		M_WPUrl_MinorVersion),\
	   _somRenew(_M_WPUrl, buf)))

/*
 * Override method: wpclsCreateDefaultTemplates
 */
#define M_WPUrl_wpclsCreateDefaultTemplates(somSelf,Folder) \
	M_WPObject_wpclsCreateDefaultTemplates(somSelf,Folder)

/*
 * Override method: wpclsInitData
 */
#define M_WPUrl_wpclsInitData(somSelf) \
	M_WPObject_wpclsInitData(somSelf)

/*
 * Override method: wpclsQueryDefaultHelp
 */
#define M_WPUrl_wpclsQueryDefaultHelp(somSelf,pHelpPanelId,pszHelpLibrary) \
	M_WPObject_wpclsQueryDefaultHelp(somSelf,pHelpPanelId,pszHelpLibrary)

/*
 * Override method: wpclsQueryDefaultView
 */
#define M_WPUrl_wpclsQueryDefaultView(somSelf) \
	M_WPObject_wpclsQueryDefaultView(somSelf)

/*
 * Override method: wpclsQueryDetailsInfo
 */
#define M_WPUrl_wpclsQueryDetailsInfo(somSelf,ppClassFieldInfo,pSize) \
	M_WPObject_wpclsQueryDetailsInfo(somSelf,ppClassFieldInfo,pSize)

/*
 * Override method: wpclsQueryIconData
 */
#define M_WPUrl_wpclsQueryIconData(somSelf,pIconInfo) \
	M_WPObject_wpclsQueryIconData(somSelf,pIconInfo)

/*
 * Override method: wpclsQueryTitle
 */
#define M_WPUrl_wpclsQueryTitle(somSelf) \
	M_WPObject_wpclsQueryTitle(somSelf)

/*
 * Override method: wpclsQueryInstanceFilter
 */
#define M_WPUrl_wpclsQueryInstanceFilter(somSelf) \
	M_WPFileSystem_wpclsQueryInstanceFilter(somSelf)

/*
 * Override method: wpclsQueryInstanceType
 */
#define M_WPUrl_wpclsQueryInstanceType(somSelf) \
	M_WPFileSystem_wpclsQueryInstanceType(somSelf)

/*
 * Override method: wpclsQueryStyle
 */
#define M_WPUrl_wpclsQueryStyle(somSelf) \
	M_WPObject_wpclsQueryStyle(somSelf)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define M_WPUrl_wpclsAddClipboardAssoc M_WPDataFile_wpclsAddClipboardAssoc
#define M_WPUrl_wpclsEnumClipboardClasses M_WPDataFile_wpclsEnumClipboardClasses
#define M_WPUrl_wpclsUnInitData M_WPObject_wpclsUnInitData
#define M_WPUrl_wpclsQuerySettingsPageSize M_WPObject_wpclsQuerySettingsPageSize
#define M_WPUrl_wpclsQueryAwakeObject M_WPFileSystem_wpclsQueryAwakeObject
#define M_WPUrl_wpclsFileSysExists M_WPFileSystem_wpclsFileSysExists
#define M_WPUrl_wpclsQueryObjectFromPath M_WPFileSystem_wpclsQueryObjectFromPath
#define M_WPUrl_wpclsQueryInstanceClass M_WPFileSystem_wpclsQueryInstanceClass
#define M_WPUrl_wpclsQuerySearchInfo M_WPObject_wpclsQuerySearchInfo
#define M_WPUrl_wpclsQueryExtendedCriteria M_WPObject_wpclsQueryExtendedCriteria
#define M_WPUrl_wpclsNew M_WPObject_wpclsNew
#define M_WPUrl_wpclsObjectFromHandle M_WPObject_wpclsObjectFromHandle
#define M_WPUrl_wpclsMakeAwake M_WPObject_wpclsMakeAwake
#define M_WPUrl_wpclsQueryDetails M_WPObject_wpclsQueryDetails
#define M_WPUrl_wpclsQueryFolder M_WPObject_wpclsQueryFolder
#define M_WPUrl_wpclsQueryIcon M_WPObject_wpclsQueryIcon
#define M_WPUrl_wpclsFindObjectFirst M_WPObject_wpclsFindObjectFirst
#define M_WPUrl_wpclsFindObjectNext M_WPObject_wpclsFindObjectNext
#define M_WPUrl_wpclsFindObjectEnd M_WPObject_wpclsFindObjectEnd
#define M_WPUrl_wpclsSetError M_WPObject_wpclsSetError
#define M_WPUrl_wpclsQueryError M_WPObject_wpclsQueryError
#define M_WPUrl_wpclsQueryObject M_WPObject_wpclsQueryObject
#define M_WPUrl_wpclsQueryButtonAppearance M_WPObject_wpclsQueryButtonAppearance
#define M_WPUrl_wpclsDecUsage M_WPObject_wpclsDecUsage
#define M_WPUrl_wpclsIncUsage M_WPObject_wpclsIncUsage
#define M_WPUrl_wpclsInsertMultipleObjects M_WPObject_wpclsInsertMultipleObjects
#define M_WPUrl_wpclsFindOneObject M_WPObject_wpclsFindOneObject
#define M_WPUrl_wpclsSetSettingsPageSize M_WPObject_wpclsSetSettingsPageSize
#define M_WPUrl_wpclsSetIconData M_WPObject_wpclsSetIconData
#define M_WPUrl_wpclsSetIcon M_WPObject_wpclsSetIcon
#define M_WPUrl_wpclsRemoveObjects M_WPObject_wpclsRemoveObjects
#define M_WPUrl_somUninit SOMObject_somUninit
#define M_WPUrl_somClassReady SOMClass_somClassReady
#define M_WPUrl_somNew SOMClass_somNew
#define M_WPUrl_somRenew SOMClass_somRenew
#define M_WPUrl__get_somDataAlignment SOMClass__get_somDataAlignment
#define M_WPUrl__get_somInstanceDataOffsets SOMClass__get_somInstanceDataOffsets
#define M_WPUrl__get_somDirectInitClasses SOMClass__get_somDirectInitClasses
#define M_WPUrl__set_somDirectInitClasses SOMClass__set_somDirectInitClasses
#define M_WPUrl_somNewNoInit SOMClass_somNewNoInit
#define M_WPUrl_somRenewNoInit SOMClass_somRenewNoInit
#define M_WPUrl_somRenewNoZero SOMClass_somRenewNoZero
#define M_WPUrl_somRenewNoInitNoZero SOMClass_somRenewNoInitNoZero
#define M_WPUrl_somAllocate SOMClass_somAllocate
#define M_WPUrl_somDeallocate SOMClass_somDeallocate
#define M_WPUrl__get_somClassAllocate SOMClass__get_somClassAllocate
#define M_WPUrl__get_somClassDeallocate SOMClass__get_somClassDeallocate
#define M_WPUrl_somGetInstanceInitMask SOMClass_somGetInstanceInitMask
#define M_WPUrl_somGetInstanceDestructionMask SOMClass_somGetInstanceDestructionMask
#define M_WPUrl_somGetInstanceAssignmentMask SOMClass_somGetInstanceAssignmentMask
#define M_WPUrl_somInitClass SOMClass_somInitClass
#define M_WPUrl_somInitMIClass SOMClass_somInitMIClass
#define M_WPUrl_somAddStaticMethod SOMClass_somAddStaticMethod
#define M_WPUrl_somAddDynamicMethod SOMClass_somAddDynamicMethod
#define M_WPUrl_somOverrideSMethod SOMClass_somOverrideSMethod
#define M_WPUrl_somGetApplyStub SOMClass_somGetApplyStub
#define M_WPUrl_somGetClassData SOMClass_somGetClassData
#define M_WPUrl_somSetClassData SOMClass_somSetClassData
#define M_WPUrl_somGetClassMtab SOMClass_somGetClassMtab
#define M_WPUrl_somGetInstanceOffset SOMClass_somGetInstanceOffset
#define M_WPUrl_somGetInstancePartSize SOMClass_somGetInstancePartSize
#define M_WPUrl_somGetInstanceSize SOMClass_somGetInstanceSize
#define M_WPUrl_somGetInstanceToken SOMClass_somGetInstanceToken
#define M_WPUrl_somGetMemberToken SOMClass_somGetMemberToken
#define M_WPUrl_somGetMethodData SOMClass_somGetMethodData
#define M_WPUrl_somGetRdStub SOMClass_somGetRdStub
#define M_WPUrl_somGetMethodDescriptor SOMClass_somGetMethodDescriptor
#define M_WPUrl_somGetMethodIndex SOMClass_somGetMethodIndex
#define M_WPUrl_somGetMethodToken SOMClass_somGetMethodToken
#define M_WPUrl_somGetName SOMClass_somGetName
#define M_WPUrl_somGetNthMethodData SOMClass_somGetNthMethodData
#define M_WPUrl_somGetNthMethodInfo SOMClass_somGetNthMethodInfo
#define M_WPUrl_somGetNumMethods SOMClass_somGetNumMethods
#define M_WPUrl_somGetNumStaticMethods SOMClass_somGetNumStaticMethods
#define M_WPUrl_somGetParent SOMClass_somGetParent
#define M_WPUrl_somGetParents SOMClass_somGetParents
#define M_WPUrl_somGetPClsMtab SOMClass_somGetPClsMtab
#define M_WPUrl_somGetPClsMtabs SOMClass_somGetPClsMtabs
#define M_WPUrl_somGetVersionNumbers SOMClass_somGetVersionNumbers
#define M_WPUrl_somSetMethodDescriptor SOMClass_somSetMethodDescriptor
#define M_WPUrl_somFindMethod SOMClass_somFindMethod
#define M_WPUrl_somFindMethodOk SOMClass_somFindMethodOk
#define M_WPUrl_somFindSMethod SOMClass_somFindSMethod
#define M_WPUrl_somFindSMethodOk SOMClass_somFindSMethodOk
#define M_WPUrl_somLookupMethod SOMClass_somLookupMethod
#define M_WPUrl_somCheckVersion SOMClass_somCheckVersion
#define M_WPUrl_somDescendedFrom SOMClass_somDescendedFrom
#define M_WPUrl_somSupportsMethod SOMClass_somSupportsMethod
#define M_WPUrl_somDefinedMethod SOMClass_somDefinedMethod
#define M_WPUrl_somOverrideMtab SOMClass_somOverrideMtab
#define M_WPUrl_somDefaultInit SOMObject_somDefaultInit
#define M_WPUrl_somDestruct SOMObject_somDestruct
#define M_WPUrl_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define M_WPUrl_somDefaultAssign SOMObject_somDefaultAssign
#define M_WPUrl_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define M_WPUrl_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define M_WPUrl_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define M_WPUrl_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define M_WPUrl_somDefaultVAssign SOMObject_somDefaultVAssign
#define M_WPUrl_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define M_WPUrl_somInit SOMObject_somInit
#define M_WPUrl_somFree SOMObject_somFree
#define M_WPUrl_somGetClass SOMObject_somGetClass
#define M_WPUrl_somGetClassName SOMObject_somGetClassName
#define M_WPUrl_somGetSize SOMObject_somGetSize
#define M_WPUrl_somIsA SOMObject_somIsA
#define M_WPUrl_somIsInstanceOf SOMObject_somIsInstanceOf
#define M_WPUrl_somRespondsTo SOMObject_somRespondsTo
#define M_WPUrl_somDispatch SOMObject_somDispatch
#define M_WPUrl_somClassDispatch SOMObject_somClassDispatch
#define M_WPUrl_somCastObj SOMObject_somCastObj
#define M_WPUrl_somResetObj SOMObject_somResetObj
#define M_WPUrl_somDispatchV SOMObject_somDispatchV
#define M_WPUrl_somDispatchL SOMObject_somDispatchL
#define M_WPUrl_somDispatchA SOMObject_somDispatchA
#define M_WPUrl_somDispatchD SOMObject_somDispatchD
#define M_WPUrl_somPrintSelf SOMObject_somPrintSelf
#define M_WPUrl_somDumpSelf SOMObject_somDumpSelf
#define M_WPUrl_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_M_WPUrl_h */
