
/*
 * This file was generated by the SOM Compiler.
 * FileName: scconst.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.17
 *     SOM Emitter emith: 2.47
 */

/*
 *   COMPONENT_NAME: some
 * 
 *   ORIGINS: 27
 * 
 * 
 *    25H7912  (C)  COPYRIGHT International Business Machines Corp. 1992,1994,1996
 *   All Rights Reserved
 *   Licensed Materials - Property of IBM
 *   US Government Users Restricted Rights - Use, duplication or
 *   disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
 *  @(#) somc/sctypes.h 2.7 12/26/95 16:26:17 [7/30/96 14:46:04]
 * 
 */


#ifndef SOM_SOMTConstEntryC_h
#define SOM_SOMTConstEntryC_h


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
#ifndef SOMTConstEntryC
#define SOMTConstEntryC SOMObject
#endif
#include <scentry.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */
#ifndef SOMTEntryC
    #define SOMTEntryC SOMObject
#endif /* SOMTEntryC */
#ifndef SOMTEmitC
    #define SOMTEmitC SOMObject
#endif /* SOMTEmitC */
#ifndef SOMTMetaClassEntryC
    #define SOMTMetaClassEntryC SOMObject
#endif /* SOMTMetaClassEntryC */
#ifndef SOMTAttributeEntryC
    #define SOMTAttributeEntryC SOMObject
#endif /* SOMTAttributeEntryC */
#ifndef SOMTTypedefEntryC
    #define SOMTTypedefEntryC SOMObject
#endif /* SOMTTypedefEntryC */
#ifndef SOMTBaseClassEntryC
    #define SOMTBaseClassEntryC SOMObject
#endif /* SOMTBaseClassEntryC */
#ifndef SOMTPassthruEntryC
    #define SOMTPassthruEntryC SOMObject
#endif /* SOMTPassthruEntryC */
#ifndef SOMTDataEntryC
    #define SOMTDataEntryC SOMObject
#endif /* SOMTDataEntryC */
#ifndef SOMTMethodEntryC
    #define SOMTMethodEntryC SOMObject
#endif /* SOMTMethodEntryC */
#ifndef SOMTClassEntryC
    #define SOMTClassEntryC SOMObject
#endif /* SOMTClassEntryC */
#ifndef SOMTModuleEntryC
    #define SOMTModuleEntryC SOMObject
#endif /* SOMTModuleEntryC */
#ifndef SOMTParameterEntryC
    #define SOMTParameterEntryC SOMObject
#endif /* SOMTParameterEntryC */
#ifndef SOMTStructEntryC
    #define SOMTStructEntryC SOMObject
#endif /* SOMTStructEntryC */
#ifndef SOMTUnionEntryC
    #define SOMTUnionEntryC SOMObject
#endif /* SOMTUnionEntryC */
#ifndef SOMTEnumEntryC
    #define SOMTEnumEntryC SOMObject
#endif /* SOMTEnumEntryC */
#ifndef SOMTConstEntryC
    #define SOMTConstEntryC SOMObject
#endif /* SOMTConstEntryC */
#ifndef SOMTSequenceEntryC
    #define SOMTSequenceEntryC SOMObject
#endif /* SOMTSequenceEntryC */
#ifndef SOMTStringEntryC
    #define SOMTStringEntryC SOMObject
#endif /* SOMTStringEntryC */
#ifndef SOMTEnumNameEntryC
    #define SOMTEnumNameEntryC SOMObject
#endif /* SOMTEnumNameEntryC */
#ifndef SOMTCommonEntryC
    #define SOMTCommonEntryC SOMObject
#endif /* SOMTCommonEntryC */
#ifndef SOMTUserDefinedTypeEntryC
    #define SOMTUserDefinedTypeEntryC SOMObject
#endif /* SOMTUserDefinedTypeEntryC */

/*
 * End of bindings for IDL types.
 */

