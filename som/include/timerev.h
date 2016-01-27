
/*
 * This file was generated by the SOM Compiler.
 * FileName: timerev.h.
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


#ifndef SOM_SOMETimerEvent_h
#define SOM_SOMETimerEvent_h


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
#ifndef SOMETimerEvent
#define SOMETimerEvent SOMObject
#endif
/*
 *  SOMETimerEvent is the class for generic timer events within the Event Manager.
 *  This class should be queried for events of the following type(s):
 *       EMTimerEvent
 *  An instance of this class is initialized and passed to the callback
 *  of a timer event.
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

#define SOMETimerEvent_MajorVersion 2
#define SOMETimerEvent_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define SOMETimerEventNewClass c
#pragma linkage(c, system)
#define SOMETimerEventClassData d
#define SOMETimerEventCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define SOMETimerEvent_classObj SOMETimerEventClassData.classObject
#define _SOMETimerEvent SOMETimerEvent_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK SOMETimerEventNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(SOMETimerEventNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct SOMETimerEventClassDataStructure {
	SOMClass *classObject;
	somMToken somevGetEventInterval;
	somMToken somevSetEventInterval;
} SOMDLINK SOMETimerEventClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct SOMETimerEventCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK SOMETimerEventCClassData;

/*
 * New and Renew macros for SOMETimerEvent
 */
#define SOMETimerEventNew() \
   ( _SOMETimerEvent ? \
	_somNew(_SOMETimerEvent) \
	: ( SOMETimerEventNewClass(\
		SOMETimerEvent_MajorVersion, \
		SOMETimerEvent_MinorVersion),\
	   _somNew(_SOMETimerEvent)))
#define SOMETimerEventRenew(buf) \
   ( _SOMETimerEvent ? \
	_somRenew(_SOMETimerEvent, buf) \
	: ( SOMETimerEventNewClass(\
		SOMETimerEvent_MajorVersion, \
		SOMETimerEvent_MinorVersion),\
	   _somRenew(_SOMETimerEvent, buf)))

/*
 * Override method: somInit
 */
#define SOMETimerEvent_somInit(somSelf) \
	SOMObject_somInit(somSelf)

/*
 * New Method: somevGetEventInterval
 */
typedef long   SOMLINK somTP_SOMETimerEvent_somevGetEventInterval(SOMETimerEvent *somSelf, Environment *ev);
#pragma linkage(somTP_SOMETimerEvent_somevGetEventInterval, system)
typedef somTP_SOMETimerEvent_somevGetEventInterval *somTD_SOMETimerEvent_somevGetEventInterval;
/*
 *  Returns the interval of the generic timer event (time in milliseconds)
 */
#define somMD_SOMETimerEvent_somevGetEventInterval "::SOMETimerEvent::somevGetEventInterval"
#define SOMETimerEvent_somevGetEventInterval(somSelf,ev) \
    (SOM_Resolve(somSelf, SOMETimerEvent, somevGetEventInterval) \
	(somSelf,ev))
#ifndef SOMGD_somevGetEventInterval
    #if (defined(_somevGetEventInterval) || defined(__somevGetEventInterval))
        #undef _somevGetEventInterval
        #undef __somevGetEventInterval
        #define SOMGD_somevGetEventInterval 1
    #else
        #define _somevGetEventInterval SOMETimerEvent_somevGetEventInterval
    #endif /* _somevGetEventInterval */
#endif /* SOMGD_somevGetEventInterval */

/*
 * New Method: somevSetEventInterval
 */
typedef void   SOMLINK somTP_SOMETimerEvent_somevSetEventInterval(SOMETimerEvent *somSelf, Environment *ev, 
		long interval);
#pragma linkage(somTP_SOMETimerEvent_somevSetEventInterval, system)
typedef somTP_SOMETimerEvent_somevSetEventInterval *somTD_SOMETimerEvent_somevSetEventInterval;
/*
 *  Sets the interval of the generic timer event (time in milliseconds)
 */
#define somMD_SOMETimerEvent_somevSetEventInterval "::SOMETimerEvent::somevSetEventInterval"
#define SOMETimerEvent_somevSetEventInterval(somSelf,ev,interval) \
    (SOM_Resolve(somSelf, SOMETimerEvent, somevSetEventInterval) \
	(somSelf,ev,interval))
#ifndef SOMGD_somevSetEventInterval
    #if (defined(_somevSetEventInterval) || defined(__somevSetEventInterval))
        #undef _somevSetEventInterval
        #undef __somevSetEventInterval
        #define SOMGD_somevSetEventInterval 1
    #else
        #define _somevSetEventInterval SOMETimerEvent_somevSetEventInterval
    #endif /* _somevSetEventInterval */
#endif /* SOMGD_somevSetEventInterval */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define SOMETimerEvent_somevGetEventTime SOMEEvent_somevGetEventTime
#define SOMETimerEvent_somevGetEventType SOMEEvent_somevGetEventType
#define SOMETimerEvent_somevSetEventTime SOMEEvent_somevSetEventTime
#define SOMETimerEvent_somevSetEventType SOMEEvent_somevSetEventType
#define SOMETimerEvent_somDefaultInit SOMObject_somDefaultInit
#define SOMETimerEvent_somDestruct SOMObject_somDestruct
#define SOMETimerEvent_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define SOMETimerEvent_somDefaultAssign SOMObject_somDefaultAssign
#define SOMETimerEvent_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define SOMETimerEvent_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define SOMETimerEvent_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define SOMETimerEvent_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define SOMETimerEvent_somDefaultVAssign SOMObject_somDefaultVAssign
#define SOMETimerEvent_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define SOMETimerEvent_somFree SOMObject_somFree
#define SOMETimerEvent_somUninit SOMObject_somUninit
#define SOMETimerEvent_somGetClass SOMObject_somGetClass
#define SOMETimerEvent_somGetClassName SOMObject_somGetClassName
#define SOMETimerEvent_somGetSize SOMObject_somGetSize
#define SOMETimerEvent_somIsA SOMObject_somIsA
#define SOMETimerEvent_somIsInstanceOf SOMObject_somIsInstanceOf
#define SOMETimerEvent_somRespondsTo SOMObject_somRespondsTo
#define SOMETimerEvent_somDispatch SOMObject_somDispatch
#define SOMETimerEvent_somClassDispatch SOMObject_somClassDispatch
#define SOMETimerEvent_somCastObj SOMObject_somCastObj
#define SOMETimerEvent_somResetObj SOMObject_somResetObj
#define SOMETimerEvent_somDispatchV SOMObject_somDispatchV
#define SOMETimerEvent_somDispatchL SOMObject_somDispatchL
#define SOMETimerEvent_somDispatchA SOMObject_somDispatchA
#define SOMETimerEvent_somDispatchD SOMObject_somDispatchD
#define SOMETimerEvent_somPrintSelf SOMObject_somPrintSelf
#define SOMETimerEvent_somDumpSelf SOMObject_somDumpSelf
#define SOMETimerEvent_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_SOMETimerEvent_h */
