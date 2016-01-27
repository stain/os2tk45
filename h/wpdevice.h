
/*
 * This file was generated by the SOM Compiler.
 * FileName: G:\cwpsh\rel\os2c\include\base\os2\wpdevice.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.14
 *     SOM Emitter emith: 2.43
 */

/*
 *   Module Header
 * 
 *   Module Name: WPDEVICE
 * 
 *   OS/2 Presentation Manager Workplace class definitions
 * 
 *   Copyright (c) International Business Machines Corporation 1991, 1992
 * 
 */


#ifndef SOM_WPDevice_h
#define SOM_WPDevice_h


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
#ifndef WPDevice
#define WPDevice SOMObject
#endif
#include <wptrans.h>

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

/*
 * End of bindings for IDL types.
 */

#define WPDevice_MajorVersion 1
#define WPDevice_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define WPDeviceNewClass wpdevicec
#pragma linkage(wpdevicec, system)
#define WPDeviceClassData wpdeviced
#define WPDeviceCClassData wpdevicex
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */

/*
 * Include the meta class file
 */
#include <wpdevice.h>
/*--------------Migration------------*/
#define WPDevice_classObj WPDeviceClassData.classObject
#define _WPDevice WPDevice_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK WPDeviceNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(WPDeviceNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct WPDeviceClassDataStructure {
	SOMClass *classObject;
	somMToken wpDevicePrivate1;
	somMToken wpDevicePrivate2;
	somMToken wpDevicePrivate3;
	somMToken wpDevicePrivate4;
	somMToken wpDevicePrivate5;
	somMToken wpDevicePrivate6;
	somMToken wpDevicePrivate7;
	somMToken wpDevicePrivate8;
	somMToken wpDevicePrivate9;
	somMToken wpDevicePrivate10;
	somMToken wpDevicePrivate11;
	somMToken wpDevicePrivate12;
	somMToken wpDevicePrivate13;
	somMToken wpDevicePrivate14;
	somMToken wpDevicePrivate15;
	somMToken wpDevicePrivate16;
	somMToken wpDevicePrivate17;
	somMToken wpDevicePrivate18;
	somMToken wpDevicePrivate19;
	somMToken wpDevicePrivate20;
	somMToken wpDevicePrivate21;
	somMToken wpDevicePrivate22;
	somMToken wpDevicePrivate23;
	somMToken wpDevicePrivate24;
	somMToken wpDevicePrivate25;
	somMToken wpDevicePrivate26;
	somMToken wpDevicePrivate27;
	somMToken wpDevicePrivate28;
	somMToken wpDevicePrivate29;
	somMToken wpDevicePrivate30;
	somMToken wpDevicePrivate31;
	somMToken wpDevicePrivate32;
	somMToken wpDevicePrivate33;
	somMToken wpDevicePrivate34;
	somMToken wpDevicePrivate35;
	somMToken wpDevicePrivate36;
	somMToken wpDevicePrivate37;
	somMToken wpDevicePrivate38;
	somMToken wpDevicePrivate39;
	somMToken wpDevicePrivate40;
	somMToken wpDevicePrivate41;
	somMToken wpDevicePrivate42;
	somMToken wpDevicePrivate43;
	somMToken wpDevicePrivate44;
	somMToken wpDevicePrivate45;
	somMToken wpDevicePrivate46;
	somMToken wpDevicePrivate47;
	somMToken wpDevicePrivate48;
	somMToken wpDevicePrivate49;
	somMToken wpDevicePrivate50;
	somMToken wpDevicePrivate51;
	somMToken wpDevicePrivate52;
	somMToken wpAddDeviceDevice1Page;
	somMToken wpAddDeviceDevice2Page;
	somMToken wpAddDeviceDMA1Page;
	somMToken wpAddDeviceIRQ1Page;
	somMToken wpAddDeviceMemory1Page;
	somMToken wpAddDeviceIO1Page;
} SOMDLINK WPDeviceClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct WPDeviceCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK WPDeviceCClassData;

/*
 * New and Renew macros for WPDevice
 */
#define WPDeviceNew() \
   ( _WPDevice ? \
	_somNew(_WPDevice) \
	: ( WPDeviceNewClass(\
		WPDevice_MajorVersion, \
		WPDevice_MinorVersion),\
	   _somNew(_WPDevice)))
#define WPDeviceRenew(buf) \
   ( _WPDevice ? \
	_somRenew(_WPDevice, buf) \
	: ( WPDeviceNewClass(\
		WPDevice_MajorVersion, \
		WPDevice_MinorVersion),\
	   _somRenew(_WPDevice, buf)))

/*
 * Override method: wpAddSettingsPages
 */
#define WPDevice_wpAddSettingsPages(somSelf,hwndNotebook) \
	WPObject_wpAddSettingsPages(somSelf,hwndNotebook)

