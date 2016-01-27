
/*
 * This file was generated by the SOM Compiler.
 * FileName: replicbl.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.17
 *     SOM Emitter emith: 2.47
 */

/*
 *    COMPONENT_NAME: somr
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


#ifndef SOM_SOMRReplicbl_h
#define SOM_SOMRReplicbl_h


/*
 * Passthru lines: File: "C.h", "before"
 */
#include <somrerrd.h>

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
#ifndef SOMRReplicbl
#define SOMRReplicbl SOMObject
#endif
/*
 *  This class provides a link to the Replication Framework. Any class derived
 *  from this class can have instances that are replicated in other address
 *  spaces.  To get the ability to replicate, the derived
 *  class has to abide by the following rules (these rules are binding on
 *  further derivations and contained (constituent) subobjects as well):
 * 
 *     1. It must obtain a replica lock before updating its data and must
 *        release the same after the update. (i.e., The update methods
 *        must bracket their code in a (somrLock, somrReleaseNPropagateUpdate)
 *        pair or a (somrLockNLogOp, somrReleaseNPropagateOperation) pair.)
 *     2. If after obtaining the replica lock, if the object decides to abort
 *        an update operation, it must call the appropriate abort method.
 *        (somrReleaseLockNAbortOp or somrReleaseLockNAbortUpdate)
 *     3. In case value logging is used, it must have an update language in which
 *        changes in the state of the object can be described.
 *     4. In case value logging is used, it must provide a method to receive and
 *        interpret update messages propagated by other replicas. (i.e., Must implement
 *        somrApplyUpdates method. When there are subobjects, this implementation
 *        should call them to interpret the updates appropriate to them.)
 *     5. It must have methods to get and set the complete state of the object (including
 *        any subobjects). (i.e., Must provide implementations for somrGetState
 *        and somrSetState.)
 *     6. It should be able to receive and interpret data replication
 *        directives (e.g., "LOST_CONNECTION", "BECOME_STAND_ALONE", etc. )
 */
#include <nameable.h>
#include <linear.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */
#ifndef SOFTRepmgrAB
    #define SOFTRepmgrAB SOMObject
#endif /* SOFTRepmgrAB */
#ifndef Set
    #define Set SOMObject
#endif /* Set */

/*
 * End of bindings for IDL types.
 */

#define SOMRReplicbl_MajorVersion 2
#define SOMRReplicbl_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define SOMRReplicblNewClass c
#pragma linkage(c, system)
#define SOMRReplicblClassData d
#define SOMRReplicblCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define SOMRReplicbl_classObj SOMRReplicblClassData.classObject
#define _SOMRReplicbl SOMRReplicbl_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK SOMRReplicblNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(SOMRReplicblNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct SOMRReplicblClassDataStructure {
	SOMClass *classObject;
	somMToken somrLock;
	somMToken somrLockNlogOp;
	somMToken somrReleaseNPropagateUpdate;
	somMToken somrReleaseLockNAbortUpdate;
	somMToken somrReleaseNPropagateOperation;
	somMToken somrReleaseLockNAbortOp;
	somMToken somrSendDirective;
	somMToken somrGetSavePermit;
	somMToken somrRepInit;
	somMToken somrRepUninit;
	somMToken somrApplyUpdates;
	somMToken somrDoDirective;
	somMToken somrPin;
	somMToken somrUnPin;
	somMToken somrGetSecurityPolicy;
} SOMDLINK SOMRReplicblClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct SOMRReplicblCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
	somMethodProc *somrLockNlogOp;
} SOMDLINK SOMRReplicblCClassData;

/*
 * New and Renew macros for SOMRReplicbl
 */
#define SOMRReplicblNew() \
   ( _SOMRReplicbl ? \
	_somNew(_SOMRReplicbl) \
	: ( SOMRReplicblNewClass(\
		SOMRReplicbl_MajorVersion, \
		SOMRReplicbl_MinorVersion),\
	   _somNew(_SOMRReplicbl)))
#define SOMRReplicblRenew(buf) \
   ( _SOMRReplicbl ? \
	_somRenew(_SOMRReplicbl, buf) \
	: ( SOMRReplicblNewClass(\
		SOMRReplicbl_MajorVersion, \
		SOMRReplicbl_MinorVersion),\
	   _somRenew(_SOMRReplicbl, buf)))

