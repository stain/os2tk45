
/*
 * This file was generated by the SOM Compiler.
 * FileName: G:\cwpsh\rel\os2c\include\base\os2\wpclock.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.14
 *     SOM Emitter emith: 2.43
 */

/*
 *   Module Header
 * 
 *   Module Name: WPCLOCK
 * 
 *   OS/2 Presentation Manager Workplace class definitions
 * 
 *   Copyright (c) International Business Machines Corporation 1991, 1992
 * 
 */


#ifndef SOM_WPClock_h
#define SOM_WPClock_h


/*
 * Passthru lines: File: "C.h", "before"
 */

     /* None right now */

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
#ifndef WPClock
#define WPClock SOMObject
#endif
#include <wpabs.h>

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
#ifndef M_WPAbstract
    #define M_WPAbstract SOMObject
#endif /* M_WPAbstract */
#ifndef M_WPClock
    #define M_WPClock SOMObject
#endif /* M_WPClock */

/*
 * End of bindings for IDL types.
 */

#define WPClock_MajorVersion 1
#define WPClock_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define WPClockNewClass WPclkc
#pragma linkage(WPclkc, system)
#define WPClockClassData WPclkd
#define WPClockCClassData WPclkx
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */

/*
 * Include the meta class file
 */
#include <wpclock.h>
/*--------------Migration------------*/
#define WPClock_classObj WPClockClassData.classObject
#define _WPClock WPClock_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK WPClockNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(WPClockNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct WPClockClassDataStructure {
	SOMClass *classObject;
	somMToken wpAddClockView1Page;
	somMToken wpAddClockView2Page;
	somMToken wpAddClockDateTimePage;
	somMToken wpAddClockAlarmPage;
} SOMDLINK WPClockClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct WPClockCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK WPClockCClassData;

/*
 * New and Renew macros for WPClock
 */
#define WPClockNew() \
   ( _WPClock ? \
	_somNew(_WPClock) \
	: ( WPClockNewClass(\
		WPClock_MajorVersion, \
		WPClock_MinorVersion),\
	   _somNew(_WPClock)))
#define WPClockRenew(buf) \
   ( _WPClock ? \
	_somRenew(_WPClock, buf) \
	: ( WPClockNewClass(\
		WPClock_MajorVersion, \
		WPClock_MinorVersion),\
	   _somRenew(_WPClock, buf)))

/*
 * Override method: wpAddSettingsPages
 */
#define WPClock_wpAddSettingsPages(somSelf,hwndNotebook) \
	WPObject_wpAddSettingsPages(somSelf,hwndNotebook)

/*
 * Override method: wpOpen
 */
#define WPClock_wpOpen(somSelf,hwndCnr,ulView,param) \
	WPObject_wpOpen(somSelf,hwndCnr,ulView,param)

/*
 * Override method: wpMenuItemSelected
 */
#define WPClock_wpMenuItemSelected(somSelf,hwndFrame,ulMenuId) \
	WPObject_wpMenuItemSelected(somSelf,hwndFrame,ulMenuId)

/*
 * Override method: wpSaveState
 */
#define WPClock_wpSaveState(somSelf) \
	WPObject_wpSaveState(somSelf)

/*
 * Override method: wpRestoreState
 */
#define WPClock_wpRestoreState(somSelf,ulReserved) \
	WPObject_wpRestoreState(somSelf,ulReserved)

/*
 * Override method: wpMenuItemHelpSelected
 */
#define WPClock_wpMenuItemHelpSelected(somSelf,MenuId) \
	WPObject_wpMenuItemHelpSelected(somSelf,MenuId)

/*
 * Override method: wpAddObjectWindowPage
 */
#define WPClock_wpAddObjectWindowPage(somSelf,hwndNotebook) \
	WPObject_wpAddObjectWindowPage(somSelf,hwndNotebook)

/*
 * Override method: wpFilterMenu
 */