/*
 * Override method: wpInitData
 */
#define WPDevice_wpInitData(somSelf) \
	WPObject_wpInitData(somSelf)

/*
 * Override method: wpModifyPopupMenu
 */
#define WPDevice_wpModifyPopupMenu(somSelf,hwndMenu,hwndCnr,iPosition) \
	WPObject_wpModifyPopupMenu(somSelf,hwndMenu,hwndCnr,iPosition)

/*
 * Override method: wpQueryDetailsData
 */
#define WPDevice_wpQueryDetailsData(somSelf,ppDetailsData,pcp) \
	WPObject_wpQueryDetailsData(somSelf,ppDetailsData,pcp)

/*
 * Override method: wpRestoreState
 */
#define WPDevice_wpRestoreState(somSelf,ulReserved) \
	WPObject_wpRestoreState(somSelf,ulReserved)

/*
 * Override method: wpSaveState
 */
#define WPDevice_wpSaveState(somSelf) \
	WPObject_wpSaveState(somSelf)

/*
 * Override method: wpSetup
 */
#define WPDevice_wpSetup(somSelf,pszSetupString) \
	WPObject_wpSetup(somSelf,pszSetupString)

/*
 * Override method: wpUnInitData
 */
#define WPDevice_wpUnInitData(somSelf) \
	WPObject_wpUnInitData(somSelf)

/*
 * Override method: wpCnrInsertObject
 */
#define WPDevice_wpCnrInsertObject(somSelf,hwndCnr,pptlIcon,preccParent,pRecInsert) \
	WPObject_wpCnrInsertObject(somSelf,hwndCnr,pptlIcon,preccParent,pRecInsert)

/*
 * New Method: wpAddDeviceDevice1Page
 */
typedef ULONG   SOMLINK somTP_WPDevice_wpAddDeviceDevice1Page(WPDevice *somSelf, 
		HWND hwndNotebook);
#pragma linkage(somTP_WPDevice_wpAddDeviceDevice1Page, system)
typedef somTP_WPDevice_wpAddDeviceDevice1Page *somTD_WPDevice_wpAddDeviceDevice1Page;
#define somMD_WPDevice_wpAddDeviceDevice1Page "::WPDevice::wpAddDeviceDevice1Page"
#define WPDevice_wpAddDeviceDevice1Page(somSelf,hwndNotebook) \
    (SOM_Resolve(somSelf, WPDevice, wpAddDeviceDevice1Page) \
	(somSelf,hwndNotebook))
#ifndef SOMGD_wpAddDeviceDevice1Page
    #if (defined(_wpAddDeviceDevice1Page) || defined(__wpAddDeviceDevice1Page))
        #undef _wpAddDeviceDevice1Page
        #undef __wpAddDeviceDevice1Page
        #define SOMGD_wpAddDeviceDevice1Page 1
    #else
        #define _wpAddDeviceDevice1Page WPDevice_wpAddDeviceDevice1Page
    #endif /* _wpAddDeviceDevice1Page */
#endif /* SOMGD_wpAddDeviceDevice1Page */

/*
 * New Method: wpAddDeviceDevice2Page
 */
typedef ULONG   SOMLINK somTP_WPDevice_wpAddDeviceDevice2Page(WPDevice *somSelf, 
		HWND hwndNotebook);
#pragma linkage(somTP_WPDevice_wpAddDeviceDevice2Page, system)
typedef somTP_WPDevice_wpAddDeviceDevice2Page *somTD_WPDevice_wpAddDeviceDevice2Page;
#define somMD_WPDevice_wpAddDeviceDevice2Page "::WPDevice::wpAddDeviceDevice2Page"
#define WPDevice_wpAddDeviceDevice2Page(somSelf,hwndNotebook) \
    (SOM_Resolve(somSelf, WPDevice, wpAddDeviceDevice2Page) \
	(somSelf,hwndNotebook))
#ifndef SOMGD_wpAddDeviceDevice2Page
    #if (defined(_wpAddDeviceDevice2Page) || defined(__wpAddDeviceDevice2Page))
        #undef _wpAddDeviceDevice2Page
        #undef __wpAddDeviceDevice2Page
        #define SOMGD_wpAddDeviceDevice2Page 1
    #else
        #define _wpAddDeviceDevice2Page WPDevice_wpAddDeviceDevice2Page
    #endif /* _wpAddDeviceDevice2Page */
#endif /* SOMGD_wpAddDeviceDevice2Page */

/*
 * New Method: wpAddDeviceDMA1Page
 */
typedef ULONG   SOMLINK somTP_WPDevice_wpAddDeviceDMA1Page(WPDevice *somSelf, 
		HWND hwndNotebook);