/*
 * Override method: somInit
 */
#define SOMRReplicbl_somInit(somSelf) \
	SOMObject_somInit(somSelf)

/*
 * Override method: somUninit
 */
#define SOMRReplicbl_somUninit(somSelf) \
	SOMObject_somUninit(somSelf)

/*
 * Override method: somrSetObjName
 */
#define SOMRReplicbl_somrSetObjName(somSelf,ev,name) \
	SOMRNameable_somrSetObjName(somSelf,ev,name)

/*
 * New Method: somrLock
 */
typedef void   SOMLINK somTP_SOMRReplicbl_somrLock(SOMRReplicbl *somSelf, Environment *ev);
#pragma linkage(somTP_SOMRReplicbl_somrLock, system)
typedef somTP_SOMRReplicbl_somrLock *somTD_SOMRReplicbl_somrLock;
/*
 *  Get a lock on this replica of the object. An exception is raised if the
 *  lock is not obtained.
 */
#define somMD_SOMRReplicbl_somrLock "::SOMRReplicbl::somrLock"
#define SOMRReplicbl_somrLock(somSelf,ev) \
    (SOM_Resolve(somSelf, SOMRReplicbl, somrLock) \
	(somSelf,ev))
#ifndef SOMGD_somrLock
    #if (defined(_somrLock) || defined(__somrLock))
        #undef _somrLock
        #undef __somrLock
        #define SOMGD_somrLock 1
    #else
        #define _somrLock SOMRReplicbl_somrLock
    #endif /* _somrLock */
#endif /* SOMGD_somrLock */

/*
 * New Method: somrLockNlogOp
 */
typedef void   SOMLINK somTP_SOMRReplicbl_somrLockNlogOp(SOMRReplicbl *somSelf, Environment *ev, 
		string ClassName, 
		string MthdName, 
		va_list ap);
#pragma linkage(somTP_SOMRReplicbl_somrLockNlogOp, system)
typedef somTP_SOMRReplicbl_somrLockNlogOp *somTD_SOMRReplicbl_somrLockNlogOp;
/*
 *  Similar to somrLock, but it also logs the method (i.e., MthdName) that is
 *  requesting the lock.
 *  The va_list parameter is for specifying the actual arguments with which "MthdName" is
 *  being called.
 */
#define somMD_SOMRReplicbl_somrLockNlogOp "::SOMRReplicbl::somrLockNlogOp"
#define SOMRReplicbl_somrLockNlogOp(somSelf,ev,ClassName,MthdName,ap) \
    (SOM_Resolve(somSelf, SOMRReplicbl, somrLockNlogOp) \
	(somSelf,ev,ClassName,MthdName,ap))

/*
 * legacy support for non-system-linkage vararg stub
 * use -mnolegacy to avoid generating this stub.
 */
#ifdef SOMRReplicbl_VA_EXTERN
    SOMEXTERN
#else
    static
#endif
void   va_SOMRReplicbl_somrLockNlogOp(SOMRReplicbl *somSelf, Environment *ev,
		string ClassName,
		string MthdName,
		...)
#if (defined(SOMRReplicbl_VA_STUBS)||!defined(SOMRReplicbl_VA_EXTERN))
{
    va_list ap;
    va_start(ap, MthdName);
    SOMRReplicbl_somrLockNlogOp(somSelf,ev,ClassName,MthdName,ap);
    va_end(ap);
}    
#else
    ;
#endif

/*
 * normal vararg stubs
 */
#ifndef SOMGD_va_somrLockNlogOp
   #ifdef va_somrLockNlogOp
      #undef va_somrLockNlogOp
      #define SOMGD_va_somrLockNlogOp 1
   #else
      #define va_somrLockNlogOp somva_SOMRReplicbl_somrLockNlogOp
   #endif /* va_somrLockNlogOp */
#endif /* SOMGD_va_somrLockNlogOp */
#ifndef SOMGD_somrLockNlogOp
    #if (defined(_somrLockNlogOp) || defined(__somrLockNlogOp))
        #undef _somrLockNlogOp
        #undef __somrLockNlogOp
        #define SOMGD_somrLockNlogOp 1
    #else
        #define _somrLockNlogOp somva_SOMRReplicbl_somrLockNlogOp
    #endif /* _somrLockNlogOp */