#define WPClock_wpFilterMenu(somSelf,pFlags,hwndCnr,fMultiSelect,ulMenuType,ulView,ulReserved) \
	WPObject_wpFilterMenu(somSelf,pFlags,hwndCnr,fMultiSelect,ulMenuType,ulView,ulReserved)

/*
 * Override method: wpModifyMenu
 */
#define WPClock_wpModifyMenu(somSelf,hwndMenu,hwndCnr,iPosition,ulMenuType,ulView,ulReserved) \
	WPObject_wpModifyMenu(somSelf,hwndMenu,hwndCnr,iPosition,ulMenuType,ulView,ulReserved)

/*
 * Override method: somDefaultInit
 */
#define WPClock_somDefaultInit(somSelf,ctrl) \
	SOMObject_somDefaultInit(somSelf,ctrl)

/*
 * Override method: somDestruct
 */
#define WPClock_somDestruct(somSelf,doFree,ctrl) \
	SOMObject_somDestruct(somSelf,doFree,ctrl)

/*
 * New Method: wpAddClockView1Page
 */
typedef ULONG   SOMLINK somTP_WPClock_wpAddClockView1Page(WPClock *somSelf, 
		HWND hwndNotebook);
#pragma linkage(somTP_WPClock_wpAddClockView1Page, system)
typedef somTP_WPClock_wpAddClockView1Page *somTD_WPClock_wpAddClockView1Page;
#define somMD_WPClock_wpAddClockView1Page "::WPClock::wpAddClockView1Page"
#define WPClock_wpAddClockView1Page(somSelf,hwndNotebook) \
    (SOM_Resolve(somSelf, WPClock, wpAddClockView1Page) \
	(somSelf,hwndNotebook))
#ifndef SOMGD_wpAddClockView1Page
    #if (defined(_wpAddClockView1Page) || defined(__wpAddClockView1Page))
        #undef _wpAddClockView1Page
        #undef __wpAddClockView1Page
        #define SOMGD_wpAddClockView1Page 1
    #else
        #define _wpAddClockView1Page WPClock_wpAddClockView1Page
    #endif /* _wpAddClockView1Page */
#endif /* SOMGD_wpAddClockView1Page */

/*
 * New Method: wpAddClockView2Page
 */
typedef ULONG   SOMLINK somTP_WPClock_wpAddClockView2Page(WPClock *somSelf, 
		HWND hwndNotebook);
#pragma linkage(somTP_WPClock_wpAddClockView2Page, system)
typedef somTP_WPClock_wpAddClockView2Page *somTD_WPClock_wpAddClockView2Page;
#define somMD_WPClock_wpAddClockView2Page "::WPClock::wpAddClockView2Page"
#define WPClock_wpAddClockView2Page(somSelf,hwndNotebook) \
    (SOM_Resolve(somSelf, WPClock, wpAddClockView2Page) \
	(somSelf,hwndNotebook))
#ifndef SOMGD_wpAddClockView2Page
    #if (defined(_wpAddClockView2Page) || defined(__wpAddClockView2Page))
        #undef _wpAddClockView2Page
        #undef __wpAddClockView2Page
        #define SOMGD_wpAddClockView2Page 1
    #else
        #define _wpAddClockView2Page WPClock_wpAddClockView2Page
    #endif /* _wpAddClockView2Page */
#endif /* SOMGD_wpAddClockView2Page */

/*
 * New Method: wpAddClockDateTimePage
 */
typedef ULONG   SOMLINK somTP_WPClock_wpAddClockDateTimePage(WPClock *somSelf, 
		HWND hwndNotebook);
#pragma linkage(somTP_WPClock_wpAddClockDateTimePage, system)
typedef somTP_WPClock_wpAddClockDateTimePage *somTD_WPClock_wpAddClockDateTimePage;
#define somMD_WPClock_wpAddClockDateTimePage "::WPClock::wpAddClockDateTimePage"
#define WPClock_wpAddClockDateTimePage(somSelf,hwndNotebook) \
    (SOM_Resolve(somSelf, WPClock, wpAddClockDateTimePage) \
	(somSelf,hwndNotebook))