#pragma linkage(somTP_WPDevice_wpAddDeviceDMA1Page, system)
typedef somTP_WPDevice_wpAddDeviceDMA1Page *somTD_WPDevice_wpAddDeviceDMA1Page;
#define somMD_WPDevice_wpAddDeviceDMA1Page "::WPDevice::wpAddDeviceDMA1Page"
#define WPDevice_wpAddDeviceDMA1Page(somSelf,hwndNotebook) \
    (SOM_Resolve(somSelf, WPDevice, wpAddDeviceDMA1Page) \
	(somSelf,hwndNotebook))
#ifndef SOMGD_wpAddDeviceDMA1Page
    #if (defined(_wpAddDeviceDMA1Page) || defined(__wpAddDeviceDMA1Page))
        #undef _wpAddDeviceDMA1Page
        #undef __wpAddDeviceDMA1Page
        #define SOMGD_wpAddDeviceDMA1Page 1
    #else
        #define _wpAddDeviceDMA1Page WPDevice_wpAddDeviceDMA1Page
    #endif /* _wpAddDeviceDMA1Page */
#endif /* SOMGD_wpAddDeviceDMA1Page */

/*
 * New Method: wpAddDeviceIRQ1Page
 */
typedef ULONG   SOMLINK somTP_WPDevice_wpAddDeviceIRQ1Page(WPDevice *somSelf, 
		HWND hwndNotebook);
#pragma linkage(somTP_WPDevice_wpAddDeviceIRQ1Page, system)
typedef somTP_WPDevice_wpAddDeviceIRQ1Page *somTD_WPDevice_wpAddDeviceIRQ1Page;
#define somMD_WPDevice_wpAddDeviceIRQ1Page "::WPDevice::wpAddDeviceIRQ1Page"
#define WPDevice_wpAddDeviceIRQ1Page(somSelf,hwndNotebook) \
    (SOM_Resolve(somSelf, WPDevice, wpAddDeviceIRQ1Page) \
	(somSelf,hwndNotebook))
#ifndef SOMGD_wpAddDeviceIRQ1Page
    #if (defined(_wpAddDeviceIRQ1Page) || defined(__wpAddDeviceIRQ1Page))
        #undef _wpAddDeviceIRQ1Page
        #undef __wpAddDeviceIRQ1Page
        #define SOMGD_wpAddDeviceIRQ1Page 1
    #else
        #define _wpAddDeviceIRQ1Page WPDevice_wpAddDeviceIRQ1Page
    #endif /* _wpAddDeviceIRQ1Page */
#endif /* SOMGD_wpAddDeviceIRQ1Page */

/*
 * New Method: wpAddDeviceMemory1Page
 */
typedef ULONG   SOMLINK somTP_WPDevice_wpAddDeviceMemory1Page(WPDevice *somSelf, 
		HWND hwndNotebook);
#pragma linkage(somTP_WPDevice_wpAddDeviceMemory1Page, system)
typedef somTP_WPDevice_wpAddDeviceMemory1Page *somTD_WPDevice_wpAddDeviceMemory1Page;
#define somMD_WPDevice_wpAddDeviceMemory1Page "::WPDevice::wpAddDeviceMemory1Page"
#define WPDevice_wpAddDeviceMemory1Page(somSelf,hwndNotebook) \
    (SOM_Resolve(somSelf, WPDevice, wpAddDeviceMemory1Page) \
	(somSelf,hwndNotebook))
#ifndef SOMGD_wpAddDeviceMemory1Page
    #if (defined(_wpAddDeviceMemory1Page) || defined(__wpAddDeviceMemory1Page))
        #undef _wpAddDeviceMemory1Page
        #undef __wpAddDeviceMemory1Page
        #define SOMGD_wpAddDeviceMemory1Page 1
    #else
        #define _wpAddDeviceMemory1Page WPDevice_wpAddDeviceMemory1Page
    #endif /* _wpAddDeviceMemory1Page */
#endif /* SOMGD_wpAddDeviceMemory1Page */

/*
 * New Method: wpAddDeviceIO1Page
 */
typedef ULONG   SOMLINK somTP_WPDevice_wpAddDeviceIO1Page(WPDevice *somSelf, 
		HWND hwndNotebook);
#pragma linkage(somTP_WPDevice_wpAddDeviceIO1Page, system)
typedef somTP_WPDevice_wpAddDeviceIO1Page *somTD_WPDevice_wpAddDeviceIO1Page;
#define somMD_WPDevice_wpAddDeviceIO1Page "::WPDevice::wpAddDeviceIO1Page"
#define WPDevice_wpAddDeviceIO1Page(somSelf,hwndNotebook) \
    (SOM_Resolve(somSelf, WPDevice, wpAddDeviceIO1Page) \
	(somSelf,hwndNotebook))
