
/*
 * This file was generated by the SOM Compiler.
 * FileName: sombacls.h.
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


#ifndef SOM_SOMMBeforeAfter_h
#define SOM_SOMMBeforeAfter_h


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
#ifndef SOMMBeforeAfter
#define SOMMBeforeAfter SOMObject
#endif
#include <somcls.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */

/*
 * End of bindings for IDL types.
 */

#define SOMMBeforeAfter_MajorVersion 2
#define SOMMBeforeAfter_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define SOMMBeforeAfterNewClass c
#pragma linkage(c, system)
#define SOMMBeforeAfterClassData d
#define SOMMBeforeAfterCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define SOMMBeforeAfter_classObj SOMMBeforeAfterClassData.classObject
#define _SOMMBeforeAfter SOMMBeforeAfter_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK SOMMBeforeAfterNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(SOMMBeforeAfterNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct SOMMBeforeAfterClassDataStructure {
	SOMClass *classObject;
	somMToken sommBeforeMethod;
	somMToken sommAfterMethod;
} SOMDLINK SOMMBeforeAfterClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct SOMMBeforeAfterCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
	somMethodProc *sommBeforeMethod;
	somMethodProc *sommAfterMethod;
} SOMDLINK SOMMBeforeAfterCClassData;

/*
 * New and Renew macros for SOMMBeforeAfter
 */
#define SOMMBeforeAfterNew() \
   ( _SOMMBeforeAfter ? \
	_somNew(_SOMMBeforeAfter) \
	: ( SOMMBeforeAfterNewClass(\
		SOMMBeforeAfter_MajorVersion, \
		SOMMBeforeAfter_MinorVersion),\
	   _somNew(_SOMMBeforeAfter)))
#define SOMMBeforeAfterRenew(buf) \
   ( _SOMMBeforeAfter ? \
	_somRenew(_SOMMBeforeAfter, buf) \
	: ( SOMMBeforeAfterNewClass(\
		SOMMBeforeAfter_MajorVersion, \
		SOMMBeforeAfter_MinorVersion),\
	   _somRenew(_SOMMBeforeAfter, buf)))

/*
 * Override method: somDefaultInit
 */
#define SOMMBeforeAfter_somDefaultInit(somSelf,ctrl) \
	SOMObject_somDefaultInit(somSelf,ctrl)

/*
 * Override method: somInitMIClass
 */
#define SOMMBeforeAfter_somInitMIClass(somSelf,inherit_vars,className,parentClasses,dataSize,dataAlignment,maxStaticMethods,majorVersion,minorVersion) \
	SOMClass_somInitMIClass(somSelf,inherit_vars,className,parentClasses,dataSize,dataAlignment,maxStaticMethods,majorVersion,minorVersion)

/*
 * New Method: sommBeforeMethod
 */
typedef boolean   SOMLINK somTP_SOMMBeforeAfter_sommBeforeMethod(SOMMBeforeAfter *somSelf, Environment *ev, 
		SOMObject* object, 
		somId methodId, 
		va_list ap);
#pragma linkage(somTP_SOMMBeforeAfter_sommBeforeMethod, system)
typedef somTP_SOMMBeforeAfter_sommBeforeMethod *somTD_SOMMBeforeAfter_sommBeforeMethod;
/*
 *  returns one of the following values:
 *       TRUE  --  continue Before/After processing
 *       FALSE --  skip to executing the corresponding After method
 *                 (this includes skipping the requested method)
 */
#define somMD_SOMMBeforeAfter_sommBeforeMethod "::SOMMBeforeAfter::sommBeforeMethod"
#define SOMMBeforeAfter_sommBeforeMethod(somSelf,ev,object,methodId,ap) \
    (SOM_Resolve(somSelf, SOMMBeforeAfter, sommBeforeMethod) \
	(somSelf,ev,object,methodId,ap))

/*
 * legacy support for non-system-linkage vararg stub
 * use -mnolegacy to avoid generating this stub.
 */
#ifdef SOMMBeforeAfter_VA_EXTERN
    SOMEXTERN
#else
    static