#ifndef SOMGD_wpAddClockDateTimePage
    #if (defined(_wpAddClockDateTimePage) || defined(__wpAddClockDateTimePage))
        #undef _wpAddClockDateTimePage
        #undef __wpAddClockDateTimePage
        #define SOMGD_wpAddClockDateTimePage 1
    #else
        #define _wpAddClockDateTimePage WPClock_wpAddClockDateTimePage
    #endif /* _wpAddClockDateTimePage */
#endif /* SOMGD_wpAddClockDateTimePage */

/*
 * New Method: wpAddClockAlarmPage
 */
typedef ULONG   SOMLINK somTP_WPClock_wpAddClockAlarmPage(WPClock *somSelf, 
		HWND hwndNotebook);
#pragma linkage(somTP_WPClock_wpAddClockAlarmPage, system)
typedef somTP_WPClock_wpAddClockAlarmPage *somTD_WPClock_wpAddClockAlarmPage;
#define somMD_WPClock_wpAddClockAlarmPage "::WPClock::wpAddClockAlarmPage"
#define WPClock_wpAddClockAlarmPage(somSelf,hwndNotebook) \
    (SOM_Resolve(somSelf, WPClock, wpAddClockAlarmPage) \
	(somSelf,hwndNotebook))
#ifndef SOMGD_wpAddClockAlarmPage
    #if (defined(_wpAddClockAlarmPage) || defined(__wpAddClockAlarmPage))
        #undef _wpAddClockAlarmPage
        #undef __wpAddClockAlarmPage
        #define SOMGD_wpAddClockAlarmPage 1
    #else
        #define _wpAddClockAlarmPage WPClock_wpAddClockAlarmPage
    #endif /* _wpAddClockAlarmPage */