#ifndef SOMGD_wpAddDeviceIO1Page
    #if (defined(_wpAddDeviceIO1Page) || defined(__wpAddDeviceIO1Page))
        #undef _wpAddDeviceIO1Page
        #undef __wpAddDeviceIO1Page
        #define SOMGD_wpAddDeviceIO1Page 1
    #else
        #define _wpAddDeviceIO1Page WPDevice_wpAddDeviceIO1Page
    #endif /* _wpAddDeviceIO1Page */
#endif /* SOMGD_wpAddDeviceIO1Page */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define WPDevice_wpQueryHandle WPObject_wpQueryHandle
#define WPDevice_wpCopyObject WPObject_wpCopyObject
#define WPDevice_somDefaultInit SOMObject_somDefaultInit
#define WPDevice_somDestruct SOMObject_somDestruct
#define WPDevice_wpQueryIcon WPObject_wpQueryIcon
#define WPDevice_wpSaveImmediate WPObject_wpSaveImmediate
#define WPDevice_wpIdentify WPObject_wpIdentify
#define WPDevice_wpAddObjectGeneralPage WPObject_wpAddObjectGeneralPage
#define WPDevice_wpAddObjectGeneralPage2 WPObject_wpAddObjectGeneralPage2
#define WPDevice_wpAddObjectWindowPage WPObject_wpAddObjectWindowPage
#define WPDevice_wpAddToObjUseList WPObject_wpAddToObjUseList
#define WPDevice_wpAllocMem WPObject_wpAllocMem
#define WPDevice_wpAppendObject WPObject_wpAppendObject
#define WPDevice_wpAssertObjectMutexSem WPObject_wpAssertObjectMutexSem
#define WPDevice_wpClose WPObject_wpClose
#define WPDevice_wpCnrRemoveObject WPObject_wpCnrRemoveObject
#define WPDevice_wpCnrSetEmphasis WPObject_wpCnrSetEmphasis
#define WPDevice_wpConfirmDelete WPObject_wpConfirmDelete
#define WPDevice_wpConfirmObjectTitle WPObject_wpConfirmObjectTitle
#define WPDevice_wpCopiedFromTemplate WPObject_wpCopiedFromTemplate
#define WPDevice_wpCreateAnother WPObject_wpCreateAnother
#define WPDevice_wpCreateFromTemplate WPObject_wpCreateFromTemplate
#define WPDevice_wpCreateShadowObject WPObject_wpCreateShadowObject
#define WPDevice_wpDelete WPObject_wpDelete
#define WPDevice_wpDeleteFromObjUseList WPObject_wpDeleteFromObjUseList
#define WPDevice_wpDisplayHelp WPObject_wpDisplayHelp
#define WPDevice_wpDisplayMenu WPObject_wpDisplayMenu
#define WPDevice_wpDoesObjectMatch WPObject_wpDoesObjectMatch
#define WPDevice_wpDraggedOverObject WPObject_wpDraggedOverObject
#define WPDevice_wpDragOver WPObject_wpDragOver
#define WPDevice_wpDrop WPObject_wpDrop
#define WPDevice_wpDroppedOnObject WPObject_wpDroppedOnObject
#define WPDevice_wpEndConversation WPObject_wpEndConversation
#define WPDevice_wpFilterPopupMenu WPObject_wpFilterPopupMenu
#define WPDevice_wpFilterMenu WPObject_wpFilterMenu
#define WPDevice_wpFindUseItem WPObject_wpFindUseItem
#define WPDevice_wpFormatDragItem WPObject_wpFormatDragItem
#define WPDevice_wpFree WPObject_wpFree
#define WPDevice_wpFreeMem WPObject_wpFreeMem
#define WPDevice_wpHide WPObject_wpHide
#define WPDevice_wpInsertPopupMenuItems WPObject_wpInsertPopupMenuItems
#define WPDevice_wpInsertMenuItems WPObject_wpInsertMenuItems
#define WPDevice_wpInsertSettingsPage WPObject_wpInsertSettingsPage
#define WPDevice_wpMenuItemHelpSelected WPObject_wpMenuItemHelpSelected
#define WPDevice_wpMenuItemSelected WPObject_wpMenuItemSelected
#define WPDevice_wpModifyMenu WPObject_wpModifyMenu
#define WPDevice_wpMoveObject WPObject_wpMoveObject
#define WPDevice_wpOpen WPObject_wpOpen
#define WPDevice_wpPrintObject WPObject_wpPrintObject
#define WPDevice_wpQueryConcurrentView WPObject_wpQueryConcurrentView
#define WPDevice_wpQueryButtonAppearance WPObject_wpQueryButtonAppearance
#define WPDevice_wpQueryConfirmations WPObject_wpQueryConfirmations
#define WPDevice_wpQueryDefaultHelp WPObject_wpQueryDefaultHelp
#define WPDevice_wpQueryDefaultView WPObject_wpQueryDefaultView
#define WPDevice_wpQueryError WPObject_wpQueryError
#define WPDevice_wpSetFolder WPObject_wpSetFolder
#define WPDevice_wpQueryFolder WPObject_wpQueryFolder
#define WPDevice_wpQueryIconData WPObject_wpQueryIconData
#define WPDevice_wpQueryMinWindow WPObject_wpQueryMinWindow
#define WPDevice_wpQueryNameClashOptions WPObject_wpQueryNameClashOptions
#define WPDevice_wpQueryStyle WPObject_wpQueryStyle
#define WPDevice_wpSetTaskRec WPObject_wpSetTaskRec
#define WPDevice_wpFindTaskRec WPObject_wpFindTaskRec
#define WPDevice_wpQueryTitle WPObject_wpQueryTitle
#define WPDevice_wpRegisterView WPObject_wpRegisterView
#define WPDevice_wpReleaseObjectMutexSem WPObject_wpReleaseObjectMutexSem
#define WPDevice_wpRender WPObject_wpRender
#define WPDevice_wpRenderComplete WPObject_wpRenderComplete
#define WPDevice_wpReplaceObject WPObject_wpReplaceObject
#define WPDevice_wpRequestObjectMutexSem WPObject_wpRequestObjectMutexSem
#define WPDevice_wpRestore WPObject_wpRestore
#define WPDevice_wpRestoreData WPObject_wpRestoreData
#define WPDevice_wpRestoreLong WPObject_wpRestoreLong
#define WPDevice_wpRestoreString WPObject_wpRestoreString
#define WPDevice_wpSaveData WPObject_wpSaveData
#define WPDevice_wpSaveDeferred WPObject_wpSaveDeferred
#define WPDevice_wpSaveLong WPObject_wpSaveLong
#define WPDevice_wpSaveString WPObject_wpSaveString
#define WPDevice_wpScanSetupString WPObject_wpScanSetupString
#define WPDevice_wpSetConcurrentView WPObject_wpSetConcurrentView
#define WPDevice_wpSetButtonAppearance WPObject_wpSetButtonAppearance
#define WPDevice_wpSetDefaultHelp WPObject_wpSetDefaultHelp
#define WPDevice_wpSetDefaultView WPObject_wpSetDefaultView
#define WPDevice_wpSetError WPObject_wpSetError
#define WPDevice_wpQueryScreenGroupID WPObject_wpQueryScreenGroupID
#define WPDevice_wpSetupOnce WPObject_wpSetupOnce
#define WPDevice_wpSetIcon WPObject_wpSetIcon
#define WPDevice_wpSetIconData WPObject_wpSetIconData
#define WPDevice_wpSetMinWindow WPObject_wpSetMinWindow
#define WPDevice_wpModifyStyle WPObject_wpModifyStyle
#define WPDevice_wpSetTitle WPObject_wpSetTitle
#define WPDevice_wpSwitchTo WPObject_wpSwitchTo
#define WPDevice_wpViewObject WPObject_wpViewObject
#define WPDevice_wpQueryTrueStyle WPObject_wpQueryTrueStyle
#define WPDevice_wpUnlockObject WPObject_wpUnlockObject
#define WPDevice_wpObjectReady WPObject_wpObjectReady
#define WPDevice_wpIsObjectInitialized WPObject_wpIsObjectInitialized
#define WPDevice_wpCreateShadowObjectExt WPObject_wpCreateShadowObjectExt
#define WPDevice_wpCnrDeleteUseItem WPObject_wpCnrDeleteUseItem
#define WPDevice_wpIsDeleteable WPObject_wpIsDeleteable
#define WPDevice_wpQueryCoreRecord WPObject_wpQueryCoreRecord
#define WPDevice_wpSetObjectID WPObject_wpSetObjectID
#define WPDevice_wpQueryObjectID WPObject_wpQueryObjectID
#define WPDevice_wpSetDefaultIconPos WPObject_wpSetDefaultIconPos
#define WPDevice_wpQueryDefaultIconPos WPObject_wpQueryDefaultIconPos
#define WPDevice_wpCnrRefreshDetails WPObject_wpCnrRefreshDetails
#define WPDevice_wpFindViewItem WPObject_wpFindViewItem
#define WPDevice_wpLockObject WPObject_wpLockObject
#define WPDevice_wpIsLocked WPObject_wpIsLocked
#define WPDevice_wpQueryContainerFlagPtr WPObject_wpQueryContainerFlagPtr
#define WPDevice_wpWaitForClose WPObject_wpWaitForClose
#define WPDevice_wpSetMenuStyle WPObject_wpSetMenuStyle
#define WPDevice_wpQueryMenuStyle WPObject_wpQueryMenuStyle
#define WPDevice_wpSetStyle WPObject_wpSetStyle
#define WPDevice_somInit SOMObject_somInit
#define WPDevice_somUninit SOMObject_somUninit
#define WPDevice_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define WPDevice_somDefaultAssign SOMObject_somDefaultAssign
#define WPDevice_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define WPDevice_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define WPDevice_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define WPDevice_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define WPDevice_somDefaultVAssign SOMObject_somDefaultVAssign
#define WPDevice_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define WPDevice_somFree SOMObject_somFree
#define WPDevice_somGetClass SOMObject_somGetClass
#define WPDevice_somGetClassName SOMObject_somGetClassName
#define WPDevice_somGetSize SOMObject_somGetSize
#define WPDevice_somIsA SOMObject_somIsA
#define WPDevice_somIsInstanceOf SOMObject_somIsInstanceOf
#define WPDevice_somRespondsTo SOMObject_somRespondsTo
#define WPDevice_somDispatch SOMObject_somDispatch
#define WPDevice_somClassDispatch SOMObject_somClassDispatch
#define WPDevice_somCastObj SOMObject_somCastObj
#define WPDevice_somResetObj SOMObject_somResetObj
#define WPDevice_somDispatchV SOMObject_somDispatchV
#define WPDevice_somDispatchL SOMObject_somDispatchL
#define WPDevice_somDispatchA SOMObject_somDispatchA
#define WPDevice_somDispatchD SOMObject_somDispatchD
#define WPDevice_somPrintSelf SOMObject_somPrintSelf
#define WPDevice_somDumpSelf SOMObject_somDumpSelf
#define WPDevice_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_WPDevice_h */

