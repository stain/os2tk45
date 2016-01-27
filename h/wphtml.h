
/*
 * This file was generated by the SOM Compiler.
 * FileName: G:\cwpsh\rel\os2c\include\base\os2\wphtml.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.14
 *     SOM Emitter emith: 2.43
 */

/*
 *    Module Name: WPHTML
 * 
 *    OS/2 Work Place Shell - HTML data file object
 * 
 *    Copyright (C) 1996 IBM Corporation
 * 
 */


#ifndef SOM_WPHtml_h
#define SOM_WPHtml_h


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
#ifndef WPHtml
#define WPHtml SOMObject
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
#ifndef M_WPHtml
    #define M_WPHtml SOMObject
#endif /* M_WPHtml */

/*
 * End of bindings for IDL types.
 */

#define WPHtml_MajorVersion 1
#define WPHtml_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define WPHtmlNewClass html_c
#pragma linkage(html_c, system)
#define WPHtmlClassData html_d
#define WPHtmlCClassData html_x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */

/*
 * Include the meta class file
 */
#include <wphtml.h>
/*--------------Migration------------*/
#define WPHtml_classObj WPHtmlClassData.classObject
#define _WPHtml WPHtml_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK WPHtmlNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(WPHtmlNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct WPHtmlClassDataStructure {
	SOMClass *classObject;
} SOMDLINK WPHtmlClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct WPHtmlCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK WPHtmlCClassData;

/*
 * New and Renew macros for WPHtml
 */
#define WPHtmlNew() \
   ( _WPHtml ? \
	_somNew(_WPHtml) \
	: ( WPHtmlNewClass(\
		WPHtml_MajorVersion, \
		WPHtml_MinorVersion),\
	   _somNew(_WPHtml)))
#define WPHtmlRenew(buf) \
   ( _WPHtml ? \
	_somRenew(_WPHtml, buf) \
	: ( WPHtmlNewClass(\
		WPHtml_MajorVersion, \
		WPHtml_MinorVersion),\
	   _somRenew(_WPHtml, buf)))

/*
 * Override method: wpSetupOnce
 */
#define WPHtml_wpSetupOnce(somSelf,pszSetupString) \
	WPObject_wpSetupOnce(somSelf,pszSetupString)

/*
 * Override method: wpCreateFromTemplate
 */
#define WPHtml_wpCreateFromTemplate(somSelf,folder,fLock) \
	WPObject_wpCreateFromTemplate(somSelf,folder,fLock)

/*
 * Override method: wpCreateAnother
 */
#define WPHtml_wpCreateAnother(somSelf,pszTitle,pszSetupEnv,Folder) \
	WPObject_wpCreateAnother(somSelf,pszTitle,pszSetupEnv,Folder)

/*
 * Override method: somDefaultInit
 */
#define WPHtml_somDefaultInit(somSelf,ctrl) \
	SOMObject_somDefaultInit(somSelf,ctrl)

/*
 * Override method: somDestruct
 */
#define WPHtml_somDestruct(somSelf,doFree,ctrl) \
	SOMObject_somDestruct(somSelf,doFree,ctrl)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define WPHtml_wpAddBecomePage WPDataFile_wpAddBecomePage