#endif /* SOMGD_wpAddClockAlarmPage */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define WPClock_wpQueryHandle WPObject_wpQueryHandle
#define WPClock_wpSaveImmediate WPObject_wpSaveImmediate
#define WPClock_wpSetTitle WPObject_wpSetTitle
#define WPClock_wpCopyObject WPObject_wpCopyObject
#define WPClock_wpMoveObject WPObject_wpMoveObject
#define WPClock_wpQueryIcon WPObject_wpQueryIcon
#define WPClock_wpQueryIconData WPObject_wpQueryIconData
#define WPClock_wpSetIconData WPObject_wpSetIconData
#define WPClock_wpDragOver WPObject_wpDragOver
#define WPClock_wpReplaceObject WPObject_wpReplaceObject
#define WPClock_wpQueryNameClashOptions WPObject_wpQueryNameClashOptions
#define WPClock_wpIdentify WPObject_wpIdentify
#define WPClock_wpAddObjectGeneralPage WPObject_wpAddObjectGeneralPage
#define WPClock_wpAddObjectGeneralPage2 WPObject_wpAddObjectGeneralPage2
#define WPClock_wpAddToObjUseList WPObject_wpAddToObjUseList
#define WPClock_wpAllocMem WPObject_wpAllocMem
#define WPClock_wpAppendObject WPObject_wpAppendObject
#define WPClock_wpAssertObjectMutexSem WPObject_wpAssertObjectMutexSem
#define WPClock_wpClose WPObject_wpClose
#define WPClock_wpCnrInsertObject WPObject_wpCnrInsertObject
#define WPClock_wpCnrRemoveObject WPObject_wpCnrRemoveObject
#define WPClock_wpCnrSetEmphasis WPObject_wpCnrSetEmphasis
#define WPClock_wpConfirmDelete WPObject_wpConfirmDelete
#define WPClock_wpConfirmObjectTitle WPObject_wpConfirmObjectTitle
#define WPClock_wpCopiedFromTemplate WPObject_wpCopiedFromTemplate
#define WPClock_wpCreateAnother WPObject_wpCreateAnother
#define WPClock_wpCreateFromTemplate WPObject_wpCreateFromTemplate
#define WPClock_wpCreateShadowObject WPObject_wpCreateShadowObject
#define WPClock_wpDelete WPObject_wpDelete
#define WPClock_wpDeleteFromObjUseList WPObject_wpDeleteFromObjUseList
#define WPClock_wpDisplayHelp WPObject_wpDisplayHelp
#define WPClock_wpDisplayMenu WPObject_wpDisplayMenu
#define WPClock_wpDoesObjectMatch WPObject_wpDoesObjectMatch
#define WPClock_wpDraggedOverObject WPObject_wpDraggedOverObject
#define WPClock_wpDrop WPObject_wpDrop
#define WPClock_wpDroppedOnObject WPObject_wpDroppedOnObject
#define WPClock_wpEndConversation WPObject_wpEndConversation
#define WPClock_wpFilterPopupMenu WPObject_wpFilterPopupMenu
#define WPClock_wpFindUseItem WPObject_wpFindUseItem
#define WPClock_wpFormatDragItem WPObject_wpFormatDragItem
#define WPClock_wpFree WPObject_wpFree
#define WPClock_wpFreeMem WPObject_wpFreeMem
#define WPClock_wpHide WPObject_wpHide
#define WPClock_wpInitData WPObject_wpInitData
#define WPClock_wpInsertPopupMenuItems WPObject_wpInsertPopupMenuItems
#define WPClock_wpInsertMenuItems WPObject_wpInsertMenuItems
#define WPClock_wpInsertSettingsPage WPObject_wpInsertSettingsPage
#define WPClock_wpModifyPopupMenu WPObject_wpModifyPopupMenu
#define WPClock_wpPrintObject WPObject_wpPrintObject
#define WPClock_wpQueryConcurrentView WPObject_wpQueryConcurrentView
#define WPClock_wpQueryButtonAppearance WPObject_wpQueryButtonAppearance
#define WPClock_wpQueryConfirmations WPObject_wpQueryConfirmations
#define WPClock_wpQueryDefaultHelp WPObject_wpQueryDefaultHelp
#define WPClock_wpQueryDefaultView WPObject_wpQueryDefaultView
#define WPClock_wpQueryDetailsData WPObject_wpQueryDetailsData
#define WPClock_wpQueryError WPObject_wpQueryError
#define WPClock_wpSetFolder WPObject_wpSetFolder
#define WPClock_wpQueryFolder WPObject_wpQueryFolder
#define WPClock_wpQueryMinWindow WPObject_wpQueryMinWindow
#define WPClock_wpQueryStyle WPObject_wpQueryStyle
#define WPClock_wpSetTaskRec WPObject_wpSetTaskRec
#define WPClock_wpFindTaskRec WPObject_wpFindTaskRec
#define WPClock_wpQueryTitle WPObject_wpQueryTitle
#define WPClock_wpRegisterView WPObject_wpRegisterView
#define WPClock_wpReleaseObjectMutexSem WPObject_wpReleaseObjectMutexSem
#define WPClock_wpRender WPObject_wpRender
#define WPClock_wpRenderComplete WPObject_wpRenderComplete
#define WPClock_wpRequestObjectMutexSem WPObject_wpRequestObjectMutexSem
#define WPClock_wpRestore WPObject_wpRestore
#define WPClock_wpRestoreData WPObject_wpRestoreData
#define WPClock_wpRestoreLong WPObject_wpRestoreLong
#define WPClock_wpRestoreString WPObject_wpRestoreString
#define WPClock_wpSaveData WPObject_wpSaveData
#define WPClock_wpSaveDeferred WPObject_wpSaveDeferred
#define WPClock_wpSaveLong WPObject_wpSaveLong
#define WPClock_wpSaveString WPObject_wpSaveString
#define WPClock_wpScanSetupString WPObject_wpScanSetupString
#define WPClock_wpSetConcurrentView WPObject_wpSetConcurrentView
#define WPClock_wpSetButtonAppearance WPObject_wpSetButtonAppearance
#define WPClock_wpSetDefaultHelp WPObject_wpSetDefaultHelp
#define WPClock_wpSetDefaultView WPObject_wpSetDefaultView
#define WPClock_wpSetError WPObject_wpSetError
#define WPClock_wpQueryScreenGroupID WPObject_wpQueryScreenGroupID
#define WPClock_wpSetupOnce WPObject_wpSetupOnce
#define WPClock_wpSetIcon WPObject_wpSetIcon
#define WPClock_wpSetMinWindow WPObject_wpSetMinWindow
#define WPClock_wpModifyStyle WPObject_wpModifyStyle
#define WPClock_wpSetup WPObject_wpSetup
#define WPClock_wpSwitchTo WPObject_wpSwitchTo
#define WPClock_wpUnInitData WPObject_wpUnInitData
#define WPClock_wpViewObject WPObject_wpViewObject
#define WPClock_wpQueryTrueStyle WPObject_wpQueryTrueStyle
#define WPClock_wpUnlockObject WPObject_wpUnlockObject
#define WPClock_wpObjectReady WPObject_wpObjectReady
#define WPClock_wpIsObjectInitialized WPObject_wpIsObjectInitialized
#define WPClock_wpCreateShadowObjectExt WPObject_wpCreateShadowObjectExt
#define WPClock_wpCnrDeleteUseItem WPObject_wpCnrDeleteUseItem
#define WPClock_wpIsDeleteable WPObject_wpIsDeleteable
#define WPClock_wpQueryCoreRecord WPObject_wpQueryCoreRecord
#define WPClock_wpSetObjectID WPObject_wpSetObjectID
#define WPClock_wpQueryObjectID WPObject_wpQueryObjectID
#define WPClock_wpSetDefaultIconPos WPObject_wpSetDefaultIconPos
#define WPClock_wpQueryDefaultIconPos WPObject_wpQueryDefaultIconPos
#define WPClock_wpCnrRefreshDetails WPObject_wpCnrRefreshDetails
#define WPClock_wpFindViewItem WPObject_wpFindViewItem
#define WPClock_wpLockObject WPObject_wpLockObject
#define WPClock_wpIsLocked WPObject_wpIsLocked
#define WPClock_wpQueryContainerFlagPtr WPObject_wpQueryContainerFlagPtr
#define WPClock_wpWaitForClose WPObject_wpWaitForClose
#define WPClock_wpSetMenuStyle WPObject_wpSetMenuStyle
#define WPClock_wpQueryMenuStyle WPObject_wpQueryMenuStyle
#define WPClock_wpSetStyle WPObject_wpSetStyle
#define WPClock_somInit SOMObject_somInit
#define WPClock_somUninit SOMObject_somUninit
#define WPClock_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define WPClock_somDefaultAssign SOMObject_somDefaultAssign
#define WPClock_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define WPClock_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define WPClock_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define WPClock_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define WPClock_somDefaultVAssign SOMObject_somDefaultVAssign
#define WPClock_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define WPClock_somFree SOMObject_somFree
#define WPClock_somGetClass SOMObject_somGetClass
#define WPClock_somGetClassName SOMObject_somGetClassName
#define WPClock_somGetSize SOMObject_somGetSize
#define WPClock_somIsA SOMObject_somIsA
#define WPClock_somIsInstanceOf SOMObject_somIsInstanceOf
#define WPClock_somRespondsTo SOMObject_somRespondsTo
#define WPClock_somDispatch SOMObject_somDispatch
#define WPClock_somClassDispatch SOMObject_somClassDispatch
#define WPClock_somCastObj SOMObject_somCastObj
#define WPClock_somResetObj SOMObject_somResetObj
#define WPClock_somDispatchV SOMObject_somDispatchV
#define WPClock_somDispatchL SOMObject_somDispatchL
#define WPClock_somDispatchA SOMObject_somDispatchA
#define WPClock_somDispatchD SOMObject_somDispatchD
#define WPClock_somPrintSelf SOMObject_somPrintSelf
#define WPClock_somDumpSelf SOMObject_somDumpSelf
#define WPClock_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_WPClock_h */

