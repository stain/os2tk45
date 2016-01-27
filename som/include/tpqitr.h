
/*
 * This file was generated by the SOM Compiler.
 * FileName: tpqitr.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.17
 *     SOM Emitter emith: 2.47
 */

/*
 *    COMPONENT_NAME: somuc
 * 
 *    ORIGINS: 82, 81, 27
 * 
 * 
 *     25H7912  (C)  COPYRIGHT International Business Machines Corp. 1992,1996,1996
 *    All Rights Reserved
 *    Licensed Materials - Property of IBM
 *    US Government Users Restricted Rights - Use, duplication or
 *    disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
 * 
 *    Copyright � 1988, 1989 Apple Computer, Inc. All rights reserved.
 * 
 * CLASS_NAME: somf_TPriorityQueueIterator
 * 
 * DESCRIPTION: An iterator for somf_TPriorityQueue that will iterate over all
 *              of the objects in a TPriorityQueue.
 * 
 */


#ifndef SOM_somf_TPriorityQueueIterator_h
#define SOM_somf_TPriorityQueueIterator_h


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
#ifndef somf_TPriorityQueueIterator
#define somf_TPriorityQueueIterator SOMObject
#endif
#include <titeratr.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */
#ifndef somf_MCollectible
    #define somf_MCollectible SOMObject
#endif /* somf_MCollectible */
#ifndef somf_TPriorityQueue
    #define somf_TPriorityQueue SOMObject
#endif /* somf_TPriorityQueue */

/*
 * End of bindings for IDL types.
 */

/*
 * Passthru lines: File: "C.h", "after"
 */

#include <tpq.h>

#define somf_TPriorityQueueIterator_MajorVersion 2
#define somf_TPriorityQueueIterator_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define somf_TPriorityQueueIteratorNewClass c
#pragma linkage(c, system)
#define somf_TPriorityQueueIteratorClassData d
#define somf_TPriorityQueueIteratorCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define somf_TPriorityQueueIterator_classObj somf_TPriorityQueueIteratorClassData.classObject
#define _somf_TPriorityQueueIterator somf_TPriorityQueueIterator_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK somf_TPriorityQueueIteratorNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(somf_TPriorityQueueIteratorNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct somf_TPriorityQueueIteratorClassDataStructure {
	SOMClass *classObject;
	somMToken somfTPriorityQueueIteratorInit;
} SOMDLINK somf_TPriorityQueueIteratorClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct somf_TPriorityQueueIteratorCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK somf_TPriorityQueueIteratorCClassData;

/*
 * New and Renew macros for somf_TPriorityQueueIterator
 */
#define somf_TPriorityQueueIteratorNew() \
   ( _somf_TPriorityQueueIterator ? \
	_somNew(_somf_TPriorityQueueIterator) \
	: ( somf_TPriorityQueueIteratorNewClass(\
		somf_TPriorityQueueIterator_MajorVersion, \
		somf_TPriorityQueueIterator_MinorVersion),\
	   _somNew(_somf_TPriorityQueueIterator)))
#define somf_TPriorityQueueIteratorRenew(buf) \
   ( _somf_TPriorityQueueIterator ? \
	_somRenew(_somf_TPriorityQueueIterator, buf) \
	: ( somf_TPriorityQueueIteratorNewClass(\
		somf_TPriorityQueueIterator_MajorVersion, \
		somf_TPriorityQueueIterator_MinorVersion),\
	   _somRenew(_somf_TPriorityQueueIterator, buf)))

/*
 * Override method: somfNext
 */
#define somf_TPriorityQueueIterator_somfNext(somSelf,ev) \
	somf_TIterator_somfNext(somSelf,ev)

/*
 * Override method: somfFirst
 */
#define somf_TPriorityQueueIterator_somfFirst(somSelf,ev) \
	somf_TIterator_somfFirst(somSelf,ev)

/*
 * Override method: somfRemove
 */
#define somf_TPriorityQueueIterator_somfRemove(somSelf,ev) \
	somf_TIterator_somfRemove(somSelf,ev)

/*
 * New Method: somfTPriorityQueueIteratorInit
 */