#define WPHtml_wpAddFileTypePage WPDataFile_wpAddFileTypePage
#define WPHtml_wpPrintMetaFile WPDataFile_wpPrintMetaFile
#define WPHtml_wpPrintPifFile WPDataFile_wpPrintPifFile
#define WPHtml_wpPrintPrinterSpecificFile WPDataFile_wpPrintPrinterSpecificFile
#define WPHtml_wpPrintUnknownFile WPDataFile_wpPrintUnknownFile
#define WPHtml_wpQueryAssociatedProgram WPDataFile_wpQueryAssociatedProgram
#define WPHtml_wpSetAssociatedFileIcon WPDataFile_wpSetAssociatedFileIcon
#define WPHtml_wpQueryAssociatedFileIcon WPDataFile_wpQueryAssociatedFileIcon
#define WPHtml_wpSetContentsFromPointer WPDataFile_wpSetContentsFromPointer
#define WPHtml_wpQueryPointerFromContents WPDataFile_wpQueryPointerFromContents
#define WPHtml_wpSetContentsFromHandle WPDataFile_wpSetContentsFromHandle
#define WPHtml_wpQueryHandleFromContents WPDataFile_wpQueryHandleFromContents
#define WPHtml_wpRenderFromClipboard WPDataFile_wpRenderFromClipboard
#define WPHtml_SetUpdateIndicator WPDataFile_SetUpdateIndicator
#define WPHtml_QueryUpdateIndicator WPDataFile_QueryUpdateIndicator
#define WPHtml_SetNeedSave WPDataFile_SetNeedSave
#define WPHtml_QueryNeedSave WPDataFile_QueryNeedSave
#define WPHtml_wpSetDefaultBidiSettings WPDataFile_wpSetDefaultBidiSettings
#define WPHtml_wpQueryDefaultBidiSettings WPDataFile_wpQueryDefaultBidiSettings
#define WPHtml_wpSetBidiValues WPDataFile_wpSetBidiValues
#define WPHtml_wpQueryBidiValues WPDataFile_wpQueryBidiValues
#define WPHtml_wpInsertBidiPage WPDataFile_wpInsertBidiPage
#define WPHtml_wpSaveBidiState WPDataFile_wpSaveBidiState
#define WPHtml_wpRestoreBidiState WPDataFile_wpRestoreBidiState
#define WPHtml_wpInitBidiData WPDataFile_wpInitBidiData
#define WPHtml_wpBidiSetup WPDataFile_wpBidiSetup
#define WPHtml_wpSettingsNotebook WPDataFile_wpSettingsNotebook
#define WPHtml_wpDragOver WPObject_wpDragOver
#define WPHtml_wpRestoreState WPObject_wpRestoreState
#define WPHtml_wpSetDefaultView WPObject_wpSetDefaultView
#define WPHtml_wpSetRealName WPFileSystem_wpSetRealName
#define WPHtml_wpSetType WPFileSystem_wpSetType
#define WPHtml_wpAddSettingsPages WPObject_wpAddSettingsPages
#define WPHtml_wpAddObjectWindowPage WPObject_wpAddObjectWindowPage
#define WPHtml_wpOpen WPObject_wpOpen
#define WPHtml_wpPrintObject WPObject_wpPrintObject
#define WPHtml_wpModifyMenu WPObject_wpModifyMenu
#define WPHtml_wpMenuItemSelected WPObject_wpMenuItemSelected
#define WPHtml_wpMenuItemHelpSelected WPObject_wpMenuItemHelpSelected
#define WPHtml_wpQueryDefaultHelp WPObject_wpQueryDefaultHelp
#define WPHtml_wpFormatDragItem WPObject_wpFormatDragItem
#define WPHtml_wpConfirmRenameFileWithExt WPFileSystem_wpConfirmRenameFileWithExt
#define WPHtml_wpQueryIcon WPObject_wpQueryIcon
#define WPHtml_wpSaveState WPObject_wpSaveState
#define WPHtml_wpInitData WPObject_wpInitData
#define WPHtml_wpSetup WPObject_wpSetup
#define WPHtml_wpRender WPObject_wpRender
#define WPHtml_wpConfirmKeepAssoc WPFileSystem_wpConfirmKeepAssoc
#define WPHtml_wpQueryType WPFileSystem_wpQueryType
#define WPHtml_wpSetAttr WPFileSystem_wpSetAttr
#define WPHtml_wpQueryAttr WPFileSystem_wpQueryAttr
#define WPHtml_wpAddFile1Page WPFileSystem_wpAddFile1Page
#define WPHtml_wpAddFile2Page WPFileSystem_wpAddFile2Page
#define WPHtml_wpAddFile3Page WPFileSystem_wpAddFile3Page
#define WPHtml_wpAddFileMenuPage WPFileSystem_wpAddFileMenuPage
#define WPHtml_wpQueryCreation WPFileSystem_wpQueryCreation
#define WPHtml_wpQueryLastAccess WPFileSystem_wpQueryLastAccess
#define WPHtml_wpQueryLastWrite WPFileSystem_wpQueryLastWrite
#define WPHtml_wpQueryFileSize WPFileSystem_wpQueryFileSize
#define WPHtml_wpQueryEASize WPFileSystem_wpQueryEASize
#define WPHtml_wpSetDateInfo WPFileSystem_wpSetDateInfo
#define WPHtml_wpSetFileSizeInfo WPFileSystem_wpSetFileSizeInfo
#define WPHtml_wpRefresh WPFileSystem_wpRefresh
#define WPHtml_wpQueryRefreshFlags WPFileSystem_wpQueryRefreshFlags
#define WPHtml_wpSetRefreshFlags WPFileSystem_wpSetRefreshFlags
#define WPHtml_wpPrintPlainTextFile WPFileSystem_wpPrintPlainTextFile
#define WPHtml_wpSetTitleAndRenameFile WPFileSystem_wpSetTitleAndRenameFile
#define WPHtml_wpVerifyUpdateAccess WPFileSystem_wpVerifyUpdateAccess
#define WPHtml_wpQueryEASupport WPFileSystem_wpQueryEASupport
#define WPHtml_wpAddUserItemsToPopupMenu WPFileSystem_wpAddUserItemsToPopupMenu
#define WPHtml_wpIsDiskSwapped WPFileSystem_wpIsDiskSwapped
#define WPHtml_wpQueryRealName WPFileSystem_wpQueryRealName
#define WPHtml_wpQueryFilename WPFileSystem_wpQueryFilename
#define WPHtml_wpQueryDisk WPFileSystem_wpQueryDisk
#define WPHtml_wpQueryDateInfo WPFileSystem_wpQueryDateInfo
#define WPHtml_wpQueryFileSizeL WPFileSystem_wpQueryFileSizeL
#define WPHtml_wpSetFileSizeL WPFileSystem_wpSetFileSizeL
#define WPHtml_wpUnInitData WPObject_wpUnInitData
#define WPHtml_wpQueryHandle WPObject_wpQueryHandle
#define WPHtml_wpSaveImmediate WPObject_wpSaveImmediate
#define WPHtml_wpSetTitle WPObject_wpSetTitle
#define WPHtml_wpViewObject WPObject_wpViewObject
#define WPHtml_wpSwitchTo WPObject_wpSwitchTo
#define WPHtml_wpCopyObject WPObject_wpCopyObject
#define WPHtml_wpMoveObject WPObject_wpMoveObject
#define WPHtml_wpQueryIconData WPObject_wpQueryIconData
#define WPHtml_wpSetIconData WPObject_wpSetIconData
#define WPHtml_wpQueryDetailsData WPObject_wpQueryDetailsData
#define WPHtml_wpDraggedOverObject WPObject_wpDraggedOverObject
#define WPHtml_wpDroppedOnObject WPObject_wpDroppedOnObject
#define WPHtml_wpQueryNameClashOptions WPObject_wpQueryNameClashOptions
#define WPHtml_wpAppendObject WPObject_wpAppendObject
#define WPHtml_wpReplaceObject WPObject_wpReplaceObject
#define WPHtml_wpQueryStyle WPObject_wpQueryStyle
#define WPHtml_wpFilterMenu WPObject_wpFilterMenu
#define WPHtml_wpDoesObjectMatch WPObject_wpDoesObjectMatch
#define WPHtml_wpIdentify WPObject_wpIdentify
#define WPHtml_wpIsDeleteable WPObject_wpIsDeleteable
#define WPHtml_wpAddObjectGeneralPage WPObject_wpAddObjectGeneralPage
#define WPHtml_wpAddObjectGeneralPage2 WPObject_wpAddObjectGeneralPage2
#define WPHtml_wpAddToObjUseList WPObject_wpAddToObjUseList
#define WPHtml_wpAllocMem WPObject_wpAllocMem
#define WPHtml_wpAssertObjectMutexSem WPObject_wpAssertObjectMutexSem
#define WPHtml_wpClose WPObject_wpClose
#define WPHtml_wpCnrInsertObject WPObject_wpCnrInsertObject
#define WPHtml_wpCnrRemoveObject WPObject_wpCnrRemoveObject
#define WPHtml_wpCnrSetEmphasis WPObject_wpCnrSetEmphasis
#define WPHtml_wpConfirmDelete WPObject_wpConfirmDelete
#define WPHtml_wpConfirmObjectTitle WPObject_wpConfirmObjectTitle
#define WPHtml_wpCopiedFromTemplate WPObject_wpCopiedFromTemplate
#define WPHtml_wpCreateShadowObject WPObject_wpCreateShadowObject
#define WPHtml_wpDelete WPObject_wpDelete
#define WPHtml_wpDeleteFromObjUseList WPObject_wpDeleteFromObjUseList
#define WPHtml_wpDisplayHelp WPObject_wpDisplayHelp
#define WPHtml_wpDisplayMenu WPObject_wpDisplayMenu
#define WPHtml_wpDrop WPObject_wpDrop
#define WPHtml_wpEndConversation WPObject_wpEndConversation
#define WPHtml_wpFilterPopupMenu WPObject_wpFilterPopupMenu
#define WPHtml_wpFindUseItem WPObject_wpFindUseItem
#define WPHtml_wpFree WPObject_wpFree
#define WPHtml_wpFreeMem WPObject_wpFreeMem
#define WPHtml_wpHide WPObject_wpHide
#define WPHtml_wpInsertPopupMenuItems WPObject_wpInsertPopupMenuItems
#define WPHtml_wpInsertMenuItems WPObject_wpInsertMenuItems
#define WPHtml_wpInsertSettingsPage WPObject_wpInsertSettingsPage
#define WPHtml_wpModifyPopupMenu WPObject_wpModifyPopupMenu
#define WPHtml_wpQueryConcurrentView WPObject_wpQueryConcurrentView
#define WPHtml_wpQueryButtonAppearance WPObject_wpQueryButtonAppearance
#define WPHtml_wpQueryConfirmations WPObject_wpQueryConfirmations
#define WPHtml_wpQueryDefaultView WPObject_wpQueryDefaultView
#define WPHtml_wpQueryError WPObject_wpQueryError
#define WPHtml_wpSetFolder WPObject_wpSetFolder
#define WPHtml_wpQueryFolder WPObject_wpQueryFolder
#define WPHtml_wpQueryMinWindow WPObject_wpQueryMinWindow
#define WPHtml_wpSetTaskRec WPObject_wpSetTaskRec
#define WPHtml_wpFindTaskRec WPObject_wpFindTaskRec
#define WPHtml_wpQueryTitle WPObject_wpQueryTitle
#define WPHtml_wpRegisterView WPObject_wpRegisterView
#define WPHtml_wpReleaseObjectMutexSem WPObject_wpReleaseObjectMutexSem
#define WPHtml_wpRenderComplete WPObject_wpRenderComplete
#define WPHtml_wpRequestObjectMutexSem WPObject_wpRequestObjectMutexSem
#define WPHtml_wpRestore WPObject_wpRestore
#define WPHtml_wpRestoreData WPObject_wpRestoreData
#define WPHtml_wpRestoreLong WPObject_wpRestoreLong
#define WPHtml_wpRestoreString WPObject_wpRestoreString
#define WPHtml_wpSaveData WPObject_wpSaveData
#define WPHtml_wpSaveDeferred WPObject_wpSaveDeferred
#define WPHtml_wpSaveLong WPObject_wpSaveLong
#define WPHtml_wpSaveString WPObject_wpSaveString
#define WPHtml_wpScanSetupString WPObject_wpScanSetupString
#define WPHtml_wpSetConcurrentView WPObject_wpSetConcurrentView
#define WPHtml_wpSetButtonAppearance WPObject_wpSetButtonAppearance
#define WPHtml_wpSetDefaultHelp WPObject_wpSetDefaultHelp
#define WPHtml_wpSetError WPObject_wpSetError
#define WPHtml_wpQueryScreenGroupID WPObject_wpQueryScreenGroupID
#define WPHtml_wpSetIcon WPObject_wpSetIcon
#define WPHtml_wpSetMinWindow WPObject_wpSetMinWindow
#define WPHtml_wpModifyStyle WPObject_wpModifyStyle
#define WPHtml_wpQueryTrueStyle WPObject_wpQueryTrueStyle
#define WPHtml_wpUnlockObject WPObject_wpUnlockObject
#define WPHtml_wpObjectReady WPObject_wpObjectReady
#define WPHtml_wpIsObjectInitialized WPObject_wpIsObjectInitialized
#define WPHtml_wpCreateShadowObjectExt WPObject_wpCreateShadowObjectExt
#define WPHtml_wpCnrDeleteUseItem WPObject_wpCnrDeleteUseItem
#define WPHtml_wpQueryCoreRecord WPObject_wpQueryCoreRecord
#define WPHtml_wpSetObjectID WPObject_wpSetObjectID
#define WPHtml_wpQueryObjectID WPObject_wpQueryObjectID
#define WPHtml_wpSetDefaultIconPos WPObject_wpSetDefaultIconPos
#define WPHtml_wpQueryDefaultIconPos WPObject_wpQueryDefaultIconPos
#define WPHtml_wpCnrRefreshDetails WPObject_wpCnrRefreshDetails
#define WPHtml_wpFindViewItem WPObject_wpFindViewItem
#define WPHtml_wpLockObject WPObject_wpLockObject
#define WPHtml_wpIsLocked WPObject_wpIsLocked
#define WPHtml_wpQueryContainerFlagPtr WPObject_wpQueryContainerFlagPtr
#define WPHtml_wpWaitForClose WPObject_wpWaitForClose
#define WPHtml_wpSetMenuStyle WPObject_wpSetMenuStyle
#define WPHtml_wpQueryMenuStyle WPObject_wpQueryMenuStyle
#define WPHtml_wpSetStyle WPObject_wpSetStyle
#define WPHtml_somInit SOMObject_somInit
#define WPHtml_somUninit SOMObject_somUninit
#define WPHtml_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define WPHtml_somDefaultAssign SOMObject_somDefaultAssign
#define WPHtml_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define WPHtml_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define WPHtml_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define WPHtml_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define WPHtml_somDefaultVAssign SOMObject_somDefaultVAssign
#define WPHtml_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define WPHtml_somFree SOMObject_somFree
#define WPHtml_somGetClass SOMObject_somGetClass
#define WPHtml_somGetClassName SOMObject_somGetClassName
#define WPHtml_somGetSize SOMObject_somGetSize
#define WPHtml_somIsA SOMObject_somIsA
#define WPHtml_somIsInstanceOf SOMObject_somIsInstanceOf
#define WPHtml_somRespondsTo SOMObject_somRespondsTo
#define WPHtml_somDispatch SOMObject_somDispatch
#define WPHtml_somClassDispatch SOMObject_somClassDispatch
#define WPHtml_somCastObj SOMObject_somCastObj
#define WPHtml_somResetObj SOMObject_somResetObj
#define WPHtml_somDispatchV SOMObject_somDispatchV
#define WPHtml_somDispatchL SOMObject_somDispatchL
#define WPHtml_somDispatchA SOMObject_somDispatchA
#define WPHtml_somDispatchD SOMObject_somDispatchD
#define WPHtml_somPrintSelf SOMObject_somPrintSelf
#define WPHtml_somDumpSelf SOMObject_somDumpSelf
#define WPHtml_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_WPHtml_h */