#endif
boolean   va_SOMMBeforeAfter_sommBeforeMethod(SOMMBeforeAfter *somSelf, Environment *ev,
		SOMObject* object,
		somId methodId,
		...)
#if (defined(SOMMBeforeAfter_VA_STUBS)||!defined(SOMMBeforeAfter_VA_EXTERN))
{
    boolean result;
    va_list ap;
    va_start(ap, methodId);
    result = SOMMBeforeAfter_sommBeforeMethod(somSelf,ev,object,methodId,ap);
    va_end(ap);
    return (result);
}    
#else
    ;
#endif

/*
 * normal vararg stubs
 */
#ifndef SOMGD_va_sommBeforeMethod
   #ifdef va_sommBeforeMethod
      #undef va_sommBeforeMethod
      #define SOMGD_va_sommBeforeMethod 1
   #else
      #define va_sommBeforeMethod somva_SOMMBeforeAfter_sommBeforeMethod
   #endif /* va_sommBeforeMethod */
#endif /* SOMGD_va_sommBeforeMethod */
#ifndef SOMGD_sommBeforeMethod
    #if (defined(_sommBeforeMethod) || defined(__sommBeforeMethod))
        #undef _sommBeforeMethod
        #undef __sommBeforeMethod
        #define SOMGD_sommBeforeMethod 1
    #else
        #define _sommBeforeMethod somva_SOMMBeforeAfter_sommBeforeMethod
    #endif /* _sommBeforeMethod */
#endif /* SOMGD_sommBeforeMethod */
#ifdef SOMMBeforeAfter_VA_EXTERN
#pragma linkage(somva_SOMMBeforeAfter_sommBeforeMethod, system)
    SOMEXTERN
#else
    static
#endif
boolean  SOMLINK somva_SOMMBeforeAfter_sommBeforeMethod(SOMMBeforeAfter *somSelf, Environment *ev,
		SOMObject* object,
		somId methodId,
		...)
#if (defined(SOMMBeforeAfter_VA_STUBS)||!defined(SOMMBeforeAfter_VA_EXTERN))
{
    boolean result;
    va_list ap;
    va_start(ap, methodId);
    result = SOMMBeforeAfter_sommBeforeMethod(somSelf,ev,object,methodId,ap);
    va_end(ap);
    return (result);
}    
#else
    ;
#endif

/*
 * New Method: sommAfterMethod
 */
typedef void   SOMLINK somTP_SOMMBeforeAfter_sommAfterMethod(SOMMBeforeAfter *somSelf, Environment *ev, 
		SOMObject* object, 
		somId methodId, 
		somToken returnedvalue, 
		va_list ap);
#pragma linkage(somTP_SOMMBeforeAfter_sommAfterMethod, system)
typedef somTP_SOMMBeforeAfter_sommAfterMethod *somTD_SOMMBeforeAfter_sommAfterMethod;
#define somMD_SOMMBeforeAfter_sommAfterMethod "::SOMMBeforeAfter::sommAfterMethod"
#define SOMMBeforeAfter_sommAfterMethod(somSelf,ev,object,methodId,returnedvalue,ap) \
    (SOM_Resolve(somSelf, SOMMBeforeAfter, sommAfterMethod) \
	(somSelf,ev,object,methodId,returnedvalue,ap))

/*
 * legacy support for non-system-linkage vararg stub
 * use -mnolegacy to avoid generating this stub.
 */
#ifdef SOMMBeforeAfter_VA_EXTERN
    SOMEXTERN
#else
    static
#endif
void   va_SOMMBeforeAfter_sommAfterMethod(SOMMBeforeAfter *somSelf, Environment *ev,
		SOMObject* object,
		somId methodId,
		somToken returnedvalue,
		...)
#if (defined(SOMMBeforeAfter_VA_STUBS)||!defined(SOMMBeforeAfter_VA_EXTERN))
{
    va_list ap;
    va_start(ap, returnedvalue);
    SOMMBeforeAfter_sommAfterMethod(somSelf,ev,object,methodId,returnedvalue,ap);
    va_end(ap);
}    
#else
    ;
#endif

/*
 * normal vararg stubs
 */