#ifndef SOM_M_WPClock_h
#define SOM_M_WPClock_h


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
#ifndef M_WPClock
#define M_WPClock SOMObject
#endif
#include <wpabs.h>

/*
 * Start of bindings for IDL types
 */


/*
 * End of bindings for IDL types.
 */

#define M_WPClock_MajorVersion 1
#define M_WPClock_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define M_WPClockNewClass WPclkc
#pragma linkage(WPclkc, system)
#define M_WPClockClassData WPclkd
#define M_WPClockCClassData WPclkx
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define M_WPClock_classObj M_WPClockClassData.classObject
#define _M_WPClock M_WPClock_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK M_WPClockNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(M_WPClockNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct M_WPClockClassDataStructure {
	SOMClass *classObject;
} SOMDLINK M_WPClockClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct M_WPClockCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK M_WPClockCClassData;

/*
 * New and Renew macros for M_WPClock
 */
#define M_WPClockNew() \
   ( _M_WPClock ? \
	_somNew(_M_WPClock) \
	: ( M_WPClockNewClass(\
		M_WPClock_MajorVersion, \
		M_WPClock_MinorVersion),\
	   _somNew(_M_WPClock)))
#define M_WPClockRenew(buf) \
   ( _M_WPClock ? \
	_somRenew(_M_WPClock, buf) \
	: ( M_WPClockNewClass(\
		M_WPClock_MajorVersion, \
		M_WPClock_MinorVersion),\
	   _somRenew(_M_WPClock, buf)))