#define SOMTConstEntryC_MajorVersion 2
#define SOMTConstEntryC_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define SOMTConstEntryCNewClass c
#pragma linkage(c, system)
#define SOMTConstEntryCClassData d
#define SOMTConstEntryCCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define SOMTConstEntryC_classObj SOMTConstEntryCClassData.classObject
#define _SOMTConstEntryC SOMTConstEntryC_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK SOMTConstEntryCNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(SOMTConstEntryCNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct SOMTConstEntryCClassDataStructure {
	SOMClass *classObject;
	somMToken _get_somtConstStringVal;
	somMToken _get_somtConstNumVal;
	somMToken _get_somtConstType;
	somMToken _get_somtConstTypeObj;
	somMToken _get_somtConstVal;
	somMToken _get_somtConstNumNegVal;
	somMToken _get_somtConstIsNegative;
} SOMDLINK SOMTConstEntryCClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct SOMTConstEntryCCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK SOMTConstEntryCCClassData;

/*
 * New and Renew macros for SOMTConstEntryC
 */
#define SOMTConstEntryCNew() \
   ( _SOMTConstEntryC ? \
	_somNew(_SOMTConstEntryC) \
	: ( SOMTConstEntryCNewClass(\
		SOMTConstEntryC_MajorVersion, \
		SOMTConstEntryC_MinorVersion),\
	   _somNew(_SOMTConstEntryC)))
#define SOMTConstEntryCRenew(buf) \
   ( _SOMTConstEntryC ? \
	_somRenew(_SOMTConstEntryC, buf) \
	: ( SOMTConstEntryCNewClass(\
		SOMTConstEntryC_MajorVersion, \
		SOMTConstEntryC_MinorVersion),\
	   _somRenew(_SOMTConstEntryC, buf)))

/*
 * Override method: somDumpSelfInt
 */
#define SOMTConstEntryC_somDumpSelfInt(somSelf,level) \
	SOMObject_somDumpSelfInt(somSelf,level)

/*
 * Override method: somtSetSymbolsOnEntry
 */
#define SOMTConstEntryC_somtSetSymbolsOnEntry(somSelf,emitter,prefix) \
	SOMTEntryC_somtSetSymbolsOnEntry(somSelf,emitter,prefix)

/*
 * New Method: _get_somtConstTypeObj
 */
typedef SOMTEntryC*   SOMLINK somTP_SOMTConstEntryC__get_somtConstTypeObj(SOMTConstEntryC *somSelf);
#pragma linkage(somTP_SOMTConstEntryC__get_somtConstTypeObj, system)
typedef somTP_SOMTConstEntryC__get_somtConstTypeObj *somTD_SOMTConstEntryC__get_somtConstTypeObj;
/*
 *  A pointer to an object representing
 *  the type of the const.
 */
#define somMD_SOMTConstEntryC__get_somtConstTypeObj "::SOMTConstEntryC::_get_somtConstTypeObj"
#define SOMTConstEntryC__get_somtConstTypeObj(somSelf) \
    (SOM_Resolve(somSelf, SOMTConstEntryC, _get_somtConstTypeObj) \
	(somSelf))
#ifndef SOMGD_get_somtConstTypeObj
    #if (defined(_get_somtConstTypeObj) || defined(__get_somtConstTypeObj))
        #undef _get_somtConstTypeObj
        #undef __get_somtConstTypeObj
        #define SOMGD_get_somtConstTypeObj 1
    #else
        #define __get_somtConstTypeObj SOMTConstEntryC__get_somtConstTypeObj
    #endif /* __get_somtConstTypeObj */
#endif /* SOMGD_get_somtConstTypeObj */

/*
 * New Method: _get_somtConstType
 */
typedef string   SOMLINK somTP_SOMTConstEntryC__get_somtConstType(SOMTConstEntryC *somSelf);
#pragma linkage(somTP_SOMTConstEntryC__get_somtConstType, system)
typedef somTP_SOMTConstEntryC__get_somtConstType *somTD_SOMTConstEntryC__get_somtConstType;
/*
 *  The type of the constant's value.
 */