typedef somf_TPriorityQueueIterator*   SOMLINK somTP_somf_TPriorityQueueIterator_somfTPriorityQueueIteratorInit(somf_TPriorityQueueIterator *somSelf, Environment *ev, 
		somf_TPriorityQueue* h);
#pragma linkage(somTP_somf_TPriorityQueueIterator_somfTPriorityQueueIteratorInit, system)
typedef somTP_somf_TPriorityQueueIterator_somfTPriorityQueueIteratorInit *somTD_somf_TPriorityQueueIterator_somfTPriorityQueueIteratorInit;
/*
 *  Initializes the new TPriorityQueue iterator.
 */
#define somMD_somf_TPriorityQueueIterator_somfTPriorityQueueIteratorInit "::somf_TPriorityQueueIterator::somfTPriorityQueueIteratorInit"
#define somf_TPriorityQueueIterator_somfTPriorityQueueIteratorInit(somSelf,ev,h) \
    (SOM_Resolve(somSelf, somf_TPriorityQueueIterator, somfTPriorityQueueIteratorInit) \
	(somSelf,ev,h))
#ifndef SOMGD_somfTPriorityQueueIteratorInit
    #if (defined(_somfTPriorityQueueIteratorInit) || defined(__somfTPriorityQueueIteratorInit))
        #undef _somfTPriorityQueueIteratorInit
        #undef __somfTPriorityQueueIteratorInit
        #define SOMGD_somfTPriorityQueueIteratorInit 1
    #else
        #define _somfTPriorityQueueIteratorInit somf_TPriorityQueueIterator_somfTPriorityQueueIteratorInit
    #endif /* _somfTPriorityQueueIteratorInit */
#endif /* SOMGD_somfTPriorityQueueIteratorInit */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define somf_TPriorityQueueIterator_somDefaultInit SOMObject_somDefaultInit
#define somf_TPriorityQueueIterator_somDestruct SOMObject_somDestruct
#define somf_TPriorityQueueIterator_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define somf_TPriorityQueueIterator_somDefaultAssign SOMObject_somDefaultAssign
#define somf_TPriorityQueueIterator_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define somf_TPriorityQueueIterator_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define somf_TPriorityQueueIterator_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define somf_TPriorityQueueIterator_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define somf_TPriorityQueueIterator_somDefaultVAssign SOMObject_somDefaultVAssign
#define somf_TPriorityQueueIterator_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define somf_TPriorityQueueIterator_somInit SOMObject_somInit
#define somf_TPriorityQueueIterator_somFree SOMObject_somFree
#define somf_TPriorityQueueIterator_somUninit SOMObject_somUninit
#define somf_TPriorityQueueIterator_somGetClass SOMObject_somGetClass
#define somf_TPriorityQueueIterator_somGetClassName SOMObject_somGetClassName
#define somf_TPriorityQueueIterator_somGetSize SOMObject_somGetSize
#define somf_TPriorityQueueIterator_somIsA SOMObject_somIsA
#define somf_TPriorityQueueIterator_somIsInstanceOf SOMObject_somIsInstanceOf
#define somf_TPriorityQueueIterator_somRespondsTo SOMObject_somRespondsTo
#define somf_TPriorityQueueIterator_somDispatch SOMObject_somDispatch
#define somf_TPriorityQueueIterator_somClassDispatch SOMObject_somClassDispatch
#define somf_TPriorityQueueIterator_somCastObj SOMObject_somCastObj
#define somf_TPriorityQueueIterator_somResetObj SOMObject_somResetObj
#define somf_TPriorityQueueIterator_somDispatchV SOMObject_somDispatchV
#define somf_TPriorityQueueIterator_somDispatchL SOMObject_somDispatchL
#define somf_TPriorityQueueIterator_somDispatchA SOMObject_somDispatchA
#define somf_TPriorityQueueIterator_somDispatchD SOMObject_somDispatchD
#define somf_TPriorityQueueIterator_somPrintSelf SOMObject_somPrintSelf
#define somf_TPriorityQueueIterator_somDumpSelf SOMObject_somDumpSelf
#define somf_TPriorityQueueIterator_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_somf_TPriorityQueueIterator_h */