#endif /* SOMGD_somrLockNlogOp */
#ifdef SOMRReplicbl_VA_EXTERN
#pragma linkage(somva_SOMRReplicbl_somrLockNlogOp, system)
    SOMEXTERN
#else
    static
#endif
void  SOMLINK somva_SOMRReplicbl_somrLockNlogOp(SOMRReplicbl *somSelf, Environment *ev,
		string ClassName,
		string MthdName,
		...)
#if (defined(SOMRReplicbl_VA_STUBS)||!defined(SOMRReplicbl_VA_EXTERN))
{
    va_list ap;
    va_start(ap, MthdName);
    SOMRReplicbl_somrLockNlogOp(somSelf,ev,ClassName,MthdName,ap);
    va_end(ap);
}    
#else
    ;
#endif

/*
 * New Method: somrReleaseNPropagateUpdate
 */
typedef void   SOMLINK somTP_SOMRReplicbl_somrReleaseNPropagateUpdate(SOMRReplicbl *somSelf, Environment *ev, 
		string clsname, 
		string buf, 
		long len, 
		long intOid);
#pragma linkage(somTP_SOMRReplicbl_somrReleaseNPropagateUpdate, system)
typedef somTP_SOMRReplicbl_somrReleaseNPropagateUpdate *somTD_SOMRReplicbl_somrReleaseNPropagateUpdate;
/*
 *  Release the lock locally and propagate the local updates to master and or
 *  other shadows by calling the local replica manager. This propagates
 *  "value log" of state changes. The parameter intOid is used to indicate
 *  a subobject id to which this update is to be applied. If there are no
 *  subobjects, this argument is to be set to 0.
 */
#define somMD_SOMRReplicbl_somrReleaseNPropagateUpdate "::SOMRReplicbl::somrReleaseNPropagateUpdate"
#define SOMRReplicbl_somrReleaseNPropagateUpdate(somSelf,ev,clsname,buf,len,intOid) \
    (SOM_Resolve(somSelf, SOMRReplicbl, somrReleaseNPropagateUpdate) \
	(somSelf,ev,clsname,buf,len,intOid))
#ifndef SOMGD_somrReleaseNPropagateUpdate
    #if (defined(_somrReleaseNPropagateUpdate) || defined(__somrReleaseNPropagateUpdate))
        #undef _somrReleaseNPropagateUpdate
        #undef __somrReleaseNPropagateUpdate
        #define SOMGD_somrReleaseNPropagateUpdate 1
    #else
        #define _somrReleaseNPropagateUpdate SOMRReplicbl_somrReleaseNPropagateUpdate
    #endif /* _somrReleaseNPropagateUpdate */
#endif /* SOMGD_somrReleaseNPropagateUpdate */

/*
 * New Method: somrReleaseLockNAbortUpdate
 */
typedef void   SOMLINK somTP_SOMRReplicbl_somrReleaseLockNAbortUpdate(SOMRReplicbl *somSelf, Environment *ev);
#pragma linkage(somTP_SOMRReplicbl_somrReleaseLockNAbortUpdate, system)
typedef somTP_SOMRReplicbl_somrReleaseLockNAbortUpdate *somTD_SOMRReplicbl_somrReleaseLockNAbortUpdate;
/*
 *  Lets the data replication framework know that the user decided to abort
 *  the operation he/she began by calling somrLock. Once a lock is
 *  obtained, either this method or somrReleaseNPropagateUpdate must
 *  be called.
 */
#define somMD_SOMRReplicbl_somrReleaseLockNAbortUpdate "::SOMRReplicbl::somrReleaseLockNAbortUpdate"
#define SOMRReplicbl_somrReleaseLockNAbortUpdate(somSelf,ev) \
    (SOM_Resolve(somSelf, SOMRReplicbl, somrReleaseLockNAbortUpdate) \
	(somSelf,ev))
#ifndef SOMGD_somrReleaseLockNAbortUpdate
    #if (defined(_somrReleaseLockNAbortUpdate) || defined(__somrReleaseLockNAbortUpdate))
        #undef _somrReleaseLockNAbortUpdate
        #undef __somrReleaseLockNAbortUpdate
        #define SOMGD_somrReleaseLockNAbortUpdate 1
    #else
        #define _somrReleaseLockNAbortUpdate SOMRReplicbl_somrReleaseLockNAbortUpdate
    #endif /* _somrReleaseLockNAbortUpdate */