#define somMD_SOMTConstEntryC__get_somtConstType "::SOMTConstEntryC::_get_somtConstType"
#define SOMTConstEntryC__get_somtConstType(somSelf) \
    (SOM_Resolve(somSelf, SOMTConstEntryC, _get_somtConstType) \
	(somSelf))
#ifndef SOMGD_get_somtConstType
    #if (defined(_get_somtConstType) || defined(__get_somtConstType))
        #undef _get_somtConstType
        #undef __get_somtConstType
        #define SOMGD_get_somtConstType 1
    #else
        #define __get_somtConstType SOMTConstEntryC__get_somtConstType
    #endif /* __get_somtConstType */
#endif /* SOMGD_get_somtConstType */

/*
 * New Method: _get_somtConstStringVal
 */
typedef string   SOMLINK somTP_SOMTConstEntryC__get_somtConstStringVal(SOMTConstEntryC *somSelf);
#pragma linkage(somTP_SOMTConstEntryC__get_somtConstStringVal, system)
typedef somTP_SOMTConstEntryC__get_somtConstStringVal *somTD_SOMTConstEntryC__get_somtConstStringVal;
/*
 *  The string value of the constant (unevaluated).
 */
#define somMD_SOMTConstEntryC__get_somtConstStringVal "::SOMTConstEntryC::_get_somtConstStringVal"
#define SOMTConstEntryC__get_somtConstStringVal(somSelf) \
    (SOM_Resolve(somSelf, SOMTConstEntryC, _get_somtConstStringVal) \
	(somSelf))
#ifndef SOMGD_get_somtConstStringVal
    #if (defined(_get_somtConstStringVal) || defined(__get_somtConstStringVal))
        #undef _get_somtConstStringVal
        #undef __get_somtConstStringVal
        #define SOMGD_get_somtConstStringVal 1
    #else
        #define __get_somtConstStringVal SOMTConstEntryC__get_somtConstStringVal
    #endif /* __get_somtConstStringVal */
#endif /* SOMGD_get_somtConstStringVal */

/*
 * New Method: _get_somtConstNumVal
 */
typedef unsigned long   SOMLINK somTP_SOMTConstEntryC__get_somtConstNumVal(SOMTConstEntryC *somSelf);
#pragma linkage(somTP_SOMTConstEntryC__get_somtConstNumVal, system)
typedef somTP_SOMTConstEntryC__get_somtConstNumVal *somTD_SOMTConstEntryC__get_somtConstNumVal;
/*
 *  The number value of the constant.
 *  This attribute is not valid if the value cannot
 *  be stored in an unsigned long (string, float, double, negative).
 *  The somtConstIsNegative attribute can be used to determine
 *  if the value is negative.  The somtConstType attribute can
 *  be used to determine whether the value is a float or double.
 */
#define somMD_SOMTConstEntryC__get_somtConstNumVal "::SOMTConstEntryC::_get_somtConstNumVal"
#define SOMTConstEntryC__get_somtConstNumVal(somSelf) \
    (SOM_Resolve(somSelf, SOMTConstEntryC, _get_somtConstNumVal) \
	(somSelf))
#ifndef SOMGD_get_somtConstNumVal
    #if (defined(_get_somtConstNumVal) || defined(__get_somtConstNumVal))
        #undef _get_somtConstNumVal
        #undef __get_somtConstNumVal
        #define SOMGD_get_somtConstNumVal 1
    #else
        #define __get_somtConstNumVal SOMTConstEntryC__get_somtConstNumVal
    #endif /* __get_somtConstNumVal */
#endif /* SOMGD_get_somtConstNumVal */

/*
 * New Method: _get_somtConstNumNegVal
 */