#ifndef SOM_M_WPHtml_h
#define SOM_M_WPHtml_h


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
#ifndef M_WPHtml
#define M_WPHtml SOMObject
#endif
#include <wpdataf.h>

/*
 * Start of bindings for IDL types
 */


/*
 * End of bindings for IDL types.
 */

#define M_WPHtml_MajorVersion 1
#define M_WPHtml_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define M_WPHtmlNewClass htmlM_c
#pragma linkage(htmlM_c, system)
#define M_WPHtmlClassData htmlM_d
#define M_WPHtmlCClassData htmlM_x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define M_WPHtml_classObj M_WPHtmlClassData.classObject
#define _M_WPHtml M_WPHtml_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK M_WPHtmlNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(M_WPHtmlNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct M_WPHtmlClassDataStructure {
	SOMClass *classObject;
} SOMDLINK M_WPHtmlClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct M_WPHtmlCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK M_WPHtmlCClassData;

/*
 * New and Renew macros for M_WPHtml
 */
#define M_WPHtmlNew() \
   ( _M_WPHtml ? \
	_somNew(_M_WPHtml) \
	: ( M_WPHtmlNewClass(\
		M_WPHtml_MajorVersion, \
		M_WPHtml_MinorVersion),\
	   _somNew(_M_WPHtml)))