#ifndef SOMGD_va_sommAfterMethod
   #ifdef va_sommAfterMethod
      #undef va_sommAfterMethod
      #define SOMGD_va_sommAfterMethod 1
   #else
      #define va_sommAfterMethod somva_SOMMBeforeAfter_sommAfterMethod
   #endif /* va_sommAfterMethod */
#endif /* SOMGD_va_sommAfterMethod */
#ifndef SOMGD_sommAfterMethod
    #if (defined(_sommAfterMethod) || defined(__sommAfterMethod))
        #undef _sommAfterMethod
        #undef __sommAfterMethod
        #define SOMGD_sommAfterMethod 1
    #else
        #define _sommAfterMethod somva_SOMMBeforeAfter_sommAfterMethod
    #endif /* _sommAfterMethod */
#endif /* SOMGD_sommAfterMethod */
#ifdef SOMMBeforeAfter_VA_EXTERN
#pragma linkage(somva_SOMMBeforeAfter_sommAfterMethod, system)
    SOMEXTERN
#else
    static
#endif
void  SOMLINK somva_SOMMBeforeAfter_sommAfterMethod(SOMMBeforeAfter *somSelf, Environment *ev,
		SOMObject* object,
		somId methodId,
		somToken returnedvalue,
		...)
#if (defined(SOMMBeforeAfter_VA_STUBS)||!defined(SOMMBeforeAfter_VA_EXTERN))
{
    va_list ap;
    va_start(ap, returnedvalue);
    SOMMBeforeAfter_sommAfterMethod(somSelf,ev,object,methodId,returnedvalue,ap);
    va_end(ap);
}    
#else
    ;