typedef long   SOMLINK somTP_SOMTConstEntryC__get_somtConstNumNegVal(SOMTConstEntryC *somSelf);
#pragma linkage(somTP_SOMTConstEntryC__get_somtConstNumNegVal, system)
typedef somTP_SOMTConstEntryC__get_somtConstNumNegVal *somTD_SOMTConstEntryC__get_somtConstNumNegVal;
/*
 *  The number value of the constant, if negative.
 */
#define somMD_SOMTConstEntryC__get_somtConstNumNegVal "::SOMTConstEntryC::_get_somtConstNumNegVal"
#define SOMTConstEntryC__get_somtConstNumNegVal(somSelf) \
    (SOM_Resolve(somSelf, SOMTConstEntryC, _get_somtConstNumNegVal) \
	(somSelf))
#ifndef SOMGD_get_somtConstNumNegVal
    #if (defined(_get_somtConstNumNegVal) || defined(__get_somtConstNumNegVal))
        #undef _get_somtConstNumNegVal
        #undef __get_somtConstNumNegVal
        #define SOMGD_get_somtConstNumNegVal 1
    #else
        #define __get_somtConstNumNegVal SOMTConstEntryC__get_somtConstNumNegVal
    #endif /* __get_somtConstNumNegVal */
#endif /* SOMGD_get_somtConstNumNegVal */

/*
 * New Method: _get_somtConstIsNegative
 */
typedef boolean   SOMLINK somTP_SOMTConstEntryC__get_somtConstIsNegative(SOMTConstEntryC *somSelf);
#pragma linkage(somTP_SOMTConstEntryC__get_somtConstIsNegative, system)
typedef somTP_SOMTConstEntryC__get_somtConstIsNegative *somTD_SOMTConstEntryC__get_somtConstIsNegative;
/*
 *  Whether the constant's value is a negative integer and
 *  must be obtained using somtConstNumNegVal rather than somtConstNumVal.
 */
#define somMD_SOMTConstEntryC__get_somtConstIsNegative "::SOMTConstEntryC::_get_somtConstIsNegative"
#define SOMTConstEntryC__get_somtConstIsNegative(somSelf) \
    (SOM_Resolve(somSelf, SOMTConstEntryC, _get_somtConstIsNegative) \
	(somSelf))
#ifndef SOMGD_get_somtConstIsNegative
    #if (defined(_get_somtConstIsNegative) || defined(__get_somtConstIsNegative))
        #undef _get_somtConstIsNegative
        #undef __get_somtConstIsNegative
        #define SOMGD_get_somtConstIsNegative 1
    #else
        #define __get_somtConstIsNegative SOMTConstEntryC__get_somtConstIsNegative
    #endif /* __get_somtConstIsNegative */
#endif /* SOMGD_get_somtConstIsNegative */

/*
 * New Method: _get_somtConstVal
 */
typedef string   SOMLINK somTP_SOMTConstEntryC__get_somtConstVal(SOMTConstEntryC *somSelf);
#pragma linkage(somTP_SOMTConstEntryC__get_somtConstVal, system)
typedef somTP_SOMTConstEntryC__get_somtConstVal *somTD_SOMTConstEntryC__get_somtConstVal;
/*
 *  The string value of the constant (evaluated).
 *  The "get" method for this attribute returns a string whose
 *  ownership is transferred to the caller.
 */
#define somMD_SOMTConstEntryC__get_somtConstVal "::SOMTConstEntryC::_get_somtConstVal"
#define SOMTConstEntryC__get_somtConstVal(somSelf) \
    (SOM_Resolve(somSelf, SOMTConstEntryC, _get_somtConstVal) \
	(somSelf))
#ifndef SOMGD_get_somtConstVal
    #if (defined(_get_somtConstVal) || defined(__get_somtConstVal))
        #undef _get_somtConstVal
        #undef __get_somtConstVal
        #define SOMGD_get_somtConstVal 1
    #else
        #define __get_somtConstVal SOMTConstEntryC__get_somtConstVal
    #endif /* __get_somtConstVal */
