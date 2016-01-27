
/*
 * This file was generated by the SOM Compiler.
 * FileName: workprev.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.17
 *     SOM Emitter emith: 2.47
 */

/*
 *    COMPONENT_NAME: somu
 * 
 *    ORIGINS: 27
 * 
 * 
 *    10H9767, 10H9769  (C) COPYRIGHT International Business Machines Corp. 1992,1994
 *    All Rights Reserved
 *    Licensed Materials - Property of IBM
 *    US Government Users Restricted Rights - Use, duplication or
 *    disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
 * 
 */


#ifndef SOM_SOMEWorkProcEvent_h
#define SOM_SOMEWorkProcEvent_h


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
#ifndef SOMEWorkProcEvent
#define SOMEWorkProcEvent SOMObject
#endif
/*
 *  SOMEWorkProcEvent is the class for generic workProc events within the Event Manager.
 *  This class should be queried for events of the following type(s):
 *       EMWorkProcEvent
 *  An instance of this class is initialized and passed to the callback
 *  of a workproc event.
 *  Although at present this class has no methods, its parent methods can be
 *  called to verify that the event type is EMWorkProcEvent.
 */
#include <event.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */

/*
 * End of bindings for IDL types.
 */

/*
 * Passthru lines: File: "C.h", "after"
 */
#include <eventmsk.h>

#define SOMEWorkProcEvent_MajorVersion 2
#define SOMEWorkProcEvent_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define SOMEWorkProcEventNewClass c
#pragma linkage(c, system)
#define SOMEWorkProcEventClassData d
#define SOMEWorkProcEventCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define SOMEWorkProcEvent_classObj SOMEWorkProcEventClassData.classObject
#define _SOMEWorkProcEvent SOMEWorkProcEvent_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK SOMEWorkProcEventNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(SOMEWorkProcEventNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct SOMEWorkProcEventClassDataStructure {
	SOMClass *classObject;
} SOMDLINK SOMEWorkProcEventClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct SOMEWorkProcEventCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK SOMEWorkProcEventCClassData;

/*
 * New and Renew macros for SOMEWorkProcEvent
 */
#define SOMEWorkProcEventNew() \
   ( _SOMEWorkProcEvent ? \
	_somNew(_SOMEWorkProcEvent) \
	: ( SOMEWorkProcEventNewClass(\
		SOMEWorkProcEvent_MajorVersion, \
		SOMEWorkProcEvent_MinorVersion),\
	   _somNew(_SOMEWorkProcEvent)))
#define SOMEWorkProcEventRenew(buf) \
   ( _SOMEWorkProcEvent ? \
	_somRenew(_SOMEWorkProcEvent, buf) \
	: ( SOMEWorkProcEventNewClass(\
		SOMEWorkProcEvent_MajorVersion, \
		SOMEWorkProcEvent_MinorVersion),\
	   _somRenew(_SOMEWorkProcEvent, buf)))

/*
 * Override method: somInit
 */
#define SOMEWorkProcEvent_somInit(somSelf) \
	SOMObject_somInit(somSelf)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define SOMEWorkProcEvent_somevGetEventTime SOMEEvent_somevGetEventTime
#define SOMEWorkProcEvent_somevGetEventType SOMEEvent_somevGetEventType
#define SOMEWorkProcEvent_somevSetEventTime SOMEEvent_somevSetEventTime
#define SOMEWorkProcEvent_somevSetEventType SOMEEvent_somevSetEventType
#define SOMEWorkProcEvent_somDefaultInit SOMObject_somDefaultInit
#define SOMEWorkProcEvent_somDestruct SOMObject_somDestruct
#define SOMEWorkProcEvent_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define SOMEWorkProcEvent_somDefaultAssign SOMObject_somDefaultAssign
#define SOMEWorkProcEvent_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define SOMEWorkProcEvent_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define SOMEWorkProcEvent_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define SOMEWorkProcEvent_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define SOMEWorkProcEvent_somDefaultVAssign SOMObject_somDefaultVAssign
#define SOMEWorkProcEvent_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define SOMEWorkProcEvent_somFree SOMObject_somFree
#define SOMEWorkProcEvent_somUninit SOMObject_somUninit
#define SOMEWorkProcEvent_somGetClass SOMObject_somGetClass
#define SOMEWorkProcEvent_somGetClassName SOMObject_somGetClassName
#define SOMEWorkProcEvent_somGetSize SOMObject_somGetSize
#define SOMEWorkProcEvent_somIsA SOMObject_somIsA
#define SOMEWorkProcEvent_somIsInstanceOf SOMObject_somIsInstanceOf
#define SOMEWorkProcEvent_somRespondsTo SOMObject_somRespondsTo
#define SOMEWorkProcEvent_somDispatch SOMObject_somDispatch
#define SOMEWorkProcEvent_somClassDispatch SOMObject_somClassDispatch
#define SOMEWorkProcEvent_somCastObj SOMObject_somCastObj
#define SOMEWorkProcEvent_somResetObj SOMObject_somResetObj
#define SOMEWorkProcEvent_somDispatchV SOMObject_somDispatchV
#define SOMEWorkProcEvent_somDispatchL SOMObject_somDispatchL
#define SOMEWorkProcEvent_somDispatchA SOMObject_somDispatchA
#define SOMEWorkProcEvent_somDispatchD SOMObject_somDispatchD
#define SOMEWorkProcEvent_somPrintSelf SOMObject_somPrintSelf
#define SOMEWorkProcEvent_somDumpSelf SOMObject_somDumpSelf
#define SOMEWorkProcEvent_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_SOMEWorkProcEvent_h */
