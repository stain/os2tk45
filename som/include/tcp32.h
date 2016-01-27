
/*
 * This file was generated by the SOM Compiler.
 * FileName: tcp32.h.
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
 *  @(#) 1.3 src/soms/tcp32.idl, somu, som2.1 9/1/94 17:47:28 [7/30/96 15:25:09]
 */


#ifndef SOM_TCPIPSockets32_h
#define SOM_TCPIPSockets32_h


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
#ifndef TCPIPSockets32
#define TCPIPSockets32 SOMObject
#endif
#include <somssock.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */

/*
 * End of bindings for IDL types.
 */

#define TCPIPSockets32_MajorVersion 2
#define TCPIPSockets32_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define TCPIPSockets32NewClass c
#pragma linkage(c, system)
#define TCPIPSockets32ClassData d
#define TCPIPSockets32CClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */

/*
 * Include the metaclass file
 */
#ifndef SOM_SOMMSingleInstance_h
#include <snglicls.h>
#endif
/*--------------Migration------------*/
#define TCPIPSockets32_classObj TCPIPSockets32ClassData.classObject
#define _TCPIPSockets32 TCPIPSockets32_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK TCPIPSockets32NewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(TCPIPSockets32NewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct TCPIPSockets32ClassDataStructure {
	SOMClass *classObject;
} SOMDLINK TCPIPSockets32ClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct TCPIPSockets32CClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK TCPIPSockets32CClassData;

/*
 * New and Renew macros for TCPIPSockets32
 */
#define TCPIPSockets32New() \
   ( _TCPIPSockets32 ? \
	_somNew(_TCPIPSockets32) \
	: ( TCPIPSockets32NewClass(\
		TCPIPSockets32_MajorVersion, \
		TCPIPSockets32_MinorVersion),\
	   _somNew(_TCPIPSockets32)))
#define TCPIPSockets32Renew(buf) \
   ( _TCPIPSockets32 ? \
	_somRenew(_TCPIPSockets32, buf) \
	: ( TCPIPSockets32NewClass(\
		TCPIPSockets32_MajorVersion, \
		TCPIPSockets32_MinorVersion),\
	   _somRenew(_TCPIPSockets32, buf)))

/*
 * Override method: somsAccept
 */
#define TCPIPSockets32_somsAccept(somSelf,ev,s,name,namelen) \
	Sockets_somsAccept(somSelf,ev,s,name,namelen)

/*
 * Override method: somsBind
 */
#define TCPIPSockets32_somsBind(somSelf,ev,s,name,namelen) \
	Sockets_somsBind(somSelf,ev,s,name,namelen)

/*
 * Override method: somsConnect
 */
#define TCPIPSockets32_somsConnect(somSelf,ev,s,name,namelen) \
	Sockets_somsConnect(somSelf,ev,s,name,namelen)

/*
 * Override method: somsGethostbyaddr
 */
#define TCPIPSockets32_somsGethostbyaddr(somSelf,ev,addr,addrlen,domain) \
	Sockets_somsGethostbyaddr(somSelf,ev,addr,addrlen,domain)

/*
 * Override method: somsGethostbyname
 */
#define TCPIPSockets32_somsGethostbyname(somSelf,ev,name) \
	Sockets_somsGethostbyname(somSelf,ev,name)

/*
 * Override method: somsGethostent
 */
#define TCPIPSockets32_somsGethostent(somSelf,ev) \
	Sockets_somsGethostent(somSelf,ev)

/*
 * Override method: somsGethostid
 */
#define TCPIPSockets32_somsGethostid(somSelf,ev) \
	Sockets_somsGethostid(somSelf,ev)

/*
 * Override method: somsGethostname
 */
#define TCPIPSockets32_somsGethostname(somSelf,ev,name,namelength) \
	Sockets_somsGethostname(somSelf,ev,name,namelength)

/*
 * Override method: somsGetpeername
 */
#define TCPIPSockets32_somsGetpeername(somSelf,ev,s,name,namelen) \
	Sockets_somsGetpeername(somSelf,ev,s,name,namelen)

/*
 * Override method: somsGetservbyname
 */
#define TCPIPSockets32_somsGetservbyname(somSelf,ev,name,protocol) \
	Sockets_somsGetservbyname(somSelf,ev,name,protocol)

