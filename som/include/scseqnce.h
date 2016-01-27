
/*
 * This file was generated by the SOM Compiler.
 * FileName: scseqnce.h.
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


#ifndef SOM_SOMTSequenceEntryC_h
#define SOM_SOMTSequenceEntryC_h


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
#ifndef SOMTSequenceEntryC
#define SOMTSequenceEntryC SOMObject
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

#define SOMTSequenceEntryC_MajorVersion 2
#define SOMTSequenceEntryC_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define SOMTSequenceEntryCNewClass c
#pragma linkage(c, system)
#define SOMTSequenceEntryCClassData d
#define SOMTSequenceEntryCCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define SOMTSequenceEntryC_classObj SOMTSequenceEntryCClassData.classObject
#define _SOMTSequenceEntryC SOMTSequenceEntryC_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK SOMTSequenceEntryCNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(SOMTSequenceEntryCNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct SOMTSequenceEntryCClassDataStructure {
	SOMClass *classObject;
	somMToken _get_somtSeqLength;
	somMToken _get_somtSeqType;
	somMToken _get_somtSeqTypedef;
} SOMDLINK SOMTSequenceEntryCClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct SOMTSequenceEntryCCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK SOMTSequenceEntryCCClassData;

/*
 * New and Renew macros for SOMTSequenceEntryC
 */
#define SOMTSequenceEntryCNew() \
   ( _SOMTSequenceEntryC ? \
	_somNew(_SOMTSequenceEntryC) \
	: ( SOMTSequenceEntryCNewClass(\
		SOMTSequenceEntryC_MajorVersion, \
		SOMTSequenceEntryC_MinorVersion),\
	   _somNew(_SOMTSequenceEntryC)))
#define SOMTSequenceEntryCRenew(buf) \
   ( _SOMTSequenceEntryC ? \
	_somRenew(_SOMTSequenceEntryC, buf) \
	: ( SOMTSequenceEntryCNewClass(\
		SOMTSequenceEntryC_MajorVersion, \
		SOMTSequenceEntryC_MinorVersion),\
	   _somRenew(_SOMTSequenceEntryC, buf)))

/*
 * Override method: somDumpSelfInt
 */
#define SOMTSequenceEntryC_somDumpSelfInt(somSelf,level) \
	SOMObject_somDumpSelfInt(somSelf,level)

/*
 * Override method: somtSetSymbolsOnEntry
 */
#define SOMTSequenceEntryC_somtSetSymbolsOnEntry(somSelf,emitter,prefix) \
	SOMTEntryC_somtSetSymbolsOnEntry(somSelf,emitter,prefix)

/*
 * New Method: _get_somtSeqLength
 */
typedef long   SOMLINK somTP_SOMTSequenceEntryC__get_somtSeqLength(SOMTSequenceEntryC *somSelf);
#pragma linkage(somTP_SOMTSequenceEntryC__get_somtSeqLength, system)
typedef somTP_SOMTSequenceEntryC__get_somtSeqLength *somTD_SOMTSequenceEntryC__get_somtSeqLength;
/*
 *  The length of the sequence.
 */
#define somMD_SOMTSequenceEntryC__get_somtSeqLength "::SOMTSequenceEntryC::_get_somtSeqLength"
#define SOMTSequenceEntryC__get_somtSeqLength(somSelf) \
    (SOM_Resolve(somSelf, SOMTSequenceEntryC, _get_somtSeqLength) \
	(somSelf))
#ifndef SOMGD_get_somtSeqLength
    #if (defined(_get_somtSeqLength) || defined(__get_somtSeqLength))
        #undef _get_somtSeqLength
        #undef __get_somtSeqLength
        #define SOMGD_get_somtSeqLength 1
    #else
        #define __get_somtSeqLength SOMTSequenceEntryC__get_somtSeqLength
    #endif /* __get_somtSeqLength */
#endif /* SOMGD_get_somtSeqLength */

/*
 * New Method: _get_somtSeqType
 */
typedef SOMTEntryC*   SOMLINK somTP_SOMTSequenceEntryC__get_somtSeqType(SOMTSequenceEntryC *somSelf);
#pragma linkage(somTP_SOMTSequenceEntryC__get_somtSeqType, system)
typedef somTP_SOMTSequenceEntryC__get_somtSeqType *somTD_SOMTSequenceEntryC__get_somtSeqType;
/*
 *  The type of the sequence.
 */
#define somMD_SOMTSequenceEntryC__get_somtSeqType "::SOMTSequenceEntryC::_get_somtSeqType"
#define SOMTSequenceEntryC__get_somtSeqType(somSelf) \
    (SOM_Resolve(somSelf, SOMTSequenceEntryC, _get_somtSeqType) \
	(somSelf))