#endif /* SOMGD_get_somtConstVal */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define SOMTConstEntryC__get_somtEntryName SOMTEntryC__get_somtEntryName
#define SOMTConstEntryC__set_somtEntryName SOMTEntryC__set_somtEntryName
#define SOMTConstEntryC__get_somtElementType SOMTEntryC__get_somtElementType
#define SOMTConstEntryC__set_somtElementType SOMTEntryC__set_somtElementType
#define SOMTConstEntryC__get_somtElementTypeName SOMTEntryC__get_somtElementTypeName
#define SOMTConstEntryC__get_somtEntryComment SOMTEntryC__get_somtEntryComment
#define SOMTConstEntryC__get_somtSourceLineNumber SOMTEntryC__get_somtSourceLineNumber
#define SOMTConstEntryC__get_somtTypeCode SOMTEntryC__get_somtTypeCode
#define SOMTConstEntryC__get_somtIsReference SOMTEntryC__get_somtIsReference
#define SOMTConstEntryC__get_somtIDLScopedName SOMTEntryC__get_somtIDLScopedName
#define SOMTConstEntryC__get_somtCScopedName SOMTEntryC__get_somtCScopedName
#define SOMTConstEntryC_somtGetModifierValue SOMTEntryC_somtGetModifierValue
#define SOMTConstEntryC_somtGetFirstModifier SOMTEntryC_somtGetFirstModifier
#define SOMTConstEntryC_somtGetNextModifier SOMTEntryC_somtGetNextModifier
#define SOMTConstEntryC_somtFormatModifier SOMTEntryC_somtFormatModifier
#define SOMTConstEntryC_somtGetModifierList SOMTEntryC_somtGetModifierList
#define SOMTConstEntryC_somtSetEntryStruct SOMTEntryC_somtSetEntryStruct
#define SOMTConstEntryC_somInit SOMObject_somInit
#define SOMTConstEntryC_somUninit SOMObject_somUninit
#define SOMTConstEntryC_somPrintSelf SOMObject_somPrintSelf
#define SOMTConstEntryC_somDumpSelf SOMObject_somDumpSelf
#define SOMTConstEntryC_somDefaultInit SOMObject_somDefaultInit
#define SOMTConstEntryC_somDestruct SOMObject_somDestruct
#define SOMTConstEntryC_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define SOMTConstEntryC_somDefaultAssign SOMObject_somDefaultAssign
#define SOMTConstEntryC_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define SOMTConstEntryC_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define SOMTConstEntryC_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define SOMTConstEntryC_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define SOMTConstEntryC_somDefaultVAssign SOMObject_somDefaultVAssign
#define SOMTConstEntryC_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define SOMTConstEntryC_somFree SOMObject_somFree
#define SOMTConstEntryC_somGetClass SOMObject_somGetClass
#define SOMTConstEntryC_somGetClassName SOMObject_somGetClassName
#define SOMTConstEntryC_somGetSize SOMObject_somGetSize
#define SOMTConstEntryC_somIsA SOMObject_somIsA
#define SOMTConstEntryC_somIsInstanceOf SOMObject_somIsInstanceOf
#define SOMTConstEntryC_somRespondsTo SOMObject_somRespondsTo
#define SOMTConstEntryC_somDispatch SOMObject_somDispatch
#define SOMTConstEntryC_somClassDispatch SOMObject_somClassDispatch
#define SOMTConstEntryC_somCastObj SOMObject_somCastObj
#define SOMTConstEntryC_somResetObj SOMObject_somResetObj
#define SOMTConstEntryC_somDispatchV SOMObject_somDispatchV
#define SOMTConstEntryC_somDispatchL SOMObject_somDispatchL
#define SOMTConstEntryC_somDispatchA SOMObject_somDispatchA
#define SOMTConstEntryC_somDispatchD SOMObject_somDispatchD
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_SOMTConstEntryC_h */