#endif /* SOMGD_somrReleaseLockNAbortUpdate */

/*
 * New Method: somrReleaseNPropagateOperation
 */
typedef void   SOMLINK somTP_SOMRReplicbl_somrReleaseNPropagateOperation(SOMRReplicbl *somSelf, Environment *ev);
#pragma linkage(somTP_SOMRReplicbl_somrReleaseNPropagateOperation, system)
typedef somTP_SOMRReplicbl_somrReleaseNPropagateOperation *somTD_SOMRReplicbl_somrReleaseNPropagateOperation;
/*
 *  Similar to Propagate update, except now propagate the "operation log"
 *  instead of the value log  prepared by the subclass implementation.
 */
#define somMD_SOMRReplicbl_somrReleaseNPropagateOperation "::SOMRReplicbl::somrReleaseNPropagateOperation"
#define SOMRReplicbl_somrReleaseNPropagateOperation(somSelf,ev) \
    (SOM_Resolve(somSelf, SOMRReplicbl, somrReleaseNPropagateOperation) \
	(somSelf,ev))
#ifndef SOMGD_somrReleaseNPropagateOperation
    #if (defined(_somrReleaseNPropagateOperation) || defined(__somrReleaseNPropagateOperation))
        #undef _somrReleaseNPropagateOperation
        #undef __somrReleaseNPropagateOperation
        #define SOMGD_somrReleaseNPropagateOperation 1
    #else
        #define _somrReleaseNPropagateOperation SOMRReplicbl_somrReleaseNPropagateOperation
    #endif /* _somrReleaseNPropagateOperation */
#endif /* SOMGD_somrReleaseNPropagateOperation */

/*
 * New Method: somrReleaseLockNAbortOp
 */
typedef void   SOMLINK somTP_SOMRReplicbl_somrReleaseLockNAbortOp(SOMRReplicbl *somSelf, Environment *ev);
#pragma linkage(somTP_SOMRReplicbl_somrReleaseLockNAbortOp, system)
typedef somTP_SOMRReplicbl_somrReleaseLockNAbortOp *somTD_SOMRReplicbl_somrReleaseLockNAbortOp;
/*
 *  Lets the data replication framework know that the user decided to abort
 *  the operation that he/she began by calling somrLockNLogOp. Once a lock
 *  is obtained, either this method or somrReleaseNPropagateOperation must
 *  be called
 */
#define somMD_SOMRReplicbl_somrReleaseLockNAbortOp "::SOMRReplicbl::somrReleaseLockNAbortOp"
#define SOMRReplicbl_somrReleaseLockNAbortOp(somSelf,ev) \
    (SOM_Resolve(somSelf, SOMRReplicbl, somrReleaseLockNAbortOp) \
	(somSelf,ev))
#ifndef SOMGD_somrReleaseLockNAbortOp
    #if (defined(_somrReleaseLockNAbortOp) || defined(__somrReleaseLockNAbortOp))
        #undef _somrReleaseLockNAbortOp
        #undef __somrReleaseLockNAbortOp
        #define SOMGD_somrReleaseLockNAbortOp 1
    #else
        #define _somrReleaseLockNAbortOp SOMRReplicbl_somrReleaseLockNAbortOp
    #endif /* _somrReleaseLockNAbortOp */
#endif /* SOMGD_somrReleaseLockNAbortOp */

/*
 * New Method: somrRepInit
 */
typedef long   SOMLINK somTP_SOMRReplicbl_somrRepInit(SOMRReplicbl *somSelf, Environment *ev, 
		char lType, 
		char mode);
#pragma linkage(somTP_SOMRReplicbl_somrRepInit, system)
typedef somTP_SOMRReplicbl_somrRepInit *somTD_SOMRReplicbl_somrRepInit;
/*
 *  Makes the object ready for replication. A derived object
 *  MUST call this method for activating replica control.  The parameter
 *  lType indicates the type of logging used: 'v' for value logging and 'o'
 *  for operation logging.  The parameter mode indicates whether the
 *  object is opened for reading("r") or writing ("w").
 * 
 *  If no errors occur, a return value of 1 indicates that this is the first
 *  replica to be activated (i.e., the Master), and 0 indicates it is a shadow.
 * 
 *  If an error occurs, an exception is raised, and the return value is
 *  indeterminate (and should be ignored).
 * 
 *  If the object is already initialized, no action is taken, and a return
 *  code of 0 is returned.
 */