/*
 * Override method: somsGetsockname
 */
#define TCPIPSockets32_somsGetsockname(somSelf,ev,s,name,namelen) \
	Sockets_somsGetsockname(somSelf,ev,s,name,namelen)

/*
 * Override method: somsGetsockopt
 */
#define TCPIPSockets32_somsGetsockopt(somSelf,ev,s,level,optname,optval,option) \
	Sockets_somsGetsockopt(somSelf,ev,s,level,optname,optval,option)

/*
 * Override method: somsHtonl
 */
#define TCPIPSockets32_somsHtonl(somSelf,ev,a) \
	Sockets_somsHtonl(somSelf,ev,a)

/*
 * Override method: somsHtons
 */
#define TCPIPSockets32_somsHtons(somSelf,ev,a) \
	Sockets_somsHtons(somSelf,ev,a)

/*
 * Override method: somsIoctl
 */
#define TCPIPSockets32_somsIoctl(somSelf,ev,s,cmd,data,length) \
	Sockets_somsIoctl(somSelf,ev,s,cmd,data,length)

/*
 * Override method: somsInet_addr
 */
#define TCPIPSockets32_somsInet_addr(somSelf,ev,cp) \
	Sockets_somsInet_addr(somSelf,ev,cp)

/*
 * Override method: somsInet_lnaof
 */
#define TCPIPSockets32_somsInet_lnaof(somSelf,ev,addr) \
	Sockets_somsInet_lnaof(somSelf,ev,addr)

/*
 * Override method: somsInet_makeaddr
 */
#define TCPIPSockets32_somsInet_makeaddr(somSelf,ev,net,lna) \
	Sockets_somsInet_makeaddr(somSelf,ev,net,lna)

/*
 * Override method: somsInet_netof
 */
#define TCPIPSockets32_somsInet_netof(somSelf,ev,addr) \
	Sockets_somsInet_netof(somSelf,ev,addr)

/*
 * Override method: somsInet_network
 */
#define TCPIPSockets32_somsInet_network(somSelf,ev,cp) \
	Sockets_somsInet_network(somSelf,ev,cp)

/*
 * Override method: somsInet_ntoa
 */
#define TCPIPSockets32_somsInet_ntoa(somSelf,ev,addr) \
	Sockets_somsInet_ntoa(somSelf,ev,addr)

/*
 * Override method: somsListen
 */
#define TCPIPSockets32_somsListen(somSelf,ev,s,backlog) \
	Sockets_somsListen(somSelf,ev,s,backlog)

/*
 * Override method: somsNtohl
 */
#define TCPIPSockets32_somsNtohl(somSelf,ev,a) \
	Sockets_somsNtohl(somSelf,ev,a)

/*
 * Override method: somsNtohs
 */
#define TCPIPSockets32_somsNtohs(somSelf,ev,a) \
	Sockets_somsNtohs(somSelf,ev,a)

/*
 * Override method: somsReadv
 */
#define TCPIPSockets32_somsReadv(somSelf,ev,s,iov,iovcnt) \
	Sockets_somsReadv(somSelf,ev,s,iov,iovcnt)

/*
 * Override method: somsRecv
 */
#define TCPIPSockets32_somsRecv(somSelf,ev,s,buf,len,flags) \
	Sockets_somsRecv(somSelf,ev,s,buf,len,flags)

/*
 * Override method: somsRecvfrom
 */
#define TCPIPSockets32_somsRecvfrom(somSelf,ev,s,buf,len,flags,name,namelen) \
	Sockets_somsRecvfrom(somSelf,ev,s,buf,len,flags,name,namelen)

/*
 * Override method: somsRecvmsg
 */
#define TCPIPSockets32_somsRecvmsg(somSelf,ev,s,msg,flags) \
	Sockets_somsRecvmsg(somSelf,ev,s,msg,flags)

/*
 * Override method: somsSelect
 */
#define TCPIPSockets32_somsSelect(somSelf,ev,nfds,readfds,writefds,exceptfds,timeout) \
	Sockets_somsSelect(somSelf,ev,nfds,readfds,writefds,exceptfds,timeout)

/*
 * Override method: somsSend
 */