#endif
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define SOMMBeforeAfter__get_somDataAlignment SOMClass__get_somDataAlignment
#define SOMMBeforeAfter__get_somInstanceDataOffsets SOMClass__get_somInstanceDataOffsets
#define SOMMBeforeAfter__get_somDirectInitClasses SOMClass__get_somDirectInitClasses
#define SOMMBeforeAfter_somNew SOMClass_somNew
#define SOMMBeforeAfter_somNewNoInit SOMClass_somNewNoInit
#define SOMMBeforeAfter_somRenew SOMClass_somRenew
#define SOMMBeforeAfter_somRenewNoInit SOMClass_somRenewNoInit
#define SOMMBeforeAfter_somRenewNoZero SOMClass_somRenewNoZero
#define SOMMBeforeAfter_somRenewNoInitNoZero SOMClass_somRenewNoInitNoZero
#define SOMMBeforeAfter_somAllocate SOMClass_somAllocate
#define SOMMBeforeAfter_somDeallocate SOMClass_somDeallocate
#define SOMMBeforeAfter_somInitClass SOMClass_somInitClass
#define SOMMBeforeAfter_somAddStaticMethod SOMClass_somAddStaticMethod
#define SOMMBeforeAfter_somAddDynamicMethod SOMClass_somAddDynamicMethod
#define SOMMBeforeAfter_somOverrideSMethod SOMClass_somOverrideSMethod
#define SOMMBeforeAfter_somClassReady SOMClass_somClassReady
#define SOMMBeforeAfter_somGetApplyStub SOMClass_somGetApplyStub
#define SOMMBeforeAfter_somGetClassData SOMClass_somGetClassData
#define SOMMBeforeAfter_somSetClassData SOMClass_somSetClassData
#define SOMMBeforeAfter_somGetClassMtab SOMClass_somGetClassMtab
#define SOMMBeforeAfter_somGetInstanceOffset SOMClass_somGetInstanceOffset
#define SOMMBeforeAfter_somGetInstancePartSize SOMClass_somGetInstancePartSize
#define SOMMBeforeAfter_somGetInstanceSize SOMClass_somGetInstanceSize
#define SOMMBeforeAfter_somGetInstanceToken SOMClass_somGetInstanceToken
#define SOMMBeforeAfter_somGetMemberToken SOMClass_somGetMemberToken
#define SOMMBeforeAfter_somGetMethodData SOMClass_somGetMethodData
#define SOMMBeforeAfter_somGetRdStub SOMClass_somGetRdStub
#define SOMMBeforeAfter_somGetMethodDescriptor SOMClass_somGetMethodDescriptor
#define SOMMBeforeAfter_somGetMethodIndex SOMClass_somGetMethodIndex
#define SOMMBeforeAfter_somGetMethodToken SOMClass_somGetMethodToken
#define SOMMBeforeAfter_somGetName SOMClass_somGetName
#define SOMMBeforeAfter_somGetNthMethodData SOMClass_somGetNthMethodData
#define SOMMBeforeAfter_somGetNthMethodInfo SOMClass_somGetNthMethodInfo
#define SOMMBeforeAfter_somGetNumMethods SOMClass_somGetNumMethods
#define SOMMBeforeAfter_somGetNumStaticMethods SOMClass_somGetNumStaticMethods
#define SOMMBeforeAfter_somGetParent SOMClass_somGetParent
#define SOMMBeforeAfter_somGetParents SOMClass_somGetParents
#define SOMMBeforeAfter_somGetVersionNumbers SOMClass_somGetVersionNumbers
#define SOMMBeforeAfter_somFindMethod SOMClass_somFindMethod
#define SOMMBeforeAfter_somFindMethodOk SOMClass_somFindMethodOk
#define SOMMBeforeAfter_somFindSMethod SOMClass_somFindSMethod
#define SOMMBeforeAfter_somFindSMethodOk SOMClass_somFindSMethodOk
#define SOMMBeforeAfter_somLookupMethod SOMClass_somLookupMethod
#define SOMMBeforeAfter_somCheckVersion SOMClass_somCheckVersion
#define SOMMBeforeAfter_somDescendedFrom SOMClass_somDescendedFrom
#define SOMMBeforeAfter_somSupportsMethod SOMClass_somSupportsMethod
#define SOMMBeforeAfter_somDefinedMethod SOMClass_somDefinedMethod
#define SOMMBeforeAfter_somOverrideMtab SOMClass_somOverrideMtab
#define SOMMBeforeAfter_somDestruct SOMObject_somDestruct
#define SOMMBeforeAfter_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define SOMMBeforeAfter_somDefaultAssign SOMObject_somDefaultAssign
#define SOMMBeforeAfter_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define SOMMBeforeAfter_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define SOMMBeforeAfter_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define SOMMBeforeAfter_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define SOMMBeforeAfter_somDefaultVAssign SOMObject_somDefaultVAssign
#define SOMMBeforeAfter_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define SOMMBeforeAfter_somInit SOMObject_somInit
#define SOMMBeforeAfter_somFree SOMObject_somFree
#define SOMMBeforeAfter_somUninit SOMObject_somUninit
#define SOMMBeforeAfter_somGetClass SOMObject_somGetClass
#define SOMMBeforeAfter_somGetClassName SOMObject_somGetClassName
#define SOMMBeforeAfter_somGetSize SOMObject_somGetSize
#define SOMMBeforeAfter_somIsA SOMObject_somIsA
#define SOMMBeforeAfter_somIsInstanceOf SOMObject_somIsInstanceOf
#define SOMMBeforeAfter_somRespondsTo SOMObject_somRespondsTo
#define SOMMBeforeAfter_somDispatch SOMObject_somDispatch
#define SOMMBeforeAfter_somClassDispatch SOMObject_somClassDispatch
#define SOMMBeforeAfter_somCastObj SOMObject_somCastObj
#define SOMMBeforeAfter_somResetObj SOMObject_somResetObj
#define SOMMBeforeAfter_somDispatchV SOMObject_somDispatchV
#define SOMMBeforeAfter_somDispatchL SOMObject_somDispatchL
#define SOMMBeforeAfter_somDispatchA SOMObject_somDispatchA
#define SOMMBeforeAfter_somDispatchD SOMObject_somDispatchD
#define SOMMBeforeAfter_somPrintSelf SOMObject_somPrintSelf
#define SOMMBeforeAfter_somDumpSelf SOMObject_somDumpSelf
#define SOMMBeforeAfter_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_SOMMBeforeAfter_h */