#define somMD_SOMRReplicbl_somrRepInit "::SOMRReplicbl::somrRepInit"
#define SOMRReplicbl_somrRepInit(somSelf,ev,lType,mode) \
    (SOM_Resolve(somSelf, SOMRReplicbl, somrRepInit) \
	(somSelf,ev,lType,mode))
#ifndef SOMGD_somrRepInit
    #if (defined(_somrRepInit) || defined(__somrRepInit))
        #undef _somrRepInit
        #undef __somrRepInit
        #define SOMGD_somrRepInit 1
    #else
        #define _somrRepInit SOMRReplicbl_somrRepInit
    #endif /* _somrRepInit */
#endif /* SOMGD_somrRepInit */

/*
 * New Method: somrRepUninit
 */
typedef void   SOMLINK somTP_SOMRReplicbl_somrRepUninit(SOMRReplicbl *somSelf, Environment *ev);
#pragma linkage(somTP_SOMRReplicbl_somrRepUninit, system)
typedef somTP_SOMRReplicbl_somrRepUninit *somTD_SOMRReplicbl_somrRepUninit;
/*
 *  Destroys the set up for replication.
 *  If the object is not initialized for replication, no action is taken.
 */
#define somMD_SOMRReplicbl_somrRepUninit "::SOMRReplicbl::somrRepUninit"
#define SOMRReplicbl_somrRepUninit(somSelf,ev) \
    (SOM_Resolve(somSelf, SOMRReplicbl, somrRepUninit) \
	(somSelf,ev))
#ifndef SOMGD_somrRepUninit
    #if (defined(_somrRepUninit) || defined(__somrRepUninit))
        #undef _somrRepUninit
        #undef __somrRepUninit
        #define SOMGD_somrRepUninit 1
    #else
        #define _somrRepUninit SOMRReplicbl_somrRepUninit
    #endif /* _somrRepUninit */
#endif /* SOMGD_somrRepUninit */

/*
 * New Method: somrApplyUpdates
 */
typedef void   SOMLINK somTP_SOMRReplicbl_somrApplyUpdates(SOMRReplicbl *somSelf, Environment *ev, 
		string buf, 
		long len, 
		long ObjIntId);
#pragma linkage(somTP_SOMRReplicbl_somrApplyUpdates, system)
typedef somTP_SOMRReplicbl_somrApplyUpdates *somTD_SOMRReplicbl_somrApplyUpdates;
/*
 *  This method interprets the buffer received as an update to its state.
 *  The format of this update is exactly the same as the one used by the
 *  subclass implementor for the update buffer passed to ReleaseNPropagateUpdate
 *  method. The ObjIntId parameter indicates the internal subobject id to which
 *  this update should be applied. If it is 0, then the update is to be applied
 *  to self.
 */
#define somMD_SOMRReplicbl_somrApplyUpdates "::SOMRReplicbl::somrApplyUpdates"
#define SOMRReplicbl_somrApplyUpdates(somSelf,ev,buf,len,ObjIntId) \
    (SOM_Resolve(somSelf, SOMRReplicbl, somrApplyUpdates) \
	(somSelf,ev,buf,len,ObjIntId))
#ifndef SOMGD_somrApplyUpdates
    #if (defined(_somrApplyUpdates) || defined(__somrApplyUpdates))
        #undef _somrApplyUpdates
        #undef __somrApplyUpdates
        #define SOMGD_somrApplyUpdates 1
    #else
        #define _somrApplyUpdates SOMRReplicbl_somrApplyUpdates
    #endif /* _somrApplyUpdates */
#endif /* SOMGD_somrApplyUpdates */

/*
 * New Method: somrDoDirective
 */
typedef void   SOMLINK somTP_SOMRReplicbl_somrDoDirective(SOMRReplicbl *somSelf, Environment *ev, 
		string str);
#pragma linkage(somTP_SOMRReplicbl_somrDoDirective, system)
typedef somTP_SOMRReplicbl_somrDoDirective *somTD_SOMRReplicbl_somrDoDirective;
/*
 *  The string gives a directive to the object to implement. The directive usually
 *  indications a condition that warrants user intervention/awareness.
 */