#define M_WPHtmlRenew(buf) \
   ( _M_WPHtml ? \
	_somRenew(_M_WPHtml, buf) \
	: ( M_WPHtmlNewClass(\
		M_WPHtml_MajorVersion, \
		M_WPHtml_MinorVersion),\
	   _somRenew(_M_WPHtml, buf)))

/*
 * Override method: wpclsInitData
 */
#define M_WPHtml_wpclsInitData(somSelf) \
	M_WPObject_wpclsInitData(somSelf)

/*
 * Override method: wpclsQueryDefaultHelp
 */
#define M_WPHtml_wpclsQueryDefaultHelp(somSelf,pHelpPanelId,pszHelpLibrary) \
	M_WPObject_wpclsQueryDefaultHelp(somSelf,pHelpPanelId,pszHelpLibrary)

/*
 * Override method: wpclsQueryTitle
 */
#define M_WPHtml_wpclsQueryTitle(somSelf) \
	M_WPObject_wpclsQueryTitle(somSelf)

/*
 * Override method: wpclsQueryStyle
 */
#define M_WPHtml_wpclsQueryStyle(somSelf) \
	M_WPObject_wpclsQueryStyle(somSelf)

/*
 * Override method: wpclsQueryInstanceFilter
 */
#define M_WPHtml_wpclsQueryInstanceFilter(somSelf) \
	M_WPFileSystem_wpclsQueryInstanceFilter(somSelf)