#ifndef SOM_M_WPDevice_h
#define SOM_M_WPDevice_h


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
#ifndef M_WPDevice
#define M_WPDevice SOMObject
#endif
#include <wptrans.h>

/*
 * Start of bindings for IDL types
 */


/*
 * End of bindings for IDL types.
 */

#define M_WPDevice_MajorVersion 1
#define M_WPDevice_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define M_WPDeviceNewClass wpdevicec
#pragma linkage(wpdevicec, system)
#define M_WPDeviceClassData wpdeviced
#define M_WPDeviceCClassData wpdevicex
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define M_WPDevice_classObj M_WPDeviceClassData.classObject
#define _M_WPDevice M_WPDevice_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK M_WPDeviceNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(M_WPDeviceNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct M_WPDeviceClassDataStructure {
	SOMClass *classObject;
} SOMDLINK M_WPDeviceClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct M_WPDeviceCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK M_WPDeviceCClassData;

/*
 * New and Renew macros for M_WPDevice
 */
#define M_WPDeviceNew() \
   ( _M_WPDevice ? \
	_somNew(_M_WPDevice) \
	: ( M_WPDeviceNewClass(\
		M_WPDevice_MajorVersion, \
		M_WPDevice_MinorVersion),\
	   _somNew(_M_WPDevice)))