#define somMD_SOMRReplicbl_somrDoDirective "::SOMRReplicbl::somrDoDirective"
#define SOMRReplicbl_somrDoDirective(somSelf,ev,str) \
    (SOM_Resolve(somSelf, SOMRReplicbl, somrDoDirective) \
	(somSelf,ev,str))
#ifndef SOMGD_somrDoDirective
    #if (defined(_somrDoDirective) || defined(__somrDoDirective))
        #undef _somrDoDirective
        #undef __somrDoDirective
        #define SOMGD_somrDoDirective 1
    #else
        #define _somrDoDirective SOMRReplicbl_somrDoDirective
    #endif /* _somrDoDirective */
#endif /* SOMGD_somrDoDirective */

/*
 * New Method: somrPin
 */
typedef void   SOMLINK somTP_SOMRReplicbl_somrPin(SOMRReplicbl *somSelf, Environment *ev);
#pragma linkage(somTP_SOMRReplicbl_somrPin, system)
typedef somTP_SOMRReplicbl_somrPin *somTD_SOMRReplicbl_somrPin;
/*
 *  Makes the replica lock obtained by this replica stay with it until a call
 *  to UnPin is made.  That is, it makes the replica lock un-preemptible.
 *  Raises an Exception if the lock is denied (SOMR_DENIED).
 */
#define somMD_SOMRReplicbl_somrPin "::SOMRReplicbl::somrPin"
#define SOMRReplicbl_somrPin(somSelf,ev) \
    (SOM_Resolve(somSelf, SOMRReplicbl, somrPin) \
	(somSelf,ev))
#ifndef SOMGD_somrPin
    #if (defined(_somrPin) || defined(__somrPin))
        #undef _somrPin
        #undef __somrPin
        #define SOMGD_somrPin 1
    #else
        #define _somrPin SOMRReplicbl_somrPin
    #endif /* _somrPin */
#endif /* SOMGD_somrPin */

/*
 * New Method: somrUnPin
 */
typedef void   SOMLINK somTP_SOMRReplicbl_somrUnPin(SOMRReplicbl *somSelf, Environment *ev);
#pragma linkage(somTP_SOMRReplicbl_somrUnPin, system)
typedef somTP_SOMRReplicbl_somrUnPin *somTD_SOMRReplicbl_somrUnPin;
/*
 *  Declares the replica lock preemptible. That is, other shadows can grab the
 *  replica lock from this shadow.
 */
#define somMD_SOMRReplicbl_somrUnPin "::SOMRReplicbl::somrUnPin"
#define SOMRReplicbl_somrUnPin(somSelf,ev) \
    (SOM_Resolve(somSelf, SOMRReplicbl, somrUnPin) \
	(somSelf,ev))
#ifndef SOMGD_somrUnPin
    #if (defined(_somrUnPin) || defined(__somrUnPin))
        #undef _somrUnPin
        #undef __somrUnPin
        #define SOMGD_somrUnPin 1
    #else
        #define _somrUnPin SOMRReplicbl_somrUnPin
    #endif /* _somrUnPin */
#endif /* SOMGD_somrUnPin */

/*
 * New Method: somrGetSecurityPolicy
 */
typedef long   SOMLINK somTP_SOMRReplicbl_somrGetSecurityPolicy(SOMRReplicbl *somSelf, Environment *ev);
#pragma linkage(somTP_SOMRReplicbl_somrGetSecurityPolicy, system)
typedef somTP_SOMRReplicbl_somrGetSecurityPolicy *somTD_SOMRReplicbl_somrGetSecurityPolicy;
/*
 *   Returns the security policy for replicated objects that are either
 *   non-persistent or persistent but haven't been created yet.
 *   Caveat: Meaningful only on AIX. Ignored for OS/2.
 */
#define somMD_SOMRReplicbl_somrGetSecurityPolicy "::SOMRReplicbl::somrGetSecurityPolicy"
#define SOMRReplicbl_somrGetSecurityPolicy(somSelf,ev) \
    (SOM_Resolve(somSelf, SOMRReplicbl, somrGetSecurityPolicy) \
	(somSelf,ev))
#ifndef SOMGD_somrGetSecurityPolicy
    #if (defined(_somrGetSecurityPolicy) || defined(__somrGetSecurityPolicy))
        #undef _somrGetSecurityPolicy
        #undef __somrGetSecurityPolicy
        #define SOMGD_somrGetSecurityPolicy 1
    #else
        #define _somrGetSecurityPolicy SOMRReplicbl_somrGetSecurityPolicy
    #endif /* _somrGetSecurityPolicy */