#define TCPIPSockets32_somsSend(somSelf,ev,s,msg,len,flags) \
	Sockets_somsSend(somSelf,ev,s,msg,len,flags)

/*
 * Override method: somsSendmsg
 */
#define TCPIPSockets32_somsSendmsg(somSelf,ev,s,msg,flags) \
	Sockets_somsSendmsg(somSelf,ev,s,msg,flags)

/*
 * Override method: somsSendto
 */
#define TCPIPSockets32_somsSendto(somSelf,ev,s,msg,len,flags,to,tolen) \
	Sockets_somsSendto(somSelf,ev,s,msg,len,flags,to,tolen)

/*
 * Override method: somsSetsockopt
 */
#define TCPIPSockets32_somsSetsockopt(somSelf,ev,s,level,optname,optval,optlen) \
	Sockets_somsSetsockopt(somSelf,ev,s,level,optname,optval,optlen)

/*
 * Override method: somsShutdown
 */
#define TCPIPSockets32_somsShutdown(somSelf,ev,s,how) \
	Sockets_somsShutdown(somSelf,ev,s,how)

/*
 * Override method: somsSocket
 */
#define TCPIPSockets32_somsSocket(somSelf,ev,domain,type,protocol) \
	Sockets_somsSocket(somSelf,ev,domain,type,protocol)

/*
 * Override method: somsSoclose
 */
#define TCPIPSockets32_somsSoclose(somSelf,ev,s) \
	Sockets_somsSoclose(somSelf,ev,s)

/*
 * Override method: somsWritev
 */
#define TCPIPSockets32_somsWritev(somSelf,ev,s,iov,iovcnt) \
	Sockets_somsWritev(somSelf,ev,s,iov,iovcnt)

/*
 * Override method: _set_serrno
 */
#define TCPIPSockets32__set_serrno(somSelf,ev,serrno) \
	Sockets__set_serrno(somSelf,ev,serrno)

/*
 * Override method: _get_serrno
 */
#define TCPIPSockets32__get_serrno(somSelf,ev) \
	Sockets__get_serrno(somSelf,ev)

/*
 * Override method: somInit
 */
#define TCPIPSockets32_somInit(somSelf) \
	SOMObject_somInit(somSelf)

/*
 * Override method: somUninit
 */
#define TCPIPSockets32_somUninit(somSelf) \
	SOMObject_somUninit(somSelf)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define TCPIPSockets32_somDefaultInit SOMObject_somDefaultInit
#define TCPIPSockets32_somDestruct SOMObject_somDestruct
#define TCPIPSockets32_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define TCPIPSockets32_somDefaultAssign SOMObject_somDefaultAssign
#define TCPIPSockets32_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define TCPIPSockets32_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define TCPIPSockets32_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define TCPIPSockets32_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define TCPIPSockets32_somDefaultVAssign SOMObject_somDefaultVAssign
#define TCPIPSockets32_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define TCPIPSockets32_somFree SOMObject_somFree
#define TCPIPSockets32_somGetClass SOMObject_somGetClass
#define TCPIPSockets32_somGetClassName SOMObject_somGetClassName
#define TCPIPSockets32_somGetSize SOMObject_somGetSize
#define TCPIPSockets32_somIsA SOMObject_somIsA
#define TCPIPSockets32_somIsInstanceOf SOMObject_somIsInstanceOf
#define TCPIPSockets32_somRespondsTo SOMObject_somRespondsTo
#define TCPIPSockets32_somDispatch SOMObject_somDispatch
#define TCPIPSockets32_somClassDispatch SOMObject_somClassDispatch
#define TCPIPSockets32_somCastObj SOMObject_somCastObj
#define TCPIPSockets32_somResetObj SOMObject_somResetObj
#define TCPIPSockets32_somDispatchV SOMObject_somDispatchV
#define TCPIPSockets32_somDispatchL SOMObject_somDispatchL
#define TCPIPSockets32_somDispatchA SOMObject_somDispatchA
#define TCPIPSockets32_somDispatchD SOMObject_somDispatchD
#define TCPIPSockets32_somPrintSelf SOMObject_somPrintSelf
#define TCPIPSockets32_somDumpSelf SOMObject_somDumpSelf
#define TCPIPSockets32_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_TCPIPSockets32_h */