/*
 * Override method: wpclsQueryInstanceType
 */
#define M_WPHtml_wpclsQueryInstanceType(somSelf) \
	M_WPFileSystem_wpclsQueryInstanceType(somSelf)

/*
 * Override method: wpclsCreateDefaultTemplates
 */
#define M_WPHtml_wpclsCreateDefaultTemplates(somSelf,Folder) \
	M_WPObject_wpclsCreateDefaultTemplates(somSelf,Folder)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define M_WPHtml_wpclsAddClipboardAssoc M_WPDataFile_wpclsAddClipboardAssoc
#define M_WPHtml_wpclsEnumClipboardClasses M_WPDataFile_wpclsEnumClipboardClasses
#define M_WPHtml_wpclsQueryIconData M_WPObject_wpclsQueryIconData
#define M_WPHtml_wpclsQueryDefaultView M_WPObject_wpclsQueryDefaultView
#define M_WPHtml_wpclsUnInitData M_WPObject_wpclsUnInitData
#define M_WPHtml_wpclsQuerySettingsPageSize M_WPObject_wpclsQuerySettingsPageSize
#define M_WPHtml_wpclsQueryAwakeObject M_WPFileSystem_wpclsQueryAwakeObject
#define M_WPHtml_wpclsFileSysExists M_WPFileSystem_wpclsFileSysExists
#define M_WPHtml_wpclsQueryObjectFromPath M_WPFileSystem_wpclsQueryObjectFromPath
#define M_WPHtml_wpclsQueryInstanceClass M_WPFileSystem_wpclsQueryInstanceClass
#define M_WPHtml_wpclsQueryDetailsInfo M_WPObject_wpclsQueryDetailsInfo
#define M_WPHtml_wpclsQuerySearchInfo M_WPObject_wpclsQuerySearchInfo
#define M_WPHtml_wpclsQueryExtendedCriteria M_WPObject_wpclsQueryExtendedCriteria
#define M_WPHtml_wpclsNew M_WPObject_wpclsNew
#define M_WPHtml_wpclsObjectFromHandle M_WPObject_wpclsObjectFromHandle
#define M_WPHtml_wpclsMakeAwake M_WPObject_wpclsMakeAwake
#define M_WPHtml_wpclsQueryDetails M_WPObject_wpclsQueryDetails
#define M_WPHtml_wpclsQueryFolder M_WPObject_wpclsQueryFolder
#define M_WPHtml_wpclsQueryIcon M_WPObject_wpclsQueryIcon
#define M_WPHtml_wpclsFindObjectFirst M_WPObject_wpclsFindObjectFirst
#define M_WPHtml_wpclsFindObjectNext M_WPObject_wpclsFindObjectNext
#define M_WPHtml_wpclsFindObjectEnd M_WPObject_wpclsFindObjectEnd
#define M_WPHtml_wpclsSetError M_WPObject_wpclsSetError
#define M_WPHtml_wpclsQueryError M_WPObject_wpclsQueryError
#define M_WPHtml_wpclsQueryObject M_WPObject_wpclsQueryObject
#define M_WPHtml_wpclsQueryButtonAppearance M_WPObject_wpclsQueryButtonAppearance
#define M_WPHtml_wpclsDecUsage M_WPObject_wpclsDecUsage
#define M_WPHtml_wpclsIncUsage M_WPObject_wpclsIncUsage
#define M_WPHtml_wpclsInsertMultipleObjects M_WPObject_wpclsInsertMultipleObjects
#define M_WPHtml_wpclsFindOneObject M_WPObject_wpclsFindOneObject
#define M_WPHtml_wpclsSetSettingsPageSize M_WPObject_wpclsSetSettingsPageSize
#define M_WPHtml_wpclsSetIconData M_WPObject_wpclsSetIconData
#define M_WPHtml_wpclsSetIcon M_WPObject_wpclsSetIcon
#define M_WPHtml_wpclsRemoveObjects M_WPObject_wpclsRemoveObjects
#define M_WPHtml_somUninit SOMObject_somUninit
#define M_WPHtml_somClassReady SOMClass_somClassReady
#define M_WPHtml_somNew SOMClass_somNew
#define M_WPHtml_somRenew SOMClass_somRenew
#define M_WPHtml__get_somDataAlignment SOMClass__get_somDataAlignment
#define M_WPHtml__get_somInstanceDataOffsets SOMClass__get_somInstanceDataOffsets
#define M_WPHtml__get_somDirectInitClasses SOMClass__get_somDirectInitClasses
#define M_WPHtml__set_somDirectInitClasses SOMClass__set_somDirectInitClasses
#define M_WPHtml_somNewNoInit SOMClass_somNewNoInit
#define M_WPHtml_somRenewNoInit SOMClass_somRenewNoInit
#define M_WPHtml_somRenewNoZero SOMClass_somRenewNoZero
#define M_WPHtml_somRenewNoInitNoZero SOMClass_somRenewNoInitNoZero
#define M_WPHtml_somAllocate SOMClass_somAllocate
#define M_WPHtml_somDeallocate SOMClass_somDeallocate
#define M_WPHtml__get_somClassAllocate SOMClass__get_somClassAllocate
#define M_WPHtml__get_somClassDeallocate SOMClass__get_somClassDeallocate
#define M_WPHtml_somGetInstanceInitMask SOMClass_somGetInstanceInitMask
#define M_WPHtml_somGetInstanceDestructionMask SOMClass_somGetInstanceDestructionMask
#define M_WPHtml_somGetInstanceAssignmentMask SOMClass_somGetInstanceAssignmentMask
#define M_WPHtml_somInitClass SOMClass_somInitClass
#define M_WPHtml_somInitMIClass SOMClass_somInitMIClass
#define M_WPHtml_somAddStaticMethod SOMClass_somAddStaticMethod
#define M_WPHtml_somAddDynamicMethod SOMClass_somAddDynamicMethod
#define M_WPHtml_somOverrideSMethod SOMClass_somOverrideSMethod
#define M_WPHtml_somGetApplyStub SOMClass_somGetApplyStub
#define M_WPHtml_somGetClassData SOMClass_somGetClassData
#define M_WPHtml_somSetClassData SOMClass_somSetClassData
#define M_WPHtml_somGetClassMtab SOMClass_somGetClassMtab
#define M_WPHtml_somGetInstanceOffset SOMClass_somGetInstanceOffset
#define M_WPHtml_somGetInstancePartSize SOMClass_somGetInstancePartSize
#define M_WPHtml_somGetInstanceSize SOMClass_somGetInstanceSize
#define M_WPHtml_somGetInstanceToken SOMClass_somGetInstanceToken
#define M_WPHtml_somGetMemberToken SOMClass_somGetMemberToken
#define M_WPHtml_somGetMethodData SOMClass_somGetMethodData
#define M_WPHtml_somGetRdStub SOMClass_somGetRdStub
#define M_WPHtml_somGetMethodDescriptor SOMClass_somGetMethodDescriptor
#define M_WPHtml_somGetMethodIndex SOMClass_somGetMethodIndex
#define M_WPHtml_somGetMethodToken SOMClass_somGetMethodToken
#define M_WPHtml_somGetName SOMClass_somGetName
#define M_WPHtml_somGetNthMethodData SOMClass_somGetNthMethodData
#define M_WPHtml_somGetNthMethodInfo SOMClass_somGetNthMethodInfo
#define M_WPHtml_somGetNumMethods SOMClass_somGetNumMethods
#define M_WPHtml_somGetNumStaticMethods SOMClass_somGetNumStaticMethods
#define M_WPHtml_somGetParent SOMClass_somGetParent
#define M_WPHtml_somGetParents SOMClass_somGetParents
#define M_WPHtml_somGetPClsMtab SOMClass_somGetPClsMtab
#define M_WPHtml_somGetPClsMtabs SOMClass_somGetPClsMtabs
#define M_WPHtml_somGetVersionNumbers SOMClass_somGetVersionNumbers
#define M_WPHtml_somSetMethodDescriptor SOMClass_somSetMethodDescriptor
#define M_WPHtml_somFindMethod SOMClass_somFindMethod
#define M_WPHtml_somFindMethodOk SOMClass_somFindMethodOk
#define M_WPHtml_somFindSMethod SOMClass_somFindSMethod
#define M_WPHtml_somFindSMethodOk SOMClass_somFindSMethodOk
#define M_WPHtml_somLookupMethod SOMClass_somLookupMethod
#define M_WPHtml_somCheckVersion SOMClass_somCheckVersion
#define M_WPHtml_somDescendedFrom SOMClass_somDescendedFrom
#define M_WPHtml_somSupportsMethod SOMClass_somSupportsMethod
#define M_WPHtml_somDefinedMethod SOMClass_somDefinedMethod
#define M_WPHtml_somOverrideMtab SOMClass_somOverrideMtab
#define M_WPHtml_somDefaultInit SOMObject_somDefaultInit
#define M_WPHtml_somDestruct SOMObject_somDestruct
#define M_WPHtml_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define M_WPHtml_somDefaultAssign SOMObject_somDefaultAssign
#define M_WPHtml_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define M_WPHtml_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define M_WPHtml_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define M_WPHtml_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define M_WPHtml_somDefaultVAssign SOMObject_somDefaultVAssign
#define M_WPHtml_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define M_WPHtml_somInit SOMObject_somInit
#define M_WPHtml_somFree SOMObject_somFree
#define M_WPHtml_somGetClass SOMObject_somGetClass
#define M_WPHtml_somGetClassName SOMObject_somGetClassName
#define M_WPHtml_somGetSize SOMObject_somGetSize
#define M_WPHtml_somIsA SOMObject_somIsA
#define M_WPHtml_somIsInstanceOf SOMObject_somIsInstanceOf
#define M_WPHtml_somRespondsTo SOMObject_somRespondsTo
#define M_WPHtml_somDispatch SOMObject_somDispatch
#define M_WPHtml_somClassDispatch SOMObject_somClassDispatch
#define M_WPHtml_somCastObj SOMObject_somCastObj
#define M_WPHtml_somResetObj SOMObject_somResetObj
#define M_WPHtml_somDispatchV SOMObject_somDispatchV
#define M_WPHtml_somDispatchL SOMObject_somDispatchL
#define M_WPHtml_somDispatchA SOMObject_somDispatchA
#define M_WPHtml_somDispatchD SOMObject_somDispatchD
#define M_WPHtml_somPrintSelf SOMObject_somPrintSelf
#define M_WPHtml_somDumpSelf SOMObject_somDumpSelf
#define M_WPHtml_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_M_WPHtml_h */