#endif /* SOMGD_somrGetSecurityPolicy */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define SOMRReplicbl_somrGetObjName SOMRNameable_somrGetObjName
#define SOMRReplicbl_somDefaultInit SOMObject_somDefaultInit
#define SOMRReplicbl_somDestruct SOMObject_somDestruct
#define SOMRReplicbl_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define SOMRReplicbl_somDefaultAssign SOMObject_somDefaultAssign
#define SOMRReplicbl_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define SOMRReplicbl_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define SOMRReplicbl_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define SOMRReplicbl_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define SOMRReplicbl_somDefaultVAssign SOMObject_somDefaultVAssign
#define SOMRReplicbl_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define SOMRReplicbl_somFree SOMObject_somFree
#define SOMRReplicbl_somGetClass SOMObject_somGetClass
#define SOMRReplicbl_somGetClassName SOMObject_somGetClassName
#define SOMRReplicbl_somGetSize SOMObject_somGetSize
#define SOMRReplicbl_somIsA SOMObject_somIsA
#define SOMRReplicbl_somIsInstanceOf SOMObject_somIsInstanceOf
#define SOMRReplicbl_somRespondsTo SOMObject_somRespondsTo
#define SOMRReplicbl_somDispatch SOMObject_somDispatch
#define SOMRReplicbl_somClassDispatch SOMObject_somClassDispatch
#define SOMRReplicbl_somCastObj SOMObject_somCastObj
#define SOMRReplicbl_somResetObj SOMObject_somResetObj
#define SOMRReplicbl_somDispatchV SOMObject_somDispatchV
#define SOMRReplicbl_somDispatchL SOMObject_somDispatchL
#define SOMRReplicbl_somDispatchA SOMObject_somDispatchA
#define SOMRReplicbl_somDispatchD SOMObject_somDispatchD
#define SOMRReplicbl_somPrintSelf SOMObject_somPrintSelf
#define SOMRReplicbl_somDumpSelf SOMObject_somDumpSelf
#define SOMRReplicbl_somDumpSelfInt SOMObject_somDumpSelfInt
#define SOMRReplicbl_somrGetState SOMRLinearizable_somrGetState
#define SOMRReplicbl_somrSetState SOMRLinearizable_somrSetState
#define SOMRReplicbl_somDefaultInit SOMObject_somDefaultInit
#define SOMRReplicbl_somDestruct SOMObject_somDestruct
#define SOMRReplicbl_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define SOMRReplicbl_somDefaultAssign SOMObject_somDefaultAssign
#define SOMRReplicbl_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define SOMRReplicbl_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define SOMRReplicbl_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define SOMRReplicbl_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define SOMRReplicbl_somDefaultVAssign SOMObject_somDefaultVAssign
#define SOMRReplicbl_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define SOMRReplicbl_somFree SOMObject_somFree
#define SOMRReplicbl_somGetClass SOMObject_somGetClass
#define SOMRReplicbl_somGetClassName SOMObject_somGetClassName
#define SOMRReplicbl_somGetSize SOMObject_somGetSize
#define SOMRReplicbl_somIsA SOMObject_somIsA
#define SOMRReplicbl_somIsInstanceOf SOMObject_somIsInstanceOf
#define SOMRReplicbl_somRespondsTo SOMObject_somRespondsTo
#define SOMRReplicbl_somDispatch SOMObject_somDispatch
#define SOMRReplicbl_somClassDispatch SOMObject_somClassDispatch
#define SOMRReplicbl_somCastObj SOMObject_somCastObj
#define SOMRReplicbl_somResetObj SOMObject_somResetObj
#define SOMRReplicbl_somDispatchV SOMObject_somDispatchV
#define SOMRReplicbl_somDispatchL SOMObject_somDispatchL
#define SOMRReplicbl_somDispatchA SOMObject_somDispatchA
#define SOMRReplicbl_somDispatchD SOMObject_somDispatchD
#define SOMRReplicbl_somPrintSelf SOMObject_somPrintSelf
#define SOMRReplicbl_somDumpSelf SOMObject_somDumpSelf
#define SOMRReplicbl_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_SOMRReplicbl_h */