#define M_WPDeviceRenew(buf) \
   ( _M_WPDevice ? \
	_somRenew(_M_WPDevice, buf) \
	: ( M_WPDeviceNewClass(\
		M_WPDevice_MajorVersion, \
		M_WPDevice_MinorVersion),\
	   _somRenew(_M_WPDevice, buf)))

/*
 * Override method: wpclsInitData
 */
#define M_WPDevice_wpclsInitData(somSelf) \
	M_WPObject_wpclsInitData(somSelf)

/*
 * Override method: wpclsQueryIconData
 */
#define M_WPDevice_wpclsQueryIconData(somSelf,pIconInfo) \
	M_WPObject_wpclsQueryIconData(somSelf,pIconInfo)

/*
 * Override method: wpclsQueryDefaultHelp
 */
#define M_WPDevice_wpclsQueryDefaultHelp(somSelf,pHelpPanelId,pszHelpLibrary) \
	M_WPObject_wpclsQueryDefaultHelp(somSelf,pHelpPanelId,pszHelpLibrary)

/*
 * Override method: wpclsQueryDefaultView
 */
#define M_WPDevice_wpclsQueryDefaultView(somSelf) \
	M_WPObject_wpclsQueryDefaultView(somSelf)

/*
 * Override method: wpclsQueryDetailsInfo
 */
#define M_WPDevice_wpclsQueryDetailsInfo(somSelf,ppClassFieldInfo,pSize) \
	M_WPObject_wpclsQueryDetailsInfo(somSelf,ppClassFieldInfo,pSize)

/*
 * Override method: wpclsQueryStyle
 */
#define M_WPDevice_wpclsQueryStyle(somSelf) \
	M_WPObject_wpclsQueryStyle(somSelf)

/*
 * Override method: wpclsQueryTitle
 */