#ifndef SOMGD_get_somtSeqType
    #if (defined(_get_somtSeqType) || defined(__get_somtSeqType))
        #undef _get_somtSeqType
        #undef __get_somtSeqType
        #define SOMGD_get_somtSeqType 1
    #else
        #define __get_somtSeqType SOMTSequenceEntryC__get_somtSeqType
    #endif /* __get_somtSeqType */
#endif /* SOMGD_get_somtSeqType */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define SOMTSequenceEntryC__get_somtEntryName SOMTEntryC__get_somtEntryName
#define SOMTSequenceEntryC__set_somtEntryName SOMTEntryC__set_somtEntryName
#define SOMTSequenceEntryC__get_somtElementType SOMTEntryC__get_somtElementType
#define SOMTSequenceEntryC__set_somtElementType SOMTEntryC__set_somtElementType
#define SOMTSequenceEntryC__get_somtElementTypeName SOMTEntryC__get_somtElementTypeName
#define SOMTSequenceEntryC__get_somtEntryComment SOMTEntryC__get_somtEntryComment
#define SOMTSequenceEntryC__get_somtSourceLineNumber SOMTEntryC__get_somtSourceLineNumber
#define SOMTSequenceEntryC__get_somtTypeCode SOMTEntryC__get_somtTypeCode
#define SOMTSequenceEntryC__get_somtIsReference SOMTEntryC__get_somtIsReference
#define SOMTSequenceEntryC__get_somtIDLScopedName SOMTEntryC__get_somtIDLScopedName
#define SOMTSequenceEntryC__get_somtCScopedName SOMTEntryC__get_somtCScopedName
#define SOMTSequenceEntryC_somtGetModifierValue SOMTEntryC_somtGetModifierValue
#define SOMTSequenceEntryC_somtGetFirstModifier SOMTEntryC_somtGetFirstModifier
#define SOMTSequenceEntryC_somtGetNextModifier SOMTEntryC_somtGetNextModifier
#define SOMTSequenceEntryC_somtFormatModifier SOMTEntryC_somtFormatModifier
#define SOMTSequenceEntryC_somtGetModifierList SOMTEntryC_somtGetModifierList
#define SOMTSequenceEntryC_somtSetEntryStruct SOMTEntryC_somtSetEntryStruct
#define SOMTSequenceEntryC_somInit SOMObject_somInit
#define SOMTSequenceEntryC_somUninit SOMObject_somUninit
#define SOMTSequenceEntryC_somPrintSelf SOMObject_somPrintSelf
#define SOMTSequenceEntryC_somDumpSelf SOMObject_somDumpSelf
#define SOMTSequenceEntryC_somDefaultInit SOMObject_somDefaultInit
#define SOMTSequenceEntryC_somDestruct SOMObject_somDestruct
#define SOMTSequenceEntryC_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define SOMTSequenceEntryC_somDefaultAssign SOMObject_somDefaultAssign
#define SOMTSequenceEntryC_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define SOMTSequenceEntryC_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define SOMTSequenceEntryC_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define SOMTSequenceEntryC_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define SOMTSequenceEntryC_somDefaultVAssign SOMObject_somDefaultVAssign
#define SOMTSequenceEntryC_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define SOMTSequenceEntryC_somFree SOMObject_somFree
#define SOMTSequenceEntryC_somGetClass SOMObject_somGetClass
#define SOMTSequenceEntryC_somGetClassName SOMObject_somGetClassName
#define SOMTSequenceEntryC_somGetSize SOMObject_somGetSize
#define SOMTSequenceEntryC_somIsA SOMObject_somIsA
#define SOMTSequenceEntryC_somIsInstanceOf SOMObject_somIsInstanceOf
#define SOMTSequenceEntryC_somRespondsTo SOMObject_somRespondsTo
#define SOMTSequenceEntryC_somDispatch SOMObject_somDispatch
#define SOMTSequenceEntryC_somClassDispatch SOMObject_somClassDispatch
#define SOMTSequenceEntryC_somCastObj SOMObject_somCastObj
#define SOMTSequenceEntryC_somResetObj SOMObject_somResetObj
#define SOMTSequenceEntryC_somDispatchV SOMObject_somDispatchV
#define SOMTSequenceEntryC_somDispatchL SOMObject_somDispatchL
#define SOMTSequenceEntryC_somDispatchA SOMObject_somDispatchA
#define SOMTSequenceEntryC_somDispatchD SOMObject_somDispatchD
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_SOMTSequenceEntryC_h */