/*
 * Override method: wpclsQueryDefaultView
 */
#define M_WPClock_wpclsQueryDefaultView(somSelf) \
	M_WPObject_wpclsQueryDefaultView(somSelf)

/*
 * Override method: wpclsQueryStyle
 */
#define M_WPClock_wpclsQueryStyle(somSelf) \
	M_WPObject_wpclsQueryStyle(somSelf)

/*
 * Override method: wpclsQueryDefaultHelp
 */
#define M_WPClock_wpclsQueryDefaultHelp(somSelf,pHelpPanelId,pszHelpLibrary) \
	M_WPObject_wpclsQueryDefaultHelp(somSelf,pHelpPanelId,pszHelpLibrary)

/*
 * Override method: wpclsQueryTitle
 */
#define M_WPClock_wpclsQueryTitle(somSelf) \
	M_WPObject_wpclsQueryTitle(somSelf)

/*
 * Override method: wpclsQueryIconData
 */
#define M_WPClock_wpclsQueryIconData(somSelf,pIconInfo) \
	M_WPObject_wpclsQueryIconData(somSelf,pIconInfo)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define M_WPClock_wpclsQuerySetting M_WPAbstract_wpclsQuerySetting
#define M_WPClock_wpclsSetSetting M_WPAbstract_wpclsSetSetting
#define M_WPClock_wpclsObjectFromHandle M_WPObject_wpclsObjectFromHandle
#define M_WPClock_wpclsCreateDefaultTemplates M_WPObject_wpclsCreateDefaultTemplates
#define M_WPClock_wpclsInitData M_WPObject_wpclsInitData
#define M_WPClock_wpclsMakeAwake M_WPObject_wpclsMakeAwake
#define M_WPClock_wpclsNew M_WPObject_wpclsNew
#define M_WPClock_wpclsQueryDetails M_WPObject_wpclsQueryDetails
#define M_WPClock_wpclsQueryDetailsInfo M_WPObject_wpclsQueryDetailsInfo
#define M_WPClock_wpclsQueryExtendedCriteria M_WPObject_wpclsQueryExtendedCriteria
#define M_WPClock_wpclsQueryFolder M_WPObject_wpclsQueryFolder
#define M_WPClock_wpclsQueryIcon M_WPObject_wpclsQueryIcon
#define M_WPClock_wpclsQuerySearchInfo M_WPObject_wpclsQuerySearchInfo
#define M_WPClock_wpclsUnInitData M_WPObject_wpclsUnInitData
#define M_WPClock_wpclsFindObjectFirst M_WPObject_wpclsFindObjectFirst
#define M_WPClock_wpclsFindObjectNext M_WPObject_wpclsFindObjectNext
#define M_WPClock_wpclsFindObjectEnd M_WPObject_wpclsFindObjectEnd
#define M_WPClock_wpclsSetError M_WPObject_wpclsSetError
#define M_WPClock_wpclsQueryError M_WPObject_wpclsQueryError
#define M_WPClock_wpclsQuerySettingsPageSize M_WPObject_wpclsQuerySettingsPageSize
#define M_WPClock_wpclsQueryObject M_WPObject_wpclsQueryObject
#define M_WPClock_wpclsQueryButtonAppearance M_WPObject_wpclsQueryButtonAppearance
#define M_WPClock_wpclsDecUsage M_WPObject_wpclsDecUsage
#define M_WPClock_wpclsIncUsage M_WPObject_wpclsIncUsage
#define M_WPClock_wpclsInsertMultipleObjects M_WPObject_wpclsInsertMultipleObjects
#define M_WPClock_wpclsFindOneObject M_WPObject_wpclsFindOneObject
#define M_WPClock_wpclsSetSettingsPageSize M_WPObject_wpclsSetSettingsPageSize
#define M_WPClock_wpclsSetIconData M_WPObject_wpclsSetIconData
#define M_WPClock_wpclsSetIcon M_WPObject_wpclsSetIcon
#define M_WPClock_wpclsRemoveObjects M_WPObject_wpclsRemoveObjects
#define M_WPClock_somUninit SOMObject_somUninit
#define M_WPClock_somClassReady SOMClass_somClassReady
#define M_WPClock_somNew SOMClass_somNew
#define M_WPClock_somRenew SOMClass_somRenew
#define M_WPClock__get_somDataAlignment SOMClass__get_somDataAlignment
#define M_WPClock__get_somInstanceDataOffsets SOMClass__get_somInstanceDataOffsets
#define M_WPClock__get_somDirectInitClasses SOMClass__get_somDirectInitClasses
#define M_WPClock__set_somDirectInitClasses SOMClass__set_somDirectInitClasses
#define M_WPClock_somNewNoInit SOMClass_somNewNoInit
#define M_WPClock_somRenewNoInit SOMClass_somRenewNoInit
#define M_WPClock_somRenewNoZero SOMClass_somRenewNoZero
#define M_WPClock_somRenewNoInitNoZero SOMClass_somRenewNoInitNoZero
#define M_WPClock_somAllocate SOMClass_somAllocate
#define M_WPClock_somDeallocate SOMClass_somDeallocate
#define M_WPClock__get_somClassAllocate SOMClass__get_somClassAllocate
#define M_WPClock__get_somClassDeallocate SOMClass__get_somClassDeallocate
#define M_WPClock_somGetInstanceInitMask SOMClass_somGetInstanceInitMask
#define M_WPClock_somGetInstanceDestructionMask SOMClass_somGetInstanceDestructionMask
#define M_WPClock_somGetInstanceAssignmentMask SOMClass_somGetInstanceAssignmentMask
#define M_WPClock_somInitClass SOMClass_somInitClass
#define M_WPClock_somInitMIClass SOMClass_somInitMIClass
#define M_WPClock_somAddStaticMethod SOMClass_somAddStaticMethod
#define M_WPClock_somAddDynamicMethod SOMClass_somAddDynamicMethod
#define M_WPClock_somOverrideSMethod SOMClass_somOverrideSMethod
#define M_WPClock_somGetApplyStub SOMClass_somGetApplyStub
#define M_WPClock_somGetClassData SOMClass_somGetClassData
#define M_WPClock_somSetClassData SOMClass_somSetClassData
#define M_WPClock_somGetClassMtab SOMClass_somGetClassMtab
#define M_WPClock_somGetInstanceOffset SOMClass_somGetInstanceOffset
#define M_WPClock_somGetInstancePartSize SOMClass_somGetInstancePartSize
#define M_WPClock_somGetInstanceSize SOMClass_somGetInstanceSize
#define M_WPClock_somGetInstanceToken SOMClass_somGetInstanceToken
#define M_WPClock_somGetMemberToken SOMClass_somGetMemberToken
#define M_WPClock_somGetMethodData SOMClass_somGetMethodData
#define M_WPClock_somGetRdStub SOMClass_somGetRdStub
#define M_WPClock_somGetMethodDescriptor SOMClass_somGetMethodDescriptor
#define M_WPClock_somGetMethodIndex SOMClass_somGetMethodIndex
#define M_WPClock_somGetMethodToken SOMClass_somGetMethodToken
#define M_WPClock_somGetName SOMClass_somGetName
#define M_WPClock_somGetNthMethodData SOMClass_somGetNthMethodData
#define M_WPClock_somGetNthMethodInfo SOMClass_somGetNthMethodInfo
#define M_WPClock_somGetNumMethods SOMClass_somGetNumMethods
#define M_WPClock_somGetNumStaticMethods SOMClass_somGetNumStaticMethods
#define M_WPClock_somGetParent SOMClass_somGetParent
#define M_WPClock_somGetParents SOMClass_somGetParents
#define M_WPClock_somGetPClsMtab SOMClass_somGetPClsMtab
#define M_WPClock_somGetPClsMtabs SOMClass_somGetPClsMtabs
#define M_WPClock_somGetVersionNumbers SOMClass_somGetVersionNumbers
#define M_WPClock_somSetMethodDescriptor SOMClass_somSetMethodDescriptor
#define M_WPClock_somFindMethod SOMClass_somFindMethod
#define M_WPClock_somFindMethodOk SOMClass_somFindMethodOk
#define M_WPClock_somFindSMethod SOMClass_somFindSMethod
#define M_WPClock_somFindSMethodOk SOMClass_somFindSMethodOk
#define M_WPClock_somLookupMethod SOMClass_somLookupMethod
#define M_WPClock_somCheckVersion SOMClass_somCheckVersion
#define M_WPClock_somDescendedFrom SOMClass_somDescendedFrom
#define M_WPClock_somSupportsMethod SOMClass_somSupportsMethod
#define M_WPClock_somDefinedMethod SOMClass_somDefinedMethod
#define M_WPClock_somOverrideMtab SOMClass_somOverrideMtab
#define M_WPClock_somDefaultInit SOMObject_somDefaultInit
#define M_WPClock_somDestruct SOMObject_somDestruct
#define M_WPClock_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define M_WPClock_somDefaultAssign SOMObject_somDefaultAssign
#define M_WPClock_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define M_WPClock_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define M_WPClock_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define M_WPClock_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define M_WPClock_somDefaultVAssign SOMObject_somDefaultVAssign
#define M_WPClock_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define M_WPClock_somInit SOMObject_somInit
#define M_WPClock_somFree SOMObject_somFree
#define M_WPClock_somGetClass SOMObject_somGetClass
#define M_WPClock_somGetClassName SOMObject_somGetClassName
#define M_WPClock_somGetSize SOMObject_somGetSize
#define M_WPClock_somIsA SOMObject_somIsA
#define M_WPClock_somIsInstanceOf SOMObject_somIsInstanceOf
#define M_WPClock_somRespondsTo SOMObject_somRespondsTo
#define M_WPClock_somDispatch SOMObject_somDispatch
#define M_WPClock_somClassDispatch SOMObject_somClassDispatch
#define M_WPClock_somCastObj SOMObject_somCastObj
#define M_WPClock_somResetObj SOMObject_somResetObj
#define M_WPClock_somDispatchV SOMObject_somDispatchV
#define M_WPClock_somDispatchL SOMObject_somDispatchL
#define M_WPClock_somDispatchA SOMObject_somDispatchA
#define M_WPClock_somDispatchD SOMObject_somDispatchD
#define M_WPClock_somPrintSelf SOMObject_somPrintSelf
#define M_WPClock_somDumpSelf SOMObject_somDumpSelf
#define M_WPClock_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_M_WPClock_h */