#define M_WPDevice_wpclsQueryTitle(somSelf) \
	M_WPObject_wpclsQueryTitle(somSelf)

/*
 * Override method: wpclsUnInitData
 */
#define M_WPDevice_wpclsUnInitData(somSelf) \
	M_WPObject_wpclsUnInitData(somSelf)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define M_WPDevice_wpclsObjectFromHandle M_WPObject_wpclsObjectFromHandle
#define M_WPDevice_wpclsCreateDefaultTemplates M_WPObject_wpclsCreateDefaultTemplates
#define M_WPDevice_wpclsMakeAwake M_WPObject_wpclsMakeAwake
#define M_WPDevice_wpclsNew M_WPObject_wpclsNew
#define M_WPDevice_wpclsQueryDetails M_WPObject_wpclsQueryDetails
#define M_WPDevice_wpclsQueryExtendedCriteria M_WPObject_wpclsQueryExtendedCriteria
#define M_WPDevice_wpclsQueryFolder M_WPObject_wpclsQueryFolder
#define M_WPDevice_wpclsQueryIcon M_WPObject_wpclsQueryIcon
#define M_WPDevice_wpclsQuerySearchInfo M_WPObject_wpclsQuerySearchInfo
#define M_WPDevice_wpclsFindObjectFirst M_WPObject_wpclsFindObjectFirst
#define M_WPDevice_wpclsFindObjectNext M_WPObject_wpclsFindObjectNext
#define M_WPDevice_wpclsFindObjectEnd M_WPObject_wpclsFindObjectEnd
#define M_WPDevice_wpclsSetError M_WPObject_wpclsSetError
#define M_WPDevice_wpclsQueryError M_WPObject_wpclsQueryError
#define M_WPDevice_wpclsQuerySettingsPageSize M_WPObject_wpclsQuerySettingsPageSize
#define M_WPDevice_wpclsQueryObject M_WPObject_wpclsQueryObject
#define M_WPDevice_wpclsQueryButtonAppearance M_WPObject_wpclsQueryButtonAppearance
#define M_WPDevice_wpclsDecUsage M_WPObject_wpclsDecUsage
#define M_WPDevice_wpclsIncUsage M_WPObject_wpclsIncUsage
#define M_WPDevice_wpclsInsertMultipleObjects M_WPObject_wpclsInsertMultipleObjects
#define M_WPDevice_wpclsFindOneObject M_WPObject_wpclsFindOneObject
#define M_WPDevice_wpclsSetSettingsPageSize M_WPObject_wpclsSetSettingsPageSize
#define M_WPDevice_wpclsSetIconData M_WPObject_wpclsSetIconData
#define M_WPDevice_wpclsSetIcon M_WPObject_wpclsSetIcon
#define M_WPDevice_wpclsRemoveObjects M_WPObject_wpclsRemoveObjects
#define M_WPDevice_somUninit SOMObject_somUninit
#define M_WPDevice_somClassReady SOMClass_somClassReady
#define M_WPDevice_somNew SOMClass_somNew
#define M_WPDevice_somRenew SOMClass_somRenew
#define M_WPDevice__get_somDataAlignment SOMClass__get_somDataAlignment
#define M_WPDevice__get_somInstanceDataOffsets SOMClass__get_somInstanceDataOffsets
#define M_WPDevice__get_somDirectInitClasses SOMClass__get_somDirectInitClasses
#define M_WPDevice__set_somDirectInitClasses SOMClass__set_somDirectInitClasses
#define M_WPDevice_somNewNoInit SOMClass_somNewNoInit
#define M_WPDevice_somRenewNoInit SOMClass_somRenewNoInit
#define M_WPDevice_somRenewNoZero SOMClass_somRenewNoZero
#define M_WPDevice_somRenewNoInitNoZero SOMClass_somRenewNoInitNoZero
#define M_WPDevice_somAllocate SOMClass_somAllocate
#define M_WPDevice_somDeallocate SOMClass_somDeallocate
#define M_WPDevice__get_somClassAllocate SOMClass__get_somClassAllocate
#define M_WPDevice__get_somClassDeallocate SOMClass__get_somClassDeallocate
#define M_WPDevice_somGetInstanceInitMask SOMClass_somGetInstanceInitMask
#define M_WPDevice_somGetInstanceDestructionMask SOMClass_somGetInstanceDestructionMask
#define M_WPDevice_somGetInstanceAssignmentMask SOMClass_somGetInstanceAssignmentMask
#define M_WPDevice_somInitClass SOMClass_somInitClass
#define M_WPDevice_somInitMIClass SOMClass_somInitMIClass
#define M_WPDevice_somAddStaticMethod SOMClass_somAddStaticMethod
#define M_WPDevice_somAddDynamicMethod SOMClass_somAddDynamicMethod
#define M_WPDevice_somOverrideSMethod SOMClass_somOverrideSMethod
#define M_WPDevice_somGetApplyStub SOMClass_somGetApplyStub
#define M_WPDevice_somGetClassData SOMClass_somGetClassData
#define M_WPDevice_somSetClassData SOMClass_somSetClassData
#define M_WPDevice_somGetClassMtab SOMClass_somGetClassMtab
#define M_WPDevice_somGetInstanceOffset SOMClass_somGetInstanceOffset
#define M_WPDevice_somGetInstancePartSize SOMClass_somGetInstancePartSize
#define M_WPDevice_somGetInstanceSize SOMClass_somGetInstanceSize
#define M_WPDevice_somGetInstanceToken SOMClass_somGetInstanceToken
#define M_WPDevice_somGetMemberToken SOMClass_somGetMemberToken
#define M_WPDevice_somGetMethodData SOMClass_somGetMethodData
#define M_WPDevice_somGetRdStub SOMClass_somGetRdStub
#define M_WPDevice_somGetMethodDescriptor SOMClass_somGetMethodDescriptor
#define M_WPDevice_somGetMethodIndex SOMClass_somGetMethodIndex
#define M_WPDevice_somGetMethodToken SOMClass_somGetMethodToken
#define M_WPDevice_somGetName SOMClass_somGetName
#define M_WPDevice_somGetNthMethodData SOMClass_somGetNthMethodData
#define M_WPDevice_somGetNthMethodInfo SOMClass_somGetNthMethodInfo
#define M_WPDevice_somGetNumMethods SOMClass_somGetNumMethods
#define M_WPDevice_somGetNumStaticMethods SOMClass_somGetNumStaticMethods
#define M_WPDevice_somGetParent SOMClass_somGetParent
#define M_WPDevice_somGetParents SOMClass_somGetParents
#define M_WPDevice_somGetPClsMtab SOMClass_somGetPClsMtab
#define M_WPDevice_somGetPClsMtabs SOMClass_somGetPClsMtabs
#define M_WPDevice_somGetVersionNumbers SOMClass_somGetVersionNumbers
#define M_WPDevice_somSetMethodDescriptor SOMClass_somSetMethodDescriptor
#define M_WPDevice_somFindMethod SOMClass_somFindMethod
#define M_WPDevice_somFindMethodOk SOMClass_somFindMethodOk
#define M_WPDevice_somFindSMethod SOMClass_somFindSMethod
#define M_WPDevice_somFindSMethodOk SOMClass_somFindSMethodOk
#define M_WPDevice_somLookupMethod SOMClass_somLookupMethod
#define M_WPDevice_somCheckVersion SOMClass_somCheckVersion
#define M_WPDevice_somDescendedFrom SOMClass_somDescendedFrom
#define M_WPDevice_somSupportsMethod SOMClass_somSupportsMethod
#define M_WPDevice_somDefinedMethod SOMClass_somDefinedMethod
#define M_WPDevice_somOverrideMtab SOMClass_somOverrideMtab
#define M_WPDevice_somDefaultInit SOMObject_somDefaultInit
#define M_WPDevice_somDestruct SOMObject_somDestruct
#define M_WPDevice_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define M_WPDevice_somDefaultAssign SOMObject_somDefaultAssign
#define M_WPDevice_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define M_WPDevice_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define M_WPDevice_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define M_WPDevice_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define M_WPDevice_somDefaultVAssign SOMObject_somDefaultVAssign
#define M_WPDevice_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define M_WPDevice_somInit SOMObject_somInit
#define M_WPDevice_somFree SOMObject_somFree
#define M_WPDevice_somGetClass SOMObject_somGetClass
#define M_WPDevice_somGetClassName SOMObject_somGetClassName
#define M_WPDevice_somGetSize SOMObject_somGetSize
#define M_WPDevice_somIsA SOMObject_somIsA
#define M_WPDevice_somIsInstanceOf SOMObject_somIsInstanceOf
#define M_WPDevice_somRespondsTo SOMObject_somRespondsTo
#define M_WPDevice_somDispatch SOMObject_somDispatch
#define M_WPDevice_somClassDispatch SOMObject_somClassDispatch
#define M_WPDevice_somCastObj SOMObject_somCastObj
#define M_WPDevice_somResetObj SOMObject_somResetObj
#define M_WPDevice_somDispatchV SOMObject_somDispatchV
#define M_WPDevice_somDispatchL SOMObject_somDispatchL
#define M_WPDevice_somDispatchA SOMObject_somDispatchA
#define M_WPDevice_somDispatchD SOMObject_somDispatchD
#define M_WPDevice_somPrintSelf SOMObject_somPrintSelf
#define M_WPDevice_somDumpSelf SOMObject_somDumpSelf
#define M_WPDevice_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_M_WPDevice_h */
