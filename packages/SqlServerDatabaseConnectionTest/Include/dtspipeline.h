

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0593 */
/* at Thu Feb 20 19:54:27 2014
 */
/* Compiler settings for dtspipeline.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.00.0593 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __dtspipeline_h__
#define __dtspipeline_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDTSBufferNotify100_FWD_DEFINED__
#define __IDTSBufferNotify100_FWD_DEFINED__
typedef interface IDTSBufferNotify100 IDTSBufferNotify100;

#endif 	/* __IDTSBufferNotify100_FWD_DEFINED__ */


#ifndef __IDTSBLOBObject100_FWD_DEFINED__
#define __IDTSBLOBObject100_FWD_DEFINED__
typedef interface IDTSBLOBObject100 IDTSBLOBObject100;

#endif 	/* __IDTSBLOBObject100_FWD_DEFINED__ */


#ifndef __IDTSObject100_FWD_DEFINED__
#define __IDTSObject100_FWD_DEFINED__
typedef interface IDTSObject100 IDTSObject100;

#endif 	/* __IDTSObject100_FWD_DEFINED__ */


#ifndef __IDTSCustomProperty100_FWD_DEFINED__
#define __IDTSCustomProperty100_FWD_DEFINED__
typedef interface IDTSCustomProperty100 IDTSCustomProperty100;

#endif 	/* __IDTSCustomProperty100_FWD_DEFINED__ */


#ifndef __IDTSCustomPropertyCollection100_FWD_DEFINED__
#define __IDTSCustomPropertyCollection100_FWD_DEFINED__
typedef interface IDTSCustomPropertyCollection100 IDTSCustomPropertyCollection100;

#endif 	/* __IDTSCustomPropertyCollection100_FWD_DEFINED__ */


#ifndef __IDTSInputColumn100_FWD_DEFINED__
#define __IDTSInputColumn100_FWD_DEFINED__
typedef interface IDTSInputColumn100 IDTSInputColumn100;

#endif 	/* __IDTSInputColumn100_FWD_DEFINED__ */


#ifndef __IDTSInputColumnCachedInfo100_FWD_DEFINED__
#define __IDTSInputColumnCachedInfo100_FWD_DEFINED__
typedef interface IDTSInputColumnCachedInfo100 IDTSInputColumnCachedInfo100;

#endif 	/* __IDTSInputColumnCachedInfo100_FWD_DEFINED__ */


#ifndef __IDTSInputColumnCollection100_FWD_DEFINED__
#define __IDTSInputColumnCollection100_FWD_DEFINED__
typedef interface IDTSInputColumnCollection100 IDTSInputColumnCollection100;

#endif 	/* __IDTSInputColumnCollection100_FWD_DEFINED__ */


#ifndef __IDTSOutputColumn100_FWD_DEFINED__
#define __IDTSOutputColumn100_FWD_DEFINED__
typedef interface IDTSOutputColumn100 IDTSOutputColumn100;

#endif 	/* __IDTSOutputColumn100_FWD_DEFINED__ */


#ifndef __IDTSOutputColumnCollection100_FWD_DEFINED__
#define __IDTSOutputColumnCollection100_FWD_DEFINED__
typedef interface IDTSOutputColumnCollection100 IDTSOutputColumnCollection100;

#endif 	/* __IDTSOutputColumnCollection100_FWD_DEFINED__ */


#ifndef __IDTSVirtualInputColumn100_FWD_DEFINED__
#define __IDTSVirtualInputColumn100_FWD_DEFINED__
typedef interface IDTSVirtualInputColumn100 IDTSVirtualInputColumn100;

#endif 	/* __IDTSVirtualInputColumn100_FWD_DEFINED__ */


#ifndef __IDTSVirtualInputColumnCollection100_FWD_DEFINED__
#define __IDTSVirtualInputColumnCollection100_FWD_DEFINED__
typedef interface IDTSVirtualInputColumnCollection100 IDTSVirtualInputColumnCollection100;

#endif 	/* __IDTSVirtualInputColumnCollection100_FWD_DEFINED__ */


#ifndef __IDTSVirtualInput100_FWD_DEFINED__
#define __IDTSVirtualInput100_FWD_DEFINED__
typedef interface IDTSVirtualInput100 IDTSVirtualInput100;

#endif 	/* __IDTSVirtualInput100_FWD_DEFINED__ */


#ifndef __IDTSInput100_FWD_DEFINED__
#define __IDTSInput100_FWD_DEFINED__
typedef interface IDTSInput100 IDTSInput100;

#endif 	/* __IDTSInput100_FWD_DEFINED__ */


#ifndef __IDTSInputCollection100_FWD_DEFINED__
#define __IDTSInputCollection100_FWD_DEFINED__
typedef interface IDTSInputCollection100 IDTSInputCollection100;

#endif 	/* __IDTSInputCollection100_FWD_DEFINED__ */


#ifndef __IDTSOutput100_FWD_DEFINED__
#define __IDTSOutput100_FWD_DEFINED__
typedef interface IDTSOutput100 IDTSOutput100;

#endif 	/* __IDTSOutput100_FWD_DEFINED__ */


#ifndef __IDTSOutputCollection100_FWD_DEFINED__
#define __IDTSOutputCollection100_FWD_DEFINED__
typedef interface IDTSOutputCollection100 IDTSOutputCollection100;

#endif 	/* __IDTSOutputCollection100_FWD_DEFINED__ */


#ifndef __IDTSRuntimeConnection100_FWD_DEFINED__
#define __IDTSRuntimeConnection100_FWD_DEFINED__
typedef interface IDTSRuntimeConnection100 IDTSRuntimeConnection100;

#endif 	/* __IDTSRuntimeConnection100_FWD_DEFINED__ */


#ifndef __IDTSRuntimeConnectionCollection100_FWD_DEFINED__
#define __IDTSRuntimeConnectionCollection100_FWD_DEFINED__
typedef interface IDTSRuntimeConnectionCollection100 IDTSRuntimeConnectionCollection100;

#endif 	/* __IDTSRuntimeConnectionCollection100_FWD_DEFINED__ */


#ifndef __IDTSComponentMetaData100_FWD_DEFINED__
#define __IDTSComponentMetaData100_FWD_DEFINED__
typedef interface IDTSComponentMetaData100 IDTSComponentMetaData100;

#endif 	/* __IDTSComponentMetaData100_FWD_DEFINED__ */


#ifndef __IDTSComponentView100_FWD_DEFINED__
#define __IDTSComponentView100_FWD_DEFINED__
typedef interface IDTSComponentView100 IDTSComponentView100;

#endif 	/* __IDTSComponentView100_FWD_DEFINED__ */


#ifndef __IDTSDesigntimeComponent100_FWD_DEFINED__
#define __IDTSDesigntimeComponent100_FWD_DEFINED__
typedef interface IDTSDesigntimeComponent100 IDTSDesigntimeComponent100;

#endif 	/* __IDTSDesigntimeComponent100_FWD_DEFINED__ */


#ifndef __IDTSRuntimeComponent100_FWD_DEFINED__
#define __IDTSRuntimeComponent100_FWD_DEFINED__
typedef interface IDTSRuntimeComponent100 IDTSRuntimeComponent100;

#endif 	/* __IDTSRuntimeComponent100_FWD_DEFINED__ */


#ifndef __IDTSManagedComponentWrapper100_FWD_DEFINED__
#define __IDTSManagedComponentWrapper100_FWD_DEFINED__
typedef interface IDTSManagedComponentWrapper100 IDTSManagedComponentWrapper100;

#endif 	/* __IDTSManagedComponentWrapper100_FWD_DEFINED__ */


#ifndef __IDTSManagedComponentHost100_FWD_DEFINED__
#define __IDTSManagedComponentHost100_FWD_DEFINED__
typedef interface IDTSManagedComponentHost100 IDTSManagedComponentHost100;

#endif 	/* __IDTSManagedComponentHost100_FWD_DEFINED__ */


#ifndef __IDTSManagedComponent100_FWD_DEFINED__
#define __IDTSManagedComponent100_FWD_DEFINED__
typedef interface IDTSManagedComponent100 IDTSManagedComponent100;

#endif 	/* __IDTSManagedComponent100_FWD_DEFINED__ */


#ifndef __IDTSComponentMetaDataCollection100_FWD_DEFINED__
#define __IDTSComponentMetaDataCollection100_FWD_DEFINED__
typedef interface IDTSComponentMetaDataCollection100 IDTSComponentMetaDataCollection100;

#endif 	/* __IDTSComponentMetaDataCollection100_FWD_DEFINED__ */


#ifndef __IDTSExternalMetadataColumnCollection100_FWD_DEFINED__
#define __IDTSExternalMetadataColumnCollection100_FWD_DEFINED__
typedef interface IDTSExternalMetadataColumnCollection100 IDTSExternalMetadataColumnCollection100;

#endif 	/* __IDTSExternalMetadataColumnCollection100_FWD_DEFINED__ */


#ifndef __IDTSExternalMetadataColumn100_FWD_DEFINED__
#define __IDTSExternalMetadataColumn100_FWD_DEFINED__
typedef interface IDTSExternalMetadataColumn100 IDTSExternalMetadataColumn100;

#endif 	/* __IDTSExternalMetadataColumn100_FWD_DEFINED__ */


#ifndef __IDTSFriendlyEnumCollection100_FWD_DEFINED__
#define __IDTSFriendlyEnumCollection100_FWD_DEFINED__
typedef interface IDTSFriendlyEnumCollection100 IDTSFriendlyEnumCollection100;

#endif 	/* __IDTSFriendlyEnumCollection100_FWD_DEFINED__ */


#ifndef __IDTSFriendlyEnum100_FWD_DEFINED__
#define __IDTSFriendlyEnum100_FWD_DEFINED__
typedef interface IDTSFriendlyEnum100 IDTSFriendlyEnum100;

#endif 	/* __IDTSFriendlyEnum100_FWD_DEFINED__ */


#ifndef __IDTSPathCollection100_FWD_DEFINED__
#define __IDTSPathCollection100_FWD_DEFINED__
typedef interface IDTSPathCollection100 IDTSPathCollection100;

#endif 	/* __IDTSPathCollection100_FWD_DEFINED__ */


#ifndef __IDTSBuffer100_FWD_DEFINED__
#define __IDTSBuffer100_FWD_DEFINED__
typedef interface IDTSBuffer100 IDTSBuffer100;

#endif 	/* __IDTSBuffer100_FWD_DEFINED__ */


#ifndef __IDTSBufferManagerInitialize100_FWD_DEFINED__
#define __IDTSBufferManagerInitialize100_FWD_DEFINED__
typedef interface IDTSBufferManagerInitialize100 IDTSBufferManagerInitialize100;

#endif 	/* __IDTSBufferManagerInitialize100_FWD_DEFINED__ */


#ifndef __IDTSBufferManager100_FWD_DEFINED__
#define __IDTSBufferManager100_FWD_DEFINED__
typedef interface IDTSBufferManager100 IDTSBufferManager100;

#endif 	/* __IDTSBufferManager100_FWD_DEFINED__ */


#ifndef __IDTSObjectModel100_FWD_DEFINED__
#define __IDTSObjectModel100_FWD_DEFINED__
typedef interface IDTSObjectModel100 IDTSObjectModel100;

#endif 	/* __IDTSObjectModel100_FWD_DEFINED__ */


#ifndef __IDTSPath100_FWD_DEFINED__
#define __IDTSPath100_FWD_DEFINED__
typedef interface IDTSPath100 IDTSPath100;

#endif 	/* __IDTSPath100_FWD_DEFINED__ */


#ifndef __DTSBufferManager_FWD_DEFINED__
#define __DTSBufferManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class DTSBufferManager DTSBufferManager;
#else
typedef struct DTSBufferManager DTSBufferManager;
#endif /* __cplusplus */

#endif 	/* __DTSBufferManager_FWD_DEFINED__ */


#ifndef __IDTSPersistenceComponent100_FWD_DEFINED__
#define __IDTSPersistenceComponent100_FWD_DEFINED__
typedef interface IDTSPersistenceComponent100 IDTSPersistenceComponent100;

#endif 	/* __IDTSPersistenceComponent100_FWD_DEFINED__ */


#ifndef __IDTSPipeline100_FWD_DEFINED__
#define __IDTSPipeline100_FWD_DEFINED__
typedef interface IDTSPipeline100 IDTSPipeline100;

#endif 	/* __IDTSPipeline100_FWD_DEFINED__ */


#ifndef __MainPipe_FWD_DEFINED__
#define __MainPipe_FWD_DEFINED__

#ifdef __cplusplus
typedef class MainPipe MainPipe;
#else
typedef struct MainPipe MainPipe;
#endif /* __cplusplus */

#endif 	/* __MainPipe_FWD_DEFINED__ */


#ifndef __CManagedComponentWrapper_FWD_DEFINED__
#define __CManagedComponentWrapper_FWD_DEFINED__

#ifdef __cplusplus
typedef class CManagedComponentWrapper CManagedComponentWrapper;
#else
typedef struct CManagedComponentWrapper CManagedComponentWrapper;
#endif /* __cplusplus */

#endif 	/* __CManagedComponentWrapper_FWD_DEFINED__ */


#ifndef __IDTSExpressionEvaluatorEx100_FWD_DEFINED__
#define __IDTSExpressionEvaluatorEx100_FWD_DEFINED__
typedef interface IDTSExpressionEvaluatorEx100 IDTSExpressionEvaluatorEx100;

#endif 	/* __IDTSExpressionEvaluatorEx100_FWD_DEFINED__ */


#ifndef __IDTSMultiInputComponent100_FWD_DEFINED__
#define __IDTSMultiInputComponent100_FWD_DEFINED__
typedef interface IDTSMultiInputComponent100 IDTSMultiInputComponent100;

#endif 	/* __IDTSMultiInputComponent100_FWD_DEFINED__ */


#ifndef __IDTSMultiInputComponentHost100_FWD_DEFINED__
#define __IDTSMultiInputComponentHost100_FWD_DEFINED__
typedef interface IDTSMultiInputComponentHost100 IDTSMultiInputComponentHost100;

#endif 	/* __IDTSMultiInputComponentHost100_FWD_DEFINED__ */


#ifndef __IDTSSupportBackPressure100_FWD_DEFINED__
#define __IDTSSupportBackPressure100_FWD_DEFINED__
typedef interface IDTSSupportBackPressure100 IDTSSupportBackPressure100;

#endif 	/* __IDTSSupportBackPressure100_FWD_DEFINED__ */


#ifndef __IDTSBufferTapConfiguration100_FWD_DEFINED__
#define __IDTSBufferTapConfiguration100_FWD_DEFINED__
typedef interface IDTSBufferTapConfiguration100 IDTSBufferTapConfiguration100;

#endif 	/* __IDTSBufferTapConfiguration100_FWD_DEFINED__ */


#ifndef __IDTSDataFileCreator100_FWD_DEFINED__
#define __IDTSDataFileCreator100_FWD_DEFINED__
typedef interface IDTSDataFileCreator100 IDTSDataFileCreator100;

#endif 	/* __IDTSDataFileCreator100_FWD_DEFINED__ */


#ifndef __IDTSLookupDesign100_FWD_DEFINED__
#define __IDTSLookupDesign100_FWD_DEFINED__
typedef interface IDTSLookupDesign100 IDTSLookupDesign100;

#endif 	/* __IDTSLookupDesign100_FWD_DEFINED__ */


#ifndef __IDTSPivotDesign100_FWD_DEFINED__
#define __IDTSPivotDesign100_FWD_DEFINED__
typedef interface IDTSPivotDesign100 IDTSPivotDesign100;

#endif 	/* __IDTSPivotDesign100_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_dtspipeline_0000_0000 */
/* [local] */ 












#if defined(_WIN64)
typedef ULONGLONG DTPLENGTH;
#else
typedef _W64 ULONG DTPLENGTH;
#endif
typedef DWORD DTPSTATUS;

typedef /* [public] */ LONG DTP_HBUFFERTYPE;

typedef /* [public] */ LONG DTP_HBUFFER;

typedef /* [public] */ LONG DTP_HROW;

typedef /* [public] */ LONG DTP_HCOL;



extern RPC_IF_HANDLE __MIDL_itf_dtspipeline_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dtspipeline_0000_0000_v0_0_s_ifspec;

#ifndef __IDTSBufferNotify100_INTERFACE_DEFINED__
#define __IDTSBufferNotify100_INTERFACE_DEFINED__

/* interface IDTSBufferNotify100 */
/* [helpstring][hidden][uuid][object] */ 


EXTERN_C const IID IID_IDTSBufferNotify100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1360C2B6-1D4F-4245-BFD5-3EBE685A03CA")
    IDTSBufferNotify100 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EndOfRowset( 
            /* [in] */ IDTSBuffer100 *pLastBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BufferFull( 
            /* [in] */ IDTSBuffer100 *pFullBuffer) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSBufferNotify100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSBufferNotify100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSBufferNotify100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSBufferNotify100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *EndOfRowset )( 
            IDTSBufferNotify100 * This,
            /* [in] */ IDTSBuffer100 *pLastBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *BufferFull )( 
            IDTSBufferNotify100 * This,
            /* [in] */ IDTSBuffer100 *pFullBuffer);
        
        END_INTERFACE
    } IDTSBufferNotify100Vtbl;

    interface IDTSBufferNotify100
    {
        CONST_VTBL struct IDTSBufferNotify100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSBufferNotify100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSBufferNotify100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSBufferNotify100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSBufferNotify100_EndOfRowset(This,pLastBuffer)	\
    ( (This)->lpVtbl -> EndOfRowset(This,pLastBuffer) ) 

#define IDTSBufferNotify100_BufferFull(This,pFullBuffer)	\
    ( (This)->lpVtbl -> BufferFull(This,pFullBuffer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSBufferNotify100_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dtspipeline_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_dtspipeline_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dtspipeline_0000_0001_v0_0_s_ifspec;


#ifndef __DTSPipeline_LIBRARY_DEFINED__
#define __DTSPipeline_LIBRARY_DEFINED__

/* library DTSPipeline */
/* [helpstring][uuid][version] */ 

/* [v1_enum] */ 
enum DTSPIPELINEVERSION
    {
        DTSPIPELINE_CURRENTVERSION	= 0
    } ;
/* [v1_enum] */ 
enum DTPSTATUSENUM
    {
        DTPSTATUS_OK	= 0,
        DTPSTATUS_BADACCESSOR	= 1,
        DTPSTATUS_CANTCONVERTVALUE	= 2,
        DTPSTATUS_ISNULL	= 3,
        DTPSTATUS_TRUNCATED	= 4,
        DTPSTATUS_SIGNMISMATCH	= 5,
        DTPSTATUS_DATAOVERFLOW	= 6,
        DTPSTATUS_CANTCREATE	= 7,
        DTPSTATUS_UNAVAILABLE	= 8,
        DTPSTATUS_PERMISSIONDENIED	= 9,
        DTPSTATUS_INTEGRITYVIOLATION	= 10,
        DTPSTATUS_SCHEMAVIOLATION	= 11,
        DTPSTATUS_BADSTATUS	= 12,
        DTPSTATUS_DEFAULT	= 13
    } ;
typedef /* [public] */ struct tagBUFFER_WIRE_PACKET
    {
    DWORD dwRowCount;
    DWORD dwColCount;
    ULONGLONG nRowSize;
    void *ppvRowStarts;
    void *pColInfo;
    VARIANT_BOOL vbIsEndOfRowset;
    } 	BUFFER_WIRE_PACKET;

typedef /* [public] */ struct tagBUFFER_WIRE_PACKET *PBUFFER_WIRE_PACKET;

/* [v1_enum] */ 
enum DTSValidationStatus
    {
        VS_ISVALID	= 0,
        VS_ISBROKEN	= 1,
        VS_NEEDSNEWMETADATA	= 2,
        VS_ISCORRUPT	= 3
    } ;
/* [v1_enum] */ 
enum DTSInsertPlacement
    {
        IP_BEFORE	= 0,
        IP_AFTER	= 1
    } ;
/* [v1_enum] */ 
enum DTSObjectType
    {
        OT_UNSPECIFIED	= 0,
        OT_SOURCEADAPTER	= 1,
        OT_DESTINATIONADAPTER	= 2,
        OT_TRANSFORM	= 4,
        OT_COMPONENT	= 8,
        OT_COMPONENTVIEWER	= 16,
        OT_PATH	= 32,
        OT_INPUT	= 64,
        OT_VIRTUALINPUT	= 128,
        OT_OUTPUT	= 256,
        OT_INPUTCOLUMN	= 512,
        OT_OUTPUTCOLUMN	= 1024,
        OT_VIRTUALINPUTCOLUMN	= 2048,
        OT_PROPERTY	= 4096,
        OT_RUNTIMECONNECTION	= 8192,
        OT_EXTERNALMETADATACOLUMN	= 16384
    } ;
/* [v1_enum] */ 
enum DTSPersistenceFormat
    {
        PF_XML	= 1,
        PF_SQLSERVER	= 2
    } ;
/* [v1_enum] */ 
enum DTSBufferHandlePresetValues
    {
        H_ALL	= -1
    } ;
/* [v1_enum] */ 
enum DTSBufferFlags
    {
        BUFF_NOOLEDB	= 0x1,
        BUFF_INIT	= 0x2
    } ;
/* [v1_enum] */ 
enum DTSUsageType
    {
        UT_READONLY	= 0,
        UT_READWRITE	= 1,
        UT_IGNORED	= 2
    } ;
/* [v1_enum] */ 
enum DTSPersistState
    {
        PS_DEFAULT	= 0,
        PS_PERSISTASHEX	= 1,
        PS_PERSISTASCDATA	= 2
    } ;
/* [v1_enum] */ 
enum DTSRowDisposition
    {
        RD_NotUsed	= 0,
        RD_IgnoreFailure	= 1,
        RD_RedirectRow	= 2,
        RD_FailComponent	= 4
    } ;
/* [v1_enum] */ 
enum DTSCustomPropertyExpressionType
    {
        CPET_NONE	= 0,
        CPET_NOTIFY	= 1
    } ;
typedef /* [public] */ struct tagBUFFERCOL
    {
    enum /* external definition not present */ DataType dataType;
    LONG lMaxLength;
    LONG lOffset;
    LONG lStatusOffset;
    LONG lLengthOffset;
    LONG lPrecision;
    LONG lScale;
    LONG lCodePage;
    } 	DTP_BUFFCOL;


EXTERN_C const IID LIBID_DTSPipeline;

#ifndef __IDTSBLOBObject100_INTERFACE_DEFINED__
#define __IDTSBLOBObject100_INTERFACE_DEFINED__

/* interface IDTSBLOBObject100 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDTSBLOBObject100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2AD26418-B53F-4C80-973E-23A9FD13F05F")
    IDTSBLOBObject100 : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Length( 
            /* [retval][out] */ long *plLength) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SpoolThreshold( 
            /* [in] */ long plSpoolThreshold) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SpoolThreshold( 
            /* [retval][out] */ long *plSpoolThreshold) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ResetData( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddData( 
            /* [size_is][in] */ BYTE *lpData,
            /* [in] */ DWORD dwLength) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetData( 
            /* [in] */ DWORD dwOffset,
            /* [size_is][in] */ BYTE *lpPointer,
            /* [in] */ DWORD dwLength,
            /* [out] */ DWORD *lpdwWritten) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PutData( 
            /* [in] */ DWORD dwOffset,
            /* [size_is][in] */ BYTE *lpPointer,
            /* [in] */ DWORD dwLength,
            /* [out] */ DWORD *lpdwRead) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetStream( 
            /* [retval][out] */ IStream **pIStream) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetFromStream( 
            /* [in] */ ISequentialStream *pISequentialStream) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSBLOBObject100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSBLOBObject100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSBLOBObject100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSBLOBObject100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSBLOBObject100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSBLOBObject100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSBLOBObject100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSBLOBObject100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Length )( 
            IDTSBLOBObject100 * This,
            /* [retval][out] */ long *plLength);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SpoolThreshold )( 
            IDTSBLOBObject100 * This,
            /* [in] */ long plSpoolThreshold);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SpoolThreshold )( 
            IDTSBLOBObject100 * This,
            /* [retval][out] */ long *plSpoolThreshold);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ResetData )( 
            IDTSBLOBObject100 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddData )( 
            IDTSBLOBObject100 * This,
            /* [size_is][in] */ BYTE *lpData,
            /* [in] */ DWORD dwLength);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetData )( 
            IDTSBLOBObject100 * This,
            /* [in] */ DWORD dwOffset,
            /* [size_is][in] */ BYTE *lpPointer,
            /* [in] */ DWORD dwLength,
            /* [out] */ DWORD *lpdwWritten);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PutData )( 
            IDTSBLOBObject100 * This,
            /* [in] */ DWORD dwOffset,
            /* [size_is][in] */ BYTE *lpPointer,
            /* [in] */ DWORD dwLength,
            /* [out] */ DWORD *lpdwRead);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStream )( 
            IDTSBLOBObject100 * This,
            /* [retval][out] */ IStream **pIStream);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetFromStream )( 
            IDTSBLOBObject100 * This,
            /* [in] */ ISequentialStream *pISequentialStream);
        
        END_INTERFACE
    } IDTSBLOBObject100Vtbl;

    interface IDTSBLOBObject100
    {
        CONST_VTBL struct IDTSBLOBObject100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSBLOBObject100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSBLOBObject100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSBLOBObject100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSBLOBObject100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSBLOBObject100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSBLOBObject100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSBLOBObject100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSBLOBObject100_get_Length(This,plLength)	\
    ( (This)->lpVtbl -> get_Length(This,plLength) ) 

#define IDTSBLOBObject100_put_SpoolThreshold(This,plSpoolThreshold)	\
    ( (This)->lpVtbl -> put_SpoolThreshold(This,plSpoolThreshold) ) 

#define IDTSBLOBObject100_get_SpoolThreshold(This,plSpoolThreshold)	\
    ( (This)->lpVtbl -> get_SpoolThreshold(This,plSpoolThreshold) ) 

#define IDTSBLOBObject100_ResetData(This)	\
    ( (This)->lpVtbl -> ResetData(This) ) 

#define IDTSBLOBObject100_AddData(This,lpData,dwLength)	\
    ( (This)->lpVtbl -> AddData(This,lpData,dwLength) ) 

#define IDTSBLOBObject100_GetData(This,dwOffset,lpPointer,dwLength,lpdwWritten)	\
    ( (This)->lpVtbl -> GetData(This,dwOffset,lpPointer,dwLength,lpdwWritten) ) 

#define IDTSBLOBObject100_PutData(This,dwOffset,lpPointer,dwLength,lpdwRead)	\
    ( (This)->lpVtbl -> PutData(This,dwOffset,lpPointer,dwLength,lpdwRead) ) 

#define IDTSBLOBObject100_GetStream(This,pIStream)	\
    ( (This)->lpVtbl -> GetStream(This,pIStream) ) 

#define IDTSBLOBObject100_SetFromStream(This,pISequentialStream)	\
    ( (This)->lpVtbl -> SetFromStream(This,pISequentialStream) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSBLOBObject100_INTERFACE_DEFINED__ */


#ifndef __IDTSObject100_INTERFACE_DEFINED__
#define __IDTSObject100_INTERFACE_DEFINED__

/* interface IDTSObject100 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDTSObject100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D4E5AF42-7999-473C-8082-6EFC676953C4")
    IDTSObject100 : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ID( 
            /* [retval][out] */ long *pID) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ID( 
            /* [in] */ long ID) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *pbstrDescription) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Description( 
            /* [in] */ BSTR bstrDescription) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ObjectType( 
            /* [retval][out] */ enum DTSObjectType *pType) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IdentificationString( 
            /* [retval][out] */ BSTR *pbstrIdentificationString) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSObject100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSObject100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSObject100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSObject100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSObject100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSObject100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSObject100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSObject100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IDTSObject100 * This,
            /* [retval][out] */ long *pID);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ID )( 
            IDTSObject100 * This,
            /* [in] */ long ID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IDTSObject100 * This,
            /* [retval][out] */ BSTR *pbstrDescription);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            IDTSObject100 * This,
            /* [in] */ BSTR bstrDescription);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IDTSObject100 * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IDTSObject100 * This,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectType )( 
            IDTSObject100 * This,
            /* [retval][out] */ enum DTSObjectType *pType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IdentificationString )( 
            IDTSObject100 * This,
            /* [retval][out] */ BSTR *pbstrIdentificationString);
        
        END_INTERFACE
    } IDTSObject100Vtbl;

    interface IDTSObject100
    {
        CONST_VTBL struct IDTSObject100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSObject100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSObject100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSObject100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSObject100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSObject100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSObject100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSObject100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSObject100_get_ID(This,pID)	\
    ( (This)->lpVtbl -> get_ID(This,pID) ) 

#define IDTSObject100_put_ID(This,ID)	\
    ( (This)->lpVtbl -> put_ID(This,ID) ) 

#define IDTSObject100_get_Description(This,pbstrDescription)	\
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) ) 

#define IDTSObject100_put_Description(This,bstrDescription)	\
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) ) 

#define IDTSObject100_get_Name(This,pbstrName)	\
    ( (This)->lpVtbl -> get_Name(This,pbstrName) ) 

#define IDTSObject100_put_Name(This,bstrName)	\
    ( (This)->lpVtbl -> put_Name(This,bstrName) ) 

#define IDTSObject100_get_ObjectType(This,pType)	\
    ( (This)->lpVtbl -> get_ObjectType(This,pType) ) 

#define IDTSObject100_get_IdentificationString(This,pbstrIdentificationString)	\
    ( (This)->lpVtbl -> get_IdentificationString(This,pbstrIdentificationString) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSObject100_INTERFACE_DEFINED__ */


#ifndef __IDTSCustomProperty100_INTERFACE_DEFINED__
#define __IDTSCustomProperty100_INTERFACE_DEFINED__

/* interface IDTSCustomProperty100 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDTSCustomProperty100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("05781F94-F577-49BA-986D-017625A55452")
    IDTSCustomProperty100 : public IDTSObject100
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ VARIANT *pvValue) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Value( 
            /* [in] */ VARIANT vValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_State( 
            /* [retval][out] */ enum DTSPersistState *pePropertyState) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_State( 
            /* [in] */ enum DTSPersistState ePropertyState) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EncryptionRequired( 
            /* [retval][out] */ VARIANT_BOOL *pbEnryptionRequired) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EncryptionRequired( 
            /* [in] */ VARIANT_BOOL bEnryptionRequired) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TypeConverter( 
            /* [retval][out] */ BSTR *pbstrTypeConverter) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TypeConverter( 
            /* [in] */ BSTR bstrTypeConverter) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UITypeEditor( 
            /* [retval][out] */ BSTR *pbstrUITypeEditor) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UITypeEditor( 
            /* [in] */ BSTR bstrUITypeEditor) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ContainsID( 
            /* [retval][out] */ VARIANT_BOOL *pbContainsID) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ContainsID( 
            /* [in] */ VARIANT_BOOL bContainsID) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpressionType( 
            /* [retval][out] */ enum DTSCustomPropertyExpressionType *peExpressionType) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ExpressionType( 
            /* [in] */ enum DTSCustomPropertyExpressionType eExpressionType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSCustomProperty100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSCustomProperty100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSCustomProperty100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSCustomProperty100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSCustomProperty100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSCustomProperty100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSCustomProperty100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSCustomProperty100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IDTSCustomProperty100 * This,
            /* [retval][out] */ long *pID);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ID )( 
            IDTSCustomProperty100 * This,
            /* [in] */ long ID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IDTSCustomProperty100 * This,
            /* [retval][out] */ BSTR *pbstrDescription);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            IDTSCustomProperty100 * This,
            /* [in] */ BSTR bstrDescription);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IDTSCustomProperty100 * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IDTSCustomProperty100 * This,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectType )( 
            IDTSCustomProperty100 * This,
            /* [retval][out] */ enum DTSObjectType *pType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IdentificationString )( 
            IDTSCustomProperty100 * This,
            /* [retval][out] */ BSTR *pbstrIdentificationString);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            IDTSCustomProperty100 * This,
            /* [retval][out] */ VARIANT *pvValue);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Value )( 
            IDTSCustomProperty100 * This,
            /* [in] */ VARIANT vValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_State )( 
            IDTSCustomProperty100 * This,
            /* [retval][out] */ enum DTSPersistState *pePropertyState);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_State )( 
            IDTSCustomProperty100 * This,
            /* [in] */ enum DTSPersistState ePropertyState);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncryptionRequired )( 
            IDTSCustomProperty100 * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnryptionRequired);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EncryptionRequired )( 
            IDTSCustomProperty100 * This,
            /* [in] */ VARIANT_BOOL bEnryptionRequired);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TypeConverter )( 
            IDTSCustomProperty100 * This,
            /* [retval][out] */ BSTR *pbstrTypeConverter);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TypeConverter )( 
            IDTSCustomProperty100 * This,
            /* [in] */ BSTR bstrTypeConverter);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UITypeEditor )( 
            IDTSCustomProperty100 * This,
            /* [retval][out] */ BSTR *pbstrUITypeEditor);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UITypeEditor )( 
            IDTSCustomProperty100 * This,
            /* [in] */ BSTR bstrUITypeEditor);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContainsID )( 
            IDTSCustomProperty100 * This,
            /* [retval][out] */ VARIANT_BOOL *pbContainsID);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ContainsID )( 
            IDTSCustomProperty100 * This,
            /* [in] */ VARIANT_BOOL bContainsID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpressionType )( 
            IDTSCustomProperty100 * This,
            /* [retval][out] */ enum DTSCustomPropertyExpressionType *peExpressionType);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExpressionType )( 
            IDTSCustomProperty100 * This,
            /* [in] */ enum DTSCustomPropertyExpressionType eExpressionType);
        
        END_INTERFACE
    } IDTSCustomProperty100Vtbl;

    interface IDTSCustomProperty100
    {
        CONST_VTBL struct IDTSCustomProperty100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSCustomProperty100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSCustomProperty100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSCustomProperty100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSCustomProperty100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSCustomProperty100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSCustomProperty100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSCustomProperty100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSCustomProperty100_get_ID(This,pID)	\
    ( (This)->lpVtbl -> get_ID(This,pID) ) 

#define IDTSCustomProperty100_put_ID(This,ID)	\
    ( (This)->lpVtbl -> put_ID(This,ID) ) 

#define IDTSCustomProperty100_get_Description(This,pbstrDescription)	\
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) ) 

#define IDTSCustomProperty100_put_Description(This,bstrDescription)	\
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) ) 

#define IDTSCustomProperty100_get_Name(This,pbstrName)	\
    ( (This)->lpVtbl -> get_Name(This,pbstrName) ) 

#define IDTSCustomProperty100_put_Name(This,bstrName)	\
    ( (This)->lpVtbl -> put_Name(This,bstrName) ) 

#define IDTSCustomProperty100_get_ObjectType(This,pType)	\
    ( (This)->lpVtbl -> get_ObjectType(This,pType) ) 

#define IDTSCustomProperty100_get_IdentificationString(This,pbstrIdentificationString)	\
    ( (This)->lpVtbl -> get_IdentificationString(This,pbstrIdentificationString) ) 


#define IDTSCustomProperty100_get_Value(This,pvValue)	\
    ( (This)->lpVtbl -> get_Value(This,pvValue) ) 

#define IDTSCustomProperty100_put_Value(This,vValue)	\
    ( (This)->lpVtbl -> put_Value(This,vValue) ) 

#define IDTSCustomProperty100_get_State(This,pePropertyState)	\
    ( (This)->lpVtbl -> get_State(This,pePropertyState) ) 

#define IDTSCustomProperty100_put_State(This,ePropertyState)	\
    ( (This)->lpVtbl -> put_State(This,ePropertyState) ) 

#define IDTSCustomProperty100_get_EncryptionRequired(This,pbEnryptionRequired)	\
    ( (This)->lpVtbl -> get_EncryptionRequired(This,pbEnryptionRequired) ) 

#define IDTSCustomProperty100_put_EncryptionRequired(This,bEnryptionRequired)	\
    ( (This)->lpVtbl -> put_EncryptionRequired(This,bEnryptionRequired) ) 

#define IDTSCustomProperty100_get_TypeConverter(This,pbstrTypeConverter)	\
    ( (This)->lpVtbl -> get_TypeConverter(This,pbstrTypeConverter) ) 

#define IDTSCustomProperty100_put_TypeConverter(This,bstrTypeConverter)	\
    ( (This)->lpVtbl -> put_TypeConverter(This,bstrTypeConverter) ) 

#define IDTSCustomProperty100_get_UITypeEditor(This,pbstrUITypeEditor)	\
    ( (This)->lpVtbl -> get_UITypeEditor(This,pbstrUITypeEditor) ) 

#define IDTSCustomProperty100_put_UITypeEditor(This,bstrUITypeEditor)	\
    ( (This)->lpVtbl -> put_UITypeEditor(This,bstrUITypeEditor) ) 

#define IDTSCustomProperty100_get_ContainsID(This,pbContainsID)	\
    ( (This)->lpVtbl -> get_ContainsID(This,pbContainsID) ) 

#define IDTSCustomProperty100_put_ContainsID(This,bContainsID)	\
    ( (This)->lpVtbl -> put_ContainsID(This,bContainsID) ) 

#define IDTSCustomProperty100_get_ExpressionType(This,peExpressionType)	\
    ( (This)->lpVtbl -> get_ExpressionType(This,peExpressionType) ) 

#define IDTSCustomProperty100_put_ExpressionType(This,eExpressionType)	\
    ( (This)->lpVtbl -> put_ExpressionType(This,eExpressionType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSCustomProperty100_INTERFACE_DEFINED__ */


#ifndef __IDTSCustomPropertyCollection100_INTERFACE_DEFINED__
#define __IDTSCustomPropertyCollection100_INTERFACE_DEFINED__

/* interface IDTSCustomPropertyCollection100 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDTSCustomPropertyCollection100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8939CEC8-CEA6-4180-9EE0-504A4E4593CF")
    IDTSCustomPropertyCollection100 : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppIUnknownEnum) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *plCount) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE New( 
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NewAt( 
            /* [in] */ long lIndex,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveObjectByIndex( 
            /* [in] */ VARIANT Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveObjectByID( 
            /* [in] */ long lID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveAll( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetIndex( 
            /* [in] */ long lOldIndex,
            /* [in] */ long lNewIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetObjectByID( 
            /* [in] */ long lID,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetObjectIndexByID( 
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindObjectByID( 
            /* [in] */ long lID,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindObjectIndexByID( 
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSCustomPropertyCollection100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSCustomPropertyCollection100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSCustomPropertyCollection100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSCustomPropertyCollection100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSCustomPropertyCollection100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSCustomPropertyCollection100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSCustomPropertyCollection100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSCustomPropertyCollection100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IDTSCustomPropertyCollection100 * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDTSCustomPropertyCollection100 * This,
            /* [retval][out] */ IUnknown **ppIUnknownEnum);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDTSCustomPropertyCollection100 * This,
            /* [retval][out] */ long *plCount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *New )( 
            IDTSCustomPropertyCollection100 * This,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NewAt )( 
            IDTSCustomPropertyCollection100 * This,
            /* [in] */ long lIndex,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveObjectByIndex )( 
            IDTSCustomPropertyCollection100 * This,
            /* [in] */ VARIANT Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveObjectByID )( 
            IDTSCustomPropertyCollection100 * This,
            /* [in] */ long lID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveAll )( 
            IDTSCustomPropertyCollection100 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetIndex )( 
            IDTSCustomPropertyCollection100 * This,
            /* [in] */ long lOldIndex,
            /* [in] */ long lNewIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetObjectByID )( 
            IDTSCustomPropertyCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetObjectIndexByID )( 
            IDTSCustomPropertyCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindObjectByID )( 
            IDTSCustomPropertyCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindObjectIndexByID )( 
            IDTSCustomPropertyCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex);
        
        END_INTERFACE
    } IDTSCustomPropertyCollection100Vtbl;

    interface IDTSCustomPropertyCollection100
    {
        CONST_VTBL struct IDTSCustomPropertyCollection100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSCustomPropertyCollection100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSCustomPropertyCollection100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSCustomPropertyCollection100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSCustomPropertyCollection100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSCustomPropertyCollection100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSCustomPropertyCollection100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSCustomPropertyCollection100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSCustomPropertyCollection100_get_Item(This,Index,ppIDTSCustomProperty)	\
    ( (This)->lpVtbl -> get_Item(This,Index,ppIDTSCustomProperty) ) 

#define IDTSCustomPropertyCollection100_get__NewEnum(This,ppIUnknownEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppIUnknownEnum) ) 

#define IDTSCustomPropertyCollection100_get_Count(This,plCount)	\
    ( (This)->lpVtbl -> get_Count(This,plCount) ) 

#define IDTSCustomPropertyCollection100_New(This,ppIDTSCustomProperty)	\
    ( (This)->lpVtbl -> New(This,ppIDTSCustomProperty) ) 

#define IDTSCustomPropertyCollection100_NewAt(This,lIndex,ppIDTSCustomProperty)	\
    ( (This)->lpVtbl -> NewAt(This,lIndex,ppIDTSCustomProperty) ) 

#define IDTSCustomPropertyCollection100_RemoveObjectByIndex(This,Index)	\
    ( (This)->lpVtbl -> RemoveObjectByIndex(This,Index) ) 

#define IDTSCustomPropertyCollection100_RemoveObjectByID(This,lID)	\
    ( (This)->lpVtbl -> RemoveObjectByID(This,lID) ) 

#define IDTSCustomPropertyCollection100_RemoveAll(This)	\
    ( (This)->lpVtbl -> RemoveAll(This) ) 

#define IDTSCustomPropertyCollection100_SetIndex(This,lOldIndex,lNewIndex)	\
    ( (This)->lpVtbl -> SetIndex(This,lOldIndex,lNewIndex) ) 

#define IDTSCustomPropertyCollection100_GetObjectByID(This,lID,ppIDTSCustomProperty)	\
    ( (This)->lpVtbl -> GetObjectByID(This,lID,ppIDTSCustomProperty) ) 

#define IDTSCustomPropertyCollection100_GetObjectIndexByID(This,lID,plIndex)	\
    ( (This)->lpVtbl -> GetObjectIndexByID(This,lID,plIndex) ) 

#define IDTSCustomPropertyCollection100_FindObjectByID(This,lID,ppIDTSCustomProperty)	\
    ( (This)->lpVtbl -> FindObjectByID(This,lID,ppIDTSCustomProperty) ) 

#define IDTSCustomPropertyCollection100_FindObjectIndexByID(This,lID,plIndex)	\
    ( (This)->lpVtbl -> FindObjectIndexByID(This,lID,plIndex) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSCustomPropertyCollection100_INTERFACE_DEFINED__ */


#ifndef __IDTSInputColumn100_INTERFACE_DEFINED__
#define __IDTSInputColumn100_INTERFACE_DEFINED__

/* interface IDTSInputColumn100 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDTSInputColumn100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EA1BA2A5-D09A-46ED-BF31-4D8AB1849100")
    IDTSInputColumn100 : public IDTSObject100
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DataType( 
            /* [retval][out] */ enum /* external definition not present */ DataType *peDataType) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Length( 
            /* [retval][out] */ long *plLength) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Precision( 
            /* [retval][out] */ long *plPrecision) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Scale( 
            /* [retval][out] */ long *plScale) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UsageType( 
            /* [retval][out] */ enum DTSUsageType *peUsageType) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UsageType( 
            /* [in] */ enum DTSUsageType eUsageType) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CustomPropertyCollection( 
            /* [retval][out] */ IDTSCustomPropertyCollection100 **ppIDTSCustomPropertyCollection) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LineageID( 
            /* [retval][out] */ long *plLineageID) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LineageID( 
            /* [in] */ long lLineageID) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MappedColumnID( 
            /* [retval][out] */ long *plMappedColumnID) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MappedColumnID( 
            /* [in] */ long lMappedColumnID) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CodePage( 
            /* [retval][out] */ long *plCodePage) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsValid( 
            /* [retval][out] */ VARIANT_BOOL *pbIsValid) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SortKeyPosition( 
            /* [retval][out] */ long *plSortKeyPosition) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ComparisonFlags( 
            /* [retval][out] */ long *plComparisonFlags) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UpstreamComponentName( 
            /* [retval][out] */ BSTR *pbstrUpstreamComponentName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorRowDisposition( 
            /* [retval][out] */ enum DTSRowDisposition *peDisposition) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ErrorRowDisposition( 
            /* [in] */ enum DTSRowDisposition eDisposition) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TruncationRowDisposition( 
            /* [retval][out] */ enum DTSRowDisposition *peDisposition) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TruncationRowDisposition( 
            /* [in] */ enum DTSRowDisposition eDisposition) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorOrTruncationOperation( 
            /* [retval][out] */ BSTR *pbstrValue) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ErrorOrTruncationOperation( 
            /* [in] */ BSTR bstrValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalMetadataColumnID( 
            /* [retval][out] */ long *plExternalMetadataColumnID) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ExternalMetadataColumnID( 
            /* [in] */ long lExternalMetadataColumnID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DescribeRedirectedErrorCode( 
            /* [in] */ HRESULT hrErrorCode,
            /* [retval][out] */ BSTR *pbstrDesc) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsAssociatedWithOutputColumn( 
            /* [retval][out] */ VARIANT_BOOL *pbIsAssociatedWithOutputColumn) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSInputColumn100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSInputColumn100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSInputColumn100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSInputColumn100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSInputColumn100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSInputColumn100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSInputColumn100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSInputColumn100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IDTSInputColumn100 * This,
            /* [retval][out] */ long *pID);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ID )( 
            IDTSInputColumn100 * This,
            /* [in] */ long ID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IDTSInputColumn100 * This,
            /* [retval][out] */ BSTR *pbstrDescription);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            IDTSInputColumn100 * This,
            /* [in] */ BSTR bstrDescription);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IDTSInputColumn100 * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IDTSInputColumn100 * This,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectType )( 
            IDTSInputColumn100 * This,
            /* [retval][out] */ enum DTSObjectType *pType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IdentificationString )( 
            IDTSInputColumn100 * This,
            /* [retval][out] */ BSTR *pbstrIdentificationString);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataType )( 
            IDTSInputColumn100 * This,
            /* [retval][out] */ enum /* external definition not present */ DataType *peDataType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Length )( 
            IDTSInputColumn100 * This,
            /* [retval][out] */ long *plLength);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Precision )( 
            IDTSInputColumn100 * This,
            /* [retval][out] */ long *plPrecision);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Scale )( 
            IDTSInputColumn100 * This,
            /* [retval][out] */ long *plScale);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UsageType )( 
            IDTSInputColumn100 * This,
            /* [retval][out] */ enum DTSUsageType *peUsageType);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UsageType )( 
            IDTSInputColumn100 * This,
            /* [in] */ enum DTSUsageType eUsageType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CustomPropertyCollection )( 
            IDTSInputColumn100 * This,
            /* [retval][out] */ IDTSCustomPropertyCollection100 **ppIDTSCustomPropertyCollection);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LineageID )( 
            IDTSInputColumn100 * This,
            /* [retval][out] */ long *plLineageID);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LineageID )( 
            IDTSInputColumn100 * This,
            /* [in] */ long lLineageID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MappedColumnID )( 
            IDTSInputColumn100 * This,
            /* [retval][out] */ long *plMappedColumnID);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MappedColumnID )( 
            IDTSInputColumn100 * This,
            /* [in] */ long lMappedColumnID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CodePage )( 
            IDTSInputColumn100 * This,
            /* [retval][out] */ long *plCodePage);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsValid )( 
            IDTSInputColumn100 * This,
            /* [retval][out] */ VARIANT_BOOL *pbIsValid);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SortKeyPosition )( 
            IDTSInputColumn100 * This,
            /* [retval][out] */ long *plSortKeyPosition);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ComparisonFlags )( 
            IDTSInputColumn100 * This,
            /* [retval][out] */ long *plComparisonFlags);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UpstreamComponentName )( 
            IDTSInputColumn100 * This,
            /* [retval][out] */ BSTR *pbstrUpstreamComponentName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ErrorRowDisposition )( 
            IDTSInputColumn100 * This,
            /* [retval][out] */ enum DTSRowDisposition *peDisposition);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ErrorRowDisposition )( 
            IDTSInputColumn100 * This,
            /* [in] */ enum DTSRowDisposition eDisposition);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TruncationRowDisposition )( 
            IDTSInputColumn100 * This,
            /* [retval][out] */ enum DTSRowDisposition *peDisposition);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TruncationRowDisposition )( 
            IDTSInputColumn100 * This,
            /* [in] */ enum DTSRowDisposition eDisposition);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ErrorOrTruncationOperation )( 
            IDTSInputColumn100 * This,
            /* [retval][out] */ BSTR *pbstrValue);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ErrorOrTruncationOperation )( 
            IDTSInputColumn100 * This,
            /* [in] */ BSTR bstrValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalMetadataColumnID )( 
            IDTSInputColumn100 * This,
            /* [retval][out] */ long *plExternalMetadataColumnID);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExternalMetadataColumnID )( 
            IDTSInputColumn100 * This,
            /* [in] */ long lExternalMetadataColumnID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DescribeRedirectedErrorCode )( 
            IDTSInputColumn100 * This,
            /* [in] */ HRESULT hrErrorCode,
            /* [retval][out] */ BSTR *pbstrDesc);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsAssociatedWithOutputColumn )( 
            IDTSInputColumn100 * This,
            /* [retval][out] */ VARIANT_BOOL *pbIsAssociatedWithOutputColumn);
        
        END_INTERFACE
    } IDTSInputColumn100Vtbl;

    interface IDTSInputColumn100
    {
        CONST_VTBL struct IDTSInputColumn100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSInputColumn100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSInputColumn100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSInputColumn100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSInputColumn100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSInputColumn100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSInputColumn100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSInputColumn100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSInputColumn100_get_ID(This,pID)	\
    ( (This)->lpVtbl -> get_ID(This,pID) ) 

#define IDTSInputColumn100_put_ID(This,ID)	\
    ( (This)->lpVtbl -> put_ID(This,ID) ) 

#define IDTSInputColumn100_get_Description(This,pbstrDescription)	\
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) ) 

#define IDTSInputColumn100_put_Description(This,bstrDescription)	\
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) ) 

#define IDTSInputColumn100_get_Name(This,pbstrName)	\
    ( (This)->lpVtbl -> get_Name(This,pbstrName) ) 

#define IDTSInputColumn100_put_Name(This,bstrName)	\
    ( (This)->lpVtbl -> put_Name(This,bstrName) ) 

#define IDTSInputColumn100_get_ObjectType(This,pType)	\
    ( (This)->lpVtbl -> get_ObjectType(This,pType) ) 

#define IDTSInputColumn100_get_IdentificationString(This,pbstrIdentificationString)	\
    ( (This)->lpVtbl -> get_IdentificationString(This,pbstrIdentificationString) ) 


#define IDTSInputColumn100_get_DataType(This,peDataType)	\
    ( (This)->lpVtbl -> get_DataType(This,peDataType) ) 

#define IDTSInputColumn100_get_Length(This,plLength)	\
    ( (This)->lpVtbl -> get_Length(This,plLength) ) 

#define IDTSInputColumn100_get_Precision(This,plPrecision)	\
    ( (This)->lpVtbl -> get_Precision(This,plPrecision) ) 

#define IDTSInputColumn100_get_Scale(This,plScale)	\
    ( (This)->lpVtbl -> get_Scale(This,plScale) ) 

#define IDTSInputColumn100_get_UsageType(This,peUsageType)	\
    ( (This)->lpVtbl -> get_UsageType(This,peUsageType) ) 

#define IDTSInputColumn100_put_UsageType(This,eUsageType)	\
    ( (This)->lpVtbl -> put_UsageType(This,eUsageType) ) 

#define IDTSInputColumn100_get_CustomPropertyCollection(This,ppIDTSCustomPropertyCollection)	\
    ( (This)->lpVtbl -> get_CustomPropertyCollection(This,ppIDTSCustomPropertyCollection) ) 

#define IDTSInputColumn100_get_LineageID(This,plLineageID)	\
    ( (This)->lpVtbl -> get_LineageID(This,plLineageID) ) 

#define IDTSInputColumn100_put_LineageID(This,lLineageID)	\
    ( (This)->lpVtbl -> put_LineageID(This,lLineageID) ) 

#define IDTSInputColumn100_get_MappedColumnID(This,plMappedColumnID)	\
    ( (This)->lpVtbl -> get_MappedColumnID(This,plMappedColumnID) ) 

#define IDTSInputColumn100_put_MappedColumnID(This,lMappedColumnID)	\
    ( (This)->lpVtbl -> put_MappedColumnID(This,lMappedColumnID) ) 

#define IDTSInputColumn100_get_CodePage(This,plCodePage)	\
    ( (This)->lpVtbl -> get_CodePage(This,plCodePage) ) 

#define IDTSInputColumn100_get_IsValid(This,pbIsValid)	\
    ( (This)->lpVtbl -> get_IsValid(This,pbIsValid) ) 

#define IDTSInputColumn100_get_SortKeyPosition(This,plSortKeyPosition)	\
    ( (This)->lpVtbl -> get_SortKeyPosition(This,plSortKeyPosition) ) 

#define IDTSInputColumn100_get_ComparisonFlags(This,plComparisonFlags)	\
    ( (This)->lpVtbl -> get_ComparisonFlags(This,plComparisonFlags) ) 

#define IDTSInputColumn100_get_UpstreamComponentName(This,pbstrUpstreamComponentName)	\
    ( (This)->lpVtbl -> get_UpstreamComponentName(This,pbstrUpstreamComponentName) ) 

#define IDTSInputColumn100_get_ErrorRowDisposition(This,peDisposition)	\
    ( (This)->lpVtbl -> get_ErrorRowDisposition(This,peDisposition) ) 

#define IDTSInputColumn100_put_ErrorRowDisposition(This,eDisposition)	\
    ( (This)->lpVtbl -> put_ErrorRowDisposition(This,eDisposition) ) 

#define IDTSInputColumn100_get_TruncationRowDisposition(This,peDisposition)	\
    ( (This)->lpVtbl -> get_TruncationRowDisposition(This,peDisposition) ) 

#define IDTSInputColumn100_put_TruncationRowDisposition(This,eDisposition)	\
    ( (This)->lpVtbl -> put_TruncationRowDisposition(This,eDisposition) ) 

#define IDTSInputColumn100_get_ErrorOrTruncationOperation(This,pbstrValue)	\
    ( (This)->lpVtbl -> get_ErrorOrTruncationOperation(This,pbstrValue) ) 

#define IDTSInputColumn100_put_ErrorOrTruncationOperation(This,bstrValue)	\
    ( (This)->lpVtbl -> put_ErrorOrTruncationOperation(This,bstrValue) ) 

#define IDTSInputColumn100_get_ExternalMetadataColumnID(This,plExternalMetadataColumnID)	\
    ( (This)->lpVtbl -> get_ExternalMetadataColumnID(This,plExternalMetadataColumnID) ) 

#define IDTSInputColumn100_put_ExternalMetadataColumnID(This,lExternalMetadataColumnID)	\
    ( (This)->lpVtbl -> put_ExternalMetadataColumnID(This,lExternalMetadataColumnID) ) 

#define IDTSInputColumn100_DescribeRedirectedErrorCode(This,hrErrorCode,pbstrDesc)	\
    ( (This)->lpVtbl -> DescribeRedirectedErrorCode(This,hrErrorCode,pbstrDesc) ) 

#define IDTSInputColumn100_get_IsAssociatedWithOutputColumn(This,pbIsAssociatedWithOutputColumn)	\
    ( (This)->lpVtbl -> get_IsAssociatedWithOutputColumn(This,pbIsAssociatedWithOutputColumn) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSInputColumn100_INTERFACE_DEFINED__ */


#ifndef __IDTSInputColumnCachedInfo100_INTERFACE_DEFINED__
#define __IDTSInputColumnCachedInfo100_INTERFACE_DEFINED__

/* interface IDTSInputColumnCachedInfo100 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDTSInputColumnCachedInfo100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FD59CC97-C2FA-4F50-8A0D-84906A79BCD1")
    IDTSInputColumnCachedInfo100 : public IUnknown
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CachedName( 
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CachedName( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CachedDataType( 
            /* [retval][out] */ enum /* external definition not present */ DataType *peDataType) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CachedDataType( 
            /* [in] */ enum /* external definition not present */ DataType eDataType) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CachedLength( 
            /* [retval][out] */ long *plLength) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CachedLength( 
            /* [in] */ long lLength) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CachedPrecision( 
            /* [retval][out] */ long *plPrecision) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CachedPrecision( 
            /* [in] */ long lPrecision) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CachedScale( 
            /* [retval][out] */ long *plScale) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CachedScale( 
            /* [in] */ long lScale) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CachedCodePage( 
            /* [retval][out] */ long *plCodePage) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CachedCodePage( 
            /* [in] */ long lCodePage) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CachedComparisonFlags( 
            /* [retval][out] */ long *plComparisonFlags) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CachedComparisonFlags( 
            /* [in] */ long lComparisonFlags) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CachedSortKeyPosition( 
            /* [retval][out] */ long *plSortKeyPosition) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CachedSortKeyPosition( 
            /* [in] */ long lSortKeyPosition) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSInputColumnCachedInfo100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSInputColumnCachedInfo100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSInputColumnCachedInfo100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSInputColumnCachedInfo100 * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedName )( 
            IDTSInputColumnCachedInfo100 * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CachedName )( 
            IDTSInputColumnCachedInfo100 * This,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedDataType )( 
            IDTSInputColumnCachedInfo100 * This,
            /* [retval][out] */ enum /* external definition not present */ DataType *peDataType);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CachedDataType )( 
            IDTSInputColumnCachedInfo100 * This,
            /* [in] */ enum /* external definition not present */ DataType eDataType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLength )( 
            IDTSInputColumnCachedInfo100 * This,
            /* [retval][out] */ long *plLength);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CachedLength )( 
            IDTSInputColumnCachedInfo100 * This,
            /* [in] */ long lLength);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedPrecision )( 
            IDTSInputColumnCachedInfo100 * This,
            /* [retval][out] */ long *plPrecision);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CachedPrecision )( 
            IDTSInputColumnCachedInfo100 * This,
            /* [in] */ long lPrecision);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedScale )( 
            IDTSInputColumnCachedInfo100 * This,
            /* [retval][out] */ long *plScale);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CachedScale )( 
            IDTSInputColumnCachedInfo100 * This,
            /* [in] */ long lScale);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedCodePage )( 
            IDTSInputColumnCachedInfo100 * This,
            /* [retval][out] */ long *plCodePage);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CachedCodePage )( 
            IDTSInputColumnCachedInfo100 * This,
            /* [in] */ long lCodePage);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedComparisonFlags )( 
            IDTSInputColumnCachedInfo100 * This,
            /* [retval][out] */ long *plComparisonFlags);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CachedComparisonFlags )( 
            IDTSInputColumnCachedInfo100 * This,
            /* [in] */ long lComparisonFlags);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedSortKeyPosition )( 
            IDTSInputColumnCachedInfo100 * This,
            /* [retval][out] */ long *plSortKeyPosition);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CachedSortKeyPosition )( 
            IDTSInputColumnCachedInfo100 * This,
            /* [in] */ long lSortKeyPosition);
        
        END_INTERFACE
    } IDTSInputColumnCachedInfo100Vtbl;

    interface IDTSInputColumnCachedInfo100
    {
        CONST_VTBL struct IDTSInputColumnCachedInfo100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSInputColumnCachedInfo100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSInputColumnCachedInfo100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSInputColumnCachedInfo100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSInputColumnCachedInfo100_get_CachedName(This,pbstrName)	\
    ( (This)->lpVtbl -> get_CachedName(This,pbstrName) ) 

#define IDTSInputColumnCachedInfo100_put_CachedName(This,bstrName)	\
    ( (This)->lpVtbl -> put_CachedName(This,bstrName) ) 

#define IDTSInputColumnCachedInfo100_get_CachedDataType(This,peDataType)	\
    ( (This)->lpVtbl -> get_CachedDataType(This,peDataType) ) 

#define IDTSInputColumnCachedInfo100_put_CachedDataType(This,eDataType)	\
    ( (This)->lpVtbl -> put_CachedDataType(This,eDataType) ) 

#define IDTSInputColumnCachedInfo100_get_CachedLength(This,plLength)	\
    ( (This)->lpVtbl -> get_CachedLength(This,plLength) ) 

#define IDTSInputColumnCachedInfo100_put_CachedLength(This,lLength)	\
    ( (This)->lpVtbl -> put_CachedLength(This,lLength) ) 

#define IDTSInputColumnCachedInfo100_get_CachedPrecision(This,plPrecision)	\
    ( (This)->lpVtbl -> get_CachedPrecision(This,plPrecision) ) 

#define IDTSInputColumnCachedInfo100_put_CachedPrecision(This,lPrecision)	\
    ( (This)->lpVtbl -> put_CachedPrecision(This,lPrecision) ) 

#define IDTSInputColumnCachedInfo100_get_CachedScale(This,plScale)	\
    ( (This)->lpVtbl -> get_CachedScale(This,plScale) ) 

#define IDTSInputColumnCachedInfo100_put_CachedScale(This,lScale)	\
    ( (This)->lpVtbl -> put_CachedScale(This,lScale) ) 

#define IDTSInputColumnCachedInfo100_get_CachedCodePage(This,plCodePage)	\
    ( (This)->lpVtbl -> get_CachedCodePage(This,plCodePage) ) 

#define IDTSInputColumnCachedInfo100_put_CachedCodePage(This,lCodePage)	\
    ( (This)->lpVtbl -> put_CachedCodePage(This,lCodePage) ) 

#define IDTSInputColumnCachedInfo100_get_CachedComparisonFlags(This,plComparisonFlags)	\
    ( (This)->lpVtbl -> get_CachedComparisonFlags(This,plComparisonFlags) ) 

#define IDTSInputColumnCachedInfo100_put_CachedComparisonFlags(This,lComparisonFlags)	\
    ( (This)->lpVtbl -> put_CachedComparisonFlags(This,lComparisonFlags) ) 

#define IDTSInputColumnCachedInfo100_get_CachedSortKeyPosition(This,plSortKeyPosition)	\
    ( (This)->lpVtbl -> get_CachedSortKeyPosition(This,plSortKeyPosition) ) 

#define IDTSInputColumnCachedInfo100_put_CachedSortKeyPosition(This,lSortKeyPosition)	\
    ( (This)->lpVtbl -> put_CachedSortKeyPosition(This,lSortKeyPosition) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSInputColumnCachedInfo100_INTERFACE_DEFINED__ */


#ifndef __IDTSInputColumnCollection100_INTERFACE_DEFINED__
#define __IDTSInputColumnCollection100_INTERFACE_DEFINED__

/* interface IDTSInputColumnCollection100 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDTSInputColumnCollection100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C2E3A7F7-D5C2-440F-AC3D-00E8ABFB7BCD")
    IDTSInputColumnCollection100 : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IDTSInputColumn100 **ppIDTSInputColumn) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppIUnknownEnum) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *plCount) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE New( 
            /* [retval][out] */ IDTSInputColumn100 **ppIDTSInputColumn) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NewAt( 
            /* [in] */ long lIndex,
            /* [retval][out] */ IDTSInputColumn100 **ppIDTSInputColumn) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveObjectByIndex( 
            /* [in] */ VARIANT Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveObjectByID( 
            /* [in] */ long lID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveAll( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetIndex( 
            /* [in] */ long lOldIndex,
            /* [in] */ long lNewIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetObjectByID( 
            /* [in] */ long lID,
            /* [retval][out] */ IDTSInputColumn100 **ppIDTSInputColumn) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetObjectIndexByID( 
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindObjectByID( 
            /* [in] */ long lID,
            /* [retval][out] */ IDTSInputColumn100 **ppIDTSInputColumn) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindObjectIndexByID( 
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInputColumnByLineageID( 
            /* [in] */ long lLineageID,
            /* [retval][out] */ IDTSInputColumn100 **ppIDTSInputColumn) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInputColumnByName( 
            /* [in] */ BSTR bstrComponentName,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IDTSInputColumn100 **ppIDTSInputColumn) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSInputColumnCollection100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSInputColumnCollection100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSInputColumnCollection100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSInputColumnCollection100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSInputColumnCollection100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSInputColumnCollection100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSInputColumnCollection100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSInputColumnCollection100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IDTSInputColumnCollection100 * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IDTSInputColumn100 **ppIDTSInputColumn);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDTSInputColumnCollection100 * This,
            /* [retval][out] */ IUnknown **ppIUnknownEnum);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDTSInputColumnCollection100 * This,
            /* [retval][out] */ long *plCount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *New )( 
            IDTSInputColumnCollection100 * This,
            /* [retval][out] */ IDTSInputColumn100 **ppIDTSInputColumn);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NewAt )( 
            IDTSInputColumnCollection100 * This,
            /* [in] */ long lIndex,
            /* [retval][out] */ IDTSInputColumn100 **ppIDTSInputColumn);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveObjectByIndex )( 
            IDTSInputColumnCollection100 * This,
            /* [in] */ VARIANT Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveObjectByID )( 
            IDTSInputColumnCollection100 * This,
            /* [in] */ long lID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveAll )( 
            IDTSInputColumnCollection100 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetIndex )( 
            IDTSInputColumnCollection100 * This,
            /* [in] */ long lOldIndex,
            /* [in] */ long lNewIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetObjectByID )( 
            IDTSInputColumnCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ IDTSInputColumn100 **ppIDTSInputColumn);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetObjectIndexByID )( 
            IDTSInputColumnCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindObjectByID )( 
            IDTSInputColumnCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ IDTSInputColumn100 **ppIDTSInputColumn);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindObjectIndexByID )( 
            IDTSInputColumnCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInputColumnByLineageID )( 
            IDTSInputColumnCollection100 * This,
            /* [in] */ long lLineageID,
            /* [retval][out] */ IDTSInputColumn100 **ppIDTSInputColumn);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInputColumnByName )( 
            IDTSInputColumnCollection100 * This,
            /* [in] */ BSTR bstrComponentName,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IDTSInputColumn100 **ppIDTSInputColumn);
        
        END_INTERFACE
    } IDTSInputColumnCollection100Vtbl;

    interface IDTSInputColumnCollection100
    {
        CONST_VTBL struct IDTSInputColumnCollection100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSInputColumnCollection100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSInputColumnCollection100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSInputColumnCollection100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSInputColumnCollection100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSInputColumnCollection100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSInputColumnCollection100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSInputColumnCollection100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSInputColumnCollection100_get_Item(This,Index,ppIDTSInputColumn)	\
    ( (This)->lpVtbl -> get_Item(This,Index,ppIDTSInputColumn) ) 

#define IDTSInputColumnCollection100_get__NewEnum(This,ppIUnknownEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppIUnknownEnum) ) 

#define IDTSInputColumnCollection100_get_Count(This,plCount)	\
    ( (This)->lpVtbl -> get_Count(This,plCount) ) 

#define IDTSInputColumnCollection100_New(This,ppIDTSInputColumn)	\
    ( (This)->lpVtbl -> New(This,ppIDTSInputColumn) ) 

#define IDTSInputColumnCollection100_NewAt(This,lIndex,ppIDTSInputColumn)	\
    ( (This)->lpVtbl -> NewAt(This,lIndex,ppIDTSInputColumn) ) 

#define IDTSInputColumnCollection100_RemoveObjectByIndex(This,Index)	\
    ( (This)->lpVtbl -> RemoveObjectByIndex(This,Index) ) 

#define IDTSInputColumnCollection100_RemoveObjectByID(This,lID)	\
    ( (This)->lpVtbl -> RemoveObjectByID(This,lID) ) 

#define IDTSInputColumnCollection100_RemoveAll(This)	\
    ( (This)->lpVtbl -> RemoveAll(This) ) 

#define IDTSInputColumnCollection100_SetIndex(This,lOldIndex,lNewIndex)	\
    ( (This)->lpVtbl -> SetIndex(This,lOldIndex,lNewIndex) ) 

#define IDTSInputColumnCollection100_GetObjectByID(This,lID,ppIDTSInputColumn)	\
    ( (This)->lpVtbl -> GetObjectByID(This,lID,ppIDTSInputColumn) ) 

#define IDTSInputColumnCollection100_GetObjectIndexByID(This,lID,plIndex)	\
    ( (This)->lpVtbl -> GetObjectIndexByID(This,lID,plIndex) ) 

#define IDTSInputColumnCollection100_FindObjectByID(This,lID,ppIDTSInputColumn)	\
    ( (This)->lpVtbl -> FindObjectByID(This,lID,ppIDTSInputColumn) ) 

#define IDTSInputColumnCollection100_FindObjectIndexByID(This,lID,plIndex)	\
    ( (This)->lpVtbl -> FindObjectIndexByID(This,lID,plIndex) ) 

#define IDTSInputColumnCollection100_GetInputColumnByLineageID(This,lLineageID,ppIDTSInputColumn)	\
    ( (This)->lpVtbl -> GetInputColumnByLineageID(This,lLineageID,ppIDTSInputColumn) ) 

#define IDTSInputColumnCollection100_GetInputColumnByName(This,bstrComponentName,bstrName,ppIDTSInputColumn)	\
    ( (This)->lpVtbl -> GetInputColumnByName(This,bstrComponentName,bstrName,ppIDTSInputColumn) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSInputColumnCollection100_INTERFACE_DEFINED__ */


#ifndef __IDTSOutputColumn100_INTERFACE_DEFINED__
#define __IDTSOutputColumn100_INTERFACE_DEFINED__

/* interface IDTSOutputColumn100 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDTSOutputColumn100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2744839C-9994-4832-B10A-ACAF1FAC03BD")
    IDTSOutputColumn100 : public IDTSObject100
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DataType( 
            /* [retval][out] */ enum /* external definition not present */ DataType *peDataType) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Length( 
            /* [retval][out] */ long *plLength) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Precision( 
            /* [retval][out] */ long *plPrecision) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Scale( 
            /* [retval][out] */ long *plScale) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CustomPropertyCollection( 
            /* [retval][out] */ IDTSCustomPropertyCollection100 **ppIDTSCustomPropertyCollection) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LineageID( 
            /* [retval][out] */ long *plLineageID) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LineageID( 
            /* [in] */ long lLineageID) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MappedColumnID( 
            /* [retval][out] */ long *plMappedColumnID) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MappedColumnID( 
            /* [in] */ long lMappedColumnID) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CodePage( 
            /* [retval][out] */ long *plCodePage) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SortKeyPosition( 
            /* [retval][out] */ long *plSortKeyPosition) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SortKeyPosition( 
            long lSortKeyPosition) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ComparisonFlags( 
            /* [retval][out] */ long *plComparisonFlags) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ComparisonFlags( 
            long lComparisonFlags) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SpecialFlags( 
            /* [retval][out] */ long *plSpecialFlags) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SpecialFlags( 
            long lSpecialFlags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetDataTypeProperties( 
            /* [in] */ enum /* external definition not present */ DataType eDataType,
            /* [in] */ long lLength,
            /* [in] */ long lPrecision,
            /* [in] */ long lScale,
            /* [in] */ long lCodePage) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorRowDisposition( 
            /* [retval][out] */ enum DTSRowDisposition *peDisposition) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ErrorRowDisposition( 
            /* [in] */ enum DTSRowDisposition eDisposition) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TruncationRowDisposition( 
            /* [retval][out] */ enum DTSRowDisposition *peDisposition) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TruncationRowDisposition( 
            /* [in] */ enum DTSRowDisposition eDisposition) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorOrTruncationOperation( 
            /* [retval][out] */ BSTR *pbstrValue) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ErrorOrTruncationOperation( 
            /* [in] */ BSTR bstrValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalMetadataColumnID( 
            /* [retval][out] */ long *plExternalMetadataColumnID) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ExternalMetadataColumnID( 
            /* [in] */ long lExternalMetadataColumnID) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSOutputColumn100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSOutputColumn100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSOutputColumn100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSOutputColumn100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSOutputColumn100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSOutputColumn100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSOutputColumn100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSOutputColumn100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IDTSOutputColumn100 * This,
            /* [retval][out] */ long *pID);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ID )( 
            IDTSOutputColumn100 * This,
            /* [in] */ long ID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IDTSOutputColumn100 * This,
            /* [retval][out] */ BSTR *pbstrDescription);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            IDTSOutputColumn100 * This,
            /* [in] */ BSTR bstrDescription);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IDTSOutputColumn100 * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IDTSOutputColumn100 * This,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectType )( 
            IDTSOutputColumn100 * This,
            /* [retval][out] */ enum DTSObjectType *pType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IdentificationString )( 
            IDTSOutputColumn100 * This,
            /* [retval][out] */ BSTR *pbstrIdentificationString);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataType )( 
            IDTSOutputColumn100 * This,
            /* [retval][out] */ enum /* external definition not present */ DataType *peDataType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Length )( 
            IDTSOutputColumn100 * This,
            /* [retval][out] */ long *plLength);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Precision )( 
            IDTSOutputColumn100 * This,
            /* [retval][out] */ long *plPrecision);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Scale )( 
            IDTSOutputColumn100 * This,
            /* [retval][out] */ long *plScale);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CustomPropertyCollection )( 
            IDTSOutputColumn100 * This,
            /* [retval][out] */ IDTSCustomPropertyCollection100 **ppIDTSCustomPropertyCollection);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LineageID )( 
            IDTSOutputColumn100 * This,
            /* [retval][out] */ long *plLineageID);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LineageID )( 
            IDTSOutputColumn100 * This,
            /* [in] */ long lLineageID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MappedColumnID )( 
            IDTSOutputColumn100 * This,
            /* [retval][out] */ long *plMappedColumnID);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MappedColumnID )( 
            IDTSOutputColumn100 * This,
            /* [in] */ long lMappedColumnID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CodePage )( 
            IDTSOutputColumn100 * This,
            /* [retval][out] */ long *plCodePage);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SortKeyPosition )( 
            IDTSOutputColumn100 * This,
            /* [retval][out] */ long *plSortKeyPosition);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SortKeyPosition )( 
            IDTSOutputColumn100 * This,
            long lSortKeyPosition);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ComparisonFlags )( 
            IDTSOutputColumn100 * This,
            /* [retval][out] */ long *plComparisonFlags);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ComparisonFlags )( 
            IDTSOutputColumn100 * This,
            long lComparisonFlags);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SpecialFlags )( 
            IDTSOutputColumn100 * This,
            /* [retval][out] */ long *plSpecialFlags);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SpecialFlags )( 
            IDTSOutputColumn100 * This,
            long lSpecialFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetDataTypeProperties )( 
            IDTSOutputColumn100 * This,
            /* [in] */ enum /* external definition not present */ DataType eDataType,
            /* [in] */ long lLength,
            /* [in] */ long lPrecision,
            /* [in] */ long lScale,
            /* [in] */ long lCodePage);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ErrorRowDisposition )( 
            IDTSOutputColumn100 * This,
            /* [retval][out] */ enum DTSRowDisposition *peDisposition);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ErrorRowDisposition )( 
            IDTSOutputColumn100 * This,
            /* [in] */ enum DTSRowDisposition eDisposition);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TruncationRowDisposition )( 
            IDTSOutputColumn100 * This,
            /* [retval][out] */ enum DTSRowDisposition *peDisposition);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TruncationRowDisposition )( 
            IDTSOutputColumn100 * This,
            /* [in] */ enum DTSRowDisposition eDisposition);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ErrorOrTruncationOperation )( 
            IDTSOutputColumn100 * This,
            /* [retval][out] */ BSTR *pbstrValue);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ErrorOrTruncationOperation )( 
            IDTSOutputColumn100 * This,
            /* [in] */ BSTR bstrValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalMetadataColumnID )( 
            IDTSOutputColumn100 * This,
            /* [retval][out] */ long *plExternalMetadataColumnID);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExternalMetadataColumnID )( 
            IDTSOutputColumn100 * This,
            /* [in] */ long lExternalMetadataColumnID);
        
        END_INTERFACE
    } IDTSOutputColumn100Vtbl;

    interface IDTSOutputColumn100
    {
        CONST_VTBL struct IDTSOutputColumn100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSOutputColumn100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSOutputColumn100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSOutputColumn100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSOutputColumn100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSOutputColumn100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSOutputColumn100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSOutputColumn100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSOutputColumn100_get_ID(This,pID)	\
    ( (This)->lpVtbl -> get_ID(This,pID) ) 

#define IDTSOutputColumn100_put_ID(This,ID)	\
    ( (This)->lpVtbl -> put_ID(This,ID) ) 

#define IDTSOutputColumn100_get_Description(This,pbstrDescription)	\
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) ) 

#define IDTSOutputColumn100_put_Description(This,bstrDescription)	\
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) ) 

#define IDTSOutputColumn100_get_Name(This,pbstrName)	\
    ( (This)->lpVtbl -> get_Name(This,pbstrName) ) 

#define IDTSOutputColumn100_put_Name(This,bstrName)	\
    ( (This)->lpVtbl -> put_Name(This,bstrName) ) 

#define IDTSOutputColumn100_get_ObjectType(This,pType)	\
    ( (This)->lpVtbl -> get_ObjectType(This,pType) ) 

#define IDTSOutputColumn100_get_IdentificationString(This,pbstrIdentificationString)	\
    ( (This)->lpVtbl -> get_IdentificationString(This,pbstrIdentificationString) ) 


#define IDTSOutputColumn100_get_DataType(This,peDataType)	\
    ( (This)->lpVtbl -> get_DataType(This,peDataType) ) 

#define IDTSOutputColumn100_get_Length(This,plLength)	\
    ( (This)->lpVtbl -> get_Length(This,plLength) ) 

#define IDTSOutputColumn100_get_Precision(This,plPrecision)	\
    ( (This)->lpVtbl -> get_Precision(This,plPrecision) ) 

#define IDTSOutputColumn100_get_Scale(This,plScale)	\
    ( (This)->lpVtbl -> get_Scale(This,plScale) ) 

#define IDTSOutputColumn100_get_CustomPropertyCollection(This,ppIDTSCustomPropertyCollection)	\
    ( (This)->lpVtbl -> get_CustomPropertyCollection(This,ppIDTSCustomPropertyCollection) ) 

#define IDTSOutputColumn100_get_LineageID(This,plLineageID)	\
    ( (This)->lpVtbl -> get_LineageID(This,plLineageID) ) 

#define IDTSOutputColumn100_put_LineageID(This,lLineageID)	\
    ( (This)->lpVtbl -> put_LineageID(This,lLineageID) ) 

#define IDTSOutputColumn100_get_MappedColumnID(This,plMappedColumnID)	\
    ( (This)->lpVtbl -> get_MappedColumnID(This,plMappedColumnID) ) 

#define IDTSOutputColumn100_put_MappedColumnID(This,lMappedColumnID)	\
    ( (This)->lpVtbl -> put_MappedColumnID(This,lMappedColumnID) ) 

#define IDTSOutputColumn100_get_CodePage(This,plCodePage)	\
    ( (This)->lpVtbl -> get_CodePage(This,plCodePage) ) 

#define IDTSOutputColumn100_get_SortKeyPosition(This,plSortKeyPosition)	\
    ( (This)->lpVtbl -> get_SortKeyPosition(This,plSortKeyPosition) ) 

#define IDTSOutputColumn100_put_SortKeyPosition(This,lSortKeyPosition)	\
    ( (This)->lpVtbl -> put_SortKeyPosition(This,lSortKeyPosition) ) 

#define IDTSOutputColumn100_get_ComparisonFlags(This,plComparisonFlags)	\
    ( (This)->lpVtbl -> get_ComparisonFlags(This,plComparisonFlags) ) 

#define IDTSOutputColumn100_put_ComparisonFlags(This,lComparisonFlags)	\
    ( (This)->lpVtbl -> put_ComparisonFlags(This,lComparisonFlags) ) 

#define IDTSOutputColumn100_get_SpecialFlags(This,plSpecialFlags)	\
    ( (This)->lpVtbl -> get_SpecialFlags(This,plSpecialFlags) ) 

#define IDTSOutputColumn100_put_SpecialFlags(This,lSpecialFlags)	\
    ( (This)->lpVtbl -> put_SpecialFlags(This,lSpecialFlags) ) 

#define IDTSOutputColumn100_SetDataTypeProperties(This,eDataType,lLength,lPrecision,lScale,lCodePage)	\
    ( (This)->lpVtbl -> SetDataTypeProperties(This,eDataType,lLength,lPrecision,lScale,lCodePage) ) 

#define IDTSOutputColumn100_get_ErrorRowDisposition(This,peDisposition)	\
    ( (This)->lpVtbl -> get_ErrorRowDisposition(This,peDisposition) ) 

#define IDTSOutputColumn100_put_ErrorRowDisposition(This,eDisposition)	\
    ( (This)->lpVtbl -> put_ErrorRowDisposition(This,eDisposition) ) 

#define IDTSOutputColumn100_get_TruncationRowDisposition(This,peDisposition)	\
    ( (This)->lpVtbl -> get_TruncationRowDisposition(This,peDisposition) ) 

#define IDTSOutputColumn100_put_TruncationRowDisposition(This,eDisposition)	\
    ( (This)->lpVtbl -> put_TruncationRowDisposition(This,eDisposition) ) 

#define IDTSOutputColumn100_get_ErrorOrTruncationOperation(This,pbstrValue)	\
    ( (This)->lpVtbl -> get_ErrorOrTruncationOperation(This,pbstrValue) ) 

#define IDTSOutputColumn100_put_ErrorOrTruncationOperation(This,bstrValue)	\
    ( (This)->lpVtbl -> put_ErrorOrTruncationOperation(This,bstrValue) ) 

#define IDTSOutputColumn100_get_ExternalMetadataColumnID(This,plExternalMetadataColumnID)	\
    ( (This)->lpVtbl -> get_ExternalMetadataColumnID(This,plExternalMetadataColumnID) ) 

#define IDTSOutputColumn100_put_ExternalMetadataColumnID(This,lExternalMetadataColumnID)	\
    ( (This)->lpVtbl -> put_ExternalMetadataColumnID(This,lExternalMetadataColumnID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSOutputColumn100_INTERFACE_DEFINED__ */


#ifndef __IDTSOutputColumnCollection100_INTERFACE_DEFINED__
#define __IDTSOutputColumnCollection100_INTERFACE_DEFINED__

/* interface IDTSOutputColumnCollection100 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDTSOutputColumnCollection100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BCD65CD6-2CA9-428A-982A-D4405F51BE1D")
    IDTSOutputColumnCollection100 : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IDTSOutputColumn100 **ppIDTSOutputColumn) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppIUnknownEnum) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *plCount) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE New( 
            /* [retval][out] */ IDTSOutputColumn100 **ppIDTSOutputColumn) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NewAt( 
            /* [in] */ long lIndex,
            /* [retval][out] */ IDTSOutputColumn100 **ppIDTSOutputColumn) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveObjectByIndex( 
            /* [in] */ VARIANT Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveObjectByID( 
            /* [in] */ long lID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveAll( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetIndex( 
            /* [in] */ long lOldIndex,
            /* [in] */ long lNewIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetObjectByID( 
            /* [in] */ long lID,
            /* [retval][out] */ IDTSOutputColumn100 **ppIDTSOutputColumn) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetObjectIndexByID( 
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindObjectByID( 
            /* [in] */ long lID,
            /* [retval][out] */ IDTSOutputColumn100 **ppIDTSOutputColumn) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindObjectIndexByID( 
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetOutputColumnByLineageID( 
            /* [in] */ long lLineageID,
            /* [retval][out] */ IDTSOutputColumn100 **ppIDTSOutputColumn) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSOutputColumnCollection100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSOutputColumnCollection100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSOutputColumnCollection100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSOutputColumnCollection100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSOutputColumnCollection100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSOutputColumnCollection100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSOutputColumnCollection100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSOutputColumnCollection100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IDTSOutputColumnCollection100 * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IDTSOutputColumn100 **ppIDTSOutputColumn);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDTSOutputColumnCollection100 * This,
            /* [retval][out] */ IUnknown **ppIUnknownEnum);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDTSOutputColumnCollection100 * This,
            /* [retval][out] */ long *plCount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *New )( 
            IDTSOutputColumnCollection100 * This,
            /* [retval][out] */ IDTSOutputColumn100 **ppIDTSOutputColumn);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NewAt )( 
            IDTSOutputColumnCollection100 * This,
            /* [in] */ long lIndex,
            /* [retval][out] */ IDTSOutputColumn100 **ppIDTSOutputColumn);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveObjectByIndex )( 
            IDTSOutputColumnCollection100 * This,
            /* [in] */ VARIANT Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveObjectByID )( 
            IDTSOutputColumnCollection100 * This,
            /* [in] */ long lID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveAll )( 
            IDTSOutputColumnCollection100 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetIndex )( 
            IDTSOutputColumnCollection100 * This,
            /* [in] */ long lOldIndex,
            /* [in] */ long lNewIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetObjectByID )( 
            IDTSOutputColumnCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ IDTSOutputColumn100 **ppIDTSOutputColumn);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetObjectIndexByID )( 
            IDTSOutputColumnCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindObjectByID )( 
            IDTSOutputColumnCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ IDTSOutputColumn100 **ppIDTSOutputColumn);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindObjectIndexByID )( 
            IDTSOutputColumnCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetOutputColumnByLineageID )( 
            IDTSOutputColumnCollection100 * This,
            /* [in] */ long lLineageID,
            /* [retval][out] */ IDTSOutputColumn100 **ppIDTSOutputColumn);
        
        END_INTERFACE
    } IDTSOutputColumnCollection100Vtbl;

    interface IDTSOutputColumnCollection100
    {
        CONST_VTBL struct IDTSOutputColumnCollection100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSOutputColumnCollection100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSOutputColumnCollection100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSOutputColumnCollection100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSOutputColumnCollection100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSOutputColumnCollection100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSOutputColumnCollection100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSOutputColumnCollection100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSOutputColumnCollection100_get_Item(This,Index,ppIDTSOutputColumn)	\
    ( (This)->lpVtbl -> get_Item(This,Index,ppIDTSOutputColumn) ) 

#define IDTSOutputColumnCollection100_get__NewEnum(This,ppIUnknownEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppIUnknownEnum) ) 

#define IDTSOutputColumnCollection100_get_Count(This,plCount)	\
    ( (This)->lpVtbl -> get_Count(This,plCount) ) 

#define IDTSOutputColumnCollection100_New(This,ppIDTSOutputColumn)	\
    ( (This)->lpVtbl -> New(This,ppIDTSOutputColumn) ) 

#define IDTSOutputColumnCollection100_NewAt(This,lIndex,ppIDTSOutputColumn)	\
    ( (This)->lpVtbl -> NewAt(This,lIndex,ppIDTSOutputColumn) ) 

#define IDTSOutputColumnCollection100_RemoveObjectByIndex(This,Index)	\
    ( (This)->lpVtbl -> RemoveObjectByIndex(This,Index) ) 

#define IDTSOutputColumnCollection100_RemoveObjectByID(This,lID)	\
    ( (This)->lpVtbl -> RemoveObjectByID(This,lID) ) 

#define IDTSOutputColumnCollection100_RemoveAll(This)	\
    ( (This)->lpVtbl -> RemoveAll(This) ) 

#define IDTSOutputColumnCollection100_SetIndex(This,lOldIndex,lNewIndex)	\
    ( (This)->lpVtbl -> SetIndex(This,lOldIndex,lNewIndex) ) 

#define IDTSOutputColumnCollection100_GetObjectByID(This,lID,ppIDTSOutputColumn)	\
    ( (This)->lpVtbl -> GetObjectByID(This,lID,ppIDTSOutputColumn) ) 

#define IDTSOutputColumnCollection100_GetObjectIndexByID(This,lID,plIndex)	\
    ( (This)->lpVtbl -> GetObjectIndexByID(This,lID,plIndex) ) 

#define IDTSOutputColumnCollection100_FindObjectByID(This,lID,ppIDTSOutputColumn)	\
    ( (This)->lpVtbl -> FindObjectByID(This,lID,ppIDTSOutputColumn) ) 

#define IDTSOutputColumnCollection100_FindObjectIndexByID(This,lID,plIndex)	\
    ( (This)->lpVtbl -> FindObjectIndexByID(This,lID,plIndex) ) 

#define IDTSOutputColumnCollection100_GetOutputColumnByLineageID(This,lLineageID,ppIDTSOutputColumn)	\
    ( (This)->lpVtbl -> GetOutputColumnByLineageID(This,lLineageID,ppIDTSOutputColumn) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSOutputColumnCollection100_INTERFACE_DEFINED__ */


#ifndef __IDTSVirtualInputColumn100_INTERFACE_DEFINED__
#define __IDTSVirtualInputColumn100_INTERFACE_DEFINED__

/* interface IDTSVirtualInputColumn100 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDTSVirtualInputColumn100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("77728C75-4B43-43B8-B87E-4ADCA62FBF5C")
    IDTSVirtualInputColumn100 : public IDTSObject100
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DataType( 
            /* [retval][out] */ enum /* external definition not present */ DataType *peDataType) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Length( 
            /* [retval][out] */ long *plLength) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Precision( 
            /* [retval][out] */ long *plPrecision) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Scale( 
            /* [retval][out] */ long *plScale) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UsageType( 
            /* [retval][out] */ enum DTSUsageType *peUsageType) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LineageID( 
            /* [retval][out] */ long *plLineageID) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SourceComponent( 
            /* [retval][out] */ BSTR *pbstrSourceComponent) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NewName( 
            /* [retval][out] */ BSTR *pbstrNewName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_NewName( 
            /* [in] */ BSTR bstrNewName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NewDescription( 
            /* [retval][out] */ BSTR *pbstrNewDescription) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_NewDescription( 
            /* [in] */ BSTR bstrNewDescription) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CodePage( 
            /* [retval][out] */ long *plCodePage) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SortKeyPosition( 
            /* [retval][out] */ long *plSortKeyPosition) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ComparisonFlags( 
            /* [retval][out] */ long *plComparisonFlags) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UpstreamComponentName( 
            /* [retval][out] */ BSTR *pbstrUpstreamComponentName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DescribeRedirectedErrorCode( 
            /* [in] */ HRESULT hrErrorCode,
            /* [retval][out] */ BSTR *pbstrDesc) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsAssociatedWithOutputColumn( 
            /* [retval][out] */ VARIANT_BOOL *pbIsAssociatedWithOutputColumn) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSVirtualInputColumn100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSVirtualInputColumn100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSVirtualInputColumn100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSVirtualInputColumn100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSVirtualInputColumn100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSVirtualInputColumn100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSVirtualInputColumn100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSVirtualInputColumn100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IDTSVirtualInputColumn100 * This,
            /* [retval][out] */ long *pID);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ID )( 
            IDTSVirtualInputColumn100 * This,
            /* [in] */ long ID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IDTSVirtualInputColumn100 * This,
            /* [retval][out] */ BSTR *pbstrDescription);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            IDTSVirtualInputColumn100 * This,
            /* [in] */ BSTR bstrDescription);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IDTSVirtualInputColumn100 * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IDTSVirtualInputColumn100 * This,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectType )( 
            IDTSVirtualInputColumn100 * This,
            /* [retval][out] */ enum DTSObjectType *pType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IdentificationString )( 
            IDTSVirtualInputColumn100 * This,
            /* [retval][out] */ BSTR *pbstrIdentificationString);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataType )( 
            IDTSVirtualInputColumn100 * This,
            /* [retval][out] */ enum /* external definition not present */ DataType *peDataType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Length )( 
            IDTSVirtualInputColumn100 * This,
            /* [retval][out] */ long *plLength);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Precision )( 
            IDTSVirtualInputColumn100 * This,
            /* [retval][out] */ long *plPrecision);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Scale )( 
            IDTSVirtualInputColumn100 * This,
            /* [retval][out] */ long *plScale);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UsageType )( 
            IDTSVirtualInputColumn100 * This,
            /* [retval][out] */ enum DTSUsageType *peUsageType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LineageID )( 
            IDTSVirtualInputColumn100 * This,
            /* [retval][out] */ long *plLineageID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SourceComponent )( 
            IDTSVirtualInputColumn100 * This,
            /* [retval][out] */ BSTR *pbstrSourceComponent);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NewName )( 
            IDTSVirtualInputColumn100 * This,
            /* [retval][out] */ BSTR *pbstrNewName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NewName )( 
            IDTSVirtualInputColumn100 * This,
            /* [in] */ BSTR bstrNewName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NewDescription )( 
            IDTSVirtualInputColumn100 * This,
            /* [retval][out] */ BSTR *pbstrNewDescription);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NewDescription )( 
            IDTSVirtualInputColumn100 * This,
            /* [in] */ BSTR bstrNewDescription);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CodePage )( 
            IDTSVirtualInputColumn100 * This,
            /* [retval][out] */ long *plCodePage);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SortKeyPosition )( 
            IDTSVirtualInputColumn100 * This,
            /* [retval][out] */ long *plSortKeyPosition);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ComparisonFlags )( 
            IDTSVirtualInputColumn100 * This,
            /* [retval][out] */ long *plComparisonFlags);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UpstreamComponentName )( 
            IDTSVirtualInputColumn100 * This,
            /* [retval][out] */ BSTR *pbstrUpstreamComponentName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DescribeRedirectedErrorCode )( 
            IDTSVirtualInputColumn100 * This,
            /* [in] */ HRESULT hrErrorCode,
            /* [retval][out] */ BSTR *pbstrDesc);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsAssociatedWithOutputColumn )( 
            IDTSVirtualInputColumn100 * This,
            /* [retval][out] */ VARIANT_BOOL *pbIsAssociatedWithOutputColumn);
        
        END_INTERFACE
    } IDTSVirtualInputColumn100Vtbl;

    interface IDTSVirtualInputColumn100
    {
        CONST_VTBL struct IDTSVirtualInputColumn100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSVirtualInputColumn100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSVirtualInputColumn100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSVirtualInputColumn100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSVirtualInputColumn100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSVirtualInputColumn100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSVirtualInputColumn100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSVirtualInputColumn100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSVirtualInputColumn100_get_ID(This,pID)	\
    ( (This)->lpVtbl -> get_ID(This,pID) ) 

#define IDTSVirtualInputColumn100_put_ID(This,ID)	\
    ( (This)->lpVtbl -> put_ID(This,ID) ) 

#define IDTSVirtualInputColumn100_get_Description(This,pbstrDescription)	\
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) ) 

#define IDTSVirtualInputColumn100_put_Description(This,bstrDescription)	\
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) ) 

#define IDTSVirtualInputColumn100_get_Name(This,pbstrName)	\
    ( (This)->lpVtbl -> get_Name(This,pbstrName) ) 

#define IDTSVirtualInputColumn100_put_Name(This,bstrName)	\
    ( (This)->lpVtbl -> put_Name(This,bstrName) ) 

#define IDTSVirtualInputColumn100_get_ObjectType(This,pType)	\
    ( (This)->lpVtbl -> get_ObjectType(This,pType) ) 

#define IDTSVirtualInputColumn100_get_IdentificationString(This,pbstrIdentificationString)	\
    ( (This)->lpVtbl -> get_IdentificationString(This,pbstrIdentificationString) ) 


#define IDTSVirtualInputColumn100_get_DataType(This,peDataType)	\
    ( (This)->lpVtbl -> get_DataType(This,peDataType) ) 

#define IDTSVirtualInputColumn100_get_Length(This,plLength)	\
    ( (This)->lpVtbl -> get_Length(This,plLength) ) 

#define IDTSVirtualInputColumn100_get_Precision(This,plPrecision)	\
    ( (This)->lpVtbl -> get_Precision(This,plPrecision) ) 

#define IDTSVirtualInputColumn100_get_Scale(This,plScale)	\
    ( (This)->lpVtbl -> get_Scale(This,plScale) ) 

#define IDTSVirtualInputColumn100_get_UsageType(This,peUsageType)	\
    ( (This)->lpVtbl -> get_UsageType(This,peUsageType) ) 

#define IDTSVirtualInputColumn100_get_LineageID(This,plLineageID)	\
    ( (This)->lpVtbl -> get_LineageID(This,plLineageID) ) 

#define IDTSVirtualInputColumn100_get_SourceComponent(This,pbstrSourceComponent)	\
    ( (This)->lpVtbl -> get_SourceComponent(This,pbstrSourceComponent) ) 

#define IDTSVirtualInputColumn100_get_NewName(This,pbstrNewName)	\
    ( (This)->lpVtbl -> get_NewName(This,pbstrNewName) ) 

#define IDTSVirtualInputColumn100_put_NewName(This,bstrNewName)	\
    ( (This)->lpVtbl -> put_NewName(This,bstrNewName) ) 

#define IDTSVirtualInputColumn100_get_NewDescription(This,pbstrNewDescription)	\
    ( (This)->lpVtbl -> get_NewDescription(This,pbstrNewDescription) ) 

#define IDTSVirtualInputColumn100_put_NewDescription(This,bstrNewDescription)	\
    ( (This)->lpVtbl -> put_NewDescription(This,bstrNewDescription) ) 

#define IDTSVirtualInputColumn100_get_CodePage(This,plCodePage)	\
    ( (This)->lpVtbl -> get_CodePage(This,plCodePage) ) 

#define IDTSVirtualInputColumn100_get_SortKeyPosition(This,plSortKeyPosition)	\
    ( (This)->lpVtbl -> get_SortKeyPosition(This,plSortKeyPosition) ) 

#define IDTSVirtualInputColumn100_get_ComparisonFlags(This,plComparisonFlags)	\
    ( (This)->lpVtbl -> get_ComparisonFlags(This,plComparisonFlags) ) 

#define IDTSVirtualInputColumn100_get_UpstreamComponentName(This,pbstrUpstreamComponentName)	\
    ( (This)->lpVtbl -> get_UpstreamComponentName(This,pbstrUpstreamComponentName) ) 

#define IDTSVirtualInputColumn100_DescribeRedirectedErrorCode(This,hrErrorCode,pbstrDesc)	\
    ( (This)->lpVtbl -> DescribeRedirectedErrorCode(This,hrErrorCode,pbstrDesc) ) 

#define IDTSVirtualInputColumn100_get_IsAssociatedWithOutputColumn(This,pbIsAssociatedWithOutputColumn)	\
    ( (This)->lpVtbl -> get_IsAssociatedWithOutputColumn(This,pbIsAssociatedWithOutputColumn) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSVirtualInputColumn100_INTERFACE_DEFINED__ */


#ifndef __IDTSVirtualInputColumnCollection100_INTERFACE_DEFINED__
#define __IDTSVirtualInputColumnCollection100_INTERFACE_DEFINED__

/* interface IDTSVirtualInputColumnCollection100 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDTSVirtualInputColumnCollection100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("99F6F64E-A32D-4819-9230-CBF837092F69")
    IDTSVirtualInputColumnCollection100 : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IDTSVirtualInputColumn100 **ppIDTSVirtualInputColumn) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppIUnknownEnum) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *plCount) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetIndex( 
            /* [in] */ long lOldIndex,
            /* [in] */ long lNewIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetObjectByID( 
            /* [in] */ long lID,
            /* [retval][out] */ IDTSVirtualInputColumn100 **ppIDTSVirtualInputColumn) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetObjectIndexByID( 
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindObjectByID( 
            /* [in] */ long lID,
            /* [retval][out] */ IDTSVirtualInputColumn100 **ppIDTSVirtualInputColumn) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindObjectIndexByID( 
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetVirtualInputColumnByLineageID( 
            /* [in] */ long lLineageID,
            /* [retval][out] */ IDTSVirtualInputColumn100 **ppIDTSVirtualInputColumn) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetVirtualInputColumnByName( 
            /* [in] */ BSTR bstrComponentName,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IDTSVirtualInputColumn100 **ppIDTSVirtualInputColumn) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSVirtualInputColumnCollection100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSVirtualInputColumnCollection100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSVirtualInputColumnCollection100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSVirtualInputColumnCollection100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSVirtualInputColumnCollection100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSVirtualInputColumnCollection100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSVirtualInputColumnCollection100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSVirtualInputColumnCollection100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IDTSVirtualInputColumnCollection100 * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IDTSVirtualInputColumn100 **ppIDTSVirtualInputColumn);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDTSVirtualInputColumnCollection100 * This,
            /* [retval][out] */ IUnknown **ppIUnknownEnum);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDTSVirtualInputColumnCollection100 * This,
            /* [retval][out] */ long *plCount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetIndex )( 
            IDTSVirtualInputColumnCollection100 * This,
            /* [in] */ long lOldIndex,
            /* [in] */ long lNewIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetObjectByID )( 
            IDTSVirtualInputColumnCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ IDTSVirtualInputColumn100 **ppIDTSVirtualInputColumn);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetObjectIndexByID )( 
            IDTSVirtualInputColumnCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindObjectByID )( 
            IDTSVirtualInputColumnCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ IDTSVirtualInputColumn100 **ppIDTSVirtualInputColumn);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindObjectIndexByID )( 
            IDTSVirtualInputColumnCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVirtualInputColumnByLineageID )( 
            IDTSVirtualInputColumnCollection100 * This,
            /* [in] */ long lLineageID,
            /* [retval][out] */ IDTSVirtualInputColumn100 **ppIDTSVirtualInputColumn);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVirtualInputColumnByName )( 
            IDTSVirtualInputColumnCollection100 * This,
            /* [in] */ BSTR bstrComponentName,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IDTSVirtualInputColumn100 **ppIDTSVirtualInputColumn);
        
        END_INTERFACE
    } IDTSVirtualInputColumnCollection100Vtbl;

    interface IDTSVirtualInputColumnCollection100
    {
        CONST_VTBL struct IDTSVirtualInputColumnCollection100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSVirtualInputColumnCollection100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSVirtualInputColumnCollection100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSVirtualInputColumnCollection100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSVirtualInputColumnCollection100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSVirtualInputColumnCollection100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSVirtualInputColumnCollection100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSVirtualInputColumnCollection100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSVirtualInputColumnCollection100_get_Item(This,Index,ppIDTSVirtualInputColumn)	\
    ( (This)->lpVtbl -> get_Item(This,Index,ppIDTSVirtualInputColumn) ) 

#define IDTSVirtualInputColumnCollection100_get__NewEnum(This,ppIUnknownEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppIUnknownEnum) ) 

#define IDTSVirtualInputColumnCollection100_get_Count(This,plCount)	\
    ( (This)->lpVtbl -> get_Count(This,plCount) ) 

#define IDTSVirtualInputColumnCollection100_SetIndex(This,lOldIndex,lNewIndex)	\
    ( (This)->lpVtbl -> SetIndex(This,lOldIndex,lNewIndex) ) 

#define IDTSVirtualInputColumnCollection100_GetObjectByID(This,lID,ppIDTSVirtualInputColumn)	\
    ( (This)->lpVtbl -> GetObjectByID(This,lID,ppIDTSVirtualInputColumn) ) 

#define IDTSVirtualInputColumnCollection100_GetObjectIndexByID(This,lID,plIndex)	\
    ( (This)->lpVtbl -> GetObjectIndexByID(This,lID,plIndex) ) 

#define IDTSVirtualInputColumnCollection100_FindObjectByID(This,lID,ppIDTSVirtualInputColumn)	\
    ( (This)->lpVtbl -> FindObjectByID(This,lID,ppIDTSVirtualInputColumn) ) 

#define IDTSVirtualInputColumnCollection100_FindObjectIndexByID(This,lID,plIndex)	\
    ( (This)->lpVtbl -> FindObjectIndexByID(This,lID,plIndex) ) 

#define IDTSVirtualInputColumnCollection100_GetVirtualInputColumnByLineageID(This,lLineageID,ppIDTSVirtualInputColumn)	\
    ( (This)->lpVtbl -> GetVirtualInputColumnByLineageID(This,lLineageID,ppIDTSVirtualInputColumn) ) 

#define IDTSVirtualInputColumnCollection100_GetVirtualInputColumnByName(This,bstrComponentName,bstrName,ppIDTSVirtualInputColumn)	\
    ( (This)->lpVtbl -> GetVirtualInputColumnByName(This,bstrComponentName,bstrName,ppIDTSVirtualInputColumn) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSVirtualInputColumnCollection100_INTERFACE_DEFINED__ */


#ifndef __IDTSVirtualInput100_INTERFACE_DEFINED__
#define __IDTSVirtualInput100_INTERFACE_DEFINED__

/* interface IDTSVirtualInput100 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDTSVirtualInput100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DD9E7F1F-A112-4EBD-9178-EE7DB0F2EDEC")
    IDTSVirtualInput100 : public IDTSObject100
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VirtualInputColumnCollection( 
            /* [retval][out] */ IDTSVirtualInputColumnCollection100 **ppIDTSVirtualInputColumnCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetUsageType( 
            /* [in] */ long lLineageID,
            /* [in] */ enum DTSUsageType eUsageType,
            /* [retval][out] */ long *plAffectedColumnIndex) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsSorted( 
            /* [retval][out] */ VARIANT_BOOL *pbIsSorted) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SourceLocale( 
            /* [retval][out] */ long *plSourceLocale) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSVirtualInput100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSVirtualInput100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSVirtualInput100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSVirtualInput100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSVirtualInput100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSVirtualInput100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSVirtualInput100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSVirtualInput100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IDTSVirtualInput100 * This,
            /* [retval][out] */ long *pID);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ID )( 
            IDTSVirtualInput100 * This,
            /* [in] */ long ID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IDTSVirtualInput100 * This,
            /* [retval][out] */ BSTR *pbstrDescription);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            IDTSVirtualInput100 * This,
            /* [in] */ BSTR bstrDescription);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IDTSVirtualInput100 * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IDTSVirtualInput100 * This,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectType )( 
            IDTSVirtualInput100 * This,
            /* [retval][out] */ enum DTSObjectType *pType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IdentificationString )( 
            IDTSVirtualInput100 * This,
            /* [retval][out] */ BSTR *pbstrIdentificationString);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VirtualInputColumnCollection )( 
            IDTSVirtualInput100 * This,
            /* [retval][out] */ IDTSVirtualInputColumnCollection100 **ppIDTSVirtualInputColumnCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetUsageType )( 
            IDTSVirtualInput100 * This,
            /* [in] */ long lLineageID,
            /* [in] */ enum DTSUsageType eUsageType,
            /* [retval][out] */ long *plAffectedColumnIndex);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsSorted )( 
            IDTSVirtualInput100 * This,
            /* [retval][out] */ VARIANT_BOOL *pbIsSorted);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SourceLocale )( 
            IDTSVirtualInput100 * This,
            /* [retval][out] */ long *plSourceLocale);
        
        END_INTERFACE
    } IDTSVirtualInput100Vtbl;

    interface IDTSVirtualInput100
    {
        CONST_VTBL struct IDTSVirtualInput100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSVirtualInput100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSVirtualInput100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSVirtualInput100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSVirtualInput100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSVirtualInput100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSVirtualInput100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSVirtualInput100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSVirtualInput100_get_ID(This,pID)	\
    ( (This)->lpVtbl -> get_ID(This,pID) ) 

#define IDTSVirtualInput100_put_ID(This,ID)	\
    ( (This)->lpVtbl -> put_ID(This,ID) ) 

#define IDTSVirtualInput100_get_Description(This,pbstrDescription)	\
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) ) 

#define IDTSVirtualInput100_put_Description(This,bstrDescription)	\
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) ) 

#define IDTSVirtualInput100_get_Name(This,pbstrName)	\
    ( (This)->lpVtbl -> get_Name(This,pbstrName) ) 

#define IDTSVirtualInput100_put_Name(This,bstrName)	\
    ( (This)->lpVtbl -> put_Name(This,bstrName) ) 

#define IDTSVirtualInput100_get_ObjectType(This,pType)	\
    ( (This)->lpVtbl -> get_ObjectType(This,pType) ) 

#define IDTSVirtualInput100_get_IdentificationString(This,pbstrIdentificationString)	\
    ( (This)->lpVtbl -> get_IdentificationString(This,pbstrIdentificationString) ) 


#define IDTSVirtualInput100_get_VirtualInputColumnCollection(This,ppIDTSVirtualInputColumnCollection)	\
    ( (This)->lpVtbl -> get_VirtualInputColumnCollection(This,ppIDTSVirtualInputColumnCollection) ) 

#define IDTSVirtualInput100_SetUsageType(This,lLineageID,eUsageType,plAffectedColumnIndex)	\
    ( (This)->lpVtbl -> SetUsageType(This,lLineageID,eUsageType,plAffectedColumnIndex) ) 

#define IDTSVirtualInput100_get_IsSorted(This,pbIsSorted)	\
    ( (This)->lpVtbl -> get_IsSorted(This,pbIsSorted) ) 

#define IDTSVirtualInput100_get_SourceLocale(This,plSourceLocale)	\
    ( (This)->lpVtbl -> get_SourceLocale(This,plSourceLocale) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSVirtualInput100_INTERFACE_DEFINED__ */


#ifndef __IDTSInput100_INTERFACE_DEFINED__
#define __IDTSInput100_INTERFACE_DEFINED__

/* interface IDTSInput100 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDTSInput100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A835ED14-7535-42F7-A165-A11E7C409817")
    IDTSInput100 : public IDTSObject100
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HasSideEffects( 
            /* [retval][out] */ VARIANT_BOOL *pbHasSideEffects) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HasSideEffects( 
            /* [in] */ VARIANT_BOOL bHasSideEffects) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Buffer( 
            /* [retval][out] */ DTP_HBUFFERTYPE *phBufferType) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CustomPropertyCollection( 
            /* [retval][out] */ IDTSCustomPropertyCollection100 **ppIDTSCustomPropertyCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetVirtualInput( 
            /* [retval][out] */ IDTSVirtualInput100 **ppIDTSVirtualInput) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_InputColumnCollection( 
            /* [retval][out] */ IDTSInputColumnCollection100 **ppIDTSInputColumnCollection) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Dangling( 
            /* [retval][out] */ VARIANT_BOOL *pbDangling) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Dangling( 
            /* [in] */ VARIANT_BOOL bDangling) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsAttached( 
            /* [retval][out] */ VARIANT_BOOL *pbIsAttached) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsSorted( 
            /* [retval][out] */ VARIANT_BOOL *pbIsSorted) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SourceLocale( 
            /* [retval][out] */ long *plSourceLocale) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorRowDisposition( 
            /* [retval][out] */ enum DTSRowDisposition *peDisposition) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ErrorRowDisposition( 
            /* [in] */ enum DTSRowDisposition eDisposition) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TruncationRowDisposition( 
            /* [retval][out] */ enum DTSRowDisposition *peDisposition) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TruncationRowDisposition( 
            /* [in] */ enum DTSRowDisposition eDisposition) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorOrTruncationOperation( 
            /* [retval][out] */ BSTR *pbstrValue) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ErrorOrTruncationOperation( 
            /* [in] */ BSTR bstrValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalMetadataColumnCollection( 
            /* [retval][out] */ IDTSExternalMetadataColumnCollection100 **ppIDTSExternalMetadataColumnCollection) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Component( 
            /* [retval][out] */ IDTSComponentMetaData100 **ppIDTSComponentMetaData) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BufferBase( 
            /* [retval][out] */ DTP_HBUFFERTYPE *phBufferType) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AreInputColumnsAssociatedWithOutputColumns( 
            /* [retval][out] */ VARIANT_BOOL *pbInputColumnsAssociatedWithOutputColumns) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SuggestNameBasedLineageIDMappings( 
            /* [out][in] */ SAFEARRAY * *ppsaOldIDs,
            /* [out][in] */ SAFEARRAY * *ppsaNewIDs) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSInput100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSInput100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSInput100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSInput100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSInput100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSInput100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSInput100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSInput100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IDTSInput100 * This,
            /* [retval][out] */ long *pID);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ID )( 
            IDTSInput100 * This,
            /* [in] */ long ID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IDTSInput100 * This,
            /* [retval][out] */ BSTR *pbstrDescription);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            IDTSInput100 * This,
            /* [in] */ BSTR bstrDescription);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IDTSInput100 * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IDTSInput100 * This,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectType )( 
            IDTSInput100 * This,
            /* [retval][out] */ enum DTSObjectType *pType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IdentificationString )( 
            IDTSInput100 * This,
            /* [retval][out] */ BSTR *pbstrIdentificationString);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasSideEffects )( 
            IDTSInput100 * This,
            /* [retval][out] */ VARIANT_BOOL *pbHasSideEffects);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HasSideEffects )( 
            IDTSInput100 * This,
            /* [in] */ VARIANT_BOOL bHasSideEffects);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Buffer )( 
            IDTSInput100 * This,
            /* [retval][out] */ DTP_HBUFFERTYPE *phBufferType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CustomPropertyCollection )( 
            IDTSInput100 * This,
            /* [retval][out] */ IDTSCustomPropertyCollection100 **ppIDTSCustomPropertyCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVirtualInput )( 
            IDTSInput100 * This,
            /* [retval][out] */ IDTSVirtualInput100 **ppIDTSVirtualInput);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InputColumnCollection )( 
            IDTSInput100 * This,
            /* [retval][out] */ IDTSInputColumnCollection100 **ppIDTSInputColumnCollection);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Dangling )( 
            IDTSInput100 * This,
            /* [retval][out] */ VARIANT_BOOL *pbDangling);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Dangling )( 
            IDTSInput100 * This,
            /* [in] */ VARIANT_BOOL bDangling);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsAttached )( 
            IDTSInput100 * This,
            /* [retval][out] */ VARIANT_BOOL *pbIsAttached);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsSorted )( 
            IDTSInput100 * This,
            /* [retval][out] */ VARIANT_BOOL *pbIsSorted);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SourceLocale )( 
            IDTSInput100 * This,
            /* [retval][out] */ long *plSourceLocale);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ErrorRowDisposition )( 
            IDTSInput100 * This,
            /* [retval][out] */ enum DTSRowDisposition *peDisposition);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ErrorRowDisposition )( 
            IDTSInput100 * This,
            /* [in] */ enum DTSRowDisposition eDisposition);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TruncationRowDisposition )( 
            IDTSInput100 * This,
            /* [retval][out] */ enum DTSRowDisposition *peDisposition);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TruncationRowDisposition )( 
            IDTSInput100 * This,
            /* [in] */ enum DTSRowDisposition eDisposition);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ErrorOrTruncationOperation )( 
            IDTSInput100 * This,
            /* [retval][out] */ BSTR *pbstrValue);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ErrorOrTruncationOperation )( 
            IDTSInput100 * This,
            /* [in] */ BSTR bstrValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalMetadataColumnCollection )( 
            IDTSInput100 * This,
            /* [retval][out] */ IDTSExternalMetadataColumnCollection100 **ppIDTSExternalMetadataColumnCollection);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Component )( 
            IDTSInput100 * This,
            /* [retval][out] */ IDTSComponentMetaData100 **ppIDTSComponentMetaData);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BufferBase )( 
            IDTSInput100 * This,
            /* [retval][out] */ DTP_HBUFFERTYPE *phBufferType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AreInputColumnsAssociatedWithOutputColumns )( 
            IDTSInput100 * This,
            /* [retval][out] */ VARIANT_BOOL *pbInputColumnsAssociatedWithOutputColumns);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SuggestNameBasedLineageIDMappings )( 
            IDTSInput100 * This,
            /* [out][in] */ SAFEARRAY * *ppsaOldIDs,
            /* [out][in] */ SAFEARRAY * *ppsaNewIDs);
        
        END_INTERFACE
    } IDTSInput100Vtbl;

    interface IDTSInput100
    {
        CONST_VTBL struct IDTSInput100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSInput100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSInput100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSInput100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSInput100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSInput100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSInput100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSInput100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSInput100_get_ID(This,pID)	\
    ( (This)->lpVtbl -> get_ID(This,pID) ) 

#define IDTSInput100_put_ID(This,ID)	\
    ( (This)->lpVtbl -> put_ID(This,ID) ) 

#define IDTSInput100_get_Description(This,pbstrDescription)	\
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) ) 

#define IDTSInput100_put_Description(This,bstrDescription)	\
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) ) 

#define IDTSInput100_get_Name(This,pbstrName)	\
    ( (This)->lpVtbl -> get_Name(This,pbstrName) ) 

#define IDTSInput100_put_Name(This,bstrName)	\
    ( (This)->lpVtbl -> put_Name(This,bstrName) ) 

#define IDTSInput100_get_ObjectType(This,pType)	\
    ( (This)->lpVtbl -> get_ObjectType(This,pType) ) 

#define IDTSInput100_get_IdentificationString(This,pbstrIdentificationString)	\
    ( (This)->lpVtbl -> get_IdentificationString(This,pbstrIdentificationString) ) 


#define IDTSInput100_get_HasSideEffects(This,pbHasSideEffects)	\
    ( (This)->lpVtbl -> get_HasSideEffects(This,pbHasSideEffects) ) 

#define IDTSInput100_put_HasSideEffects(This,bHasSideEffects)	\
    ( (This)->lpVtbl -> put_HasSideEffects(This,bHasSideEffects) ) 

#define IDTSInput100_get_Buffer(This,phBufferType)	\
    ( (This)->lpVtbl -> get_Buffer(This,phBufferType) ) 

#define IDTSInput100_get_CustomPropertyCollection(This,ppIDTSCustomPropertyCollection)	\
    ( (This)->lpVtbl -> get_CustomPropertyCollection(This,ppIDTSCustomPropertyCollection) ) 

#define IDTSInput100_GetVirtualInput(This,ppIDTSVirtualInput)	\
    ( (This)->lpVtbl -> GetVirtualInput(This,ppIDTSVirtualInput) ) 

#define IDTSInput100_get_InputColumnCollection(This,ppIDTSInputColumnCollection)	\
    ( (This)->lpVtbl -> get_InputColumnCollection(This,ppIDTSInputColumnCollection) ) 

#define IDTSInput100_get_Dangling(This,pbDangling)	\
    ( (This)->lpVtbl -> get_Dangling(This,pbDangling) ) 

#define IDTSInput100_put_Dangling(This,bDangling)	\
    ( (This)->lpVtbl -> put_Dangling(This,bDangling) ) 

#define IDTSInput100_get_IsAttached(This,pbIsAttached)	\
    ( (This)->lpVtbl -> get_IsAttached(This,pbIsAttached) ) 

#define IDTSInput100_get_IsSorted(This,pbIsSorted)	\
    ( (This)->lpVtbl -> get_IsSorted(This,pbIsSorted) ) 

#define IDTSInput100_get_SourceLocale(This,plSourceLocale)	\
    ( (This)->lpVtbl -> get_SourceLocale(This,plSourceLocale) ) 

#define IDTSInput100_get_ErrorRowDisposition(This,peDisposition)	\
    ( (This)->lpVtbl -> get_ErrorRowDisposition(This,peDisposition) ) 

#define IDTSInput100_put_ErrorRowDisposition(This,eDisposition)	\
    ( (This)->lpVtbl -> put_ErrorRowDisposition(This,eDisposition) ) 

#define IDTSInput100_get_TruncationRowDisposition(This,peDisposition)	\
    ( (This)->lpVtbl -> get_TruncationRowDisposition(This,peDisposition) ) 

#define IDTSInput100_put_TruncationRowDisposition(This,eDisposition)	\
    ( (This)->lpVtbl -> put_TruncationRowDisposition(This,eDisposition) ) 

#define IDTSInput100_get_ErrorOrTruncationOperation(This,pbstrValue)	\
    ( (This)->lpVtbl -> get_ErrorOrTruncationOperation(This,pbstrValue) ) 

#define IDTSInput100_put_ErrorOrTruncationOperation(This,bstrValue)	\
    ( (This)->lpVtbl -> put_ErrorOrTruncationOperation(This,bstrValue) ) 

#define IDTSInput100_get_ExternalMetadataColumnCollection(This,ppIDTSExternalMetadataColumnCollection)	\
    ( (This)->lpVtbl -> get_ExternalMetadataColumnCollection(This,ppIDTSExternalMetadataColumnCollection) ) 

#define IDTSInput100_get_Component(This,ppIDTSComponentMetaData)	\
    ( (This)->lpVtbl -> get_Component(This,ppIDTSComponentMetaData) ) 

#define IDTSInput100_get_BufferBase(This,phBufferType)	\
    ( (This)->lpVtbl -> get_BufferBase(This,phBufferType) ) 

#define IDTSInput100_get_AreInputColumnsAssociatedWithOutputColumns(This,pbInputColumnsAssociatedWithOutputColumns)	\
    ( (This)->lpVtbl -> get_AreInputColumnsAssociatedWithOutputColumns(This,pbInputColumnsAssociatedWithOutputColumns) ) 

#define IDTSInput100_SuggestNameBasedLineageIDMappings(This,ppsaOldIDs,ppsaNewIDs)	\
    ( (This)->lpVtbl -> SuggestNameBasedLineageIDMappings(This,ppsaOldIDs,ppsaNewIDs) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSInput100_INTERFACE_DEFINED__ */


#ifndef __IDTSInputCollection100_INTERFACE_DEFINED__
#define __IDTSInputCollection100_INTERFACE_DEFINED__

/* interface IDTSInputCollection100 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDTSInputCollection100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2D564021-87C1-47BF-BC55-9303ECCB5C20")
    IDTSInputCollection100 : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IDTSInput100 **ppIDTSInput) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppIUnknownEnum) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *plCount) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE New( 
            /* [retval][out] */ IDTSInput100 **ppIDTSInput) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NewAt( 
            /* [in] */ long lIndex,
            /* [retval][out] */ IDTSInput100 **ppIDTSInput) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveObjectByIndex( 
            /* [in] */ VARIANT Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveObjectByID( 
            /* [in] */ long lID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveAll( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetIndex( 
            /* [in] */ long lOldIndex,
            /* [in] */ long lNewIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetObjectByID( 
            /* [in] */ long lID,
            /* [retval][out] */ IDTSInput100 **ppIDTSInput) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetObjectIndexByID( 
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindObjectByID( 
            /* [in] */ long lID,
            /* [retval][out] */ IDTSInput100 **ppIDTSInput) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindObjectIndexByID( 
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSInputCollection100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSInputCollection100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSInputCollection100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSInputCollection100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSInputCollection100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSInputCollection100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSInputCollection100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSInputCollection100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IDTSInputCollection100 * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IDTSInput100 **ppIDTSInput);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDTSInputCollection100 * This,
            /* [retval][out] */ IUnknown **ppIUnknownEnum);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDTSInputCollection100 * This,
            /* [retval][out] */ long *plCount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *New )( 
            IDTSInputCollection100 * This,
            /* [retval][out] */ IDTSInput100 **ppIDTSInput);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NewAt )( 
            IDTSInputCollection100 * This,
            /* [in] */ long lIndex,
            /* [retval][out] */ IDTSInput100 **ppIDTSInput);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveObjectByIndex )( 
            IDTSInputCollection100 * This,
            /* [in] */ VARIANT Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveObjectByID )( 
            IDTSInputCollection100 * This,
            /* [in] */ long lID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveAll )( 
            IDTSInputCollection100 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetIndex )( 
            IDTSInputCollection100 * This,
            /* [in] */ long lOldIndex,
            /* [in] */ long lNewIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetObjectByID )( 
            IDTSInputCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ IDTSInput100 **ppIDTSInput);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetObjectIndexByID )( 
            IDTSInputCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindObjectByID )( 
            IDTSInputCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ IDTSInput100 **ppIDTSInput);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindObjectIndexByID )( 
            IDTSInputCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex);
        
        END_INTERFACE
    } IDTSInputCollection100Vtbl;

    interface IDTSInputCollection100
    {
        CONST_VTBL struct IDTSInputCollection100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSInputCollection100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSInputCollection100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSInputCollection100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSInputCollection100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSInputCollection100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSInputCollection100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSInputCollection100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSInputCollection100_get_Item(This,Index,ppIDTSInput)	\
    ( (This)->lpVtbl -> get_Item(This,Index,ppIDTSInput) ) 

#define IDTSInputCollection100_get__NewEnum(This,ppIUnknownEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppIUnknownEnum) ) 

#define IDTSInputCollection100_get_Count(This,plCount)	\
    ( (This)->lpVtbl -> get_Count(This,plCount) ) 

#define IDTSInputCollection100_New(This,ppIDTSInput)	\
    ( (This)->lpVtbl -> New(This,ppIDTSInput) ) 

#define IDTSInputCollection100_NewAt(This,lIndex,ppIDTSInput)	\
    ( (This)->lpVtbl -> NewAt(This,lIndex,ppIDTSInput) ) 

#define IDTSInputCollection100_RemoveObjectByIndex(This,Index)	\
    ( (This)->lpVtbl -> RemoveObjectByIndex(This,Index) ) 

#define IDTSInputCollection100_RemoveObjectByID(This,lID)	\
    ( (This)->lpVtbl -> RemoveObjectByID(This,lID) ) 

#define IDTSInputCollection100_RemoveAll(This)	\
    ( (This)->lpVtbl -> RemoveAll(This) ) 

#define IDTSInputCollection100_SetIndex(This,lOldIndex,lNewIndex)	\
    ( (This)->lpVtbl -> SetIndex(This,lOldIndex,lNewIndex) ) 

#define IDTSInputCollection100_GetObjectByID(This,lID,ppIDTSInput)	\
    ( (This)->lpVtbl -> GetObjectByID(This,lID,ppIDTSInput) ) 

#define IDTSInputCollection100_GetObjectIndexByID(This,lID,plIndex)	\
    ( (This)->lpVtbl -> GetObjectIndexByID(This,lID,plIndex) ) 

#define IDTSInputCollection100_FindObjectByID(This,lID,ppIDTSInput)	\
    ( (This)->lpVtbl -> FindObjectByID(This,lID,ppIDTSInput) ) 

#define IDTSInputCollection100_FindObjectIndexByID(This,lID,plIndex)	\
    ( (This)->lpVtbl -> FindObjectIndexByID(This,lID,plIndex) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSInputCollection100_INTERFACE_DEFINED__ */


#ifndef __IDTSOutput100_INTERFACE_DEFINED__
#define __IDTSOutput100_INTERFACE_DEFINED__

/* interface IDTSOutput100 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDTSOutput100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("48009B5F-4ECF-4855-95B2-69F6E4CF32F1")
    IDTSOutput100 : public IDTSObject100
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ExclusionGroup( 
            /* [retval][out] */ long *plExclusionGroup) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ExclusionGroup( 
            /* [in] */ long lExclusionGroup) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SynchronousInputID( 
            /* [retval][out] */ long *plSynchronousInputID) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SynchronousInputID( 
            /* [in] */ long lSynchronousInputID) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Buffer( 
            /* [retval][out] */ DTP_HBUFFERTYPE *phBufferType) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CustomPropertyCollection( 
            /* [retval][out] */ IDTSCustomPropertyCollection100 **ppIDTSCustomPropertyCollection) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DeleteOutputOnPathDetached( 
            /* [retval][out] */ VARIANT_BOOL *pbDeleteOutputOnPathDetached) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DeleteOutputOnPathDetached( 
            /* [in] */ VARIANT_BOOL bDeleteOutputOnPathDetached) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OutputColumnCollection( 
            /* [retval][out] */ IDTSOutputColumnCollection100 **ppIDTSOutputColumnCollection) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HasSideEffects( 
            /* [retval][out] */ VARIANT_BOOL *pbHasSideEffects) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HasSideEffects( 
            /* [in] */ VARIANT_BOOL bHasSideEffects) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsErrorOut( 
            /* [retval][out] */ VARIANT_BOOL *pbIsErrorOut) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsErrorOut( 
            /* [in] */ VARIANT_BOOL bIsErrorOut) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsAttached( 
            /* [retval][out] */ VARIANT_BOOL *pbIsAttached) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsSorted( 
            /* [retval][out] */ VARIANT_BOOL *pbIsSorted) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsSorted( 
            /* [in] */ VARIANT_BOOL bIsSorted) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorRowDisposition( 
            /* [retval][out] */ enum DTSRowDisposition *peDisposition) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ErrorRowDisposition( 
            /* [in] */ enum DTSRowDisposition eDisposition) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TruncationRowDisposition( 
            /* [retval][out] */ enum DTSRowDisposition *peDisposition) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TruncationRowDisposition( 
            /* [in] */ enum DTSRowDisposition eDisposition) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorOrTruncationOperation( 
            /* [retval][out] */ BSTR *pbstrValue) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ErrorOrTruncationOperation( 
            /* [in] */ BSTR bstrValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalMetadataColumnCollection( 
            /* [retval][out] */ IDTSExternalMetadataColumnCollection100 **ppIDTSExternalMetadataColumnCollection) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Component( 
            /* [retval][out] */ IDTSComponentMetaData100 **ppIDTSComponentMetaData) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Dangling( 
            /* [retval][out] */ VARIANT_BOOL *pbDangling) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Dangling( 
            /* [in] */ VARIANT_BOOL bDangling) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSOutput100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSOutput100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSOutput100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSOutput100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSOutput100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSOutput100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSOutput100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSOutput100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IDTSOutput100 * This,
            /* [retval][out] */ long *pID);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ID )( 
            IDTSOutput100 * This,
            /* [in] */ long ID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IDTSOutput100 * This,
            /* [retval][out] */ BSTR *pbstrDescription);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            IDTSOutput100 * This,
            /* [in] */ BSTR bstrDescription);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IDTSOutput100 * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IDTSOutput100 * This,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectType )( 
            IDTSOutput100 * This,
            /* [retval][out] */ enum DTSObjectType *pType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IdentificationString )( 
            IDTSOutput100 * This,
            /* [retval][out] */ BSTR *pbstrIdentificationString);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExclusionGroup )( 
            IDTSOutput100 * This,
            /* [retval][out] */ long *plExclusionGroup);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExclusionGroup )( 
            IDTSOutput100 * This,
            /* [in] */ long lExclusionGroup);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SynchronousInputID )( 
            IDTSOutput100 * This,
            /* [retval][out] */ long *plSynchronousInputID);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SynchronousInputID )( 
            IDTSOutput100 * This,
            /* [in] */ long lSynchronousInputID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Buffer )( 
            IDTSOutput100 * This,
            /* [retval][out] */ DTP_HBUFFERTYPE *phBufferType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CustomPropertyCollection )( 
            IDTSOutput100 * This,
            /* [retval][out] */ IDTSCustomPropertyCollection100 **ppIDTSCustomPropertyCollection);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeleteOutputOnPathDetached )( 
            IDTSOutput100 * This,
            /* [retval][out] */ VARIANT_BOOL *pbDeleteOutputOnPathDetached);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DeleteOutputOnPathDetached )( 
            IDTSOutput100 * This,
            /* [in] */ VARIANT_BOOL bDeleteOutputOnPathDetached);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OutputColumnCollection )( 
            IDTSOutput100 * This,
            /* [retval][out] */ IDTSOutputColumnCollection100 **ppIDTSOutputColumnCollection);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasSideEffects )( 
            IDTSOutput100 * This,
            /* [retval][out] */ VARIANT_BOOL *pbHasSideEffects);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HasSideEffects )( 
            IDTSOutput100 * This,
            /* [in] */ VARIANT_BOOL bHasSideEffects);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsErrorOut )( 
            IDTSOutput100 * This,
            /* [retval][out] */ VARIANT_BOOL *pbIsErrorOut);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsErrorOut )( 
            IDTSOutput100 * This,
            /* [in] */ VARIANT_BOOL bIsErrorOut);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsAttached )( 
            IDTSOutput100 * This,
            /* [retval][out] */ VARIANT_BOOL *pbIsAttached);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsSorted )( 
            IDTSOutput100 * This,
            /* [retval][out] */ VARIANT_BOOL *pbIsSorted);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsSorted )( 
            IDTSOutput100 * This,
            /* [in] */ VARIANT_BOOL bIsSorted);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ErrorRowDisposition )( 
            IDTSOutput100 * This,
            /* [retval][out] */ enum DTSRowDisposition *peDisposition);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ErrorRowDisposition )( 
            IDTSOutput100 * This,
            /* [in] */ enum DTSRowDisposition eDisposition);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TruncationRowDisposition )( 
            IDTSOutput100 * This,
            /* [retval][out] */ enum DTSRowDisposition *peDisposition);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TruncationRowDisposition )( 
            IDTSOutput100 * This,
            /* [in] */ enum DTSRowDisposition eDisposition);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ErrorOrTruncationOperation )( 
            IDTSOutput100 * This,
            /* [retval][out] */ BSTR *pbstrValue);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ErrorOrTruncationOperation )( 
            IDTSOutput100 * This,
            /* [in] */ BSTR bstrValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalMetadataColumnCollection )( 
            IDTSOutput100 * This,
            /* [retval][out] */ IDTSExternalMetadataColumnCollection100 **ppIDTSExternalMetadataColumnCollection);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Component )( 
            IDTSOutput100 * This,
            /* [retval][out] */ IDTSComponentMetaData100 **ppIDTSComponentMetaData);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Dangling )( 
            IDTSOutput100 * This,
            /* [retval][out] */ VARIANT_BOOL *pbDangling);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Dangling )( 
            IDTSOutput100 * This,
            /* [in] */ VARIANT_BOOL bDangling);
        
        END_INTERFACE
    } IDTSOutput100Vtbl;

    interface IDTSOutput100
    {
        CONST_VTBL struct IDTSOutput100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSOutput100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSOutput100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSOutput100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSOutput100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSOutput100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSOutput100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSOutput100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSOutput100_get_ID(This,pID)	\
    ( (This)->lpVtbl -> get_ID(This,pID) ) 

#define IDTSOutput100_put_ID(This,ID)	\
    ( (This)->lpVtbl -> put_ID(This,ID) ) 

#define IDTSOutput100_get_Description(This,pbstrDescription)	\
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) ) 

#define IDTSOutput100_put_Description(This,bstrDescription)	\
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) ) 

#define IDTSOutput100_get_Name(This,pbstrName)	\
    ( (This)->lpVtbl -> get_Name(This,pbstrName) ) 

#define IDTSOutput100_put_Name(This,bstrName)	\
    ( (This)->lpVtbl -> put_Name(This,bstrName) ) 

#define IDTSOutput100_get_ObjectType(This,pType)	\
    ( (This)->lpVtbl -> get_ObjectType(This,pType) ) 

#define IDTSOutput100_get_IdentificationString(This,pbstrIdentificationString)	\
    ( (This)->lpVtbl -> get_IdentificationString(This,pbstrIdentificationString) ) 


#define IDTSOutput100_get_ExclusionGroup(This,plExclusionGroup)	\
    ( (This)->lpVtbl -> get_ExclusionGroup(This,plExclusionGroup) ) 

#define IDTSOutput100_put_ExclusionGroup(This,lExclusionGroup)	\
    ( (This)->lpVtbl -> put_ExclusionGroup(This,lExclusionGroup) ) 

#define IDTSOutput100_get_SynchronousInputID(This,plSynchronousInputID)	\
    ( (This)->lpVtbl -> get_SynchronousInputID(This,plSynchronousInputID) ) 

#define IDTSOutput100_put_SynchronousInputID(This,lSynchronousInputID)	\
    ( (This)->lpVtbl -> put_SynchronousInputID(This,lSynchronousInputID) ) 

#define IDTSOutput100_get_Buffer(This,phBufferType)	\
    ( (This)->lpVtbl -> get_Buffer(This,phBufferType) ) 

#define IDTSOutput100_get_CustomPropertyCollection(This,ppIDTSCustomPropertyCollection)	\
    ( (This)->lpVtbl -> get_CustomPropertyCollection(This,ppIDTSCustomPropertyCollection) ) 

#define IDTSOutput100_get_DeleteOutputOnPathDetached(This,pbDeleteOutputOnPathDetached)	\
    ( (This)->lpVtbl -> get_DeleteOutputOnPathDetached(This,pbDeleteOutputOnPathDetached) ) 

#define IDTSOutput100_put_DeleteOutputOnPathDetached(This,bDeleteOutputOnPathDetached)	\
    ( (This)->lpVtbl -> put_DeleteOutputOnPathDetached(This,bDeleteOutputOnPathDetached) ) 

#define IDTSOutput100_get_OutputColumnCollection(This,ppIDTSOutputColumnCollection)	\
    ( (This)->lpVtbl -> get_OutputColumnCollection(This,ppIDTSOutputColumnCollection) ) 

#define IDTSOutput100_get_HasSideEffects(This,pbHasSideEffects)	\
    ( (This)->lpVtbl -> get_HasSideEffects(This,pbHasSideEffects) ) 

#define IDTSOutput100_put_HasSideEffects(This,bHasSideEffects)	\
    ( (This)->lpVtbl -> put_HasSideEffects(This,bHasSideEffects) ) 

#define IDTSOutput100_get_IsErrorOut(This,pbIsErrorOut)	\
    ( (This)->lpVtbl -> get_IsErrorOut(This,pbIsErrorOut) ) 

#define IDTSOutput100_put_IsErrorOut(This,bIsErrorOut)	\
    ( (This)->lpVtbl -> put_IsErrorOut(This,bIsErrorOut) ) 

#define IDTSOutput100_get_IsAttached(This,pbIsAttached)	\
    ( (This)->lpVtbl -> get_IsAttached(This,pbIsAttached) ) 

#define IDTSOutput100_get_IsSorted(This,pbIsSorted)	\
    ( (This)->lpVtbl -> get_IsSorted(This,pbIsSorted) ) 

#define IDTSOutput100_put_IsSorted(This,bIsSorted)	\
    ( (This)->lpVtbl -> put_IsSorted(This,bIsSorted) ) 

#define IDTSOutput100_get_ErrorRowDisposition(This,peDisposition)	\
    ( (This)->lpVtbl -> get_ErrorRowDisposition(This,peDisposition) ) 

#define IDTSOutput100_put_ErrorRowDisposition(This,eDisposition)	\
    ( (This)->lpVtbl -> put_ErrorRowDisposition(This,eDisposition) ) 

#define IDTSOutput100_get_TruncationRowDisposition(This,peDisposition)	\
    ( (This)->lpVtbl -> get_TruncationRowDisposition(This,peDisposition) ) 

#define IDTSOutput100_put_TruncationRowDisposition(This,eDisposition)	\
    ( (This)->lpVtbl -> put_TruncationRowDisposition(This,eDisposition) ) 

#define IDTSOutput100_get_ErrorOrTruncationOperation(This,pbstrValue)	\
    ( (This)->lpVtbl -> get_ErrorOrTruncationOperation(This,pbstrValue) ) 

#define IDTSOutput100_put_ErrorOrTruncationOperation(This,bstrValue)	\
    ( (This)->lpVtbl -> put_ErrorOrTruncationOperation(This,bstrValue) ) 

#define IDTSOutput100_get_ExternalMetadataColumnCollection(This,ppIDTSExternalMetadataColumnCollection)	\
    ( (This)->lpVtbl -> get_ExternalMetadataColumnCollection(This,ppIDTSExternalMetadataColumnCollection) ) 

#define IDTSOutput100_get_Component(This,ppIDTSComponentMetaData)	\
    ( (This)->lpVtbl -> get_Component(This,ppIDTSComponentMetaData) ) 

#define IDTSOutput100_get_Dangling(This,pbDangling)	\
    ( (This)->lpVtbl -> get_Dangling(This,pbDangling) ) 

#define IDTSOutput100_put_Dangling(This,bDangling)	\
    ( (This)->lpVtbl -> put_Dangling(This,bDangling) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSOutput100_INTERFACE_DEFINED__ */


#ifndef __IDTSOutputCollection100_INTERFACE_DEFINED__
#define __IDTSOutputCollection100_INTERFACE_DEFINED__

/* interface IDTSOutputCollection100 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDTSOutputCollection100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("68BCA3B7-406E-4261-AB30-3DB1E090C760")
    IDTSOutputCollection100 : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IDTSOutput100 **ppIDTSOutput) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppIUnknownEnum) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *plCount) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE New( 
            /* [retval][out] */ IDTSOutput100 **ppIDTSOutput) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NewAt( 
            /* [in] */ long lIndex,
            /* [retval][out] */ IDTSOutput100 **ppIDTSOutput) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveObjectByIndex( 
            /* [in] */ VARIANT Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveObjectByID( 
            /* [in] */ long lID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveAll( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetIndex( 
            /* [in] */ long lOldIndex,
            /* [in] */ long lNewIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetObjectByID( 
            /* [in] */ long lID,
            /* [retval][out] */ IDTSOutput100 **ppIDTSOutput) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetObjectIndexByID( 
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindObjectByID( 
            /* [in] */ long lID,
            /* [retval][out] */ IDTSOutput100 **ppIDTSOutput) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindObjectIndexByID( 
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSOutputCollection100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSOutputCollection100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSOutputCollection100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSOutputCollection100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSOutputCollection100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSOutputCollection100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSOutputCollection100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSOutputCollection100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IDTSOutputCollection100 * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IDTSOutput100 **ppIDTSOutput);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDTSOutputCollection100 * This,
            /* [retval][out] */ IUnknown **ppIUnknownEnum);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDTSOutputCollection100 * This,
            /* [retval][out] */ long *plCount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *New )( 
            IDTSOutputCollection100 * This,
            /* [retval][out] */ IDTSOutput100 **ppIDTSOutput);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NewAt )( 
            IDTSOutputCollection100 * This,
            /* [in] */ long lIndex,
            /* [retval][out] */ IDTSOutput100 **ppIDTSOutput);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveObjectByIndex )( 
            IDTSOutputCollection100 * This,
            /* [in] */ VARIANT Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveObjectByID )( 
            IDTSOutputCollection100 * This,
            /* [in] */ long lID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveAll )( 
            IDTSOutputCollection100 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetIndex )( 
            IDTSOutputCollection100 * This,
            /* [in] */ long lOldIndex,
            /* [in] */ long lNewIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetObjectByID )( 
            IDTSOutputCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ IDTSOutput100 **ppIDTSOutput);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetObjectIndexByID )( 
            IDTSOutputCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindObjectByID )( 
            IDTSOutputCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ IDTSOutput100 **ppIDTSOutput);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindObjectIndexByID )( 
            IDTSOutputCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex);
        
        END_INTERFACE
    } IDTSOutputCollection100Vtbl;

    interface IDTSOutputCollection100
    {
        CONST_VTBL struct IDTSOutputCollection100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSOutputCollection100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSOutputCollection100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSOutputCollection100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSOutputCollection100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSOutputCollection100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSOutputCollection100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSOutputCollection100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSOutputCollection100_get_Item(This,Index,ppIDTSOutput)	\
    ( (This)->lpVtbl -> get_Item(This,Index,ppIDTSOutput) ) 

#define IDTSOutputCollection100_get__NewEnum(This,ppIUnknownEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppIUnknownEnum) ) 

#define IDTSOutputCollection100_get_Count(This,plCount)	\
    ( (This)->lpVtbl -> get_Count(This,plCount) ) 

#define IDTSOutputCollection100_New(This,ppIDTSOutput)	\
    ( (This)->lpVtbl -> New(This,ppIDTSOutput) ) 

#define IDTSOutputCollection100_NewAt(This,lIndex,ppIDTSOutput)	\
    ( (This)->lpVtbl -> NewAt(This,lIndex,ppIDTSOutput) ) 

#define IDTSOutputCollection100_RemoveObjectByIndex(This,Index)	\
    ( (This)->lpVtbl -> RemoveObjectByIndex(This,Index) ) 

#define IDTSOutputCollection100_RemoveObjectByID(This,lID)	\
    ( (This)->lpVtbl -> RemoveObjectByID(This,lID) ) 

#define IDTSOutputCollection100_RemoveAll(This)	\
    ( (This)->lpVtbl -> RemoveAll(This) ) 

#define IDTSOutputCollection100_SetIndex(This,lOldIndex,lNewIndex)	\
    ( (This)->lpVtbl -> SetIndex(This,lOldIndex,lNewIndex) ) 

#define IDTSOutputCollection100_GetObjectByID(This,lID,ppIDTSOutput)	\
    ( (This)->lpVtbl -> GetObjectByID(This,lID,ppIDTSOutput) ) 

#define IDTSOutputCollection100_GetObjectIndexByID(This,lID,plIndex)	\
    ( (This)->lpVtbl -> GetObjectIndexByID(This,lID,plIndex) ) 

#define IDTSOutputCollection100_FindObjectByID(This,lID,ppIDTSOutput)	\
    ( (This)->lpVtbl -> FindObjectByID(This,lID,ppIDTSOutput) ) 

#define IDTSOutputCollection100_FindObjectIndexByID(This,lID,plIndex)	\
    ( (This)->lpVtbl -> FindObjectIndexByID(This,lID,plIndex) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSOutputCollection100_INTERFACE_DEFINED__ */


#ifndef __IDTSRuntimeConnection100_INTERFACE_DEFINED__
#define __IDTSRuntimeConnection100_INTERFACE_DEFINED__

/* interface IDTSRuntimeConnection100 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDTSRuntimeConnection100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5F0422E1-9AF0-4A92-8874-E54A065456A9")
    IDTSRuntimeConnection100 : public IDTSObject100
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ConnectionManagerID( 
            /* [retval][out] */ BSTR *pbstrConnectionManagerID) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ConnectionManagerID( 
            /* [in] */ BSTR bstrConnectionManagerID) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ConnectionManager( 
            /* [retval][out] */ /* external definition not present */ IDTSConnectionManager100 **ppIDTSConnectionManager) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ConnectionManager( 
            /* [in] */ /* external definition not present */ IDTSConnectionManager100 *pIDTSConnectionManager) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReleaseConnectionManager( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSRuntimeConnection100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSRuntimeConnection100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSRuntimeConnection100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSRuntimeConnection100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSRuntimeConnection100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSRuntimeConnection100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSRuntimeConnection100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSRuntimeConnection100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IDTSRuntimeConnection100 * This,
            /* [retval][out] */ long *pID);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ID )( 
            IDTSRuntimeConnection100 * This,
            /* [in] */ long ID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IDTSRuntimeConnection100 * This,
            /* [retval][out] */ BSTR *pbstrDescription);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            IDTSRuntimeConnection100 * This,
            /* [in] */ BSTR bstrDescription);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IDTSRuntimeConnection100 * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IDTSRuntimeConnection100 * This,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectType )( 
            IDTSRuntimeConnection100 * This,
            /* [retval][out] */ enum DTSObjectType *pType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IdentificationString )( 
            IDTSRuntimeConnection100 * This,
            /* [retval][out] */ BSTR *pbstrIdentificationString);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionManagerID )( 
            IDTSRuntimeConnection100 * This,
            /* [retval][out] */ BSTR *pbstrConnectionManagerID);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionManagerID )( 
            IDTSRuntimeConnection100 * This,
            /* [in] */ BSTR bstrConnectionManagerID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionManager )( 
            IDTSRuntimeConnection100 * This,
            /* [retval][out] */ /* external definition not present */ IDTSConnectionManager100 **ppIDTSConnectionManager);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionManager )( 
            IDTSRuntimeConnection100 * This,
            /* [in] */ /* external definition not present */ IDTSConnectionManager100 *pIDTSConnectionManager);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReleaseConnectionManager )( 
            IDTSRuntimeConnection100 * This);
        
        END_INTERFACE
    } IDTSRuntimeConnection100Vtbl;

    interface IDTSRuntimeConnection100
    {
        CONST_VTBL struct IDTSRuntimeConnection100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSRuntimeConnection100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSRuntimeConnection100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSRuntimeConnection100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSRuntimeConnection100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSRuntimeConnection100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSRuntimeConnection100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSRuntimeConnection100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSRuntimeConnection100_get_ID(This,pID)	\
    ( (This)->lpVtbl -> get_ID(This,pID) ) 

#define IDTSRuntimeConnection100_put_ID(This,ID)	\
    ( (This)->lpVtbl -> put_ID(This,ID) ) 

#define IDTSRuntimeConnection100_get_Description(This,pbstrDescription)	\
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) ) 

#define IDTSRuntimeConnection100_put_Description(This,bstrDescription)	\
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) ) 

#define IDTSRuntimeConnection100_get_Name(This,pbstrName)	\
    ( (This)->lpVtbl -> get_Name(This,pbstrName) ) 

#define IDTSRuntimeConnection100_put_Name(This,bstrName)	\
    ( (This)->lpVtbl -> put_Name(This,bstrName) ) 

#define IDTSRuntimeConnection100_get_ObjectType(This,pType)	\
    ( (This)->lpVtbl -> get_ObjectType(This,pType) ) 

#define IDTSRuntimeConnection100_get_IdentificationString(This,pbstrIdentificationString)	\
    ( (This)->lpVtbl -> get_IdentificationString(This,pbstrIdentificationString) ) 


#define IDTSRuntimeConnection100_get_ConnectionManagerID(This,pbstrConnectionManagerID)	\
    ( (This)->lpVtbl -> get_ConnectionManagerID(This,pbstrConnectionManagerID) ) 

#define IDTSRuntimeConnection100_put_ConnectionManagerID(This,bstrConnectionManagerID)	\
    ( (This)->lpVtbl -> put_ConnectionManagerID(This,bstrConnectionManagerID) ) 

#define IDTSRuntimeConnection100_get_ConnectionManager(This,ppIDTSConnectionManager)	\
    ( (This)->lpVtbl -> get_ConnectionManager(This,ppIDTSConnectionManager) ) 

#define IDTSRuntimeConnection100_put_ConnectionManager(This,pIDTSConnectionManager)	\
    ( (This)->lpVtbl -> put_ConnectionManager(This,pIDTSConnectionManager) ) 

#define IDTSRuntimeConnection100_ReleaseConnectionManager(This)	\
    ( (This)->lpVtbl -> ReleaseConnectionManager(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSRuntimeConnection100_INTERFACE_DEFINED__ */


#ifndef __IDTSRuntimeConnectionCollection100_INTERFACE_DEFINED__
#define __IDTSRuntimeConnectionCollection100_INTERFACE_DEFINED__

/* interface IDTSRuntimeConnectionCollection100 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDTSRuntimeConnectionCollection100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("01459E9F-487B-49C9-A049-6C6799845EE2")
    IDTSRuntimeConnectionCollection100 : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IDTSRuntimeConnection100 **ppIDTSRuntimeConnection) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppIUnknownEnum) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *plCount) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE New( 
            /* [retval][out] */ IDTSRuntimeConnection100 **ppIDTSRuntimeConnection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NewAt( 
            /* [in] */ long lIndex,
            /* [retval][out] */ IDTSRuntimeConnection100 **ppIDTSRuntimeConnection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveObjectByIndex( 
            /* [in] */ VARIANT Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveObjectByID( 
            /* [in] */ long lID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveAll( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetIndex( 
            /* [in] */ long lOldIndex,
            /* [in] */ long lNewIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetObjectByID( 
            /* [in] */ long lID,
            /* [retval][out] */ IDTSRuntimeConnection100 **ppIDTSRuntimeConnection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetObjectIndexByID( 
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindObjectByID( 
            /* [in] */ long lID,
            /* [retval][out] */ IDTSRuntimeConnection100 **ppIDTSRuntimeConnection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindObjectIndexByID( 
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetRuntimeConnectionByName( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IDTSRuntimeConnection100 **ppIDTSRuntimeConnection) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSRuntimeConnectionCollection100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSRuntimeConnectionCollection100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSRuntimeConnectionCollection100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSRuntimeConnectionCollection100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSRuntimeConnectionCollection100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSRuntimeConnectionCollection100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSRuntimeConnectionCollection100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSRuntimeConnectionCollection100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IDTSRuntimeConnectionCollection100 * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IDTSRuntimeConnection100 **ppIDTSRuntimeConnection);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDTSRuntimeConnectionCollection100 * This,
            /* [retval][out] */ IUnknown **ppIUnknownEnum);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDTSRuntimeConnectionCollection100 * This,
            /* [retval][out] */ long *plCount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *New )( 
            IDTSRuntimeConnectionCollection100 * This,
            /* [retval][out] */ IDTSRuntimeConnection100 **ppIDTSRuntimeConnection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NewAt )( 
            IDTSRuntimeConnectionCollection100 * This,
            /* [in] */ long lIndex,
            /* [retval][out] */ IDTSRuntimeConnection100 **ppIDTSRuntimeConnection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveObjectByIndex )( 
            IDTSRuntimeConnectionCollection100 * This,
            /* [in] */ VARIANT Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveObjectByID )( 
            IDTSRuntimeConnectionCollection100 * This,
            /* [in] */ long lID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveAll )( 
            IDTSRuntimeConnectionCollection100 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetIndex )( 
            IDTSRuntimeConnectionCollection100 * This,
            /* [in] */ long lOldIndex,
            /* [in] */ long lNewIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetObjectByID )( 
            IDTSRuntimeConnectionCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ IDTSRuntimeConnection100 **ppIDTSRuntimeConnection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetObjectIndexByID )( 
            IDTSRuntimeConnectionCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindObjectByID )( 
            IDTSRuntimeConnectionCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ IDTSRuntimeConnection100 **ppIDTSRuntimeConnection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindObjectIndexByID )( 
            IDTSRuntimeConnectionCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRuntimeConnectionByName )( 
            IDTSRuntimeConnectionCollection100 * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IDTSRuntimeConnection100 **ppIDTSRuntimeConnection);
        
        END_INTERFACE
    } IDTSRuntimeConnectionCollection100Vtbl;

    interface IDTSRuntimeConnectionCollection100
    {
        CONST_VTBL struct IDTSRuntimeConnectionCollection100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSRuntimeConnectionCollection100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSRuntimeConnectionCollection100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSRuntimeConnectionCollection100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSRuntimeConnectionCollection100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSRuntimeConnectionCollection100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSRuntimeConnectionCollection100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSRuntimeConnectionCollection100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSRuntimeConnectionCollection100_get_Item(This,Index,ppIDTSRuntimeConnection)	\
    ( (This)->lpVtbl -> get_Item(This,Index,ppIDTSRuntimeConnection) ) 

#define IDTSRuntimeConnectionCollection100_get__NewEnum(This,ppIUnknownEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppIUnknownEnum) ) 

#define IDTSRuntimeConnectionCollection100_get_Count(This,plCount)	\
    ( (This)->lpVtbl -> get_Count(This,plCount) ) 

#define IDTSRuntimeConnectionCollection100_New(This,ppIDTSRuntimeConnection)	\
    ( (This)->lpVtbl -> New(This,ppIDTSRuntimeConnection) ) 

#define IDTSRuntimeConnectionCollection100_NewAt(This,lIndex,ppIDTSRuntimeConnection)	\
    ( (This)->lpVtbl -> NewAt(This,lIndex,ppIDTSRuntimeConnection) ) 

#define IDTSRuntimeConnectionCollection100_RemoveObjectByIndex(This,Index)	\
    ( (This)->lpVtbl -> RemoveObjectByIndex(This,Index) ) 

#define IDTSRuntimeConnectionCollection100_RemoveObjectByID(This,lID)	\
    ( (This)->lpVtbl -> RemoveObjectByID(This,lID) ) 

#define IDTSRuntimeConnectionCollection100_RemoveAll(This)	\
    ( (This)->lpVtbl -> RemoveAll(This) ) 

#define IDTSRuntimeConnectionCollection100_SetIndex(This,lOldIndex,lNewIndex)	\
    ( (This)->lpVtbl -> SetIndex(This,lOldIndex,lNewIndex) ) 

#define IDTSRuntimeConnectionCollection100_GetObjectByID(This,lID,ppIDTSRuntimeConnection)	\
    ( (This)->lpVtbl -> GetObjectByID(This,lID,ppIDTSRuntimeConnection) ) 

#define IDTSRuntimeConnectionCollection100_GetObjectIndexByID(This,lID,plIndex)	\
    ( (This)->lpVtbl -> GetObjectIndexByID(This,lID,plIndex) ) 

#define IDTSRuntimeConnectionCollection100_FindObjectByID(This,lID,ppIDTSRuntimeConnection)	\
    ( (This)->lpVtbl -> FindObjectByID(This,lID,ppIDTSRuntimeConnection) ) 

#define IDTSRuntimeConnectionCollection100_FindObjectIndexByID(This,lID,plIndex)	\
    ( (This)->lpVtbl -> FindObjectIndexByID(This,lID,plIndex) ) 

#define IDTSRuntimeConnectionCollection100_GetRuntimeConnectionByName(This,bstrName,ppIDTSRuntimeConnection)	\
    ( (This)->lpVtbl -> GetRuntimeConnectionByName(This,bstrName,ppIDTSRuntimeConnection) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSRuntimeConnectionCollection100_INTERFACE_DEFINED__ */


#ifndef __IDTSComponentMetaData100_INTERFACE_DEFINED__
#define __IDTSComponentMetaData100_INTERFACE_DEFINED__

/* interface IDTSComponentMetaData100 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDTSComponentMetaData100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BE8C48A3-155B-4810-BA5C-BDF68A659E9E")
    IDTSComponentMetaData100 : public IDTSObject100
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ComponentClassID( 
            /* [retval][out] */ BSTR *bstrComponentClassID) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ComponentClassID( 
            /* [in] */ BSTR bstrComponentClassID) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_InputCollection( 
            /* [retval][out] */ IDTSInputCollection100 **ppIDTSInputCollection) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OutputCollection( 
            /* [retval][out] */ IDTSOutputCollection100 **ppIDTSOutputCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Instantiate( 
            /* [retval][out] */ IDTSDesigntimeComponent100 **ppIDTSDesigntimeComponent) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CustomPropertyCollection( 
            /* [retval][out] */ IDTSCustomPropertyCollection100 **ppIDTSCustomPropertyCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PostLogMessage( 
            /* [in] */ BSTR bstrEventName,
            /* [in] */ BSTR bstrSourceName,
            /* [in] */ BSTR bstrMessageText,
            /* [in] */ DATE dateStartTime,
            /* [in] */ DATE dateEndTime,
            /* [in] */ long lDataCode,
            /* [in] */ SAFEARRAY * *psaDataBytes) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RuntimeConnectionCollection( 
            /* [retval][out] */ IDTSRuntimeConnectionCollection100 **ppIDTSRuntimeConnectionCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveInvalidInputColumns( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            /* [in] */ long hrError,
            /* [retval][out] */ BSTR *pbstrDescription) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AreInputColumnsValid( 
            /* [retval][out] */ VARIANT_BOOL *pbAreInputColumnsValid) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LocaleID( 
            /* [retval][out] */ long *plLocaleID) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LocaleID( 
            /* [in] */ long lLocaleID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetComponentView( 
            /* [retval][out] */ IDTSComponentView100 **ppIDTSComponentView) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Validate( 
            /* [retval][out] */ enum DTSValidationStatus *peValidationStatus) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IncrementPipelinePerfCounter( 
            DWORD dwCounterID,
            DWORD dwDifference) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsDefaultLocale( 
            /* [retval][out] */ VARIANT_BOOL *pbIsDefault) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UsesDispositions( 
            /* [retval][out] */ VARIANT_BOOL *pbUsesDispositions) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UsesDispositions( 
            /* [in] */ VARIANT_BOOL bUsesDispositions) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ValidateExternalMetadata( 
            /* [retval][out] */ VARIANT_BOOL *pbValidate) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ValidateExternalMetadata( 
            /* [in] */ VARIANT_BOOL bValidate) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FireWarning( 
            /* [in] */ long WarningCode,
            /* [in] */ BSTR SubComponent,
            /* [in] */ BSTR Description,
            /* [in] */ BSTR HelpFile,
            /* [in] */ long HelpContext) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FireInformation( 
            /* [in] */ long InformationCode,
            /* [in] */ BSTR SubComponent,
            /* [in] */ BSTR Description,
            /* [in] */ BSTR HelpFile,
            /* [in] */ long HelpContext,
            /* [out][in] */ VARIANT_BOOL *pbFireAgain) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FireError( 
            /* [in] */ long ErrorCode,
            /* [in] */ BSTR SubComponent,
            /* [in] */ BSTR Description,
            /* [in] */ BSTR HelpFile,
            /* [in] */ long HelpContext,
            /* [out] */ VARIANT_BOOL *pbCancel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FireCustomEvent( 
            /* [in] */ BSTR EventName,
            /* [in] */ BSTR EventText,
            /* [in] */ SAFEARRAY * *ppsaArguments,
            /* [in] */ BSTR SubComponent,
            /* [out][in] */ VARIANT_BOOL *pbFireAgain) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ long *plVersion) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Version( 
            /* [in] */ long lVersion) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PipelineVersion( 
            /* [retval][out] */ long *plVersion) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PipelineVersion( 
            /* [in] */ long lVersion) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ContactInfo( 
            /* [retval][out] */ BSTR *pbstrContactInfo) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ContactInfo( 
            /* [in] */ BSTR bstrContactInfo) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FireProgress( 
            /* [in] */ BSTR bstrProgressDescription,
            /* [in] */ long lPercentComplete,
            /* [in] */ long lProgressCountLow,
            /* [in] */ long lProgressCountHigh,
            /* [in] */ BSTR bstrSubComponent,
            /* [out][in] */ VARIANT_BOOL *pbFireAgain) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSComponentMetaData100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSComponentMetaData100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSComponentMetaData100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSComponentMetaData100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSComponentMetaData100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSComponentMetaData100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSComponentMetaData100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSComponentMetaData100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IDTSComponentMetaData100 * This,
            /* [retval][out] */ long *pID);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ID )( 
            IDTSComponentMetaData100 * This,
            /* [in] */ long ID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IDTSComponentMetaData100 * This,
            /* [retval][out] */ BSTR *pbstrDescription);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            IDTSComponentMetaData100 * This,
            /* [in] */ BSTR bstrDescription);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IDTSComponentMetaData100 * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IDTSComponentMetaData100 * This,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectType )( 
            IDTSComponentMetaData100 * This,
            /* [retval][out] */ enum DTSObjectType *pType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IdentificationString )( 
            IDTSComponentMetaData100 * This,
            /* [retval][out] */ BSTR *pbstrIdentificationString);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ComponentClassID )( 
            IDTSComponentMetaData100 * This,
            /* [retval][out] */ BSTR *bstrComponentClassID);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ComponentClassID )( 
            IDTSComponentMetaData100 * This,
            /* [in] */ BSTR bstrComponentClassID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InputCollection )( 
            IDTSComponentMetaData100 * This,
            /* [retval][out] */ IDTSInputCollection100 **ppIDTSInputCollection);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OutputCollection )( 
            IDTSComponentMetaData100 * This,
            /* [retval][out] */ IDTSOutputCollection100 **ppIDTSOutputCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Instantiate )( 
            IDTSComponentMetaData100 * This,
            /* [retval][out] */ IDTSDesigntimeComponent100 **ppIDTSDesigntimeComponent);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CustomPropertyCollection )( 
            IDTSComponentMetaData100 * This,
            /* [retval][out] */ IDTSCustomPropertyCollection100 **ppIDTSCustomPropertyCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PostLogMessage )( 
            IDTSComponentMetaData100 * This,
            /* [in] */ BSTR bstrEventName,
            /* [in] */ BSTR bstrSourceName,
            /* [in] */ BSTR bstrMessageText,
            /* [in] */ DATE dateStartTime,
            /* [in] */ DATE dateEndTime,
            /* [in] */ long lDataCode,
            /* [in] */ SAFEARRAY * *psaDataBytes);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RuntimeConnectionCollection )( 
            IDTSComponentMetaData100 * This,
            /* [retval][out] */ IDTSRuntimeConnectionCollection100 **ppIDTSRuntimeConnectionCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveInvalidInputColumns )( 
            IDTSComponentMetaData100 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IDTSComponentMetaData100 * This,
            /* [in] */ long hrError,
            /* [retval][out] */ BSTR *pbstrDescription);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AreInputColumnsValid )( 
            IDTSComponentMetaData100 * This,
            /* [retval][out] */ VARIANT_BOOL *pbAreInputColumnsValid);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LocaleID )( 
            IDTSComponentMetaData100 * This,
            /* [retval][out] */ long *plLocaleID);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LocaleID )( 
            IDTSComponentMetaData100 * This,
            /* [in] */ long lLocaleID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetComponentView )( 
            IDTSComponentMetaData100 * This,
            /* [retval][out] */ IDTSComponentView100 **ppIDTSComponentView);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Validate )( 
            IDTSComponentMetaData100 * This,
            /* [retval][out] */ enum DTSValidationStatus *peValidationStatus);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IncrementPipelinePerfCounter )( 
            IDTSComponentMetaData100 * This,
            DWORD dwCounterID,
            DWORD dwDifference);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsDefaultLocale )( 
            IDTSComponentMetaData100 * This,
            /* [retval][out] */ VARIANT_BOOL *pbIsDefault);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UsesDispositions )( 
            IDTSComponentMetaData100 * This,
            /* [retval][out] */ VARIANT_BOOL *pbUsesDispositions);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UsesDispositions )( 
            IDTSComponentMetaData100 * This,
            /* [in] */ VARIANT_BOOL bUsesDispositions);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ValidateExternalMetadata )( 
            IDTSComponentMetaData100 * This,
            /* [retval][out] */ VARIANT_BOOL *pbValidate);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ValidateExternalMetadata )( 
            IDTSComponentMetaData100 * This,
            /* [in] */ VARIANT_BOOL bValidate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FireWarning )( 
            IDTSComponentMetaData100 * This,
            /* [in] */ long WarningCode,
            /* [in] */ BSTR SubComponent,
            /* [in] */ BSTR Description,
            /* [in] */ BSTR HelpFile,
            /* [in] */ long HelpContext);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FireInformation )( 
            IDTSComponentMetaData100 * This,
            /* [in] */ long InformationCode,
            /* [in] */ BSTR SubComponent,
            /* [in] */ BSTR Description,
            /* [in] */ BSTR HelpFile,
            /* [in] */ long HelpContext,
            /* [out][in] */ VARIANT_BOOL *pbFireAgain);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FireError )( 
            IDTSComponentMetaData100 * This,
            /* [in] */ long ErrorCode,
            /* [in] */ BSTR SubComponent,
            /* [in] */ BSTR Description,
            /* [in] */ BSTR HelpFile,
            /* [in] */ long HelpContext,
            /* [out] */ VARIANT_BOOL *pbCancel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FireCustomEvent )( 
            IDTSComponentMetaData100 * This,
            /* [in] */ BSTR EventName,
            /* [in] */ BSTR EventText,
            /* [in] */ SAFEARRAY * *ppsaArguments,
            /* [in] */ BSTR SubComponent,
            /* [out][in] */ VARIANT_BOOL *pbFireAgain);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IDTSComponentMetaData100 * This,
            /* [retval][out] */ long *plVersion);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Version )( 
            IDTSComponentMetaData100 * This,
            /* [in] */ long lVersion);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PipelineVersion )( 
            IDTSComponentMetaData100 * This,
            /* [retval][out] */ long *plVersion);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PipelineVersion )( 
            IDTSComponentMetaData100 * This,
            /* [in] */ long lVersion);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContactInfo )( 
            IDTSComponentMetaData100 * This,
            /* [retval][out] */ BSTR *pbstrContactInfo);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ContactInfo )( 
            IDTSComponentMetaData100 * This,
            /* [in] */ BSTR bstrContactInfo);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FireProgress )( 
            IDTSComponentMetaData100 * This,
            /* [in] */ BSTR bstrProgressDescription,
            /* [in] */ long lPercentComplete,
            /* [in] */ long lProgressCountLow,
            /* [in] */ long lProgressCountHigh,
            /* [in] */ BSTR bstrSubComponent,
            /* [out][in] */ VARIANT_BOOL *pbFireAgain);
        
        END_INTERFACE
    } IDTSComponentMetaData100Vtbl;

    interface IDTSComponentMetaData100
    {
        CONST_VTBL struct IDTSComponentMetaData100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSComponentMetaData100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSComponentMetaData100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSComponentMetaData100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSComponentMetaData100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSComponentMetaData100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSComponentMetaData100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSComponentMetaData100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSComponentMetaData100_get_ID(This,pID)	\
    ( (This)->lpVtbl -> get_ID(This,pID) ) 

#define IDTSComponentMetaData100_put_ID(This,ID)	\
    ( (This)->lpVtbl -> put_ID(This,ID) ) 

#define IDTSComponentMetaData100_get_Description(This,pbstrDescription)	\
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) ) 

#define IDTSComponentMetaData100_put_Description(This,bstrDescription)	\
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) ) 

#define IDTSComponentMetaData100_get_Name(This,pbstrName)	\
    ( (This)->lpVtbl -> get_Name(This,pbstrName) ) 

#define IDTSComponentMetaData100_put_Name(This,bstrName)	\
    ( (This)->lpVtbl -> put_Name(This,bstrName) ) 

#define IDTSComponentMetaData100_get_ObjectType(This,pType)	\
    ( (This)->lpVtbl -> get_ObjectType(This,pType) ) 

#define IDTSComponentMetaData100_get_IdentificationString(This,pbstrIdentificationString)	\
    ( (This)->lpVtbl -> get_IdentificationString(This,pbstrIdentificationString) ) 


#define IDTSComponentMetaData100_get_ComponentClassID(This,bstrComponentClassID)	\
    ( (This)->lpVtbl -> get_ComponentClassID(This,bstrComponentClassID) ) 

#define IDTSComponentMetaData100_put_ComponentClassID(This,bstrComponentClassID)	\
    ( (This)->lpVtbl -> put_ComponentClassID(This,bstrComponentClassID) ) 

#define IDTSComponentMetaData100_get_InputCollection(This,ppIDTSInputCollection)	\
    ( (This)->lpVtbl -> get_InputCollection(This,ppIDTSInputCollection) ) 

#define IDTSComponentMetaData100_get_OutputCollection(This,ppIDTSOutputCollection)	\
    ( (This)->lpVtbl -> get_OutputCollection(This,ppIDTSOutputCollection) ) 

#define IDTSComponentMetaData100_Instantiate(This,ppIDTSDesigntimeComponent)	\
    ( (This)->lpVtbl -> Instantiate(This,ppIDTSDesigntimeComponent) ) 

#define IDTSComponentMetaData100_get_CustomPropertyCollection(This,ppIDTSCustomPropertyCollection)	\
    ( (This)->lpVtbl -> get_CustomPropertyCollection(This,ppIDTSCustomPropertyCollection) ) 

#define IDTSComponentMetaData100_PostLogMessage(This,bstrEventName,bstrSourceName,bstrMessageText,dateStartTime,dateEndTime,lDataCode,psaDataBytes)	\
    ( (This)->lpVtbl -> PostLogMessage(This,bstrEventName,bstrSourceName,bstrMessageText,dateStartTime,dateEndTime,lDataCode,psaDataBytes) ) 

#define IDTSComponentMetaData100_get_RuntimeConnectionCollection(This,ppIDTSRuntimeConnectionCollection)	\
    ( (This)->lpVtbl -> get_RuntimeConnectionCollection(This,ppIDTSRuntimeConnectionCollection) ) 

#define IDTSComponentMetaData100_RemoveInvalidInputColumns(This)	\
    ( (This)->lpVtbl -> RemoveInvalidInputColumns(This) ) 

#define IDTSComponentMetaData100_GetErrorDescription(This,hrError,pbstrDescription)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,hrError,pbstrDescription) ) 

#define IDTSComponentMetaData100_get_AreInputColumnsValid(This,pbAreInputColumnsValid)	\
    ( (This)->lpVtbl -> get_AreInputColumnsValid(This,pbAreInputColumnsValid) ) 

#define IDTSComponentMetaData100_get_LocaleID(This,plLocaleID)	\
    ( (This)->lpVtbl -> get_LocaleID(This,plLocaleID) ) 

#define IDTSComponentMetaData100_put_LocaleID(This,lLocaleID)	\
    ( (This)->lpVtbl -> put_LocaleID(This,lLocaleID) ) 

#define IDTSComponentMetaData100_GetComponentView(This,ppIDTSComponentView)	\
    ( (This)->lpVtbl -> GetComponentView(This,ppIDTSComponentView) ) 

#define IDTSComponentMetaData100_Validate(This,peValidationStatus)	\
    ( (This)->lpVtbl -> Validate(This,peValidationStatus) ) 

#define IDTSComponentMetaData100_IncrementPipelinePerfCounter(This,dwCounterID,dwDifference)	\
    ( (This)->lpVtbl -> IncrementPipelinePerfCounter(This,dwCounterID,dwDifference) ) 

#define IDTSComponentMetaData100_get_IsDefaultLocale(This,pbIsDefault)	\
    ( (This)->lpVtbl -> get_IsDefaultLocale(This,pbIsDefault) ) 

#define IDTSComponentMetaData100_get_UsesDispositions(This,pbUsesDispositions)	\
    ( (This)->lpVtbl -> get_UsesDispositions(This,pbUsesDispositions) ) 

#define IDTSComponentMetaData100_put_UsesDispositions(This,bUsesDispositions)	\
    ( (This)->lpVtbl -> put_UsesDispositions(This,bUsesDispositions) ) 

#define IDTSComponentMetaData100_get_ValidateExternalMetadata(This,pbValidate)	\
    ( (This)->lpVtbl -> get_ValidateExternalMetadata(This,pbValidate) ) 

#define IDTSComponentMetaData100_put_ValidateExternalMetadata(This,bValidate)	\
    ( (This)->lpVtbl -> put_ValidateExternalMetadata(This,bValidate) ) 

#define IDTSComponentMetaData100_FireWarning(This,WarningCode,SubComponent,Description,HelpFile,HelpContext)	\
    ( (This)->lpVtbl -> FireWarning(This,WarningCode,SubComponent,Description,HelpFile,HelpContext) ) 

#define IDTSComponentMetaData100_FireInformation(This,InformationCode,SubComponent,Description,HelpFile,HelpContext,pbFireAgain)	\
    ( (This)->lpVtbl -> FireInformation(This,InformationCode,SubComponent,Description,HelpFile,HelpContext,pbFireAgain) ) 

#define IDTSComponentMetaData100_FireError(This,ErrorCode,SubComponent,Description,HelpFile,HelpContext,pbCancel)	\
    ( (This)->lpVtbl -> FireError(This,ErrorCode,SubComponent,Description,HelpFile,HelpContext,pbCancel) ) 

#define IDTSComponentMetaData100_FireCustomEvent(This,EventName,EventText,ppsaArguments,SubComponent,pbFireAgain)	\
    ( (This)->lpVtbl -> FireCustomEvent(This,EventName,EventText,ppsaArguments,SubComponent,pbFireAgain) ) 

#define IDTSComponentMetaData100_get_Version(This,plVersion)	\
    ( (This)->lpVtbl -> get_Version(This,plVersion) ) 

#define IDTSComponentMetaData100_put_Version(This,lVersion)	\
    ( (This)->lpVtbl -> put_Version(This,lVersion) ) 

#define IDTSComponentMetaData100_get_PipelineVersion(This,plVersion)	\
    ( (This)->lpVtbl -> get_PipelineVersion(This,plVersion) ) 

#define IDTSComponentMetaData100_put_PipelineVersion(This,lVersion)	\
    ( (This)->lpVtbl -> put_PipelineVersion(This,lVersion) ) 

#define IDTSComponentMetaData100_get_ContactInfo(This,pbstrContactInfo)	\
    ( (This)->lpVtbl -> get_ContactInfo(This,pbstrContactInfo) ) 

#define IDTSComponentMetaData100_put_ContactInfo(This,bstrContactInfo)	\
    ( (This)->lpVtbl -> put_ContactInfo(This,bstrContactInfo) ) 

#define IDTSComponentMetaData100_FireProgress(This,bstrProgressDescription,lPercentComplete,lProgressCountLow,lProgressCountHigh,bstrSubComponent,pbFireAgain)	\
    ( (This)->lpVtbl -> FireProgress(This,bstrProgressDescription,lPercentComplete,lProgressCountLow,lProgressCountHigh,bstrSubComponent,pbFireAgain) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSComponentMetaData100_INTERFACE_DEFINED__ */


#ifndef __IDTSComponentView100_INTERFACE_DEFINED__
#define __IDTSComponentView100_INTERFACE_DEFINED__

/* interface IDTSComponentView100 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDTSComponentView100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A0AE040A-BCC2-4633-9289-DA589E2E8EB8")
    IDTSComponentView100 : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Commit( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cancel( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSComponentView100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSComponentView100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSComponentView100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSComponentView100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSComponentView100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSComponentView100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSComponentView100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSComponentView100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Commit )( 
            IDTSComponentView100 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Cancel )( 
            IDTSComponentView100 * This);
        
        END_INTERFACE
    } IDTSComponentView100Vtbl;

    interface IDTSComponentView100
    {
        CONST_VTBL struct IDTSComponentView100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSComponentView100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSComponentView100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSComponentView100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSComponentView100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSComponentView100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSComponentView100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSComponentView100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSComponentView100_Commit(This)	\
    ( (This)->lpVtbl -> Commit(This) ) 

#define IDTSComponentView100_Cancel(This)	\
    ( (This)->lpVtbl -> Cancel(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSComponentView100_INTERFACE_DEFINED__ */


#ifndef __IDTSDesigntimeComponent100_INTERFACE_DEFINED__
#define __IDTSDesigntimeComponent100_INTERFACE_DEFINED__

/* interface IDTSDesigntimeComponent100 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDTSDesigntimeComponent100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0058874E-E037-4BA9-920C-349773B5351A")
    IDTSDesigntimeComponent100 : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ProvideComponentProperties( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReinitializeMetaData( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InsertOutputColumnAt( 
            /* [in] */ long lOutputID,
            /* [in] */ long lOutputColumnIndex,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrDescription,
            /* [retval][out] */ IDTSOutputColumn100 **ppIDTSOutputColumn) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteOutputColumn( 
            /* [in] */ long lOutputID,
            /* [in] */ long lOutputColumnID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnDeletingInputColumn( 
            /* [in] */ long lInputID,
            /* [in] */ long lInputColumnID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetUsageType( 
            /* [in] */ long lInputID,
            /* [in] */ IDTSVirtualInput100 *pIDTSVirtualInputObject,
            /* [in] */ long lLineageID,
            /* [in] */ enum DTSUsageType eUsageType,
            /* [retval][out] */ IDTSInputColumn100 **ppIDTSInputColumn) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetComponentProperty( 
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT vValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetInputProperty( 
            /* [in] */ long lInputID,
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT vValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetOutputProperty( 
            /* [in] */ long lOutputID,
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT vValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetInputColumnProperty( 
            /* [in] */ long lInputID,
            /* [in] */ long lInputColumnID,
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT vValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetOutputColumnProperty( 
            /* [in] */ long lOutputID,
            /* [in] */ long lOutputColumnID,
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT vValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InsertInput( 
            /* [in] */ enum DTSInsertPlacement eInsertPlacement,
            /* [in] */ long lInputID,
            /* [retval][out] */ IDTSInput100 **ppIDTSInput) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InsertOutput( 
            /* [in] */ enum DTSInsertPlacement eInsertPlacement,
            /* [in] */ long lOutputID,
            /* [retval][out] */ IDTSOutput100 **ppIDTSOutput) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteInput( 
            /* [in] */ long lInputID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteOutput( 
            /* [in] */ long lOutputID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnInputPathDetached( 
            /* [in] */ long lInputID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnInputPathAttached( 
            /* [in] */ long lInputID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnOutputPathAttached( 
            /* [in] */ long lOutputID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Validate( 
            /* [retval][out] */ enum DTSValidationStatus *peValidationStatus) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AcquireConnections( 
            /* [in] */ IUnknown *pTransaction) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReleaseConnections( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetOutputColumnDataTypeProperties( 
            /* [in] */ long lOutputID,
            /* [in] */ long lOutputColumnID,
            /* [in] */ enum /* external definition not present */ DataType eDataType,
            /* [in] */ long lLength,
            /* [in] */ long lPrecision,
            /* [in] */ long lScale,
            /* [in] */ long lCodePage) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MapInputColumn( 
            /* [in] */ long lInputID,
            /* [in] */ long lInputColumnID,
            /* [in] */ long lExternalMetadataColumnID,
            /* [retval][out] */ IDTSExternalMetadataColumn100 **ppIDTSExternalMetadataColumn) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MapOutputColumn( 
            /* [in] */ long lOutputID,
            /* [in] */ long lOutputColumnID,
            /* [in] */ long lExternalMetadataColumnID,
            /* [in] */ VARIANT_BOOL bMatch,
            /* [retval][out] */ IDTSExternalMetadataColumn100 **ppIDTSExternalMetadataColumn) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DescribeRedirectedErrorCode( 
            /* [in] */ HRESULT hrErrorCode,
            /* [retval][out] */ BSTR *pbstrDesc) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetEnumerationCollection( 
            /* [in] */ BSTR bstrEnumName,
            /* [retval][out] */ IDTSFriendlyEnumCollection100 **ppIDTSFriendlyEnumCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InsertExternalMetadataColumnAt( 
            /* [in] */ long lID,
            /* [in] */ long lExternalMetadataColumnIndex,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrDescription,
            /* [retval][out] */ IDTSExternalMetadataColumn100 **ppIDTSExternalMetadataColumn) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteExternalMetadataColumn( 
            /* [in] */ long lID,
            /* [in] */ long lExternalMetadataColumnID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetExternalMetadataColumnProperty( 
            /* [in] */ long lID,
            /* [in] */ long lExternalMetadataColumnID,
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ VARIANT vtValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetExternalMetadataColumnDataTypeProperties( 
            /* [in] */ long lID,
            /* [in] */ long lExternalMetadataColumnID,
            /* [in] */ enum /* external definition not present */ DataType eDataType,
            /* [in] */ long lLength,
            /* [in] */ long lPrecision,
            /* [in] */ long lScale,
            /* [in] */ long lCodePage) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSDesigntimeComponent100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSDesigntimeComponent100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSDesigntimeComponent100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSDesigntimeComponent100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSDesigntimeComponent100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSDesigntimeComponent100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSDesigntimeComponent100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSDesigntimeComponent100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ProvideComponentProperties )( 
            IDTSDesigntimeComponent100 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReinitializeMetaData )( 
            IDTSDesigntimeComponent100 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InsertOutputColumnAt )( 
            IDTSDesigntimeComponent100 * This,
            /* [in] */ long lOutputID,
            /* [in] */ long lOutputColumnIndex,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrDescription,
            /* [retval][out] */ IDTSOutputColumn100 **ppIDTSOutputColumn);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteOutputColumn )( 
            IDTSDesigntimeComponent100 * This,
            /* [in] */ long lOutputID,
            /* [in] */ long lOutputColumnID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnDeletingInputColumn )( 
            IDTSDesigntimeComponent100 * This,
            /* [in] */ long lInputID,
            /* [in] */ long lInputColumnID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetUsageType )( 
            IDTSDesigntimeComponent100 * This,
            /* [in] */ long lInputID,
            /* [in] */ IDTSVirtualInput100 *pIDTSVirtualInputObject,
            /* [in] */ long lLineageID,
            /* [in] */ enum DTSUsageType eUsageType,
            /* [retval][out] */ IDTSInputColumn100 **ppIDTSInputColumn);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetComponentProperty )( 
            IDTSDesigntimeComponent100 * This,
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT vValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetInputProperty )( 
            IDTSDesigntimeComponent100 * This,
            /* [in] */ long lInputID,
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT vValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetOutputProperty )( 
            IDTSDesigntimeComponent100 * This,
            /* [in] */ long lOutputID,
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT vValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetInputColumnProperty )( 
            IDTSDesigntimeComponent100 * This,
            /* [in] */ long lInputID,
            /* [in] */ long lInputColumnID,
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT vValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetOutputColumnProperty )( 
            IDTSDesigntimeComponent100 * This,
            /* [in] */ long lOutputID,
            /* [in] */ long lOutputColumnID,
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT vValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InsertInput )( 
            IDTSDesigntimeComponent100 * This,
            /* [in] */ enum DTSInsertPlacement eInsertPlacement,
            /* [in] */ long lInputID,
            /* [retval][out] */ IDTSInput100 **ppIDTSInput);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InsertOutput )( 
            IDTSDesigntimeComponent100 * This,
            /* [in] */ enum DTSInsertPlacement eInsertPlacement,
            /* [in] */ long lOutputID,
            /* [retval][out] */ IDTSOutput100 **ppIDTSOutput);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteInput )( 
            IDTSDesigntimeComponent100 * This,
            /* [in] */ long lInputID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteOutput )( 
            IDTSDesigntimeComponent100 * This,
            /* [in] */ long lOutputID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnInputPathDetached )( 
            IDTSDesigntimeComponent100 * This,
            /* [in] */ long lInputID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnInputPathAttached )( 
            IDTSDesigntimeComponent100 * This,
            /* [in] */ long lInputID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnOutputPathAttached )( 
            IDTSDesigntimeComponent100 * This,
            /* [in] */ long lOutputID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Validate )( 
            IDTSDesigntimeComponent100 * This,
            /* [retval][out] */ enum DTSValidationStatus *peValidationStatus);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AcquireConnections )( 
            IDTSDesigntimeComponent100 * This,
            /* [in] */ IUnknown *pTransaction);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReleaseConnections )( 
            IDTSDesigntimeComponent100 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetOutputColumnDataTypeProperties )( 
            IDTSDesigntimeComponent100 * This,
            /* [in] */ long lOutputID,
            /* [in] */ long lOutputColumnID,
            /* [in] */ enum /* external definition not present */ DataType eDataType,
            /* [in] */ long lLength,
            /* [in] */ long lPrecision,
            /* [in] */ long lScale,
            /* [in] */ long lCodePage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MapInputColumn )( 
            IDTSDesigntimeComponent100 * This,
            /* [in] */ long lInputID,
            /* [in] */ long lInputColumnID,
            /* [in] */ long lExternalMetadataColumnID,
            /* [retval][out] */ IDTSExternalMetadataColumn100 **ppIDTSExternalMetadataColumn);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MapOutputColumn )( 
            IDTSDesigntimeComponent100 * This,
            /* [in] */ long lOutputID,
            /* [in] */ long lOutputColumnID,
            /* [in] */ long lExternalMetadataColumnID,
            /* [in] */ VARIANT_BOOL bMatch,
            /* [retval][out] */ IDTSExternalMetadataColumn100 **ppIDTSExternalMetadataColumn);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DescribeRedirectedErrorCode )( 
            IDTSDesigntimeComponent100 * This,
            /* [in] */ HRESULT hrErrorCode,
            /* [retval][out] */ BSTR *pbstrDesc);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetEnumerationCollection )( 
            IDTSDesigntimeComponent100 * This,
            /* [in] */ BSTR bstrEnumName,
            /* [retval][out] */ IDTSFriendlyEnumCollection100 **ppIDTSFriendlyEnumCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InsertExternalMetadataColumnAt )( 
            IDTSDesigntimeComponent100 * This,
            /* [in] */ long lID,
            /* [in] */ long lExternalMetadataColumnIndex,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrDescription,
            /* [retval][out] */ IDTSExternalMetadataColumn100 **ppIDTSExternalMetadataColumn);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteExternalMetadataColumn )( 
            IDTSDesigntimeComponent100 * This,
            /* [in] */ long lID,
            /* [in] */ long lExternalMetadataColumnID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetExternalMetadataColumnProperty )( 
            IDTSDesigntimeComponent100 * This,
            /* [in] */ long lID,
            /* [in] */ long lExternalMetadataColumnID,
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ VARIANT vtValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetExternalMetadataColumnDataTypeProperties )( 
            IDTSDesigntimeComponent100 * This,
            /* [in] */ long lID,
            /* [in] */ long lExternalMetadataColumnID,
            /* [in] */ enum /* external definition not present */ DataType eDataType,
            /* [in] */ long lLength,
            /* [in] */ long lPrecision,
            /* [in] */ long lScale,
            /* [in] */ long lCodePage);
        
        END_INTERFACE
    } IDTSDesigntimeComponent100Vtbl;

    interface IDTSDesigntimeComponent100
    {
        CONST_VTBL struct IDTSDesigntimeComponent100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSDesigntimeComponent100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSDesigntimeComponent100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSDesigntimeComponent100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSDesigntimeComponent100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSDesigntimeComponent100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSDesigntimeComponent100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSDesigntimeComponent100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSDesigntimeComponent100_ProvideComponentProperties(This)	\
    ( (This)->lpVtbl -> ProvideComponentProperties(This) ) 

#define IDTSDesigntimeComponent100_ReinitializeMetaData(This)	\
    ( (This)->lpVtbl -> ReinitializeMetaData(This) ) 

#define IDTSDesigntimeComponent100_InsertOutputColumnAt(This,lOutputID,lOutputColumnIndex,bstrName,bstrDescription,ppIDTSOutputColumn)	\
    ( (This)->lpVtbl -> InsertOutputColumnAt(This,lOutputID,lOutputColumnIndex,bstrName,bstrDescription,ppIDTSOutputColumn) ) 

#define IDTSDesigntimeComponent100_DeleteOutputColumn(This,lOutputID,lOutputColumnID)	\
    ( (This)->lpVtbl -> DeleteOutputColumn(This,lOutputID,lOutputColumnID) ) 

#define IDTSDesigntimeComponent100_OnDeletingInputColumn(This,lInputID,lInputColumnID)	\
    ( (This)->lpVtbl -> OnDeletingInputColumn(This,lInputID,lInputColumnID) ) 

#define IDTSDesigntimeComponent100_SetUsageType(This,lInputID,pIDTSVirtualInputObject,lLineageID,eUsageType,ppIDTSInputColumn)	\
    ( (This)->lpVtbl -> SetUsageType(This,lInputID,pIDTSVirtualInputObject,lLineageID,eUsageType,ppIDTSInputColumn) ) 

#define IDTSDesigntimeComponent100_SetComponentProperty(This,PropertyName,vValue,ppIDTSCustomProperty)	\
    ( (This)->lpVtbl -> SetComponentProperty(This,PropertyName,vValue,ppIDTSCustomProperty) ) 

#define IDTSDesigntimeComponent100_SetInputProperty(This,lInputID,PropertyName,vValue,ppIDTSCustomProperty)	\
    ( (This)->lpVtbl -> SetInputProperty(This,lInputID,PropertyName,vValue,ppIDTSCustomProperty) ) 

#define IDTSDesigntimeComponent100_SetOutputProperty(This,lOutputID,PropertyName,vValue,ppIDTSCustomProperty)	\
    ( (This)->lpVtbl -> SetOutputProperty(This,lOutputID,PropertyName,vValue,ppIDTSCustomProperty) ) 

#define IDTSDesigntimeComponent100_SetInputColumnProperty(This,lInputID,lInputColumnID,PropertyName,vValue,ppIDTSCustomProperty)	\
    ( (This)->lpVtbl -> SetInputColumnProperty(This,lInputID,lInputColumnID,PropertyName,vValue,ppIDTSCustomProperty) ) 

#define IDTSDesigntimeComponent100_SetOutputColumnProperty(This,lOutputID,lOutputColumnID,PropertyName,vValue,ppIDTSCustomProperty)	\
    ( (This)->lpVtbl -> SetOutputColumnProperty(This,lOutputID,lOutputColumnID,PropertyName,vValue,ppIDTSCustomProperty) ) 

#define IDTSDesigntimeComponent100_InsertInput(This,eInsertPlacement,lInputID,ppIDTSInput)	\
    ( (This)->lpVtbl -> InsertInput(This,eInsertPlacement,lInputID,ppIDTSInput) ) 

#define IDTSDesigntimeComponent100_InsertOutput(This,eInsertPlacement,lOutputID,ppIDTSOutput)	\
    ( (This)->lpVtbl -> InsertOutput(This,eInsertPlacement,lOutputID,ppIDTSOutput) ) 

#define IDTSDesigntimeComponent100_DeleteInput(This,lInputID)	\
    ( (This)->lpVtbl -> DeleteInput(This,lInputID) ) 

#define IDTSDesigntimeComponent100_DeleteOutput(This,lOutputID)	\
    ( (This)->lpVtbl -> DeleteOutput(This,lOutputID) ) 

#define IDTSDesigntimeComponent100_OnInputPathDetached(This,lInputID)	\
    ( (This)->lpVtbl -> OnInputPathDetached(This,lInputID) ) 

#define IDTSDesigntimeComponent100_OnInputPathAttached(This,lInputID)	\
    ( (This)->lpVtbl -> OnInputPathAttached(This,lInputID) ) 

#define IDTSDesigntimeComponent100_OnOutputPathAttached(This,lOutputID)	\
    ( (This)->lpVtbl -> OnOutputPathAttached(This,lOutputID) ) 

#define IDTSDesigntimeComponent100_Validate(This,peValidationStatus)	\
    ( (This)->lpVtbl -> Validate(This,peValidationStatus) ) 

#define IDTSDesigntimeComponent100_AcquireConnections(This,pTransaction)	\
    ( (This)->lpVtbl -> AcquireConnections(This,pTransaction) ) 

#define IDTSDesigntimeComponent100_ReleaseConnections(This)	\
    ( (This)->lpVtbl -> ReleaseConnections(This) ) 

#define IDTSDesigntimeComponent100_SetOutputColumnDataTypeProperties(This,lOutputID,lOutputColumnID,eDataType,lLength,lPrecision,lScale,lCodePage)	\
    ( (This)->lpVtbl -> SetOutputColumnDataTypeProperties(This,lOutputID,lOutputColumnID,eDataType,lLength,lPrecision,lScale,lCodePage) ) 

#define IDTSDesigntimeComponent100_MapInputColumn(This,lInputID,lInputColumnID,lExternalMetadataColumnID,ppIDTSExternalMetadataColumn)	\
    ( (This)->lpVtbl -> MapInputColumn(This,lInputID,lInputColumnID,lExternalMetadataColumnID,ppIDTSExternalMetadataColumn) ) 

#define IDTSDesigntimeComponent100_MapOutputColumn(This,lOutputID,lOutputColumnID,lExternalMetadataColumnID,bMatch,ppIDTSExternalMetadataColumn)	\
    ( (This)->lpVtbl -> MapOutputColumn(This,lOutputID,lOutputColumnID,lExternalMetadataColumnID,bMatch,ppIDTSExternalMetadataColumn) ) 

#define IDTSDesigntimeComponent100_DescribeRedirectedErrorCode(This,hrErrorCode,pbstrDesc)	\
    ( (This)->lpVtbl -> DescribeRedirectedErrorCode(This,hrErrorCode,pbstrDesc) ) 

#define IDTSDesigntimeComponent100_GetEnumerationCollection(This,bstrEnumName,ppIDTSFriendlyEnumCollection)	\
    ( (This)->lpVtbl -> GetEnumerationCollection(This,bstrEnumName,ppIDTSFriendlyEnumCollection) ) 

#define IDTSDesigntimeComponent100_InsertExternalMetadataColumnAt(This,lID,lExternalMetadataColumnIndex,bstrName,bstrDescription,ppIDTSExternalMetadataColumn)	\
    ( (This)->lpVtbl -> InsertExternalMetadataColumnAt(This,lID,lExternalMetadataColumnIndex,bstrName,bstrDescription,ppIDTSExternalMetadataColumn) ) 

#define IDTSDesigntimeComponent100_DeleteExternalMetadataColumn(This,lID,lExternalMetadataColumnID)	\
    ( (This)->lpVtbl -> DeleteExternalMetadataColumn(This,lID,lExternalMetadataColumnID) ) 

#define IDTSDesigntimeComponent100_SetExternalMetadataColumnProperty(This,lID,lExternalMetadataColumnID,bstrPropertyName,vtValue,ppIDTSCustomProperty)	\
    ( (This)->lpVtbl -> SetExternalMetadataColumnProperty(This,lID,lExternalMetadataColumnID,bstrPropertyName,vtValue,ppIDTSCustomProperty) ) 

#define IDTSDesigntimeComponent100_SetExternalMetadataColumnDataTypeProperties(This,lID,lExternalMetadataColumnID,eDataType,lLength,lPrecision,lScale,lCodePage)	\
    ( (This)->lpVtbl -> SetExternalMetadataColumnDataTypeProperties(This,lID,lExternalMetadataColumnID,eDataType,lLength,lPrecision,lScale,lCodePage) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSDesigntimeComponent100_INTERFACE_DEFINED__ */


#ifndef __IDTSRuntimeComponent100_INTERFACE_DEFINED__
#define __IDTSRuntimeComponent100_INTERFACE_DEFINED__

/* interface IDTSRuntimeComponent100 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDTSRuntimeComponent100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("35D2046A-F173-4994-9F60-10DFAFCF690D")
    IDTSRuntimeComponent100 : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PrepareForExecute( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PreExecute( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PrimeOutput( 
            /* [in] */ long lOutputs,
            /* [size_is][in] */ long lOutputIDs[  ],
            /* [size_is][in] */ IDTSBuffer100 *pIDTSBufferOutputs[  ]) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ProcessInput( 
            /* [in] */ long lInputID,
            /* [in] */ IDTSBuffer100 *pIDTSBufferInput) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PostExecute( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cleanup( void) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ComponentMetaData( 
            /* [in] */ IDTSComponentMetaData100 *pIDTSComponentMetaData) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VariableDispenser( 
            /* [in] */ /* external definition not present */ IDTSVariableDispenser100 *pIDTSVariableDispenser) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BufferManager( 
            /* [in] */ IDTSBufferManager100 *pIDTSBufferManager) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EventInfos( 
            /* external definition not present */ IDTSEventInfos100 *pEventInfos) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ReferenceTracker( 
            /* [in] */ /* external definition not present */ IDTSObjectReferenceTracker100 *pRefTracker) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PerformUpgrade( 
            long lPipelineVersion) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LogEntryInfos( 
            /* external definition not present */ IDTSLogEntryInfos100 *pLogEntryInfos) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RequiredProductLevel( 
            /* [retval][out] */ enum /* external definition not present */ DTSProductLevel *peProductLevel) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSRuntimeComponent100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSRuntimeComponent100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSRuntimeComponent100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSRuntimeComponent100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSRuntimeComponent100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSRuntimeComponent100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSRuntimeComponent100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSRuntimeComponent100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PrepareForExecute )( 
            IDTSRuntimeComponent100 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PreExecute )( 
            IDTSRuntimeComponent100 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PrimeOutput )( 
            IDTSRuntimeComponent100 * This,
            /* [in] */ long lOutputs,
            /* [size_is][in] */ long lOutputIDs[  ],
            /* [size_is][in] */ IDTSBuffer100 *pIDTSBufferOutputs[  ]);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ProcessInput )( 
            IDTSRuntimeComponent100 * This,
            /* [in] */ long lInputID,
            /* [in] */ IDTSBuffer100 *pIDTSBufferInput);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PostExecute )( 
            IDTSRuntimeComponent100 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Cleanup )( 
            IDTSRuntimeComponent100 * This);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ComponentMetaData )( 
            IDTSRuntimeComponent100 * This,
            /* [in] */ IDTSComponentMetaData100 *pIDTSComponentMetaData);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VariableDispenser )( 
            IDTSRuntimeComponent100 * This,
            /* [in] */ /* external definition not present */ IDTSVariableDispenser100 *pIDTSVariableDispenser);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BufferManager )( 
            IDTSRuntimeComponent100 * This,
            /* [in] */ IDTSBufferManager100 *pIDTSBufferManager);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EventInfos )( 
            IDTSRuntimeComponent100 * This,
            /* external definition not present */ IDTSEventInfos100 *pEventInfos);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReferenceTracker )( 
            IDTSRuntimeComponent100 * This,
            /* [in] */ /* external definition not present */ IDTSObjectReferenceTracker100 *pRefTracker);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PerformUpgrade )( 
            IDTSRuntimeComponent100 * This,
            long lPipelineVersion);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogEntryInfos )( 
            IDTSRuntimeComponent100 * This,
            /* external definition not present */ IDTSLogEntryInfos100 *pLogEntryInfos);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RequiredProductLevel )( 
            IDTSRuntimeComponent100 * This,
            /* [retval][out] */ enum /* external definition not present */ DTSProductLevel *peProductLevel);
        
        END_INTERFACE
    } IDTSRuntimeComponent100Vtbl;

    interface IDTSRuntimeComponent100
    {
        CONST_VTBL struct IDTSRuntimeComponent100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSRuntimeComponent100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSRuntimeComponent100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSRuntimeComponent100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSRuntimeComponent100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSRuntimeComponent100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSRuntimeComponent100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSRuntimeComponent100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSRuntimeComponent100_PrepareForExecute(This)	\
    ( (This)->lpVtbl -> PrepareForExecute(This) ) 

#define IDTSRuntimeComponent100_PreExecute(This)	\
    ( (This)->lpVtbl -> PreExecute(This) ) 

#define IDTSRuntimeComponent100_PrimeOutput(This,lOutputs,lOutputIDs,pIDTSBufferOutputs)	\
    ( (This)->lpVtbl -> PrimeOutput(This,lOutputs,lOutputIDs,pIDTSBufferOutputs) ) 

#define IDTSRuntimeComponent100_ProcessInput(This,lInputID,pIDTSBufferInput)	\
    ( (This)->lpVtbl -> ProcessInput(This,lInputID,pIDTSBufferInput) ) 

#define IDTSRuntimeComponent100_PostExecute(This)	\
    ( (This)->lpVtbl -> PostExecute(This) ) 

#define IDTSRuntimeComponent100_Cleanup(This)	\
    ( (This)->lpVtbl -> Cleanup(This) ) 

#define IDTSRuntimeComponent100_put_ComponentMetaData(This,pIDTSComponentMetaData)	\
    ( (This)->lpVtbl -> put_ComponentMetaData(This,pIDTSComponentMetaData) ) 

#define IDTSRuntimeComponent100_put_VariableDispenser(This,pIDTSVariableDispenser)	\
    ( (This)->lpVtbl -> put_VariableDispenser(This,pIDTSVariableDispenser) ) 

#define IDTSRuntimeComponent100_put_BufferManager(This,pIDTSBufferManager)	\
    ( (This)->lpVtbl -> put_BufferManager(This,pIDTSBufferManager) ) 

#define IDTSRuntimeComponent100_put_EventInfos(This,pEventInfos)	\
    ( (This)->lpVtbl -> put_EventInfos(This,pEventInfos) ) 

#define IDTSRuntimeComponent100_put_ReferenceTracker(This,pRefTracker)	\
    ( (This)->lpVtbl -> put_ReferenceTracker(This,pRefTracker) ) 

#define IDTSRuntimeComponent100_PerformUpgrade(This,lPipelineVersion)	\
    ( (This)->lpVtbl -> PerformUpgrade(This,lPipelineVersion) ) 

#define IDTSRuntimeComponent100_put_LogEntryInfos(This,pLogEntryInfos)	\
    ( (This)->lpVtbl -> put_LogEntryInfos(This,pLogEntryInfos) ) 

#define IDTSRuntimeComponent100_get_RequiredProductLevel(This,peProductLevel)	\
    ( (This)->lpVtbl -> get_RequiredProductLevel(This,peProductLevel) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSRuntimeComponent100_INTERFACE_DEFINED__ */


#ifndef __IDTSManagedComponentWrapper100_INTERFACE_DEFINED__
#define __IDTSManagedComponentWrapper100_INTERFACE_DEFINED__

/* interface IDTSManagedComponentWrapper100 */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDTSManagedComponentWrapper100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("17B572DD-4D18-443E-8713-BEE1CEC0324F")
    IDTSManagedComponentWrapper100 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddBLOBData( 
            /* [in] */ IDTSBuffer100 *pIDTSBuffer,
            /* [in] */ DTP_HROW hRow,
            /* [in] */ DTP_HCOL hCol,
            /* [in] */ SAFEARRAY * *ppsaData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddBLOBDataLen( 
            /* [in] */ IDTSBuffer100 *pIDTSBuffer,
            /* [in] */ DTP_HROW hRow,
            /* [in] */ DTP_HCOL hCol,
            /* [in] */ SAFEARRAY * *ppsaData,
            /* [in] */ DWORD dwCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBLOBData( 
            /* [in] */ IDTSBuffer100 *pIDTSBuffer,
            /* [in] */ DTP_HROW hRow,
            /* [in] */ DTP_HCOL hCol,
            /* [in] */ DWORD dwOffset,
            /* [in] */ DWORD dwCount,
            /* [retval][out] */ SAFEARRAY * *ppsaData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WrapperProvideComponentProperties( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WrapperReinitializeMetaData( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WrapperInsertOutputColumnAt( 
            /* [in] */ long lOutputID,
            /* [in] */ long lOutputColumnIndex,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrDescription,
            /* [retval][out] */ IDTSOutputColumn100 **ppIDTSOutputColumn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WrapperDeleteOutputColumn( 
            /* [in] */ long lOutputID,
            /* [in] */ long lOutputColumnID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WrapperOnDeletingInputColumn( 
            /* [in] */ long lInputID,
            /* [in] */ long lInputColumnID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WrapperSetUsageType( 
            /* [in] */ long lInputID,
            /* [in] */ IDTSVirtualInput100 *pIDTSVirtualInputObject,
            /* [in] */ long lLineageID,
            /* [in] */ enum DTSUsageType eUsageType,
            /* [retval][out] */ IDTSInputColumn100 **ppIDTSInputColumn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WrapperSetComponentProperty( 
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT vValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WrapperSetInputProperty( 
            /* [in] */ long lInputID,
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT vValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WrapperSetOutputProperty( 
            /* [in] */ long lOutputID,
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT vValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WrapperSetInputColumnProperty( 
            /* [in] */ long lInputID,
            /* [in] */ long lInputColumnID,
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT vValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WrapperSetOutputColumnProperty( 
            /* [in] */ long lOutputID,
            /* [in] */ long lOutputColumnID,
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT vValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WrapperInsertInput( 
            /* [in] */ enum DTSInsertPlacement eInsertPlacement,
            /* [in] */ long lInputID,
            /* [retval][out] */ IDTSInput100 **ppIDTSInput) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WrapperInsertOutput( 
            /* [in] */ enum DTSInsertPlacement eInsertPlacement,
            /* [in] */ long lOutputID,
            /* [retval][out] */ IDTSOutput100 **ppIDTSOutput) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WrapperDeleteInput( 
            /* [in] */ long lInputID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WrapperDeleteOutput( 
            /* [in] */ long lOutputID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WrapperOnInputPathDetached( 
            /* [in] */ long lInputID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WrapperOnInputPathAttached( 
            /* [in] */ long lInputID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WrapperOnOutputPathAttached( 
            /* [in] */ long lOutputID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WrapperValidate( 
            /* [retval][out] */ enum DTSValidationStatus *peValidationStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WrapperAcquireConnections( 
            /* [in] */ IUnknown *pTransaction) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WrapperReleaseConnections( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WrapperSetOutputColumnDataTypeProperties( 
            /* [in] */ long lOutputID,
            /* [in] */ long lOutputColumnID,
            /* [in] */ enum /* external definition not present */ DataType eDataType,
            /* [in] */ long lLength,
            /* [in] */ long lPrecision,
            /* [in] */ long lScale,
            /* [in] */ long lCodePage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WrapperMapInputColumn( 
            /* [in] */ long lInputID,
            /* [in] */ long lInputColumnID,
            /* [in] */ long lExternalMetadataColumnID,
            /* [retval][out] */ IDTSExternalMetadataColumn100 **ppIDTSExternalMetadataColumn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WrapperMapOutputColumn( 
            /* [in] */ long lOutputID,
            /* [in] */ long lOutputColumnID,
            /* [in] */ long lExternalMetadataColumnID,
            /* [in] */ VARIANT_BOOL bMatch,
            /* [retval][out] */ IDTSExternalMetadataColumn100 **ppIDTSExternalMetadataColumn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WrapperDescribeRedirectedErrorCode( 
            /* [in] */ HRESULT hrErrorCode,
            /* [retval][out] */ BSTR *pbstrDesc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WrapperInsertExternalMetadataColumnAt( 
            /* [in] */ long lID,
            /* [in] */ long lExternalMetadataColumnIndex,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrDescription,
            /* [retval][out] */ IDTSExternalMetadataColumn100 **ppIDTSExternalMetadataColumn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WrapperDeleteExternalMetadataColumn( 
            /* [in] */ long lID,
            /* [in] */ long lExternalMetadataColumnID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WrapperSetExternalMetadataColumnProperty( 
            /* [in] */ long lID,
            /* [in] */ long lExternalMetadataColumnID,
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ VARIANT vtValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WrapperSetExternalMetadataColumnDataTypeProperties( 
            /* [in] */ long lID,
            /* [in] */ long lExternalMetadataColumnID,
            /* [in] */ enum /* external definition not present */ DataType eDataType,
            /* [in] */ long lLength,
            /* [in] */ long lPrecision,
            /* [in] */ long lScale,
            /* [in] */ long lCodePage) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSManagedComponentWrapper100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSManagedComponentWrapper100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSManagedComponentWrapper100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSManagedComponentWrapper100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddBLOBData )( 
            IDTSManagedComponentWrapper100 * This,
            /* [in] */ IDTSBuffer100 *pIDTSBuffer,
            /* [in] */ DTP_HROW hRow,
            /* [in] */ DTP_HCOL hCol,
            /* [in] */ SAFEARRAY * *ppsaData);
        
        HRESULT ( STDMETHODCALLTYPE *AddBLOBDataLen )( 
            IDTSManagedComponentWrapper100 * This,
            /* [in] */ IDTSBuffer100 *pIDTSBuffer,
            /* [in] */ DTP_HROW hRow,
            /* [in] */ DTP_HCOL hCol,
            /* [in] */ SAFEARRAY * *ppsaData,
            /* [in] */ DWORD dwCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetBLOBData )( 
            IDTSManagedComponentWrapper100 * This,
            /* [in] */ IDTSBuffer100 *pIDTSBuffer,
            /* [in] */ DTP_HROW hRow,
            /* [in] */ DTP_HCOL hCol,
            /* [in] */ DWORD dwOffset,
            /* [in] */ DWORD dwCount,
            /* [retval][out] */ SAFEARRAY * *ppsaData);
        
        HRESULT ( STDMETHODCALLTYPE *WrapperProvideComponentProperties )( 
            IDTSManagedComponentWrapper100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *WrapperReinitializeMetaData )( 
            IDTSManagedComponentWrapper100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *WrapperInsertOutputColumnAt )( 
            IDTSManagedComponentWrapper100 * This,
            /* [in] */ long lOutputID,
            /* [in] */ long lOutputColumnIndex,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrDescription,
            /* [retval][out] */ IDTSOutputColumn100 **ppIDTSOutputColumn);
        
        HRESULT ( STDMETHODCALLTYPE *WrapperDeleteOutputColumn )( 
            IDTSManagedComponentWrapper100 * This,
            /* [in] */ long lOutputID,
            /* [in] */ long lOutputColumnID);
        
        HRESULT ( STDMETHODCALLTYPE *WrapperOnDeletingInputColumn )( 
            IDTSManagedComponentWrapper100 * This,
            /* [in] */ long lInputID,
            /* [in] */ long lInputColumnID);
        
        HRESULT ( STDMETHODCALLTYPE *WrapperSetUsageType )( 
            IDTSManagedComponentWrapper100 * This,
            /* [in] */ long lInputID,
            /* [in] */ IDTSVirtualInput100 *pIDTSVirtualInputObject,
            /* [in] */ long lLineageID,
            /* [in] */ enum DTSUsageType eUsageType,
            /* [retval][out] */ IDTSInputColumn100 **ppIDTSInputColumn);
        
        HRESULT ( STDMETHODCALLTYPE *WrapperSetComponentProperty )( 
            IDTSManagedComponentWrapper100 * This,
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT vValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty);
        
        HRESULT ( STDMETHODCALLTYPE *WrapperSetInputProperty )( 
            IDTSManagedComponentWrapper100 * This,
            /* [in] */ long lInputID,
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT vValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty);
        
        HRESULT ( STDMETHODCALLTYPE *WrapperSetOutputProperty )( 
            IDTSManagedComponentWrapper100 * This,
            /* [in] */ long lOutputID,
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT vValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty);
        
        HRESULT ( STDMETHODCALLTYPE *WrapperSetInputColumnProperty )( 
            IDTSManagedComponentWrapper100 * This,
            /* [in] */ long lInputID,
            /* [in] */ long lInputColumnID,
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT vValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty);
        
        HRESULT ( STDMETHODCALLTYPE *WrapperSetOutputColumnProperty )( 
            IDTSManagedComponentWrapper100 * This,
            /* [in] */ long lOutputID,
            /* [in] */ long lOutputColumnID,
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT vValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty);
        
        HRESULT ( STDMETHODCALLTYPE *WrapperInsertInput )( 
            IDTSManagedComponentWrapper100 * This,
            /* [in] */ enum DTSInsertPlacement eInsertPlacement,
            /* [in] */ long lInputID,
            /* [retval][out] */ IDTSInput100 **ppIDTSInput);
        
        HRESULT ( STDMETHODCALLTYPE *WrapperInsertOutput )( 
            IDTSManagedComponentWrapper100 * This,
            /* [in] */ enum DTSInsertPlacement eInsertPlacement,
            /* [in] */ long lOutputID,
            /* [retval][out] */ IDTSOutput100 **ppIDTSOutput);
        
        HRESULT ( STDMETHODCALLTYPE *WrapperDeleteInput )( 
            IDTSManagedComponentWrapper100 * This,
            /* [in] */ long lInputID);
        
        HRESULT ( STDMETHODCALLTYPE *WrapperDeleteOutput )( 
            IDTSManagedComponentWrapper100 * This,
            /* [in] */ long lOutputID);
        
        HRESULT ( STDMETHODCALLTYPE *WrapperOnInputPathDetached )( 
            IDTSManagedComponentWrapper100 * This,
            /* [in] */ long lInputID);
        
        HRESULT ( STDMETHODCALLTYPE *WrapperOnInputPathAttached )( 
            IDTSManagedComponentWrapper100 * This,
            /* [in] */ long lInputID);
        
        HRESULT ( STDMETHODCALLTYPE *WrapperOnOutputPathAttached )( 
            IDTSManagedComponentWrapper100 * This,
            /* [in] */ long lOutputID);
        
        HRESULT ( STDMETHODCALLTYPE *WrapperValidate )( 
            IDTSManagedComponentWrapper100 * This,
            /* [retval][out] */ enum DTSValidationStatus *peValidationStatus);
        
        HRESULT ( STDMETHODCALLTYPE *WrapperAcquireConnections )( 
            IDTSManagedComponentWrapper100 * This,
            /* [in] */ IUnknown *pTransaction);
        
        HRESULT ( STDMETHODCALLTYPE *WrapperReleaseConnections )( 
            IDTSManagedComponentWrapper100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *WrapperSetOutputColumnDataTypeProperties )( 
            IDTSManagedComponentWrapper100 * This,
            /* [in] */ long lOutputID,
            /* [in] */ long lOutputColumnID,
            /* [in] */ enum /* external definition not present */ DataType eDataType,
            /* [in] */ long lLength,
            /* [in] */ long lPrecision,
            /* [in] */ long lScale,
            /* [in] */ long lCodePage);
        
        HRESULT ( STDMETHODCALLTYPE *WrapperMapInputColumn )( 
            IDTSManagedComponentWrapper100 * This,
            /* [in] */ long lInputID,
            /* [in] */ long lInputColumnID,
            /* [in] */ long lExternalMetadataColumnID,
            /* [retval][out] */ IDTSExternalMetadataColumn100 **ppIDTSExternalMetadataColumn);
        
        HRESULT ( STDMETHODCALLTYPE *WrapperMapOutputColumn )( 
            IDTSManagedComponentWrapper100 * This,
            /* [in] */ long lOutputID,
            /* [in] */ long lOutputColumnID,
            /* [in] */ long lExternalMetadataColumnID,
            /* [in] */ VARIANT_BOOL bMatch,
            /* [retval][out] */ IDTSExternalMetadataColumn100 **ppIDTSExternalMetadataColumn);
        
        HRESULT ( STDMETHODCALLTYPE *WrapperDescribeRedirectedErrorCode )( 
            IDTSManagedComponentWrapper100 * This,
            /* [in] */ HRESULT hrErrorCode,
            /* [retval][out] */ BSTR *pbstrDesc);
        
        HRESULT ( STDMETHODCALLTYPE *WrapperInsertExternalMetadataColumnAt )( 
            IDTSManagedComponentWrapper100 * This,
            /* [in] */ long lID,
            /* [in] */ long lExternalMetadataColumnIndex,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrDescription,
            /* [retval][out] */ IDTSExternalMetadataColumn100 **ppIDTSExternalMetadataColumn);
        
        HRESULT ( STDMETHODCALLTYPE *WrapperDeleteExternalMetadataColumn )( 
            IDTSManagedComponentWrapper100 * This,
            /* [in] */ long lID,
            /* [in] */ long lExternalMetadataColumnID);
        
        HRESULT ( STDMETHODCALLTYPE *WrapperSetExternalMetadataColumnProperty )( 
            IDTSManagedComponentWrapper100 * This,
            /* [in] */ long lID,
            /* [in] */ long lExternalMetadataColumnID,
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ VARIANT vtValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty);
        
        HRESULT ( STDMETHODCALLTYPE *WrapperSetExternalMetadataColumnDataTypeProperties )( 
            IDTSManagedComponentWrapper100 * This,
            /* [in] */ long lID,
            /* [in] */ long lExternalMetadataColumnID,
            /* [in] */ enum /* external definition not present */ DataType eDataType,
            /* [in] */ long lLength,
            /* [in] */ long lPrecision,
            /* [in] */ long lScale,
            /* [in] */ long lCodePage);
        
        END_INTERFACE
    } IDTSManagedComponentWrapper100Vtbl;

    interface IDTSManagedComponentWrapper100
    {
        CONST_VTBL struct IDTSManagedComponentWrapper100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSManagedComponentWrapper100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSManagedComponentWrapper100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSManagedComponentWrapper100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSManagedComponentWrapper100_AddBLOBData(This,pIDTSBuffer,hRow,hCol,ppsaData)	\
    ( (This)->lpVtbl -> AddBLOBData(This,pIDTSBuffer,hRow,hCol,ppsaData) ) 

#define IDTSManagedComponentWrapper100_AddBLOBDataLen(This,pIDTSBuffer,hRow,hCol,ppsaData,dwCount)	\
    ( (This)->lpVtbl -> AddBLOBDataLen(This,pIDTSBuffer,hRow,hCol,ppsaData,dwCount) ) 

#define IDTSManagedComponentWrapper100_GetBLOBData(This,pIDTSBuffer,hRow,hCol,dwOffset,dwCount,ppsaData)	\
    ( (This)->lpVtbl -> GetBLOBData(This,pIDTSBuffer,hRow,hCol,dwOffset,dwCount,ppsaData) ) 

#define IDTSManagedComponentWrapper100_WrapperProvideComponentProperties(This)	\
    ( (This)->lpVtbl -> WrapperProvideComponentProperties(This) ) 

#define IDTSManagedComponentWrapper100_WrapperReinitializeMetaData(This)	\
    ( (This)->lpVtbl -> WrapperReinitializeMetaData(This) ) 

#define IDTSManagedComponentWrapper100_WrapperInsertOutputColumnAt(This,lOutputID,lOutputColumnIndex,bstrName,bstrDescription,ppIDTSOutputColumn)	\
    ( (This)->lpVtbl -> WrapperInsertOutputColumnAt(This,lOutputID,lOutputColumnIndex,bstrName,bstrDescription,ppIDTSOutputColumn) ) 

#define IDTSManagedComponentWrapper100_WrapperDeleteOutputColumn(This,lOutputID,lOutputColumnID)	\
    ( (This)->lpVtbl -> WrapperDeleteOutputColumn(This,lOutputID,lOutputColumnID) ) 

#define IDTSManagedComponentWrapper100_WrapperOnDeletingInputColumn(This,lInputID,lInputColumnID)	\
    ( (This)->lpVtbl -> WrapperOnDeletingInputColumn(This,lInputID,lInputColumnID) ) 

#define IDTSManagedComponentWrapper100_WrapperSetUsageType(This,lInputID,pIDTSVirtualInputObject,lLineageID,eUsageType,ppIDTSInputColumn)	\
    ( (This)->lpVtbl -> WrapperSetUsageType(This,lInputID,pIDTSVirtualInputObject,lLineageID,eUsageType,ppIDTSInputColumn) ) 

#define IDTSManagedComponentWrapper100_WrapperSetComponentProperty(This,PropertyName,vValue,ppIDTSCustomProperty)	\
    ( (This)->lpVtbl -> WrapperSetComponentProperty(This,PropertyName,vValue,ppIDTSCustomProperty) ) 

#define IDTSManagedComponentWrapper100_WrapperSetInputProperty(This,lInputID,PropertyName,vValue,ppIDTSCustomProperty)	\
    ( (This)->lpVtbl -> WrapperSetInputProperty(This,lInputID,PropertyName,vValue,ppIDTSCustomProperty) ) 

#define IDTSManagedComponentWrapper100_WrapperSetOutputProperty(This,lOutputID,PropertyName,vValue,ppIDTSCustomProperty)	\
    ( (This)->lpVtbl -> WrapperSetOutputProperty(This,lOutputID,PropertyName,vValue,ppIDTSCustomProperty) ) 

#define IDTSManagedComponentWrapper100_WrapperSetInputColumnProperty(This,lInputID,lInputColumnID,PropertyName,vValue,ppIDTSCustomProperty)	\
    ( (This)->lpVtbl -> WrapperSetInputColumnProperty(This,lInputID,lInputColumnID,PropertyName,vValue,ppIDTSCustomProperty) ) 

#define IDTSManagedComponentWrapper100_WrapperSetOutputColumnProperty(This,lOutputID,lOutputColumnID,PropertyName,vValue,ppIDTSCustomProperty)	\
    ( (This)->lpVtbl -> WrapperSetOutputColumnProperty(This,lOutputID,lOutputColumnID,PropertyName,vValue,ppIDTSCustomProperty) ) 

#define IDTSManagedComponentWrapper100_WrapperInsertInput(This,eInsertPlacement,lInputID,ppIDTSInput)	\
    ( (This)->lpVtbl -> WrapperInsertInput(This,eInsertPlacement,lInputID,ppIDTSInput) ) 

#define IDTSManagedComponentWrapper100_WrapperInsertOutput(This,eInsertPlacement,lOutputID,ppIDTSOutput)	\
    ( (This)->lpVtbl -> WrapperInsertOutput(This,eInsertPlacement,lOutputID,ppIDTSOutput) ) 

#define IDTSManagedComponentWrapper100_WrapperDeleteInput(This,lInputID)	\
    ( (This)->lpVtbl -> WrapperDeleteInput(This,lInputID) ) 

#define IDTSManagedComponentWrapper100_WrapperDeleteOutput(This,lOutputID)	\
    ( (This)->lpVtbl -> WrapperDeleteOutput(This,lOutputID) ) 

#define IDTSManagedComponentWrapper100_WrapperOnInputPathDetached(This,lInputID)	\
    ( (This)->lpVtbl -> WrapperOnInputPathDetached(This,lInputID) ) 

#define IDTSManagedComponentWrapper100_WrapperOnInputPathAttached(This,lInputID)	\
    ( (This)->lpVtbl -> WrapperOnInputPathAttached(This,lInputID) ) 

#define IDTSManagedComponentWrapper100_WrapperOnOutputPathAttached(This,lOutputID)	\
    ( (This)->lpVtbl -> WrapperOnOutputPathAttached(This,lOutputID) ) 

#define IDTSManagedComponentWrapper100_WrapperValidate(This,peValidationStatus)	\
    ( (This)->lpVtbl -> WrapperValidate(This,peValidationStatus) ) 

#define IDTSManagedComponentWrapper100_WrapperAcquireConnections(This,pTransaction)	\
    ( (This)->lpVtbl -> WrapperAcquireConnections(This,pTransaction) ) 

#define IDTSManagedComponentWrapper100_WrapperReleaseConnections(This)	\
    ( (This)->lpVtbl -> WrapperReleaseConnections(This) ) 

#define IDTSManagedComponentWrapper100_WrapperSetOutputColumnDataTypeProperties(This,lOutputID,lOutputColumnID,eDataType,lLength,lPrecision,lScale,lCodePage)	\
    ( (This)->lpVtbl -> WrapperSetOutputColumnDataTypeProperties(This,lOutputID,lOutputColumnID,eDataType,lLength,lPrecision,lScale,lCodePage) ) 

#define IDTSManagedComponentWrapper100_WrapperMapInputColumn(This,lInputID,lInputColumnID,lExternalMetadataColumnID,ppIDTSExternalMetadataColumn)	\
    ( (This)->lpVtbl -> WrapperMapInputColumn(This,lInputID,lInputColumnID,lExternalMetadataColumnID,ppIDTSExternalMetadataColumn) ) 

#define IDTSManagedComponentWrapper100_WrapperMapOutputColumn(This,lOutputID,lOutputColumnID,lExternalMetadataColumnID,bMatch,ppIDTSExternalMetadataColumn)	\
    ( (This)->lpVtbl -> WrapperMapOutputColumn(This,lOutputID,lOutputColumnID,lExternalMetadataColumnID,bMatch,ppIDTSExternalMetadataColumn) ) 

#define IDTSManagedComponentWrapper100_WrapperDescribeRedirectedErrorCode(This,hrErrorCode,pbstrDesc)	\
    ( (This)->lpVtbl -> WrapperDescribeRedirectedErrorCode(This,hrErrorCode,pbstrDesc) ) 

#define IDTSManagedComponentWrapper100_WrapperInsertExternalMetadataColumnAt(This,lID,lExternalMetadataColumnIndex,bstrName,bstrDescription,ppIDTSExternalMetadataColumn)	\
    ( (This)->lpVtbl -> WrapperInsertExternalMetadataColumnAt(This,lID,lExternalMetadataColumnIndex,bstrName,bstrDescription,ppIDTSExternalMetadataColumn) ) 

#define IDTSManagedComponentWrapper100_WrapperDeleteExternalMetadataColumn(This,lID,lExternalMetadataColumnID)	\
    ( (This)->lpVtbl -> WrapperDeleteExternalMetadataColumn(This,lID,lExternalMetadataColumnID) ) 

#define IDTSManagedComponentWrapper100_WrapperSetExternalMetadataColumnProperty(This,lID,lExternalMetadataColumnID,bstrPropertyName,vtValue,ppIDTSCustomProperty)	\
    ( (This)->lpVtbl -> WrapperSetExternalMetadataColumnProperty(This,lID,lExternalMetadataColumnID,bstrPropertyName,vtValue,ppIDTSCustomProperty) ) 

#define IDTSManagedComponentWrapper100_WrapperSetExternalMetadataColumnDataTypeProperties(This,lID,lExternalMetadataColumnID,eDataType,lLength,lPrecision,lScale,lCodePage)	\
    ( (This)->lpVtbl -> WrapperSetExternalMetadataColumnDataTypeProperties(This,lID,lExternalMetadataColumnID,eDataType,lLength,lPrecision,lScale,lCodePage) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSManagedComponentWrapper100_INTERFACE_DEFINED__ */


#ifndef __IDTSManagedComponentHost100_INTERFACE_DEFINED__
#define __IDTSManagedComponentHost100_INTERFACE_DEFINED__

/* interface IDTSManagedComponentHost100 */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDTSManagedComponentHost100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("845BE68E-0541-4FD3-B56C-2689894D261D")
    IDTSManagedComponentHost100 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Instantiate( 
            /* [in] */ BSTR bstrUserComponentTypeName,
            /* [in] */ IDTSComponentMetaData100 *pComponentMetaData,
            /* [in] */ /* external definition not present */ IDTSVariableDispenser100 *pVariableDispenser,
            /* [in] */ IDTSBufferManager100 *pBufferManager,
            /* [in] */ /* external definition not present */ IDTSEventInfos100 *pEventInfos,
            /* [in] */ /* external definition not present */ IDTSObjectReferenceTracker100 *pRefTracker,
            /* [in] */ /* external definition not present */ IDTSLogEntryInfos100 *pLogEntryInfos,
            /* [out] */ enum /* external definition not present */ DTSProductLevel *peProductLevel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostPrepareForExecute( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostPreExecute( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostPrimeOutput( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lOutputs,
            /* [in] */ SAFEARRAY * psaOutputIDs,
            /* [in] */ SAFEARRAY * psaBuffers,
            /* [in] */ void *ppBufferPacket) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostProcessInput( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lInputID,
            /* [in] */ IDTSBuffer100 *pDTSBuffer,
            /* [in] */ void *pBufferPacket) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostPostExecute( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostCleanup( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostCheckAndPerformUpgrade( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lPipelineVersion) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostProvideComponentProperties( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostReinitializeMetaData( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostInsertOutputColumnAt( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lOutputID,
            /* [in] */ long lOutputColumnIndex,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrDescription,
            /* [retval][out] */ IDTSOutputColumn100 **ppIDTSOutputColumn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostDeleteOutputColumn( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lOutputID,
            /* [in] */ long lOutputColumnID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostOnDeletingInputColumn( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lInputID,
            /* [in] */ long lInputColumnID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostSetUsageType( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lInputID,
            /* [in] */ IDTSVirtualInput100 *pIDTSVirtualInputObject,
            /* [in] */ long lLineageID,
            /* [in] */ enum DTSUsageType eUsageType,
            /* [retval][out] */ IDTSInputColumn100 **ppIDTSInputColumn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostSetComponentProperty( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT vValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostSetInputProperty( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lInputID,
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT vValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostSetOutputProperty( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lOutputID,
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT vValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostSetInputColumnProperty( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lInputID,
            /* [in] */ long lInputColumnID,
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT vValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostSetOutputColumnProperty( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lOutputID,
            /* [in] */ long lOutputColumnID,
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT vValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostInsertInput( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ enum DTSInsertPlacement eInsertPlacement,
            /* [in] */ long lInputID,
            /* [retval][out] */ IDTSInput100 **ppIDTSInput) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostInsertOutput( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ enum DTSInsertPlacement eInsertPlacement,
            /* [in] */ long lOutputID,
            /* [retval][out] */ IDTSOutput100 **ppIDTSOutput) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostDeleteInput( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lInputID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostDeleteOutput( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lOutputID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostOnInputPathDetached( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lInputID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostOnInputPathAttached( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lInputID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostOnOutputPathAttached( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lOutputID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostValidate( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [retval][out] */ enum DTSValidationStatus *peValidationStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostAcquireConnections( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ IUnknown *pTransaction) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostReleaseConnections( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostSetOutputColumnDataTypeProperties( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lOutputID,
            /* [in] */ long lOutputColumnID,
            /* [in] */ enum /* external definition not present */ DataType eDataType,
            /* [in] */ long lLength,
            /* [in] */ long lPrecision,
            /* [in] */ long lScale,
            /* [in] */ long lCodePage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostMapInputColumn( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lInputID,
            /* [in] */ long lInputColumnID,
            /* [in] */ long lExternalMetadataColumnID,
            /* [retval][out] */ IDTSExternalMetadataColumn100 **ppIDTSExternalMetadataColumn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostMapOutputColumn( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lOutputID,
            /* [in] */ long lOutputColumnID,
            /* [in] */ long lExternalMetadataColumnID,
            /* [in] */ VARIANT_BOOL bMatch,
            /* [retval][out] */ IDTSExternalMetadataColumn100 **ppIDTSExternalMetadataColumn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostDescribeRedirectedErrorCode( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ HRESULT hrErrorCode,
            /* [retval][out] */ BSTR *pbstrDesc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostInsertExternalMetadataColumnAt( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lID,
            /* [in] */ long lExternalMetadataColumnIndex,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrDescription,
            /* [retval][out] */ IDTSExternalMetadataColumn100 **ppIDTSExternalMetadataColumn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostDeleteExternalMetadataColumn( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lID,
            /* [in] */ long lExternalMetadataColumnID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostSetExternalMetadataColumnProperty( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lID,
            /* [in] */ long lExternalMetadataColumnID,
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ VARIANT vtValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostSetExternalMetadataColumnDataTypeProperties( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lID,
            /* [in] */ long lExternalMetadataColumnID,
            /* [in] */ enum /* external definition not present */ DataType eDataType,
            /* [in] */ long lLength,
            /* [in] */ long lPrecision,
            /* [in] */ long lScale,
            /* [in] */ long lCodePage) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_HostComponentMetaData( 
            /* [in] */ IDTSComponentMetaData100 *pIDTSComponentMetaData) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_HostVariableDispenser( 
            /* [in] */ /* external definition not present */ IDTSVariableDispenser100 *pIDTSVariableDispenser) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_HostBufferManager( 
            /* [in] */ IDTSBufferManager100 *pIDTSBufferManager) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_HostEventInfos( 
            /* [in] */ /* external definition not present */ IDTSEventInfos100 *pIDTSEventInfos) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_HostReferenceTracker( 
            /* [in] */ /* external definition not present */ IDTSObjectReferenceTracker100 *pIDTSObjectReferenceTracker) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_HostLogEntryInfos( 
            /* [in] */ /* external definition not present */ IDTSLogEntryInfos100 *pIDTSLogEntryInfos) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSManagedComponentHost100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSManagedComponentHost100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSManagedComponentHost100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Instantiate )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ BSTR bstrUserComponentTypeName,
            /* [in] */ IDTSComponentMetaData100 *pComponentMetaData,
            /* [in] */ /* external definition not present */ IDTSVariableDispenser100 *pVariableDispenser,
            /* [in] */ IDTSBufferManager100 *pBufferManager,
            /* [in] */ /* external definition not present */ IDTSEventInfos100 *pEventInfos,
            /* [in] */ /* external definition not present */ IDTSObjectReferenceTracker100 *pRefTracker,
            /* [in] */ /* external definition not present */ IDTSLogEntryInfos100 *pLogEntryInfos,
            /* [out] */ enum /* external definition not present */ DTSProductLevel *peProductLevel);
        
        HRESULT ( STDMETHODCALLTYPE *HostPrepareForExecute )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper);
        
        HRESULT ( STDMETHODCALLTYPE *HostPreExecute )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper);
        
        HRESULT ( STDMETHODCALLTYPE *HostPrimeOutput )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lOutputs,
            /* [in] */ SAFEARRAY * psaOutputIDs,
            /* [in] */ SAFEARRAY * psaBuffers,
            /* [in] */ void *ppBufferPacket);
        
        HRESULT ( STDMETHODCALLTYPE *HostProcessInput )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lInputID,
            /* [in] */ IDTSBuffer100 *pDTSBuffer,
            /* [in] */ void *pBufferPacket);
        
        HRESULT ( STDMETHODCALLTYPE *HostPostExecute )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper);
        
        HRESULT ( STDMETHODCALLTYPE *HostCleanup )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper);
        
        HRESULT ( STDMETHODCALLTYPE *HostCheckAndPerformUpgrade )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lPipelineVersion);
        
        HRESULT ( STDMETHODCALLTYPE *HostProvideComponentProperties )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper);
        
        HRESULT ( STDMETHODCALLTYPE *HostReinitializeMetaData )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper);
        
        HRESULT ( STDMETHODCALLTYPE *HostInsertOutputColumnAt )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lOutputID,
            /* [in] */ long lOutputColumnIndex,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrDescription,
            /* [retval][out] */ IDTSOutputColumn100 **ppIDTSOutputColumn);
        
        HRESULT ( STDMETHODCALLTYPE *HostDeleteOutputColumn )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lOutputID,
            /* [in] */ long lOutputColumnID);
        
        HRESULT ( STDMETHODCALLTYPE *HostOnDeletingInputColumn )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lInputID,
            /* [in] */ long lInputColumnID);
        
        HRESULT ( STDMETHODCALLTYPE *HostSetUsageType )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lInputID,
            /* [in] */ IDTSVirtualInput100 *pIDTSVirtualInputObject,
            /* [in] */ long lLineageID,
            /* [in] */ enum DTSUsageType eUsageType,
            /* [retval][out] */ IDTSInputColumn100 **ppIDTSInputColumn);
        
        HRESULT ( STDMETHODCALLTYPE *HostSetComponentProperty )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT vValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty);
        
        HRESULT ( STDMETHODCALLTYPE *HostSetInputProperty )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lInputID,
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT vValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty);
        
        HRESULT ( STDMETHODCALLTYPE *HostSetOutputProperty )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lOutputID,
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT vValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty);
        
        HRESULT ( STDMETHODCALLTYPE *HostSetInputColumnProperty )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lInputID,
            /* [in] */ long lInputColumnID,
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT vValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty);
        
        HRESULT ( STDMETHODCALLTYPE *HostSetOutputColumnProperty )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lOutputID,
            /* [in] */ long lOutputColumnID,
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT vValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty);
        
        HRESULT ( STDMETHODCALLTYPE *HostInsertInput )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ enum DTSInsertPlacement eInsertPlacement,
            /* [in] */ long lInputID,
            /* [retval][out] */ IDTSInput100 **ppIDTSInput);
        
        HRESULT ( STDMETHODCALLTYPE *HostInsertOutput )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ enum DTSInsertPlacement eInsertPlacement,
            /* [in] */ long lOutputID,
            /* [retval][out] */ IDTSOutput100 **ppIDTSOutput);
        
        HRESULT ( STDMETHODCALLTYPE *HostDeleteInput )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lInputID);
        
        HRESULT ( STDMETHODCALLTYPE *HostDeleteOutput )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lOutputID);
        
        HRESULT ( STDMETHODCALLTYPE *HostOnInputPathDetached )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lInputID);
        
        HRESULT ( STDMETHODCALLTYPE *HostOnInputPathAttached )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lInputID);
        
        HRESULT ( STDMETHODCALLTYPE *HostOnOutputPathAttached )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lOutputID);
        
        HRESULT ( STDMETHODCALLTYPE *HostValidate )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [retval][out] */ enum DTSValidationStatus *peValidationStatus);
        
        HRESULT ( STDMETHODCALLTYPE *HostAcquireConnections )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ IUnknown *pTransaction);
        
        HRESULT ( STDMETHODCALLTYPE *HostReleaseConnections )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper);
        
        HRESULT ( STDMETHODCALLTYPE *HostSetOutputColumnDataTypeProperties )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lOutputID,
            /* [in] */ long lOutputColumnID,
            /* [in] */ enum /* external definition not present */ DataType eDataType,
            /* [in] */ long lLength,
            /* [in] */ long lPrecision,
            /* [in] */ long lScale,
            /* [in] */ long lCodePage);
        
        HRESULT ( STDMETHODCALLTYPE *HostMapInputColumn )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lInputID,
            /* [in] */ long lInputColumnID,
            /* [in] */ long lExternalMetadataColumnID,
            /* [retval][out] */ IDTSExternalMetadataColumn100 **ppIDTSExternalMetadataColumn);
        
        HRESULT ( STDMETHODCALLTYPE *HostMapOutputColumn )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lOutputID,
            /* [in] */ long lOutputColumnID,
            /* [in] */ long lExternalMetadataColumnID,
            /* [in] */ VARIANT_BOOL bMatch,
            /* [retval][out] */ IDTSExternalMetadataColumn100 **ppIDTSExternalMetadataColumn);
        
        HRESULT ( STDMETHODCALLTYPE *HostDescribeRedirectedErrorCode )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ HRESULT hrErrorCode,
            /* [retval][out] */ BSTR *pbstrDesc);
        
        HRESULT ( STDMETHODCALLTYPE *HostInsertExternalMetadataColumnAt )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lID,
            /* [in] */ long lExternalMetadataColumnIndex,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrDescription,
            /* [retval][out] */ IDTSExternalMetadataColumn100 **ppIDTSExternalMetadataColumn);
        
        HRESULT ( STDMETHODCALLTYPE *HostDeleteExternalMetadataColumn )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lID,
            /* [in] */ long lExternalMetadataColumnID);
        
        HRESULT ( STDMETHODCALLTYPE *HostSetExternalMetadataColumnProperty )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lID,
            /* [in] */ long lExternalMetadataColumnID,
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ VARIANT vtValue,
            /* [retval][out] */ IDTSCustomProperty100 **ppIDTSCustomProperty);
        
        HRESULT ( STDMETHODCALLTYPE *HostSetExternalMetadataColumnDataTypeProperties )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long lID,
            /* [in] */ long lExternalMetadataColumnID,
            /* [in] */ enum /* external definition not present */ DataType eDataType,
            /* [in] */ long lLength,
            /* [in] */ long lPrecision,
            /* [in] */ long lScale,
            /* [in] */ long lCodePage);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_HostComponentMetaData )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSComponentMetaData100 *pIDTSComponentMetaData);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_HostVariableDispenser )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ /* external definition not present */ IDTSVariableDispenser100 *pIDTSVariableDispenser);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_HostBufferManager )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ IDTSBufferManager100 *pIDTSBufferManager);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_HostEventInfos )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ /* external definition not present */ IDTSEventInfos100 *pIDTSEventInfos);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_HostReferenceTracker )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ /* external definition not present */ IDTSObjectReferenceTracker100 *pIDTSObjectReferenceTracker);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_HostLogEntryInfos )( 
            IDTSManagedComponentHost100 * This,
            /* [in] */ /* external definition not present */ IDTSLogEntryInfos100 *pIDTSLogEntryInfos);
        
        END_INTERFACE
    } IDTSManagedComponentHost100Vtbl;

    interface IDTSManagedComponentHost100
    {
        CONST_VTBL struct IDTSManagedComponentHost100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSManagedComponentHost100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSManagedComponentHost100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSManagedComponentHost100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSManagedComponentHost100_Instantiate(This,bstrUserComponentTypeName,pComponentMetaData,pVariableDispenser,pBufferManager,pEventInfos,pRefTracker,pLogEntryInfos,peProductLevel)	\
    ( (This)->lpVtbl -> Instantiate(This,bstrUserComponentTypeName,pComponentMetaData,pVariableDispenser,pBufferManager,pEventInfos,pRefTracker,pLogEntryInfos,peProductLevel) ) 

#define IDTSManagedComponentHost100_HostPrepareForExecute(This,pWrapper)	\
    ( (This)->lpVtbl -> HostPrepareForExecute(This,pWrapper) ) 

#define IDTSManagedComponentHost100_HostPreExecute(This,pWrapper)	\
    ( (This)->lpVtbl -> HostPreExecute(This,pWrapper) ) 

#define IDTSManagedComponentHost100_HostPrimeOutput(This,pWrapper,lOutputs,psaOutputIDs,psaBuffers,ppBufferPacket)	\
    ( (This)->lpVtbl -> HostPrimeOutput(This,pWrapper,lOutputs,psaOutputIDs,psaBuffers,ppBufferPacket) ) 

#define IDTSManagedComponentHost100_HostProcessInput(This,pWrapper,lInputID,pDTSBuffer,pBufferPacket)	\
    ( (This)->lpVtbl -> HostProcessInput(This,pWrapper,lInputID,pDTSBuffer,pBufferPacket) ) 

#define IDTSManagedComponentHost100_HostPostExecute(This,pWrapper)	\
    ( (This)->lpVtbl -> HostPostExecute(This,pWrapper) ) 

#define IDTSManagedComponentHost100_HostCleanup(This,pWrapper)	\
    ( (This)->lpVtbl -> HostCleanup(This,pWrapper) ) 

#define IDTSManagedComponentHost100_HostCheckAndPerformUpgrade(This,pWrapper,lPipelineVersion)	\
    ( (This)->lpVtbl -> HostCheckAndPerformUpgrade(This,pWrapper,lPipelineVersion) ) 

#define IDTSManagedComponentHost100_HostProvideComponentProperties(This,pWrapper)	\
    ( (This)->lpVtbl -> HostProvideComponentProperties(This,pWrapper) ) 

#define IDTSManagedComponentHost100_HostReinitializeMetaData(This,pWrapper)	\
    ( (This)->lpVtbl -> HostReinitializeMetaData(This,pWrapper) ) 

#define IDTSManagedComponentHost100_HostInsertOutputColumnAt(This,pWrapper,lOutputID,lOutputColumnIndex,bstrName,bstrDescription,ppIDTSOutputColumn)	\
    ( (This)->lpVtbl -> HostInsertOutputColumnAt(This,pWrapper,lOutputID,lOutputColumnIndex,bstrName,bstrDescription,ppIDTSOutputColumn) ) 

#define IDTSManagedComponentHost100_HostDeleteOutputColumn(This,pWrapper,lOutputID,lOutputColumnID)	\
    ( (This)->lpVtbl -> HostDeleteOutputColumn(This,pWrapper,lOutputID,lOutputColumnID) ) 

#define IDTSManagedComponentHost100_HostOnDeletingInputColumn(This,pWrapper,lInputID,lInputColumnID)	\
    ( (This)->lpVtbl -> HostOnDeletingInputColumn(This,pWrapper,lInputID,lInputColumnID) ) 

#define IDTSManagedComponentHost100_HostSetUsageType(This,pWrapper,lInputID,pIDTSVirtualInputObject,lLineageID,eUsageType,ppIDTSInputColumn)	\
    ( (This)->lpVtbl -> HostSetUsageType(This,pWrapper,lInputID,pIDTSVirtualInputObject,lLineageID,eUsageType,ppIDTSInputColumn) ) 

#define IDTSManagedComponentHost100_HostSetComponentProperty(This,pWrapper,PropertyName,vValue,ppIDTSCustomProperty)	\
    ( (This)->lpVtbl -> HostSetComponentProperty(This,pWrapper,PropertyName,vValue,ppIDTSCustomProperty) ) 

#define IDTSManagedComponentHost100_HostSetInputProperty(This,pWrapper,lInputID,PropertyName,vValue,ppIDTSCustomProperty)	\
    ( (This)->lpVtbl -> HostSetInputProperty(This,pWrapper,lInputID,PropertyName,vValue,ppIDTSCustomProperty) ) 

#define IDTSManagedComponentHost100_HostSetOutputProperty(This,pWrapper,lOutputID,PropertyName,vValue,ppIDTSCustomProperty)	\
    ( (This)->lpVtbl -> HostSetOutputProperty(This,pWrapper,lOutputID,PropertyName,vValue,ppIDTSCustomProperty) ) 

#define IDTSManagedComponentHost100_HostSetInputColumnProperty(This,pWrapper,lInputID,lInputColumnID,PropertyName,vValue,ppIDTSCustomProperty)	\
    ( (This)->lpVtbl -> HostSetInputColumnProperty(This,pWrapper,lInputID,lInputColumnID,PropertyName,vValue,ppIDTSCustomProperty) ) 

#define IDTSManagedComponentHost100_HostSetOutputColumnProperty(This,pWrapper,lOutputID,lOutputColumnID,PropertyName,vValue,ppIDTSCustomProperty)	\
    ( (This)->lpVtbl -> HostSetOutputColumnProperty(This,pWrapper,lOutputID,lOutputColumnID,PropertyName,vValue,ppIDTSCustomProperty) ) 

#define IDTSManagedComponentHost100_HostInsertInput(This,pWrapper,eInsertPlacement,lInputID,ppIDTSInput)	\
    ( (This)->lpVtbl -> HostInsertInput(This,pWrapper,eInsertPlacement,lInputID,ppIDTSInput) ) 

#define IDTSManagedComponentHost100_HostInsertOutput(This,pWrapper,eInsertPlacement,lOutputID,ppIDTSOutput)	\
    ( (This)->lpVtbl -> HostInsertOutput(This,pWrapper,eInsertPlacement,lOutputID,ppIDTSOutput) ) 

#define IDTSManagedComponentHost100_HostDeleteInput(This,pWrapper,lInputID)	\
    ( (This)->lpVtbl -> HostDeleteInput(This,pWrapper,lInputID) ) 

#define IDTSManagedComponentHost100_HostDeleteOutput(This,pWrapper,lOutputID)	\
    ( (This)->lpVtbl -> HostDeleteOutput(This,pWrapper,lOutputID) ) 

#define IDTSManagedComponentHost100_HostOnInputPathDetached(This,pWrapper,lInputID)	\
    ( (This)->lpVtbl -> HostOnInputPathDetached(This,pWrapper,lInputID) ) 

#define IDTSManagedComponentHost100_HostOnInputPathAttached(This,pWrapper,lInputID)	\
    ( (This)->lpVtbl -> HostOnInputPathAttached(This,pWrapper,lInputID) ) 

#define IDTSManagedComponentHost100_HostOnOutputPathAttached(This,pWrapper,lOutputID)	\
    ( (This)->lpVtbl -> HostOnOutputPathAttached(This,pWrapper,lOutputID) ) 

#define IDTSManagedComponentHost100_HostValidate(This,pWrapper,peValidationStatus)	\
    ( (This)->lpVtbl -> HostValidate(This,pWrapper,peValidationStatus) ) 

#define IDTSManagedComponentHost100_HostAcquireConnections(This,pWrapper,pTransaction)	\
    ( (This)->lpVtbl -> HostAcquireConnections(This,pWrapper,pTransaction) ) 

#define IDTSManagedComponentHost100_HostReleaseConnections(This,pWrapper)	\
    ( (This)->lpVtbl -> HostReleaseConnections(This,pWrapper) ) 

#define IDTSManagedComponentHost100_HostSetOutputColumnDataTypeProperties(This,pWrapper,lOutputID,lOutputColumnID,eDataType,lLength,lPrecision,lScale,lCodePage)	\
    ( (This)->lpVtbl -> HostSetOutputColumnDataTypeProperties(This,pWrapper,lOutputID,lOutputColumnID,eDataType,lLength,lPrecision,lScale,lCodePage) ) 

#define IDTSManagedComponentHost100_HostMapInputColumn(This,pWrapper,lInputID,lInputColumnID,lExternalMetadataColumnID,ppIDTSExternalMetadataColumn)	\
    ( (This)->lpVtbl -> HostMapInputColumn(This,pWrapper,lInputID,lInputColumnID,lExternalMetadataColumnID,ppIDTSExternalMetadataColumn) ) 

#define IDTSManagedComponentHost100_HostMapOutputColumn(This,pWrapper,lOutputID,lOutputColumnID,lExternalMetadataColumnID,bMatch,ppIDTSExternalMetadataColumn)	\
    ( (This)->lpVtbl -> HostMapOutputColumn(This,pWrapper,lOutputID,lOutputColumnID,lExternalMetadataColumnID,bMatch,ppIDTSExternalMetadataColumn) ) 

#define IDTSManagedComponentHost100_HostDescribeRedirectedErrorCode(This,pWrapper,hrErrorCode,pbstrDesc)	\
    ( (This)->lpVtbl -> HostDescribeRedirectedErrorCode(This,pWrapper,hrErrorCode,pbstrDesc) ) 

#define IDTSManagedComponentHost100_HostInsertExternalMetadataColumnAt(This,pWrapper,lID,lExternalMetadataColumnIndex,bstrName,bstrDescription,ppIDTSExternalMetadataColumn)	\
    ( (This)->lpVtbl -> HostInsertExternalMetadataColumnAt(This,pWrapper,lID,lExternalMetadataColumnIndex,bstrName,bstrDescription,ppIDTSExternalMetadataColumn) ) 

#define IDTSManagedComponentHost100_HostDeleteExternalMetadataColumn(This,pWrapper,lID,lExternalMetadataColumnID)	\
    ( (This)->lpVtbl -> HostDeleteExternalMetadataColumn(This,pWrapper,lID,lExternalMetadataColumnID) ) 

#define IDTSManagedComponentHost100_HostSetExternalMetadataColumnProperty(This,pWrapper,lID,lExternalMetadataColumnID,bstrPropertyName,vtValue,ppIDTSCustomProperty)	\
    ( (This)->lpVtbl -> HostSetExternalMetadataColumnProperty(This,pWrapper,lID,lExternalMetadataColumnID,bstrPropertyName,vtValue,ppIDTSCustomProperty) ) 

#define IDTSManagedComponentHost100_HostSetExternalMetadataColumnDataTypeProperties(This,pWrapper,lID,lExternalMetadataColumnID,eDataType,lLength,lPrecision,lScale,lCodePage)	\
    ( (This)->lpVtbl -> HostSetExternalMetadataColumnDataTypeProperties(This,pWrapper,lID,lExternalMetadataColumnID,eDataType,lLength,lPrecision,lScale,lCodePage) ) 

#define IDTSManagedComponentHost100_put_HostComponentMetaData(This,pIDTSComponentMetaData)	\
    ( (This)->lpVtbl -> put_HostComponentMetaData(This,pIDTSComponentMetaData) ) 

#define IDTSManagedComponentHost100_put_HostVariableDispenser(This,pIDTSVariableDispenser)	\
    ( (This)->lpVtbl -> put_HostVariableDispenser(This,pIDTSVariableDispenser) ) 

#define IDTSManagedComponentHost100_put_HostBufferManager(This,pIDTSBufferManager)	\
    ( (This)->lpVtbl -> put_HostBufferManager(This,pIDTSBufferManager) ) 

#define IDTSManagedComponentHost100_put_HostEventInfos(This,pIDTSEventInfos)	\
    ( (This)->lpVtbl -> put_HostEventInfos(This,pIDTSEventInfos) ) 

#define IDTSManagedComponentHost100_put_HostReferenceTracker(This,pIDTSObjectReferenceTracker)	\
    ( (This)->lpVtbl -> put_HostReferenceTracker(This,pIDTSObjectReferenceTracker) ) 

#define IDTSManagedComponentHost100_put_HostLogEntryInfos(This,pIDTSLogEntryInfos)	\
    ( (This)->lpVtbl -> put_HostLogEntryInfos(This,pIDTSLogEntryInfos) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSManagedComponentHost100_INTERFACE_DEFINED__ */


#ifndef __IDTSManagedComponent100_INTERFACE_DEFINED__
#define __IDTSManagedComponent100_INTERFACE_DEFINED__

/* interface IDTSManagedComponent100 */
/* [unique][helpstring][uuid][oleautomation][object] */ 


EXTERN_C const IID IID_IDTSManagedComponent100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6B3AE827-56B5-4323-B51D-7F90C11B81D1")
    IDTSManagedComponent100 : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_InnerObject( 
            /* [retval][out] */ IUnknown **ppInnerObject) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSManagedComponent100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSManagedComponent100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSManagedComponent100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSManagedComponent100 * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_InnerObject )( 
            IDTSManagedComponent100 * This,
            /* [retval][out] */ IUnknown **ppInnerObject);
        
        END_INTERFACE
    } IDTSManagedComponent100Vtbl;

    interface IDTSManagedComponent100
    {
        CONST_VTBL struct IDTSManagedComponent100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSManagedComponent100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSManagedComponent100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSManagedComponent100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSManagedComponent100_get_InnerObject(This,ppInnerObject)	\
    ( (This)->lpVtbl -> get_InnerObject(This,ppInnerObject) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSManagedComponent100_INTERFACE_DEFINED__ */


#ifndef __IDTSComponentMetaDataCollection100_INTERFACE_DEFINED__
#define __IDTSComponentMetaDataCollection100_INTERFACE_DEFINED__

/* interface IDTSComponentMetaDataCollection100 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDTSComponentMetaDataCollection100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("941CD0E2-AC00-437D-AAEE-C887AA739A60")
    IDTSComponentMetaDataCollection100 : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IDTSComponentMetaData100 **ppIDTSComponentMetaData) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppIUnknownEnum) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *plCount) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE New( 
            /* [retval][out] */ IDTSComponentMetaData100 **ppIDTSComponentMetaData) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NewAt( 
            /* [in] */ long lIndex,
            /* [retval][out] */ IDTSComponentMetaData100 **ppIDTSComponentMetaData) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveObjectByIndex( 
            /* [in] */ VARIANT Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveObjectByID( 
            /* [in] */ long lID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveAll( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetIndex( 
            /* [in] */ long lOldIndex,
            /* [in] */ long lNewIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetObjectByID( 
            /* [in] */ long lID,
            /* [retval][out] */ IDTSComponentMetaData100 **ppIDTSComponentMetaData) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetObjectIndexByID( 
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindObjectByID( 
            /* [in] */ long lID,
            /* [retval][out] */ IDTSComponentMetaData100 **ppIDTSComponentMetaData) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindObjectIndexByID( 
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSComponentMetaDataCollection100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSComponentMetaDataCollection100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSComponentMetaDataCollection100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSComponentMetaDataCollection100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSComponentMetaDataCollection100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSComponentMetaDataCollection100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSComponentMetaDataCollection100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSComponentMetaDataCollection100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IDTSComponentMetaDataCollection100 * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IDTSComponentMetaData100 **ppIDTSComponentMetaData);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDTSComponentMetaDataCollection100 * This,
            /* [retval][out] */ IUnknown **ppIUnknownEnum);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDTSComponentMetaDataCollection100 * This,
            /* [retval][out] */ long *plCount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *New )( 
            IDTSComponentMetaDataCollection100 * This,
            /* [retval][out] */ IDTSComponentMetaData100 **ppIDTSComponentMetaData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NewAt )( 
            IDTSComponentMetaDataCollection100 * This,
            /* [in] */ long lIndex,
            /* [retval][out] */ IDTSComponentMetaData100 **ppIDTSComponentMetaData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveObjectByIndex )( 
            IDTSComponentMetaDataCollection100 * This,
            /* [in] */ VARIANT Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveObjectByID )( 
            IDTSComponentMetaDataCollection100 * This,
            /* [in] */ long lID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveAll )( 
            IDTSComponentMetaDataCollection100 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetIndex )( 
            IDTSComponentMetaDataCollection100 * This,
            /* [in] */ long lOldIndex,
            /* [in] */ long lNewIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetObjectByID )( 
            IDTSComponentMetaDataCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ IDTSComponentMetaData100 **ppIDTSComponentMetaData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetObjectIndexByID )( 
            IDTSComponentMetaDataCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindObjectByID )( 
            IDTSComponentMetaDataCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ IDTSComponentMetaData100 **ppIDTSComponentMetaData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindObjectIndexByID )( 
            IDTSComponentMetaDataCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex);
        
        END_INTERFACE
    } IDTSComponentMetaDataCollection100Vtbl;

    interface IDTSComponentMetaDataCollection100
    {
        CONST_VTBL struct IDTSComponentMetaDataCollection100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSComponentMetaDataCollection100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSComponentMetaDataCollection100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSComponentMetaDataCollection100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSComponentMetaDataCollection100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSComponentMetaDataCollection100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSComponentMetaDataCollection100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSComponentMetaDataCollection100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSComponentMetaDataCollection100_get_Item(This,Index,ppIDTSComponentMetaData)	\
    ( (This)->lpVtbl -> get_Item(This,Index,ppIDTSComponentMetaData) ) 

#define IDTSComponentMetaDataCollection100_get__NewEnum(This,ppIUnknownEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppIUnknownEnum) ) 

#define IDTSComponentMetaDataCollection100_get_Count(This,plCount)	\
    ( (This)->lpVtbl -> get_Count(This,plCount) ) 

#define IDTSComponentMetaDataCollection100_New(This,ppIDTSComponentMetaData)	\
    ( (This)->lpVtbl -> New(This,ppIDTSComponentMetaData) ) 

#define IDTSComponentMetaDataCollection100_NewAt(This,lIndex,ppIDTSComponentMetaData)	\
    ( (This)->lpVtbl -> NewAt(This,lIndex,ppIDTSComponentMetaData) ) 

#define IDTSComponentMetaDataCollection100_RemoveObjectByIndex(This,Index)	\
    ( (This)->lpVtbl -> RemoveObjectByIndex(This,Index) ) 

#define IDTSComponentMetaDataCollection100_RemoveObjectByID(This,lID)	\
    ( (This)->lpVtbl -> RemoveObjectByID(This,lID) ) 

#define IDTSComponentMetaDataCollection100_RemoveAll(This)	\
    ( (This)->lpVtbl -> RemoveAll(This) ) 

#define IDTSComponentMetaDataCollection100_SetIndex(This,lOldIndex,lNewIndex)	\
    ( (This)->lpVtbl -> SetIndex(This,lOldIndex,lNewIndex) ) 

#define IDTSComponentMetaDataCollection100_GetObjectByID(This,lID,ppIDTSComponentMetaData)	\
    ( (This)->lpVtbl -> GetObjectByID(This,lID,ppIDTSComponentMetaData) ) 

#define IDTSComponentMetaDataCollection100_GetObjectIndexByID(This,lID,plIndex)	\
    ( (This)->lpVtbl -> GetObjectIndexByID(This,lID,plIndex) ) 

#define IDTSComponentMetaDataCollection100_FindObjectByID(This,lID,ppIDTSComponentMetaData)	\
    ( (This)->lpVtbl -> FindObjectByID(This,lID,ppIDTSComponentMetaData) ) 

#define IDTSComponentMetaDataCollection100_FindObjectIndexByID(This,lID,plIndex)	\
    ( (This)->lpVtbl -> FindObjectIndexByID(This,lID,plIndex) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSComponentMetaDataCollection100_INTERFACE_DEFINED__ */


#ifndef __IDTSExternalMetadataColumnCollection100_INTERFACE_DEFINED__
#define __IDTSExternalMetadataColumnCollection100_INTERFACE_DEFINED__

/* interface IDTSExternalMetadataColumnCollection100 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDTSExternalMetadataColumnCollection100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EA1D54B3-800D-429A-BB65-E5921A02F886")
    IDTSExternalMetadataColumnCollection100 : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IDTSExternalMetadataColumn100 **ppIDTSExternalMetadataColumn) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppIUnknownEnum) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *plCount) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE New( 
            /* [retval][out] */ IDTSExternalMetadataColumn100 **ppIDTSExternalMetadataColumn) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NewAt( 
            /* [in] */ long lIndex,
            /* [retval][out] */ IDTSExternalMetadataColumn100 **ppIDTSExternalMetadataColumn) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveObjectByIndex( 
            /* [in] */ VARIANT Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveObjectByID( 
            /* [in] */ long lID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveAll( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetIndex( 
            /* [in] */ long lOldIndex,
            /* [in] */ long lNewIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetObjectByID( 
            /* [in] */ long lID,
            /* [retval][out] */ IDTSExternalMetadataColumn100 **ppIDTSExternalMetadataColumn) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetObjectIndexByID( 
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindObjectByID( 
            /* [in] */ long lID,
            /* [retval][out] */ IDTSExternalMetadataColumn100 **ppIDTSExternalMetadataColumn) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindObjectIndexByID( 
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsUsed( 
            /* [retval][out] */ VARIANT_BOOL *pbIsUsed) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsUsed( 
            /* [in] */ VARIANT_BOOL bIsUsed) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSExternalMetadataColumnCollection100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSExternalMetadataColumnCollection100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSExternalMetadataColumnCollection100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSExternalMetadataColumnCollection100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSExternalMetadataColumnCollection100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSExternalMetadataColumnCollection100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSExternalMetadataColumnCollection100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSExternalMetadataColumnCollection100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IDTSExternalMetadataColumnCollection100 * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IDTSExternalMetadataColumn100 **ppIDTSExternalMetadataColumn);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDTSExternalMetadataColumnCollection100 * This,
            /* [retval][out] */ IUnknown **ppIUnknownEnum);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDTSExternalMetadataColumnCollection100 * This,
            /* [retval][out] */ long *plCount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *New )( 
            IDTSExternalMetadataColumnCollection100 * This,
            /* [retval][out] */ IDTSExternalMetadataColumn100 **ppIDTSExternalMetadataColumn);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NewAt )( 
            IDTSExternalMetadataColumnCollection100 * This,
            /* [in] */ long lIndex,
            /* [retval][out] */ IDTSExternalMetadataColumn100 **ppIDTSExternalMetadataColumn);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveObjectByIndex )( 
            IDTSExternalMetadataColumnCollection100 * This,
            /* [in] */ VARIANT Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveObjectByID )( 
            IDTSExternalMetadataColumnCollection100 * This,
            /* [in] */ long lID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveAll )( 
            IDTSExternalMetadataColumnCollection100 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetIndex )( 
            IDTSExternalMetadataColumnCollection100 * This,
            /* [in] */ long lOldIndex,
            /* [in] */ long lNewIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetObjectByID )( 
            IDTSExternalMetadataColumnCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ IDTSExternalMetadataColumn100 **ppIDTSExternalMetadataColumn);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetObjectIndexByID )( 
            IDTSExternalMetadataColumnCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindObjectByID )( 
            IDTSExternalMetadataColumnCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ IDTSExternalMetadataColumn100 **ppIDTSExternalMetadataColumn);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindObjectIndexByID )( 
            IDTSExternalMetadataColumnCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsUsed )( 
            IDTSExternalMetadataColumnCollection100 * This,
            /* [retval][out] */ VARIANT_BOOL *pbIsUsed);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsUsed )( 
            IDTSExternalMetadataColumnCollection100 * This,
            /* [in] */ VARIANT_BOOL bIsUsed);
        
        END_INTERFACE
    } IDTSExternalMetadataColumnCollection100Vtbl;

    interface IDTSExternalMetadataColumnCollection100
    {
        CONST_VTBL struct IDTSExternalMetadataColumnCollection100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSExternalMetadataColumnCollection100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSExternalMetadataColumnCollection100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSExternalMetadataColumnCollection100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSExternalMetadataColumnCollection100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSExternalMetadataColumnCollection100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSExternalMetadataColumnCollection100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSExternalMetadataColumnCollection100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSExternalMetadataColumnCollection100_get_Item(This,Index,ppIDTSExternalMetadataColumn)	\
    ( (This)->lpVtbl -> get_Item(This,Index,ppIDTSExternalMetadataColumn) ) 

#define IDTSExternalMetadataColumnCollection100_get__NewEnum(This,ppIUnknownEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppIUnknownEnum) ) 

#define IDTSExternalMetadataColumnCollection100_get_Count(This,plCount)	\
    ( (This)->lpVtbl -> get_Count(This,plCount) ) 

#define IDTSExternalMetadataColumnCollection100_New(This,ppIDTSExternalMetadataColumn)	\
    ( (This)->lpVtbl -> New(This,ppIDTSExternalMetadataColumn) ) 

#define IDTSExternalMetadataColumnCollection100_NewAt(This,lIndex,ppIDTSExternalMetadataColumn)	\
    ( (This)->lpVtbl -> NewAt(This,lIndex,ppIDTSExternalMetadataColumn) ) 

#define IDTSExternalMetadataColumnCollection100_RemoveObjectByIndex(This,Index)	\
    ( (This)->lpVtbl -> RemoveObjectByIndex(This,Index) ) 

#define IDTSExternalMetadataColumnCollection100_RemoveObjectByID(This,lID)	\
    ( (This)->lpVtbl -> RemoveObjectByID(This,lID) ) 

#define IDTSExternalMetadataColumnCollection100_RemoveAll(This)	\
    ( (This)->lpVtbl -> RemoveAll(This) ) 

#define IDTSExternalMetadataColumnCollection100_SetIndex(This,lOldIndex,lNewIndex)	\
    ( (This)->lpVtbl -> SetIndex(This,lOldIndex,lNewIndex) ) 

#define IDTSExternalMetadataColumnCollection100_GetObjectByID(This,lID,ppIDTSExternalMetadataColumn)	\
    ( (This)->lpVtbl -> GetObjectByID(This,lID,ppIDTSExternalMetadataColumn) ) 

#define IDTSExternalMetadataColumnCollection100_GetObjectIndexByID(This,lID,plIndex)	\
    ( (This)->lpVtbl -> GetObjectIndexByID(This,lID,plIndex) ) 

#define IDTSExternalMetadataColumnCollection100_FindObjectByID(This,lID,ppIDTSExternalMetadataColumn)	\
    ( (This)->lpVtbl -> FindObjectByID(This,lID,ppIDTSExternalMetadataColumn) ) 

#define IDTSExternalMetadataColumnCollection100_FindObjectIndexByID(This,lID,plIndex)	\
    ( (This)->lpVtbl -> FindObjectIndexByID(This,lID,plIndex) ) 

#define IDTSExternalMetadataColumnCollection100_get_IsUsed(This,pbIsUsed)	\
    ( (This)->lpVtbl -> get_IsUsed(This,pbIsUsed) ) 

#define IDTSExternalMetadataColumnCollection100_put_IsUsed(This,bIsUsed)	\
    ( (This)->lpVtbl -> put_IsUsed(This,bIsUsed) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSExternalMetadataColumnCollection100_INTERFACE_DEFINED__ */


#ifndef __IDTSExternalMetadataColumn100_INTERFACE_DEFINED__
#define __IDTSExternalMetadataColumn100_INTERFACE_DEFINED__

/* interface IDTSExternalMetadataColumn100 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDTSExternalMetadataColumn100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FCB1DDF9-F9B3-4958-8E98-E42109F418A4")
    IDTSExternalMetadataColumn100 : public IDTSObject100
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DataType( 
            /* [retval][out] */ enum /* external definition not present */ DataType *peDataType) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DataType( 
            /* [in] */ enum /* external definition not present */ DataType eDataType) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Length( 
            /* [retval][out] */ long *plLength) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Length( 
            /* [in] */ long lLength) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Precision( 
            /* [retval][out] */ long *plPrecision) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Precision( 
            /* [in] */ long lPrecision) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Scale( 
            /* [retval][out] */ long *plScale) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Scale( 
            /* [in] */ long lScale) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CodePage( 
            /* [retval][out] */ long *plCodePage) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CodePage( 
            /* [in] */ long lCodePage) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MappedColumnID( 
            /* [retval][out] */ long *plMappedColumnID) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MappedColumnID( 
            /* [in] */ long lMappedColumnID) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CustomPropertyCollection( 
            /* [retval][out] */ IDTSCustomPropertyCollection100 **ppIDTSCustomPropertyCollection) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSExternalMetadataColumn100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSExternalMetadataColumn100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSExternalMetadataColumn100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSExternalMetadataColumn100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSExternalMetadataColumn100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSExternalMetadataColumn100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSExternalMetadataColumn100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSExternalMetadataColumn100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IDTSExternalMetadataColumn100 * This,
            /* [retval][out] */ long *pID);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ID )( 
            IDTSExternalMetadataColumn100 * This,
            /* [in] */ long ID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IDTSExternalMetadataColumn100 * This,
            /* [retval][out] */ BSTR *pbstrDescription);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            IDTSExternalMetadataColumn100 * This,
            /* [in] */ BSTR bstrDescription);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IDTSExternalMetadataColumn100 * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IDTSExternalMetadataColumn100 * This,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectType )( 
            IDTSExternalMetadataColumn100 * This,
            /* [retval][out] */ enum DTSObjectType *pType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IdentificationString )( 
            IDTSExternalMetadataColumn100 * This,
            /* [retval][out] */ BSTR *pbstrIdentificationString);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataType )( 
            IDTSExternalMetadataColumn100 * This,
            /* [retval][out] */ enum /* external definition not present */ DataType *peDataType);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataType )( 
            IDTSExternalMetadataColumn100 * This,
            /* [in] */ enum /* external definition not present */ DataType eDataType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Length )( 
            IDTSExternalMetadataColumn100 * This,
            /* [retval][out] */ long *plLength);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Length )( 
            IDTSExternalMetadataColumn100 * This,
            /* [in] */ long lLength);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Precision )( 
            IDTSExternalMetadataColumn100 * This,
            /* [retval][out] */ long *plPrecision);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Precision )( 
            IDTSExternalMetadataColumn100 * This,
            /* [in] */ long lPrecision);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Scale )( 
            IDTSExternalMetadataColumn100 * This,
            /* [retval][out] */ long *plScale);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Scale )( 
            IDTSExternalMetadataColumn100 * This,
            /* [in] */ long lScale);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CodePage )( 
            IDTSExternalMetadataColumn100 * This,
            /* [retval][out] */ long *plCodePage);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CodePage )( 
            IDTSExternalMetadataColumn100 * This,
            /* [in] */ long lCodePage);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MappedColumnID )( 
            IDTSExternalMetadataColumn100 * This,
            /* [retval][out] */ long *plMappedColumnID);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MappedColumnID )( 
            IDTSExternalMetadataColumn100 * This,
            /* [in] */ long lMappedColumnID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CustomPropertyCollection )( 
            IDTSExternalMetadataColumn100 * This,
            /* [retval][out] */ IDTSCustomPropertyCollection100 **ppIDTSCustomPropertyCollection);
        
        END_INTERFACE
    } IDTSExternalMetadataColumn100Vtbl;

    interface IDTSExternalMetadataColumn100
    {
        CONST_VTBL struct IDTSExternalMetadataColumn100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSExternalMetadataColumn100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSExternalMetadataColumn100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSExternalMetadataColumn100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSExternalMetadataColumn100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSExternalMetadataColumn100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSExternalMetadataColumn100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSExternalMetadataColumn100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSExternalMetadataColumn100_get_ID(This,pID)	\
    ( (This)->lpVtbl -> get_ID(This,pID) ) 

#define IDTSExternalMetadataColumn100_put_ID(This,ID)	\
    ( (This)->lpVtbl -> put_ID(This,ID) ) 

#define IDTSExternalMetadataColumn100_get_Description(This,pbstrDescription)	\
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) ) 

#define IDTSExternalMetadataColumn100_put_Description(This,bstrDescription)	\
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) ) 

#define IDTSExternalMetadataColumn100_get_Name(This,pbstrName)	\
    ( (This)->lpVtbl -> get_Name(This,pbstrName) ) 

#define IDTSExternalMetadataColumn100_put_Name(This,bstrName)	\
    ( (This)->lpVtbl -> put_Name(This,bstrName) ) 

#define IDTSExternalMetadataColumn100_get_ObjectType(This,pType)	\
    ( (This)->lpVtbl -> get_ObjectType(This,pType) ) 

#define IDTSExternalMetadataColumn100_get_IdentificationString(This,pbstrIdentificationString)	\
    ( (This)->lpVtbl -> get_IdentificationString(This,pbstrIdentificationString) ) 


#define IDTSExternalMetadataColumn100_get_DataType(This,peDataType)	\
    ( (This)->lpVtbl -> get_DataType(This,peDataType) ) 

#define IDTSExternalMetadataColumn100_put_DataType(This,eDataType)	\
    ( (This)->lpVtbl -> put_DataType(This,eDataType) ) 

#define IDTSExternalMetadataColumn100_get_Length(This,plLength)	\
    ( (This)->lpVtbl -> get_Length(This,plLength) ) 

#define IDTSExternalMetadataColumn100_put_Length(This,lLength)	\
    ( (This)->lpVtbl -> put_Length(This,lLength) ) 

#define IDTSExternalMetadataColumn100_get_Precision(This,plPrecision)	\
    ( (This)->lpVtbl -> get_Precision(This,plPrecision) ) 

#define IDTSExternalMetadataColumn100_put_Precision(This,lPrecision)	\
    ( (This)->lpVtbl -> put_Precision(This,lPrecision) ) 

#define IDTSExternalMetadataColumn100_get_Scale(This,plScale)	\
    ( (This)->lpVtbl -> get_Scale(This,plScale) ) 

#define IDTSExternalMetadataColumn100_put_Scale(This,lScale)	\
    ( (This)->lpVtbl -> put_Scale(This,lScale) ) 

#define IDTSExternalMetadataColumn100_get_CodePage(This,plCodePage)	\
    ( (This)->lpVtbl -> get_CodePage(This,plCodePage) ) 

#define IDTSExternalMetadataColumn100_put_CodePage(This,lCodePage)	\
    ( (This)->lpVtbl -> put_CodePage(This,lCodePage) ) 

#define IDTSExternalMetadataColumn100_get_MappedColumnID(This,plMappedColumnID)	\
    ( (This)->lpVtbl -> get_MappedColumnID(This,plMappedColumnID) ) 

#define IDTSExternalMetadataColumn100_put_MappedColumnID(This,lMappedColumnID)	\
    ( (This)->lpVtbl -> put_MappedColumnID(This,lMappedColumnID) ) 

#define IDTSExternalMetadataColumn100_get_CustomPropertyCollection(This,ppIDTSCustomPropertyCollection)	\
    ( (This)->lpVtbl -> get_CustomPropertyCollection(This,ppIDTSCustomPropertyCollection) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSExternalMetadataColumn100_INTERFACE_DEFINED__ */


#ifndef __IDTSFriendlyEnumCollection100_INTERFACE_DEFINED__
#define __IDTSFriendlyEnumCollection100_INTERFACE_DEFINED__

/* interface IDTSFriendlyEnumCollection100 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDTSFriendlyEnumCollection100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AF91D371-BF90-47AE-B210-F01B76407202")
    IDTSFriendlyEnumCollection100 : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IDTSFriendlyEnum100 **ppIDTSFriendlyEnum) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppIUnknownEnum) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *plCount) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsFlags( 
            /* [retval][out] */ VARIANT_BOOL *pbIsFlags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSFriendlyEnumCollection100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSFriendlyEnumCollection100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSFriendlyEnumCollection100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSFriendlyEnumCollection100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSFriendlyEnumCollection100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSFriendlyEnumCollection100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSFriendlyEnumCollection100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSFriendlyEnumCollection100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IDTSFriendlyEnumCollection100 * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IDTSFriendlyEnum100 **ppIDTSFriendlyEnum);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDTSFriendlyEnumCollection100 * This,
            /* [retval][out] */ IUnknown **ppIUnknownEnum);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDTSFriendlyEnumCollection100 * This,
            /* [retval][out] */ long *plCount);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsFlags )( 
            IDTSFriendlyEnumCollection100 * This,
            /* [retval][out] */ VARIANT_BOOL *pbIsFlags);
        
        END_INTERFACE
    } IDTSFriendlyEnumCollection100Vtbl;

    interface IDTSFriendlyEnumCollection100
    {
        CONST_VTBL struct IDTSFriendlyEnumCollection100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSFriendlyEnumCollection100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSFriendlyEnumCollection100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSFriendlyEnumCollection100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSFriendlyEnumCollection100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSFriendlyEnumCollection100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSFriendlyEnumCollection100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSFriendlyEnumCollection100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSFriendlyEnumCollection100_get_Item(This,Index,ppIDTSFriendlyEnum)	\
    ( (This)->lpVtbl -> get_Item(This,Index,ppIDTSFriendlyEnum) ) 

#define IDTSFriendlyEnumCollection100_get__NewEnum(This,ppIUnknownEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppIUnknownEnum) ) 

#define IDTSFriendlyEnumCollection100_get_Count(This,plCount)	\
    ( (This)->lpVtbl -> get_Count(This,plCount) ) 

#define IDTSFriendlyEnumCollection100_get_IsFlags(This,pbIsFlags)	\
    ( (This)->lpVtbl -> get_IsFlags(This,pbIsFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSFriendlyEnumCollection100_INTERFACE_DEFINED__ */


#ifndef __IDTSFriendlyEnum100_INTERFACE_DEFINED__
#define __IDTSFriendlyEnum100_INTERFACE_DEFINED__

/* interface IDTSFriendlyEnum100 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDTSFriendlyEnum100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6B3E489C-E74F-4007-9764-7E6BD1EC6EE2")
    IDTSFriendlyEnum100 : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pbstrFriendlyName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ long *plEnumValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSFriendlyEnum100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSFriendlyEnum100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSFriendlyEnum100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSFriendlyEnum100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSFriendlyEnum100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSFriendlyEnum100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSFriendlyEnum100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSFriendlyEnum100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IDTSFriendlyEnum100 * This,
            /* [retval][out] */ BSTR *pbstrFriendlyName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            IDTSFriendlyEnum100 * This,
            /* [retval][out] */ long *plEnumValue);
        
        END_INTERFACE
    } IDTSFriendlyEnum100Vtbl;

    interface IDTSFriendlyEnum100
    {
        CONST_VTBL struct IDTSFriendlyEnum100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSFriendlyEnum100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSFriendlyEnum100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSFriendlyEnum100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSFriendlyEnum100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSFriendlyEnum100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSFriendlyEnum100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSFriendlyEnum100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSFriendlyEnum100_get_Name(This,pbstrFriendlyName)	\
    ( (This)->lpVtbl -> get_Name(This,pbstrFriendlyName) ) 

#define IDTSFriendlyEnum100_get_Value(This,plEnumValue)	\
    ( (This)->lpVtbl -> get_Value(This,plEnumValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSFriendlyEnum100_INTERFACE_DEFINED__ */


#ifndef __IDTSPathCollection100_INTERFACE_DEFINED__
#define __IDTSPathCollection100_INTERFACE_DEFINED__

/* interface IDTSPathCollection100 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDTSPathCollection100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A923B10F-1D4C-4AD0-82EE-212262BEE0AC")
    IDTSPathCollection100 : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IDTSPath100 **ppIDTSPath) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppIUnknownEnum) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *plCount) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE New( 
            /* [retval][out] */ IDTSPath100 **ppIDTSPath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NewAt( 
            /* [in] */ long lIndex,
            /* [retval][out] */ IDTSPath100 **ppIDTSPath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveObjectByIndex( 
            /* [in] */ VARIANT Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveObjectByID( 
            /* [in] */ long lID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveAll( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetIndex( 
            /* [in] */ long lOldIndex,
            /* [in] */ long lNewIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetObjectByID( 
            /* [in] */ long lID,
            /* [retval][out] */ IDTSPath100 **ppIDTSPath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetObjectIndexByID( 
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindObjectByID( 
            /* [in] */ long lID,
            /* [retval][out] */ IDTSPath100 **ppIDTSPath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindObjectIndexByID( 
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSPathCollection100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSPathCollection100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSPathCollection100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSPathCollection100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSPathCollection100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSPathCollection100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSPathCollection100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSPathCollection100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IDTSPathCollection100 * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IDTSPath100 **ppIDTSPath);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDTSPathCollection100 * This,
            /* [retval][out] */ IUnknown **ppIUnknownEnum);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDTSPathCollection100 * This,
            /* [retval][out] */ long *plCount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *New )( 
            IDTSPathCollection100 * This,
            /* [retval][out] */ IDTSPath100 **ppIDTSPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NewAt )( 
            IDTSPathCollection100 * This,
            /* [in] */ long lIndex,
            /* [retval][out] */ IDTSPath100 **ppIDTSPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveObjectByIndex )( 
            IDTSPathCollection100 * This,
            /* [in] */ VARIANT Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveObjectByID )( 
            IDTSPathCollection100 * This,
            /* [in] */ long lID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveAll )( 
            IDTSPathCollection100 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetIndex )( 
            IDTSPathCollection100 * This,
            /* [in] */ long lOldIndex,
            /* [in] */ long lNewIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetObjectByID )( 
            IDTSPathCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ IDTSPath100 **ppIDTSPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetObjectIndexByID )( 
            IDTSPathCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindObjectByID )( 
            IDTSPathCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ IDTSPath100 **ppIDTSPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindObjectIndexByID )( 
            IDTSPathCollection100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ long *plIndex);
        
        END_INTERFACE
    } IDTSPathCollection100Vtbl;

    interface IDTSPathCollection100
    {
        CONST_VTBL struct IDTSPathCollection100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSPathCollection100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSPathCollection100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSPathCollection100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSPathCollection100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSPathCollection100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSPathCollection100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSPathCollection100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSPathCollection100_get_Item(This,Index,ppIDTSPath)	\
    ( (This)->lpVtbl -> get_Item(This,Index,ppIDTSPath) ) 

#define IDTSPathCollection100_get__NewEnum(This,ppIUnknownEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppIUnknownEnum) ) 

#define IDTSPathCollection100_get_Count(This,plCount)	\
    ( (This)->lpVtbl -> get_Count(This,plCount) ) 

#define IDTSPathCollection100_New(This,ppIDTSPath)	\
    ( (This)->lpVtbl -> New(This,ppIDTSPath) ) 

#define IDTSPathCollection100_NewAt(This,lIndex,ppIDTSPath)	\
    ( (This)->lpVtbl -> NewAt(This,lIndex,ppIDTSPath) ) 

#define IDTSPathCollection100_RemoveObjectByIndex(This,Index)	\
    ( (This)->lpVtbl -> RemoveObjectByIndex(This,Index) ) 

#define IDTSPathCollection100_RemoveObjectByID(This,lID)	\
    ( (This)->lpVtbl -> RemoveObjectByID(This,lID) ) 

#define IDTSPathCollection100_RemoveAll(This)	\
    ( (This)->lpVtbl -> RemoveAll(This) ) 

#define IDTSPathCollection100_SetIndex(This,lOldIndex,lNewIndex)	\
    ( (This)->lpVtbl -> SetIndex(This,lOldIndex,lNewIndex) ) 

#define IDTSPathCollection100_GetObjectByID(This,lID,ppIDTSPath)	\
    ( (This)->lpVtbl -> GetObjectByID(This,lID,ppIDTSPath) ) 

#define IDTSPathCollection100_GetObjectIndexByID(This,lID,plIndex)	\
    ( (This)->lpVtbl -> GetObjectIndexByID(This,lID,plIndex) ) 

#define IDTSPathCollection100_FindObjectByID(This,lID,ppIDTSPath)	\
    ( (This)->lpVtbl -> FindObjectByID(This,lID,ppIDTSPath) ) 

#define IDTSPathCollection100_FindObjectIndexByID(This,lID,plIndex)	\
    ( (This)->lpVtbl -> FindObjectIndexByID(This,lID,plIndex) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSPathCollection100_INTERFACE_DEFINED__ */


#ifndef __IDTSBuffer100_INTERFACE_DEFINED__
#define __IDTSBuffer100_INTERFACE_DEFINED__

/* interface IDTSBuffer100 */
/* [unique][helpstring][uuid][object] */ 




EXTERN_C const IID IID_IDTSBuffer100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C52D4833-C82E-4853-B88B-6B523AEE7735")
    IDTSBuffer100 : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DirectRow( 
            /* [in] */ DTP_HROW hRow,
            /* [in] */ long lOutputID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveRow( 
            /* [in] */ DTP_HROW hFrom,
            /* [in] */ DTP_HROW hTo) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SwapRows( 
            /* [in] */ DTP_HROW hOne,
            /* [in] */ DTP_HROW hOther) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetType( 
            /* [retval][out] */ DTP_HBUFFERTYPE *phBufferType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LockData( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UnlockData( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetRowCount( 
            /* [retval][out] */ DWORD *pdwRowCount) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetColumnCount( 
            /* [retval][out] */ DWORD *pdwColumnCount) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetColumnInfo( 
            /* [in] */ DTP_HCOL hCol,
            /* [out][in] */ DTP_BUFFCOL *pCol) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetBoundaryInfo( 
            /* [out] */ DWORD *pdwCols,
            /* [out] */ DWORD *pdwMaxRows) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddRow( 
            /* [unique][out][in] */ BYTE **ppRowStart,
            /* [retval][out] */ DTP_HROW *phRow) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveRow( 
            /* [in] */ DTP_HROW hRow) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetID( 
            /* [retval][out] */ DTP_HBUFFER *phID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetManager( 
            /* [retval][out] */ IDTSBufferManager100 **ppManager) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetData( 
            /* [in] */ DTP_HROW hRow,
            /* [in] */ DTP_HCOL hCol,
            /* [retval][out] */ struct /* external definition not present */ DTP_VARIANT *pData) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetDataByRef( 
            /* [in] */ DTP_HROW hRow,
            /* [in] */ DTP_HCOL hCol,
            /* [retval][out] */ struct /* external definition not present */ DTP_VARIANT *pData) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetData( 
            /* [in] */ DTP_HROW hRow,
            /* [in] */ DTP_HCOL hCol,
            /* [in] */ /* external definition not present */ PDTP_VARIANT pData) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetBLOBLength( 
            /* [in] */ DTP_HROW hRow,
            /* [in] */ DTP_HCOL hCol,
            /* [out] */ DWORD *pdwBytes) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddBLOBData( 
            /* [in] */ DTP_HROW hRow,
            /* [in] */ DTP_HCOL hCol,
            /* [size_is][in] */ BYTE *lpData,
            /* [in] */ DWORD dwLength) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetBLOBData( 
            /* [in] */ DTP_HROW hRow,
            /* [in] */ DTP_HCOL hCol,
            /* [in] */ DWORD dwOffset,
            /* [size_is][in] */ BYTE *lpPointer,
            /* [in] */ DWORD dwLength,
            /* [out] */ DWORD *lpdwWritten) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetBLOBStream( 
            /* [in] */ DTP_HROW hRow,
            /* [in] */ DTP_HCOL hCol,
            /* [retval][out] */ IStream **pIStream) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetBLOBFromStream( 
            /* [in] */ DTP_HROW hRow,
            /* [in] */ DTP_HCOL hCol,
            /* [in] */ ISequentialStream *pIStream) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ResetBLOBData( 
            /* [in] */ DTP_HROW hRow,
            /* [in] */ DTP_HCOL hCol) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetBLOBFromObject( 
            /* [in] */ DTP_HROW hRow,
            /* [in] */ DTP_HCOL hCol,
            /* [in] */ IDTSBLOBObject100 *pIDTSBLOBObject) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetBLOBObject( 
            /* [in] */ DTP_HROW hRow,
            /* [in] */ DTP_HCOL hCol,
            /* [retval][out] */ IDTSBLOBObject100 **ppIDTSBLOBObject) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsNull( 
            /* [in] */ DTP_HROW hRow,
            /* [in] */ DTP_HCOL hCol,
            /* [out][in] */ VARIANT_BOOL *pfNull) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetStatus( 
            /* [in] */ DTP_HROW hRow,
            /* [in] */ DTP_HCOL hCol,
            /* [in] */ DTPSTATUS dbStatus) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetStatus( 
            /* [in] */ DTP_HROW hRow,
            /* [in] */ DTP_HCOL hCol,
            /* [out] */ DTPSTATUS *pDBStatus) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PrepareDataStatusForInsert( 
            /* [in] */ DTP_HROW hRow) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetEndOfRowset( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsEndOfRowset( 
            /* [retval][out] */ VARIANT_BOOL *pfEOR) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clone( 
            /* [in] */ IDTSComponentMetaData100 *pOwner,
            /* [retval][out] */ IDTSBuffer100 **ppNewBuffer) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetRowDataBytes( 
            /* [in] */ DTP_HROW hRow,
            /* [annotation][out] */ 
            __out  long *plCB,
            /* [annotation][out] */ 
            __deref_out_bcount_full(*plCB)  BYTE **pData) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetRowStarts( 
            /* [in] */ DWORD dwRowsRequested,
            /* [annotation][size_is][out] */ 
            __out_bcount(dwRowsRequested*sizeof(LPVOID))  BYTE *pbRowStarts[  ]) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DirectErrorRow( 
            DTP_HROW hRow,
            long lOutputID,
            long lErrorCode,
            long lErrorColumn) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetErrorInfo( 
            DTP_HROW hRow,
            long lOutputID,
            long lErrorCode,
            long lErrorColumn) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFlatMemory( 
            /* [retval][out] */ BYTE **pBuffer) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSBuffer100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSBuffer100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSBuffer100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSBuffer100 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DirectRow )( 
            IDTSBuffer100 * This,
            /* [in] */ DTP_HROW hRow,
            /* [in] */ long lOutputID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveRow )( 
            IDTSBuffer100 * This,
            /* [in] */ DTP_HROW hFrom,
            /* [in] */ DTP_HROW hTo);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SwapRows )( 
            IDTSBuffer100 * This,
            /* [in] */ DTP_HROW hOne,
            /* [in] */ DTP_HROW hOther);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetType )( 
            IDTSBuffer100 * This,
            /* [retval][out] */ DTP_HBUFFERTYPE *phBufferType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LockData )( 
            IDTSBuffer100 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UnlockData )( 
            IDTSBuffer100 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRowCount )( 
            IDTSBuffer100 * This,
            /* [retval][out] */ DWORD *pdwRowCount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetColumnCount )( 
            IDTSBuffer100 * This,
            /* [retval][out] */ DWORD *pdwColumnCount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetColumnInfo )( 
            IDTSBuffer100 * This,
            /* [in] */ DTP_HCOL hCol,
            /* [out][in] */ DTP_BUFFCOL *pCol);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetBoundaryInfo )( 
            IDTSBuffer100 * This,
            /* [out] */ DWORD *pdwCols,
            /* [out] */ DWORD *pdwMaxRows);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddRow )( 
            IDTSBuffer100 * This,
            /* [unique][out][in] */ BYTE **ppRowStart,
            /* [retval][out] */ DTP_HROW *phRow);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveRow )( 
            IDTSBuffer100 * This,
            /* [in] */ DTP_HROW hRow);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetID )( 
            IDTSBuffer100 * This,
            /* [retval][out] */ DTP_HBUFFER *phID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetManager )( 
            IDTSBuffer100 * This,
            /* [retval][out] */ IDTSBufferManager100 **ppManager);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetData )( 
            IDTSBuffer100 * This,
            /* [in] */ DTP_HROW hRow,
            /* [in] */ DTP_HCOL hCol,
            /* [retval][out] */ struct /* external definition not present */ DTP_VARIANT *pData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDataByRef )( 
            IDTSBuffer100 * This,
            /* [in] */ DTP_HROW hRow,
            /* [in] */ DTP_HCOL hCol,
            /* [retval][out] */ struct /* external definition not present */ DTP_VARIANT *pData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetData )( 
            IDTSBuffer100 * This,
            /* [in] */ DTP_HROW hRow,
            /* [in] */ DTP_HCOL hCol,
            /* [in] */ /* external definition not present */ PDTP_VARIANT pData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetBLOBLength )( 
            IDTSBuffer100 * This,
            /* [in] */ DTP_HROW hRow,
            /* [in] */ DTP_HCOL hCol,
            /* [out] */ DWORD *pdwBytes);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddBLOBData )( 
            IDTSBuffer100 * This,
            /* [in] */ DTP_HROW hRow,
            /* [in] */ DTP_HCOL hCol,
            /* [size_is][in] */ BYTE *lpData,
            /* [in] */ DWORD dwLength);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetBLOBData )( 
            IDTSBuffer100 * This,
            /* [in] */ DTP_HROW hRow,
            /* [in] */ DTP_HCOL hCol,
            /* [in] */ DWORD dwOffset,
            /* [size_is][in] */ BYTE *lpPointer,
            /* [in] */ DWORD dwLength,
            /* [out] */ DWORD *lpdwWritten);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetBLOBStream )( 
            IDTSBuffer100 * This,
            /* [in] */ DTP_HROW hRow,
            /* [in] */ DTP_HCOL hCol,
            /* [retval][out] */ IStream **pIStream);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetBLOBFromStream )( 
            IDTSBuffer100 * This,
            /* [in] */ DTP_HROW hRow,
            /* [in] */ DTP_HCOL hCol,
            /* [in] */ ISequentialStream *pIStream);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ResetBLOBData )( 
            IDTSBuffer100 * This,
            /* [in] */ DTP_HROW hRow,
            /* [in] */ DTP_HCOL hCol);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetBLOBFromObject )( 
            IDTSBuffer100 * This,
            /* [in] */ DTP_HROW hRow,
            /* [in] */ DTP_HCOL hCol,
            /* [in] */ IDTSBLOBObject100 *pIDTSBLOBObject);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetBLOBObject )( 
            IDTSBuffer100 * This,
            /* [in] */ DTP_HROW hRow,
            /* [in] */ DTP_HCOL hCol,
            /* [retval][out] */ IDTSBLOBObject100 **ppIDTSBLOBObject);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsNull )( 
            IDTSBuffer100 * This,
            /* [in] */ DTP_HROW hRow,
            /* [in] */ DTP_HCOL hCol,
            /* [out][in] */ VARIANT_BOOL *pfNull);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetStatus )( 
            IDTSBuffer100 * This,
            /* [in] */ DTP_HROW hRow,
            /* [in] */ DTP_HCOL hCol,
            /* [in] */ DTPSTATUS dbStatus);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatus )( 
            IDTSBuffer100 * This,
            /* [in] */ DTP_HROW hRow,
            /* [in] */ DTP_HCOL hCol,
            /* [out] */ DTPSTATUS *pDBStatus);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PrepareDataStatusForInsert )( 
            IDTSBuffer100 * This,
            /* [in] */ DTP_HROW hRow);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetEndOfRowset )( 
            IDTSBuffer100 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsEndOfRowset )( 
            IDTSBuffer100 * This,
            /* [retval][out] */ VARIANT_BOOL *pfEOR);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IDTSBuffer100 * This,
            /* [in] */ IDTSComponentMetaData100 *pOwner,
            /* [retval][out] */ IDTSBuffer100 **ppNewBuffer);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRowDataBytes )( 
            IDTSBuffer100 * This,
            /* [in] */ DTP_HROW hRow,
            /* [annotation][out] */ 
            __out  long *plCB,
            /* [annotation][out] */ 
            __deref_out_bcount_full(*plCB)  BYTE **pData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRowStarts )( 
            IDTSBuffer100 * This,
            /* [in] */ DWORD dwRowsRequested,
            /* [annotation][size_is][out] */ 
            __out_bcount(dwRowsRequested*sizeof(LPVOID))  BYTE *pbRowStarts[  ]);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DirectErrorRow )( 
            IDTSBuffer100 * This,
            DTP_HROW hRow,
            long lOutputID,
            long lErrorCode,
            long lErrorColumn);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetErrorInfo )( 
            IDTSBuffer100 * This,
            DTP_HROW hRow,
            long lOutputID,
            long lErrorCode,
            long lErrorColumn);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFlatMemory )( 
            IDTSBuffer100 * This,
            /* [retval][out] */ BYTE **pBuffer);
        
        END_INTERFACE
    } IDTSBuffer100Vtbl;

    interface IDTSBuffer100
    {
        CONST_VTBL struct IDTSBuffer100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSBuffer100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSBuffer100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSBuffer100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSBuffer100_DirectRow(This,hRow,lOutputID)	\
    ( (This)->lpVtbl -> DirectRow(This,hRow,lOutputID) ) 

#define IDTSBuffer100_MoveRow(This,hFrom,hTo)	\
    ( (This)->lpVtbl -> MoveRow(This,hFrom,hTo) ) 

#define IDTSBuffer100_SwapRows(This,hOne,hOther)	\
    ( (This)->lpVtbl -> SwapRows(This,hOne,hOther) ) 

#define IDTSBuffer100_GetType(This,phBufferType)	\
    ( (This)->lpVtbl -> GetType(This,phBufferType) ) 

#define IDTSBuffer100_LockData(This)	\
    ( (This)->lpVtbl -> LockData(This) ) 

#define IDTSBuffer100_UnlockData(This)	\
    ( (This)->lpVtbl -> UnlockData(This) ) 

#define IDTSBuffer100_GetRowCount(This,pdwRowCount)	\
    ( (This)->lpVtbl -> GetRowCount(This,pdwRowCount) ) 

#define IDTSBuffer100_GetColumnCount(This,pdwColumnCount)	\
    ( (This)->lpVtbl -> GetColumnCount(This,pdwColumnCount) ) 

#define IDTSBuffer100_GetColumnInfo(This,hCol,pCol)	\
    ( (This)->lpVtbl -> GetColumnInfo(This,hCol,pCol) ) 

#define IDTSBuffer100_GetBoundaryInfo(This,pdwCols,pdwMaxRows)	\
    ( (This)->lpVtbl -> GetBoundaryInfo(This,pdwCols,pdwMaxRows) ) 

#define IDTSBuffer100_AddRow(This,ppRowStart,phRow)	\
    ( (This)->lpVtbl -> AddRow(This,ppRowStart,phRow) ) 

#define IDTSBuffer100_RemoveRow(This,hRow)	\
    ( (This)->lpVtbl -> RemoveRow(This,hRow) ) 

#define IDTSBuffer100_GetID(This,phID)	\
    ( (This)->lpVtbl -> GetID(This,phID) ) 

#define IDTSBuffer100_GetManager(This,ppManager)	\
    ( (This)->lpVtbl -> GetManager(This,ppManager) ) 

#define IDTSBuffer100_GetData(This,hRow,hCol,pData)	\
    ( (This)->lpVtbl -> GetData(This,hRow,hCol,pData) ) 

#define IDTSBuffer100_GetDataByRef(This,hRow,hCol,pData)	\
    ( (This)->lpVtbl -> GetDataByRef(This,hRow,hCol,pData) ) 

#define IDTSBuffer100_SetData(This,hRow,hCol,pData)	\
    ( (This)->lpVtbl -> SetData(This,hRow,hCol,pData) ) 

#define IDTSBuffer100_GetBLOBLength(This,hRow,hCol,pdwBytes)	\
    ( (This)->lpVtbl -> GetBLOBLength(This,hRow,hCol,pdwBytes) ) 

#define IDTSBuffer100_AddBLOBData(This,hRow,hCol,lpData,dwLength)	\
    ( (This)->lpVtbl -> AddBLOBData(This,hRow,hCol,lpData,dwLength) ) 

#define IDTSBuffer100_GetBLOBData(This,hRow,hCol,dwOffset,lpPointer,dwLength,lpdwWritten)	\
    ( (This)->lpVtbl -> GetBLOBData(This,hRow,hCol,dwOffset,lpPointer,dwLength,lpdwWritten) ) 

#define IDTSBuffer100_GetBLOBStream(This,hRow,hCol,pIStream)	\
    ( (This)->lpVtbl -> GetBLOBStream(This,hRow,hCol,pIStream) ) 

#define IDTSBuffer100_SetBLOBFromStream(This,hRow,hCol,pIStream)	\
    ( (This)->lpVtbl -> SetBLOBFromStream(This,hRow,hCol,pIStream) ) 

#define IDTSBuffer100_ResetBLOBData(This,hRow,hCol)	\
    ( (This)->lpVtbl -> ResetBLOBData(This,hRow,hCol) ) 

#define IDTSBuffer100_SetBLOBFromObject(This,hRow,hCol,pIDTSBLOBObject)	\
    ( (This)->lpVtbl -> SetBLOBFromObject(This,hRow,hCol,pIDTSBLOBObject) ) 

#define IDTSBuffer100_GetBLOBObject(This,hRow,hCol,ppIDTSBLOBObject)	\
    ( (This)->lpVtbl -> GetBLOBObject(This,hRow,hCol,ppIDTSBLOBObject) ) 

#define IDTSBuffer100_IsNull(This,hRow,hCol,pfNull)	\
    ( (This)->lpVtbl -> IsNull(This,hRow,hCol,pfNull) ) 

#define IDTSBuffer100_SetStatus(This,hRow,hCol,dbStatus)	\
    ( (This)->lpVtbl -> SetStatus(This,hRow,hCol,dbStatus) ) 

#define IDTSBuffer100_GetStatus(This,hRow,hCol,pDBStatus)	\
    ( (This)->lpVtbl -> GetStatus(This,hRow,hCol,pDBStatus) ) 

#define IDTSBuffer100_PrepareDataStatusForInsert(This,hRow)	\
    ( (This)->lpVtbl -> PrepareDataStatusForInsert(This,hRow) ) 

#define IDTSBuffer100_SetEndOfRowset(This)	\
    ( (This)->lpVtbl -> SetEndOfRowset(This) ) 

#define IDTSBuffer100_IsEndOfRowset(This,pfEOR)	\
    ( (This)->lpVtbl -> IsEndOfRowset(This,pfEOR) ) 

#define IDTSBuffer100_Clone(This,pOwner,ppNewBuffer)	\
    ( (This)->lpVtbl -> Clone(This,pOwner,ppNewBuffer) ) 

#define IDTSBuffer100_GetRowDataBytes(This,hRow,plCB,pData)	\
    ( (This)->lpVtbl -> GetRowDataBytes(This,hRow,plCB,pData) ) 

#define IDTSBuffer100_GetRowStarts(This,dwRowsRequested,pbRowStarts)	\
    ( (This)->lpVtbl -> GetRowStarts(This,dwRowsRequested,pbRowStarts) ) 

#define IDTSBuffer100_DirectErrorRow(This,hRow,lOutputID,lErrorCode,lErrorColumn)	\
    ( (This)->lpVtbl -> DirectErrorRow(This,hRow,lOutputID,lErrorCode,lErrorColumn) ) 

#define IDTSBuffer100_SetErrorInfo(This,hRow,lOutputID,lErrorCode,lErrorColumn)	\
    ( (This)->lpVtbl -> SetErrorInfo(This,hRow,lOutputID,lErrorCode,lErrorColumn) ) 

#define IDTSBuffer100_GetFlatMemory(This,pBuffer)	\
    ( (This)->lpVtbl -> GetFlatMemory(This,pBuffer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSBuffer100_INTERFACE_DEFINED__ */


#ifndef __IDTSBufferManagerInitialize100_INTERFACE_DEFINED__
#define __IDTSBufferManagerInitialize100_INTERFACE_DEFINED__

/* interface IDTSBufferManagerInitialize100 */
/* [unique][helpstring][hidden][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IDTSBufferManagerInitialize100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2F25DA28-DE0E-40F8-B5AD-5E772364C4D6")
    IDTSBufferManagerInitialize100 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetEventInterfaces( 
            /* external definition not present */ IDTSInfoEvents100 *pEvents,
            /* external definition not present */ IDTSLogging100 *pLogging) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTempStorageLocations( 
            BSTR bstrBlobStorage,
            BSTR bstrTempStorage) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSBufferManagerInitialize100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSBufferManagerInitialize100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSBufferManagerInitialize100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSBufferManagerInitialize100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetEventInterfaces )( 
            IDTSBufferManagerInitialize100 * This,
            /* external definition not present */ IDTSInfoEvents100 *pEvents,
            /* external definition not present */ IDTSLogging100 *pLogging);
        
        HRESULT ( STDMETHODCALLTYPE *SetTempStorageLocations )( 
            IDTSBufferManagerInitialize100 * This,
            BSTR bstrBlobStorage,
            BSTR bstrTempStorage);
        
        END_INTERFACE
    } IDTSBufferManagerInitialize100Vtbl;

    interface IDTSBufferManagerInitialize100
    {
        CONST_VTBL struct IDTSBufferManagerInitialize100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSBufferManagerInitialize100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSBufferManagerInitialize100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSBufferManagerInitialize100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSBufferManagerInitialize100_SetEventInterfaces(This,pEvents,pLogging)	\
    ( (This)->lpVtbl -> SetEventInterfaces(This,pEvents,pLogging) ) 

#define IDTSBufferManagerInitialize100_SetTempStorageLocations(This,bstrBlobStorage,bstrTempStorage)	\
    ( (This)->lpVtbl -> SetTempStorageLocations(This,bstrBlobStorage,bstrTempStorage) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSBufferManagerInitialize100_INTERFACE_DEFINED__ */


#ifndef __IDTSBufferManager100_INTERFACE_DEFINED__
#define __IDTSBufferManager100_INTERFACE_DEFINED__

/* interface IDTSBufferManager100 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDTSBufferManager100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C16F500A-3A1C-423D-8ADF-A987C2D43600")
    IDTSBufferManager100 : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RegisterBufferType( 
            /* [in] */ int cCols,
            /* [size_is][in] */ DTP_BUFFCOL rgCols[  ],
            /* [in] */ LONG lMaxRows,
            /* [in] */ DWORD dwCreationFlags,
            /* [retval][out] */ DTP_HBUFFERTYPE *phBufferType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RegisterLineageIDs( 
            /* [in] */ DTP_HBUFFERTYPE hBufferType,
            /* [in] */ int cCols,
            /* [size_is][in] */ long lLineageIDs[  ]) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateVirtualBuffer( 
            /* [in] */ DTP_HBUFFERTYPE hSourceBuffer,
            /* [in] */ long lOutputID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateFlatBuffer( 
            /* [in] */ LONG lSize,
            /* [in] */ IDTSComponentMetaData100 *pOwner,
            /* [retval][out] */ IDTSBuffer100 **ppBuffer) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateBuffer( 
            /* [in] */ DTP_HBUFFERTYPE hBufferType,
            /* [in] */ IDTSComponentMetaData100 *pOwner,
            /* [retval][out] */ IDTSBuffer100 **ppBuffer) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindColumnByLineageID( 
            /* [in] */ DTP_HBUFFERTYPE hBufferType,
            /* [in] */ LONG nLineageID,
            /* [retval][out] */ DTP_HCOL *pwColIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetColumnInfo( 
            /* [in] */ DTP_HBUFFERTYPE hBufferType,
            /* [in] */ DTP_HCOL hCol,
            /* [out][in] */ DTP_BUFFCOL *pCol) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetColumnCount( 
            /* [in] */ DTP_HBUFFERTYPE hBufferType,
            /* [retval][out] */ DWORD *pdwColumnCount) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetRowWidth( 
            /* [in] */ DTP_HBUFFERTYPE hBufferType,
            /* [retval][out] */ long *plSizeInBytes) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetBLOBObject( 
            IDTSBLOBObject100 **ppNewObject) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsVirtual( 
            /* [in] */ DTP_HBUFFERTYPE hBufferType,
            /* [retval][out] */ VARIANT_BOOL *pbIsVirtual) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateFlatBuffer64( 
            /* [in] */ ULONGLONG lSize,
            /* [in] */ IDTSComponentMetaData100 *pOwner,
            /* [retval][out] */ IDTSBuffer100 **ppBuffer) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSBufferManager100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSBufferManager100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSBufferManager100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSBufferManager100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSBufferManager100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSBufferManager100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSBufferManager100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSBufferManager100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RegisterBufferType )( 
            IDTSBufferManager100 * This,
            /* [in] */ int cCols,
            /* [size_is][in] */ DTP_BUFFCOL rgCols[  ],
            /* [in] */ LONG lMaxRows,
            /* [in] */ DWORD dwCreationFlags,
            /* [retval][out] */ DTP_HBUFFERTYPE *phBufferType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RegisterLineageIDs )( 
            IDTSBufferManager100 * This,
            /* [in] */ DTP_HBUFFERTYPE hBufferType,
            /* [in] */ int cCols,
            /* [size_is][in] */ long lLineageIDs[  ]);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateVirtualBuffer )( 
            IDTSBufferManager100 * This,
            /* [in] */ DTP_HBUFFERTYPE hSourceBuffer,
            /* [in] */ long lOutputID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateFlatBuffer )( 
            IDTSBufferManager100 * This,
            /* [in] */ LONG lSize,
            /* [in] */ IDTSComponentMetaData100 *pOwner,
            /* [retval][out] */ IDTSBuffer100 **ppBuffer);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateBuffer )( 
            IDTSBufferManager100 * This,
            /* [in] */ DTP_HBUFFERTYPE hBufferType,
            /* [in] */ IDTSComponentMetaData100 *pOwner,
            /* [retval][out] */ IDTSBuffer100 **ppBuffer);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindColumnByLineageID )( 
            IDTSBufferManager100 * This,
            /* [in] */ DTP_HBUFFERTYPE hBufferType,
            /* [in] */ LONG nLineageID,
            /* [retval][out] */ DTP_HCOL *pwColIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetColumnInfo )( 
            IDTSBufferManager100 * This,
            /* [in] */ DTP_HBUFFERTYPE hBufferType,
            /* [in] */ DTP_HCOL hCol,
            /* [out][in] */ DTP_BUFFCOL *pCol);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetColumnCount )( 
            IDTSBufferManager100 * This,
            /* [in] */ DTP_HBUFFERTYPE hBufferType,
            /* [retval][out] */ DWORD *pdwColumnCount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRowWidth )( 
            IDTSBufferManager100 * This,
            /* [in] */ DTP_HBUFFERTYPE hBufferType,
            /* [retval][out] */ long *plSizeInBytes);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetBLOBObject )( 
            IDTSBufferManager100 * This,
            IDTSBLOBObject100 **ppNewObject);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsVirtual )( 
            IDTSBufferManager100 * This,
            /* [in] */ DTP_HBUFFERTYPE hBufferType,
            /* [retval][out] */ VARIANT_BOOL *pbIsVirtual);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateFlatBuffer64 )( 
            IDTSBufferManager100 * This,
            /* [in] */ ULONGLONG lSize,
            /* [in] */ IDTSComponentMetaData100 *pOwner,
            /* [retval][out] */ IDTSBuffer100 **ppBuffer);
        
        END_INTERFACE
    } IDTSBufferManager100Vtbl;

    interface IDTSBufferManager100
    {
        CONST_VTBL struct IDTSBufferManager100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSBufferManager100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSBufferManager100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSBufferManager100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSBufferManager100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSBufferManager100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSBufferManager100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSBufferManager100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSBufferManager100_RegisterBufferType(This,cCols,rgCols,lMaxRows,dwCreationFlags,phBufferType)	\
    ( (This)->lpVtbl -> RegisterBufferType(This,cCols,rgCols,lMaxRows,dwCreationFlags,phBufferType) ) 

#define IDTSBufferManager100_RegisterLineageIDs(This,hBufferType,cCols,lLineageIDs)	\
    ( (This)->lpVtbl -> RegisterLineageIDs(This,hBufferType,cCols,lLineageIDs) ) 

#define IDTSBufferManager100_CreateVirtualBuffer(This,hSourceBuffer,lOutputID)	\
    ( (This)->lpVtbl -> CreateVirtualBuffer(This,hSourceBuffer,lOutputID) ) 

#define IDTSBufferManager100_CreateFlatBuffer(This,lSize,pOwner,ppBuffer)	\
    ( (This)->lpVtbl -> CreateFlatBuffer(This,lSize,pOwner,ppBuffer) ) 

#define IDTSBufferManager100_CreateBuffer(This,hBufferType,pOwner,ppBuffer)	\
    ( (This)->lpVtbl -> CreateBuffer(This,hBufferType,pOwner,ppBuffer) ) 

#define IDTSBufferManager100_FindColumnByLineageID(This,hBufferType,nLineageID,pwColIndex)	\
    ( (This)->lpVtbl -> FindColumnByLineageID(This,hBufferType,nLineageID,pwColIndex) ) 

#define IDTSBufferManager100_GetColumnInfo(This,hBufferType,hCol,pCol)	\
    ( (This)->lpVtbl -> GetColumnInfo(This,hBufferType,hCol,pCol) ) 

#define IDTSBufferManager100_GetColumnCount(This,hBufferType,pdwColumnCount)	\
    ( (This)->lpVtbl -> GetColumnCount(This,hBufferType,pdwColumnCount) ) 

#define IDTSBufferManager100_GetRowWidth(This,hBufferType,plSizeInBytes)	\
    ( (This)->lpVtbl -> GetRowWidth(This,hBufferType,plSizeInBytes) ) 

#define IDTSBufferManager100_GetBLOBObject(This,ppNewObject)	\
    ( (This)->lpVtbl -> GetBLOBObject(This,ppNewObject) ) 

#define IDTSBufferManager100_get_IsVirtual(This,hBufferType,pbIsVirtual)	\
    ( (This)->lpVtbl -> get_IsVirtual(This,hBufferType,pbIsVirtual) ) 

#define IDTSBufferManager100_CreateFlatBuffer64(This,lSize,pOwner,ppBuffer)	\
    ( (This)->lpVtbl -> CreateFlatBuffer64(This,lSize,pOwner,ppBuffer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSBufferManager100_INTERFACE_DEFINED__ */


#ifndef __IDTSObjectModel100_INTERFACE_DEFINED__
#define __IDTSObjectModel100_INTERFACE_DEFINED__

/* interface IDTSObjectModel100 */
/* [unique][helpstring][custom][dual][uuid][object] */ 


EXTERN_C const IID IID_IDTSObjectModel100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C5216212-361D-436B-9840-A44B3405CBFB")
    IDTSObjectModel100 : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE New( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ComponentMetaDataCollection( 
            /* [retval][out] */ IDTSComponentMetaDataCollection100 **ppIDTSComponentMetaDataCollection) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PathCollection( 
            /* [retval][out] */ IDTSPathCollection100 **ppIDTSPathCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetObjectByID( 
            /* [in] */ long lID,
            /* [retval][out] */ IDTSObject100 **ppIDTSObject) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AutoGenerateIDForNewObjects( 
            /* [retval][out] */ VARIANT_BOOL *pbAutoGenerateIDForNewObjects) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AutoGenerateIDForNewObjects( 
            /* [in] */ VARIANT_BOOL bAutoGenerateIDForNewObjects) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UpdateCacheOnInputColumns( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EnableCacheUpdate( 
            /* [retval][out] */ VARIANT_BOOL *pbEnableCacheUpdate) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EnableCacheUpdate( 
            /* [in] */ VARIANT_BOOL bEnableCacheUpdate) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EnableDisconnectedColumns( 
            /* [retval][out] */ VARIANT_BOOL *pbEnableDisconnectedColumns) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EnableDisconnectedColumns( 
            /* [in] */ VARIANT_BOOL bEnableDisconnectedColumns) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsSavingXml( 
            /* [retval][out] */ VARIANT_BOOL *pbIsSavingXml) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsSavingXml( 
            /* [in] */ VARIANT_BOOL bIsSavingXml) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSObjectModel100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSObjectModel100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSObjectModel100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSObjectModel100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSObjectModel100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSObjectModel100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSObjectModel100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSObjectModel100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *New )( 
            IDTSObjectModel100 * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ComponentMetaDataCollection )( 
            IDTSObjectModel100 * This,
            /* [retval][out] */ IDTSComponentMetaDataCollection100 **ppIDTSComponentMetaDataCollection);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PathCollection )( 
            IDTSObjectModel100 * This,
            /* [retval][out] */ IDTSPathCollection100 **ppIDTSPathCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetObjectByID )( 
            IDTSObjectModel100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ IDTSObject100 **ppIDTSObject);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutoGenerateIDForNewObjects )( 
            IDTSObjectModel100 * This,
            /* [retval][out] */ VARIANT_BOOL *pbAutoGenerateIDForNewObjects);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutoGenerateIDForNewObjects )( 
            IDTSObjectModel100 * This,
            /* [in] */ VARIANT_BOOL bAutoGenerateIDForNewObjects);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UpdateCacheOnInputColumns )( 
            IDTSObjectModel100 * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableCacheUpdate )( 
            IDTSObjectModel100 * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnableCacheUpdate);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableCacheUpdate )( 
            IDTSObjectModel100 * This,
            /* [in] */ VARIANT_BOOL bEnableCacheUpdate);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableDisconnectedColumns )( 
            IDTSObjectModel100 * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnableDisconnectedColumns);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableDisconnectedColumns )( 
            IDTSObjectModel100 * This,
            /* [in] */ VARIANT_BOOL bEnableDisconnectedColumns);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsSavingXml )( 
            IDTSObjectModel100 * This,
            /* [retval][out] */ VARIANT_BOOL *pbIsSavingXml);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsSavingXml )( 
            IDTSObjectModel100 * This,
            /* [in] */ VARIANT_BOOL bIsSavingXml);
        
        END_INTERFACE
    } IDTSObjectModel100Vtbl;

    interface IDTSObjectModel100
    {
        CONST_VTBL struct IDTSObjectModel100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSObjectModel100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSObjectModel100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSObjectModel100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSObjectModel100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSObjectModel100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSObjectModel100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSObjectModel100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSObjectModel100_New(This)	\
    ( (This)->lpVtbl -> New(This) ) 

#define IDTSObjectModel100_get_ComponentMetaDataCollection(This,ppIDTSComponentMetaDataCollection)	\
    ( (This)->lpVtbl -> get_ComponentMetaDataCollection(This,ppIDTSComponentMetaDataCollection) ) 

#define IDTSObjectModel100_get_PathCollection(This,ppIDTSPathCollection)	\
    ( (This)->lpVtbl -> get_PathCollection(This,ppIDTSPathCollection) ) 

#define IDTSObjectModel100_GetObjectByID(This,lID,ppIDTSObject)	\
    ( (This)->lpVtbl -> GetObjectByID(This,lID,ppIDTSObject) ) 

#define IDTSObjectModel100_get_AutoGenerateIDForNewObjects(This,pbAutoGenerateIDForNewObjects)	\
    ( (This)->lpVtbl -> get_AutoGenerateIDForNewObjects(This,pbAutoGenerateIDForNewObjects) ) 

#define IDTSObjectModel100_put_AutoGenerateIDForNewObjects(This,bAutoGenerateIDForNewObjects)	\
    ( (This)->lpVtbl -> put_AutoGenerateIDForNewObjects(This,bAutoGenerateIDForNewObjects) ) 

#define IDTSObjectModel100_UpdateCacheOnInputColumns(This)	\
    ( (This)->lpVtbl -> UpdateCacheOnInputColumns(This) ) 

#define IDTSObjectModel100_get_EnableCacheUpdate(This,pbEnableCacheUpdate)	\
    ( (This)->lpVtbl -> get_EnableCacheUpdate(This,pbEnableCacheUpdate) ) 

#define IDTSObjectModel100_put_EnableCacheUpdate(This,bEnableCacheUpdate)	\
    ( (This)->lpVtbl -> put_EnableCacheUpdate(This,bEnableCacheUpdate) ) 

#define IDTSObjectModel100_get_EnableDisconnectedColumns(This,pbEnableDisconnectedColumns)	\
    ( (This)->lpVtbl -> get_EnableDisconnectedColumns(This,pbEnableDisconnectedColumns) ) 

#define IDTSObjectModel100_put_EnableDisconnectedColumns(This,bEnableDisconnectedColumns)	\
    ( (This)->lpVtbl -> put_EnableDisconnectedColumns(This,bEnableDisconnectedColumns) ) 

#define IDTSObjectModel100_get_IsSavingXml(This,pbIsSavingXml)	\
    ( (This)->lpVtbl -> get_IsSavingXml(This,pbIsSavingXml) ) 

#define IDTSObjectModel100_put_IsSavingXml(This,bIsSavingXml)	\
    ( (This)->lpVtbl -> put_IsSavingXml(This,bIsSavingXml) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSObjectModel100_INTERFACE_DEFINED__ */


#ifndef __IDTSPath100_INTERFACE_DEFINED__
#define __IDTSPath100_INTERFACE_DEFINED__

/* interface IDTSPath100 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDTSPath100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7BD99105-F435-4265-83DA-BC0023CC293C")
    IDTSPath100 : public IDTSObject100
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartPoint( 
            /* [retval][out] */ IDTSOutput100 **ppIDTSOutput) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StartPoint( 
            /* [in] */ IDTSOutput100 *pIDTSOutput) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndPoint( 
            /* [retval][out] */ IDTSInput100 **ppIDTSInput) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EndPoint( 
            /* [in] */ IDTSInput100 *pIDTSInput) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AttachPathAndPropagateNotifications( 
            /* [in] */ IDTSOutput100 *pIDTSOutput,
            /* [in] */ IDTSInput100 *pIDTSInput) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Visualized( 
            /* [in] */ VARIANT_BOOL bVisualized) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSPath100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSPath100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSPath100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSPath100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSPath100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSPath100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSPath100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSPath100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IDTSPath100 * This,
            /* [retval][out] */ long *pID);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ID )( 
            IDTSPath100 * This,
            /* [in] */ long ID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IDTSPath100 * This,
            /* [retval][out] */ BSTR *pbstrDescription);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            IDTSPath100 * This,
            /* [in] */ BSTR bstrDescription);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IDTSPath100 * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IDTSPath100 * This,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectType )( 
            IDTSPath100 * This,
            /* [retval][out] */ enum DTSObjectType *pType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IdentificationString )( 
            IDTSPath100 * This,
            /* [retval][out] */ BSTR *pbstrIdentificationString);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartPoint )( 
            IDTSPath100 * This,
            /* [retval][out] */ IDTSOutput100 **ppIDTSOutput);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartPoint )( 
            IDTSPath100 * This,
            /* [in] */ IDTSOutput100 *pIDTSOutput);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndPoint )( 
            IDTSPath100 * This,
            /* [retval][out] */ IDTSInput100 **ppIDTSInput);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EndPoint )( 
            IDTSPath100 * This,
            /* [in] */ IDTSInput100 *pIDTSInput);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AttachPathAndPropagateNotifications )( 
            IDTSPath100 * This,
            /* [in] */ IDTSOutput100 *pIDTSOutput,
            /* [in] */ IDTSInput100 *pIDTSInput);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Visualized )( 
            IDTSPath100 * This,
            /* [in] */ VARIANT_BOOL bVisualized);
        
        END_INTERFACE
    } IDTSPath100Vtbl;

    interface IDTSPath100
    {
        CONST_VTBL struct IDTSPath100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSPath100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSPath100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSPath100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSPath100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSPath100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSPath100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSPath100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSPath100_get_ID(This,pID)	\
    ( (This)->lpVtbl -> get_ID(This,pID) ) 

#define IDTSPath100_put_ID(This,ID)	\
    ( (This)->lpVtbl -> put_ID(This,ID) ) 

#define IDTSPath100_get_Description(This,pbstrDescription)	\
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) ) 

#define IDTSPath100_put_Description(This,bstrDescription)	\
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) ) 

#define IDTSPath100_get_Name(This,pbstrName)	\
    ( (This)->lpVtbl -> get_Name(This,pbstrName) ) 

#define IDTSPath100_put_Name(This,bstrName)	\
    ( (This)->lpVtbl -> put_Name(This,bstrName) ) 

#define IDTSPath100_get_ObjectType(This,pType)	\
    ( (This)->lpVtbl -> get_ObjectType(This,pType) ) 

#define IDTSPath100_get_IdentificationString(This,pbstrIdentificationString)	\
    ( (This)->lpVtbl -> get_IdentificationString(This,pbstrIdentificationString) ) 


#define IDTSPath100_get_StartPoint(This,ppIDTSOutput)	\
    ( (This)->lpVtbl -> get_StartPoint(This,ppIDTSOutput) ) 

#define IDTSPath100_put_StartPoint(This,pIDTSOutput)	\
    ( (This)->lpVtbl -> put_StartPoint(This,pIDTSOutput) ) 

#define IDTSPath100_get_EndPoint(This,ppIDTSInput)	\
    ( (This)->lpVtbl -> get_EndPoint(This,ppIDTSInput) ) 

#define IDTSPath100_put_EndPoint(This,pIDTSInput)	\
    ( (This)->lpVtbl -> put_EndPoint(This,pIDTSInput) ) 

#define IDTSPath100_AttachPathAndPropagateNotifications(This,pIDTSOutput,pIDTSInput)	\
    ( (This)->lpVtbl -> AttachPathAndPropagateNotifications(This,pIDTSOutput,pIDTSInput) ) 

#define IDTSPath100_put_Visualized(This,bVisualized)	\
    ( (This)->lpVtbl -> put_Visualized(This,bVisualized) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSPath100_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_DTSBufferManager;

#ifdef __cplusplus

class DECLSPEC_UUID("59062589-79DD-4CC8-8433-D3EB54CE1A11")
DTSBufferManager;
#endif

#ifndef __IDTSPersistenceComponent100_INTERFACE_DEFINED__
#define __IDTSPersistenceComponent100_INTERFACE_DEFINED__

/* interface IDTSPersistenceComponent100 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDTSPersistenceComponent100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("12FBCDDB-C38B-46E3-A83E-6587934DCA74")
    IDTSPersistenceComponent100 : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Load( 
            /* [in] */ IDTSObjectModel100 *pIDTSObjectModel,
            /* [in] */ IDTSCustomPropertyCollection100 *pIDTSCustomPropertyCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Save( 
            /* [in] */ IDTSObjectModel100 *pIDTSObjectModel,
            /* [in] */ IDTSCustomPropertyCollection100 *pIDTSCustomPropertyCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ProvidePersistenceProperties( 
            /* [in] */ IDTSCustomPropertyCollection100 *pIDTSCustomPropertyCollection) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSPersistenceComponent100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSPersistenceComponent100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSPersistenceComponent100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSPersistenceComponent100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSPersistenceComponent100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSPersistenceComponent100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSPersistenceComponent100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSPersistenceComponent100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IDTSPersistenceComponent100 * This,
            /* [in] */ IDTSObjectModel100 *pIDTSObjectModel,
            /* [in] */ IDTSCustomPropertyCollection100 *pIDTSCustomPropertyCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IDTSPersistenceComponent100 * This,
            /* [in] */ IDTSObjectModel100 *pIDTSObjectModel,
            /* [in] */ IDTSCustomPropertyCollection100 *pIDTSCustomPropertyCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ProvidePersistenceProperties )( 
            IDTSPersistenceComponent100 * This,
            /* [in] */ IDTSCustomPropertyCollection100 *pIDTSCustomPropertyCollection);
        
        END_INTERFACE
    } IDTSPersistenceComponent100Vtbl;

    interface IDTSPersistenceComponent100
    {
        CONST_VTBL struct IDTSPersistenceComponent100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSPersistenceComponent100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSPersistenceComponent100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSPersistenceComponent100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSPersistenceComponent100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSPersistenceComponent100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSPersistenceComponent100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSPersistenceComponent100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSPersistenceComponent100_Load(This,pIDTSObjectModel,pIDTSCustomPropertyCollection)	\
    ( (This)->lpVtbl -> Load(This,pIDTSObjectModel,pIDTSCustomPropertyCollection) ) 

#define IDTSPersistenceComponent100_Save(This,pIDTSObjectModel,pIDTSCustomPropertyCollection)	\
    ( (This)->lpVtbl -> Save(This,pIDTSObjectModel,pIDTSCustomPropertyCollection) ) 

#define IDTSPersistenceComponent100_ProvidePersistenceProperties(This,pIDTSCustomPropertyCollection)	\
    ( (This)->lpVtbl -> ProvidePersistenceProperties(This,pIDTSCustomPropertyCollection) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSPersistenceComponent100_INTERFACE_DEFINED__ */


#ifndef __IDTSPipeline100_INTERFACE_DEFINED__
#define __IDTSPipeline100_INTERFACE_DEFINED__

/* interface IDTSPipeline100 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDTSPipeline100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6D3931AC-822D-414C-8F10-7447A54BA55C")
    IDTSPipeline100 : public IDTSObjectModel100
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PersistenceCustomPropertyCollection( 
            /* [in] */ enum DTSPersistenceFormat Format,
            /* [retval][out] */ IDTSCustomPropertyCollection100 **ppIDTSCustomPropertyCollection) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BufferManager( 
            /* [retval][out] */ IDTSBufferManager100 **ppBufferManager) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DefaultBufferMaxRows( 
            /* [in] */ LONG lMaxRows) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DefaultBufferMaxRows( 
            /* [retval][out] */ LONG *plMaxRows) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Events( 
            /* [in] */ /* external definition not present */ IDTSComponentEvents100 *pIDTSEvents) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VariableDispenser( 
            /* [in] */ /* external definition not present */ IDTSVariableDispenser100 *pIDTSVariableDispenser) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DefaultBufferSize( 
            /* [in] */ LONG lDefaultBufferSize) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DefaultBufferSize( 
            /* [retval][out] */ LONG *plDefaultBufferSize) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BLOBTempStoragePath( 
            /* [in] */ BSTR bstrBLOBTempStoragePath) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BLOBTempStoragePath( 
            /* [retval][out] */ BSTR *pbstrBLOBTempStoragePath) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BufferTempStoragePath( 
            /* [in] */ BSTR bstrBufferTempStoragePath) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BufferTempStoragePath( 
            /* [retval][out] */ BSTR *pbstrBufferTempStoragePath) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RunInOptimizedMode( 
            /* [in] */ VARIANT_BOOL bRunInOptimizedMode) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RunInOptimizedMode( 
            /* [retval][out] */ VARIANT_BOOL *pbRunInOptimizedMode) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EngineThreads( 
            /* [in] */ LONG lEngineThreads) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EngineThreads( 
            /* [retval][out] */ LONG *lEngineThreads) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNextPasteID( 
            /* [retval][out] */ long *plNextID) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSPipeline100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSPipeline100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSPipeline100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSPipeline100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSPipeline100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSPipeline100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSPipeline100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSPipeline100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *New )( 
            IDTSPipeline100 * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ComponentMetaDataCollection )( 
            IDTSPipeline100 * This,
            /* [retval][out] */ IDTSComponentMetaDataCollection100 **ppIDTSComponentMetaDataCollection);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PathCollection )( 
            IDTSPipeline100 * This,
            /* [retval][out] */ IDTSPathCollection100 **ppIDTSPathCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetObjectByID )( 
            IDTSPipeline100 * This,
            /* [in] */ long lID,
            /* [retval][out] */ IDTSObject100 **ppIDTSObject);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutoGenerateIDForNewObjects )( 
            IDTSPipeline100 * This,
            /* [retval][out] */ VARIANT_BOOL *pbAutoGenerateIDForNewObjects);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutoGenerateIDForNewObjects )( 
            IDTSPipeline100 * This,
            /* [in] */ VARIANT_BOOL bAutoGenerateIDForNewObjects);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UpdateCacheOnInputColumns )( 
            IDTSPipeline100 * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableCacheUpdate )( 
            IDTSPipeline100 * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnableCacheUpdate);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableCacheUpdate )( 
            IDTSPipeline100 * This,
            /* [in] */ VARIANT_BOOL bEnableCacheUpdate);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableDisconnectedColumns )( 
            IDTSPipeline100 * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnableDisconnectedColumns);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableDisconnectedColumns )( 
            IDTSPipeline100 * This,
            /* [in] */ VARIANT_BOOL bEnableDisconnectedColumns);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsSavingXml )( 
            IDTSPipeline100 * This,
            /* [retval][out] */ VARIANT_BOOL *pbIsSavingXml);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsSavingXml )( 
            IDTSPipeline100 * This,
            /* [in] */ VARIANT_BOOL bIsSavingXml);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PersistenceCustomPropertyCollection )( 
            IDTSPipeline100 * This,
            /* [in] */ enum DTSPersistenceFormat Format,
            /* [retval][out] */ IDTSCustomPropertyCollection100 **ppIDTSCustomPropertyCollection);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BufferManager )( 
            IDTSPipeline100 * This,
            /* [retval][out] */ IDTSBufferManager100 **ppBufferManager);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DefaultBufferMaxRows )( 
            IDTSPipeline100 * This,
            /* [in] */ LONG lMaxRows);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefaultBufferMaxRows )( 
            IDTSPipeline100 * This,
            /* [retval][out] */ LONG *plMaxRows);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Events )( 
            IDTSPipeline100 * This,
            /* [in] */ /* external definition not present */ IDTSComponentEvents100 *pIDTSEvents);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VariableDispenser )( 
            IDTSPipeline100 * This,
            /* [in] */ /* external definition not present */ IDTSVariableDispenser100 *pIDTSVariableDispenser);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DefaultBufferSize )( 
            IDTSPipeline100 * This,
            /* [in] */ LONG lDefaultBufferSize);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefaultBufferSize )( 
            IDTSPipeline100 * This,
            /* [retval][out] */ LONG *plDefaultBufferSize);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BLOBTempStoragePath )( 
            IDTSPipeline100 * This,
            /* [in] */ BSTR bstrBLOBTempStoragePath);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BLOBTempStoragePath )( 
            IDTSPipeline100 * This,
            /* [retval][out] */ BSTR *pbstrBLOBTempStoragePath);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BufferTempStoragePath )( 
            IDTSPipeline100 * This,
            /* [in] */ BSTR bstrBufferTempStoragePath);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BufferTempStoragePath )( 
            IDTSPipeline100 * This,
            /* [retval][out] */ BSTR *pbstrBufferTempStoragePath);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RunInOptimizedMode )( 
            IDTSPipeline100 * This,
            /* [in] */ VARIANT_BOOL bRunInOptimizedMode);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RunInOptimizedMode )( 
            IDTSPipeline100 * This,
            /* [retval][out] */ VARIANT_BOOL *pbRunInOptimizedMode);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EngineThreads )( 
            IDTSPipeline100 * This,
            /* [in] */ LONG lEngineThreads);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EngineThreads )( 
            IDTSPipeline100 * This,
            /* [retval][out] */ LONG *lEngineThreads);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNextPasteID )( 
            IDTSPipeline100 * This,
            /* [retval][out] */ long *plNextID);
        
        END_INTERFACE
    } IDTSPipeline100Vtbl;

    interface IDTSPipeline100
    {
        CONST_VTBL struct IDTSPipeline100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSPipeline100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSPipeline100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSPipeline100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSPipeline100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSPipeline100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSPipeline100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSPipeline100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSPipeline100_New(This)	\
    ( (This)->lpVtbl -> New(This) ) 

#define IDTSPipeline100_get_ComponentMetaDataCollection(This,ppIDTSComponentMetaDataCollection)	\
    ( (This)->lpVtbl -> get_ComponentMetaDataCollection(This,ppIDTSComponentMetaDataCollection) ) 

#define IDTSPipeline100_get_PathCollection(This,ppIDTSPathCollection)	\
    ( (This)->lpVtbl -> get_PathCollection(This,ppIDTSPathCollection) ) 

#define IDTSPipeline100_GetObjectByID(This,lID,ppIDTSObject)	\
    ( (This)->lpVtbl -> GetObjectByID(This,lID,ppIDTSObject) ) 

#define IDTSPipeline100_get_AutoGenerateIDForNewObjects(This,pbAutoGenerateIDForNewObjects)	\
    ( (This)->lpVtbl -> get_AutoGenerateIDForNewObjects(This,pbAutoGenerateIDForNewObjects) ) 

#define IDTSPipeline100_put_AutoGenerateIDForNewObjects(This,bAutoGenerateIDForNewObjects)	\
    ( (This)->lpVtbl -> put_AutoGenerateIDForNewObjects(This,bAutoGenerateIDForNewObjects) ) 

#define IDTSPipeline100_UpdateCacheOnInputColumns(This)	\
    ( (This)->lpVtbl -> UpdateCacheOnInputColumns(This) ) 

#define IDTSPipeline100_get_EnableCacheUpdate(This,pbEnableCacheUpdate)	\
    ( (This)->lpVtbl -> get_EnableCacheUpdate(This,pbEnableCacheUpdate) ) 

#define IDTSPipeline100_put_EnableCacheUpdate(This,bEnableCacheUpdate)	\
    ( (This)->lpVtbl -> put_EnableCacheUpdate(This,bEnableCacheUpdate) ) 

#define IDTSPipeline100_get_EnableDisconnectedColumns(This,pbEnableDisconnectedColumns)	\
    ( (This)->lpVtbl -> get_EnableDisconnectedColumns(This,pbEnableDisconnectedColumns) ) 

#define IDTSPipeline100_put_EnableDisconnectedColumns(This,bEnableDisconnectedColumns)	\
    ( (This)->lpVtbl -> put_EnableDisconnectedColumns(This,bEnableDisconnectedColumns) ) 

#define IDTSPipeline100_get_IsSavingXml(This,pbIsSavingXml)	\
    ( (This)->lpVtbl -> get_IsSavingXml(This,pbIsSavingXml) ) 

#define IDTSPipeline100_put_IsSavingXml(This,bIsSavingXml)	\
    ( (This)->lpVtbl -> put_IsSavingXml(This,bIsSavingXml) ) 


#define IDTSPipeline100_get_PersistenceCustomPropertyCollection(This,Format,ppIDTSCustomPropertyCollection)	\
    ( (This)->lpVtbl -> get_PersistenceCustomPropertyCollection(This,Format,ppIDTSCustomPropertyCollection) ) 

#define IDTSPipeline100_get_BufferManager(This,ppBufferManager)	\
    ( (This)->lpVtbl -> get_BufferManager(This,ppBufferManager) ) 

#define IDTSPipeline100_put_DefaultBufferMaxRows(This,lMaxRows)	\
    ( (This)->lpVtbl -> put_DefaultBufferMaxRows(This,lMaxRows) ) 

#define IDTSPipeline100_get_DefaultBufferMaxRows(This,plMaxRows)	\
    ( (This)->lpVtbl -> get_DefaultBufferMaxRows(This,plMaxRows) ) 

#define IDTSPipeline100_put_Events(This,pIDTSEvents)	\
    ( (This)->lpVtbl -> put_Events(This,pIDTSEvents) ) 

#define IDTSPipeline100_put_VariableDispenser(This,pIDTSVariableDispenser)	\
    ( (This)->lpVtbl -> put_VariableDispenser(This,pIDTSVariableDispenser) ) 

#define IDTSPipeline100_put_DefaultBufferSize(This,lDefaultBufferSize)	\
    ( (This)->lpVtbl -> put_DefaultBufferSize(This,lDefaultBufferSize) ) 

#define IDTSPipeline100_get_DefaultBufferSize(This,plDefaultBufferSize)	\
    ( (This)->lpVtbl -> get_DefaultBufferSize(This,plDefaultBufferSize) ) 

#define IDTSPipeline100_put_BLOBTempStoragePath(This,bstrBLOBTempStoragePath)	\
    ( (This)->lpVtbl -> put_BLOBTempStoragePath(This,bstrBLOBTempStoragePath) ) 

#define IDTSPipeline100_get_BLOBTempStoragePath(This,pbstrBLOBTempStoragePath)	\
    ( (This)->lpVtbl -> get_BLOBTempStoragePath(This,pbstrBLOBTempStoragePath) ) 

#define IDTSPipeline100_put_BufferTempStoragePath(This,bstrBufferTempStoragePath)	\
    ( (This)->lpVtbl -> put_BufferTempStoragePath(This,bstrBufferTempStoragePath) ) 

#define IDTSPipeline100_get_BufferTempStoragePath(This,pbstrBufferTempStoragePath)	\
    ( (This)->lpVtbl -> get_BufferTempStoragePath(This,pbstrBufferTempStoragePath) ) 

#define IDTSPipeline100_put_RunInOptimizedMode(This,bRunInOptimizedMode)	\
    ( (This)->lpVtbl -> put_RunInOptimizedMode(This,bRunInOptimizedMode) ) 

#define IDTSPipeline100_get_RunInOptimizedMode(This,pbRunInOptimizedMode)	\
    ( (This)->lpVtbl -> get_RunInOptimizedMode(This,pbRunInOptimizedMode) ) 

#define IDTSPipeline100_put_EngineThreads(This,lEngineThreads)	\
    ( (This)->lpVtbl -> put_EngineThreads(This,lEngineThreads) ) 

#define IDTSPipeline100_get_EngineThreads(This,lEngineThreads)	\
    ( (This)->lpVtbl -> get_EngineThreads(This,lEngineThreads) ) 

#define IDTSPipeline100_GetNextPasteID(This,plNextID)	\
    ( (This)->lpVtbl -> GetNextPasteID(This,plNextID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSPipeline100_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_MainPipe;

#ifdef __cplusplus

class DECLSPEC_UUID("1CF081CA-677D-4561-967A-D06798F62DD6")
MainPipe;
#endif

EXTERN_C const CLSID CLSID_CManagedComponentWrapper;

#ifdef __cplusplus

class DECLSPEC_UUID("33D831DE-5DCF-48F0-B431-4D327B9E785D")
CManagedComponentWrapper;
#endif

#ifndef __IDTSExpressionEvaluatorEx100_INTERFACE_DEFINED__
#define __IDTSExpressionEvaluatorEx100_INTERFACE_DEFINED__

/* interface IDTSExpressionEvaluatorEx100 */
/* [unique][helpstring][uuid][restricted][hidden][dual][object] */ 


EXTERN_C const IID IID_IDTSExpressionEvaluatorEx100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EBDCA2B9-77D3-4A4E-B4BF-2C903026AACF")
    IDTSExpressionEvaluatorEx100 : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Parse( 
            /* [in] */ BSTR bstrExpression,
            /* [in] */ /* external definition not present */ IDTSVariableDispenser100 *pVariableDispenser,
            /* [in] */ IDTSInputColumnCollection100 *pColumnCollection) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSExpressionEvaluatorEx100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSExpressionEvaluatorEx100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSExpressionEvaluatorEx100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSExpressionEvaluatorEx100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSExpressionEvaluatorEx100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSExpressionEvaluatorEx100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSExpressionEvaluatorEx100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSExpressionEvaluatorEx100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Parse )( 
            IDTSExpressionEvaluatorEx100 * This,
            /* [in] */ BSTR bstrExpression,
            /* [in] */ /* external definition not present */ IDTSVariableDispenser100 *pVariableDispenser,
            /* [in] */ IDTSInputColumnCollection100 *pColumnCollection);
        
        END_INTERFACE
    } IDTSExpressionEvaluatorEx100Vtbl;

    interface IDTSExpressionEvaluatorEx100
    {
        CONST_VTBL struct IDTSExpressionEvaluatorEx100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSExpressionEvaluatorEx100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSExpressionEvaluatorEx100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSExpressionEvaluatorEx100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSExpressionEvaluatorEx100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSExpressionEvaluatorEx100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSExpressionEvaluatorEx100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSExpressionEvaluatorEx100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSExpressionEvaluatorEx100_Parse(This,bstrExpression,pVariableDispenser,pColumnCollection)	\
    ( (This)->lpVtbl -> Parse(This,bstrExpression,pVariableDispenser,pColumnCollection) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSExpressionEvaluatorEx100_INTERFACE_DEFINED__ */


#ifndef __IDTSMultiInputComponent100_INTERFACE_DEFINED__
#define __IDTSMultiInputComponent100_INTERFACE_DEFINED__

/* interface IDTSMultiInputComponent100 */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDTSMultiInputComponent100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("74A70C18-EF15-4F1F-A86A-CC54E01EDD79")
    IDTSMultiInputComponent100 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CanProcess( 
            /* [in] */ long inputCount,
            /* [size_is] */ long *pInputIDs,
            /* [size_is][ref] */ VARIANT_BOOL *pCanProcess) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDependencies( 
            /* [in] */ long blockedInputID,
            /* [ref] */ long *pDependencyCount,
            /* [length_is][size_is][ref] */ long *pDependentInputIDs) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSMultiInputComponent100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSMultiInputComponent100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSMultiInputComponent100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSMultiInputComponent100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *CanProcess )( 
            IDTSMultiInputComponent100 * This,
            /* [in] */ long inputCount,
            /* [size_is] */ long *pInputIDs,
            /* [size_is][ref] */ VARIANT_BOOL *pCanProcess);
        
        HRESULT ( STDMETHODCALLTYPE *GetDependencies )( 
            IDTSMultiInputComponent100 * This,
            /* [in] */ long blockedInputID,
            /* [ref] */ long *pDependencyCount,
            /* [length_is][size_is][ref] */ long *pDependentInputIDs);
        
        END_INTERFACE
    } IDTSMultiInputComponent100Vtbl;

    interface IDTSMultiInputComponent100
    {
        CONST_VTBL struct IDTSMultiInputComponent100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSMultiInputComponent100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSMultiInputComponent100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSMultiInputComponent100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSMultiInputComponent100_CanProcess(This,inputCount,pInputIDs,pCanProcess)	\
    ( (This)->lpVtbl -> CanProcess(This,inputCount,pInputIDs,pCanProcess) ) 

#define IDTSMultiInputComponent100_GetDependencies(This,blockedInputID,pDependencyCount,pDependentInputIDs)	\
    ( (This)->lpVtbl -> GetDependencies(This,blockedInputID,pDependencyCount,pDependentInputIDs) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSMultiInputComponent100_INTERFACE_DEFINED__ */


#ifndef __IDTSMultiInputComponentHost100_INTERFACE_DEFINED__
#define __IDTSMultiInputComponentHost100_INTERFACE_DEFINED__

/* interface IDTSMultiInputComponentHost100 */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDTSMultiInputComponentHost100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D132FBF1-FF80-464D-AABC-833FD06323CE")
    IDTSMultiInputComponentHost100 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE HostCanProcess( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long inputCount,
            /* [in] */ SAFEARRAY * inputIDs,
            /* [ref] */ SAFEARRAY * *pCanProcess) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostGetDependencies( 
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long blockedInputID,
            /* [ref] */ long *pDependencyCount,
            /* [ref] */ SAFEARRAY * *pDependentInputIDs) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSMultiInputComponentHost100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSMultiInputComponentHost100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSMultiInputComponentHost100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSMultiInputComponentHost100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *HostCanProcess )( 
            IDTSMultiInputComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long inputCount,
            /* [in] */ SAFEARRAY * inputIDs,
            /* [ref] */ SAFEARRAY * *pCanProcess);
        
        HRESULT ( STDMETHODCALLTYPE *HostGetDependencies )( 
            IDTSMultiInputComponentHost100 * This,
            /* [in] */ IDTSManagedComponentWrapper100 *pWrapper,
            /* [in] */ long blockedInputID,
            /* [ref] */ long *pDependencyCount,
            /* [ref] */ SAFEARRAY * *pDependentInputIDs);
        
        END_INTERFACE
    } IDTSMultiInputComponentHost100Vtbl;

    interface IDTSMultiInputComponentHost100
    {
        CONST_VTBL struct IDTSMultiInputComponentHost100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSMultiInputComponentHost100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSMultiInputComponentHost100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSMultiInputComponentHost100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSMultiInputComponentHost100_HostCanProcess(This,pWrapper,inputCount,inputIDs,pCanProcess)	\
    ( (This)->lpVtbl -> HostCanProcess(This,pWrapper,inputCount,inputIDs,pCanProcess) ) 

#define IDTSMultiInputComponentHost100_HostGetDependencies(This,pWrapper,blockedInputID,pDependencyCount,pDependentInputIDs)	\
    ( (This)->lpVtbl -> HostGetDependencies(This,pWrapper,blockedInputID,pDependencyCount,pDependentInputIDs) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSMultiInputComponentHost100_INTERFACE_DEFINED__ */


#ifndef __IDTSSupportBackPressure100_INTERFACE_DEFINED__
#define __IDTSSupportBackPressure100_INTERFACE_DEFINED__

/* interface IDTSSupportBackPressure100 */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDTSSupportBackPressure100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8D181C05-48F6-476C-94C0-F341513D5BC0")
    IDTSSupportBackPressure100 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSupport( 
            /* [ref] */ VARIANT_BOOL *pSupport) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSSupportBackPressure100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSSupportBackPressure100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSSupportBackPressure100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSSupportBackPressure100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSupport )( 
            IDTSSupportBackPressure100 * This,
            /* [ref] */ VARIANT_BOOL *pSupport);
        
        END_INTERFACE
    } IDTSSupportBackPressure100Vtbl;

    interface IDTSSupportBackPressure100
    {
        CONST_VTBL struct IDTSSupportBackPressure100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSSupportBackPressure100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSSupportBackPressure100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSSupportBackPressure100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSSupportBackPressure100_GetSupport(This,pSupport)	\
    ( (This)->lpVtbl -> GetSupport(This,pSupport) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSSupportBackPressure100_INTERFACE_DEFINED__ */


#ifndef __IDTSBufferTapConfiguration100_INTERFACE_DEFINED__
#define __IDTSBufferTapConfiguration100_INTERFACE_DEFINED__

/* interface IDTSBufferTapConfiguration100 */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IDTSBufferTapConfiguration100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CC2EE9AD-99E2-4133-B96C-5DB5DA12ADF3")
    IDTSBufferTapConfiguration100 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddTapPoint( 
            /* [in] */ BSTR pathIdentification,
            /* [in] */ long maxRowCount,
            /* [in] */ BSTR fileName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSBufferTapConfiguration100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSBufferTapConfiguration100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSBufferTapConfiguration100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSBufferTapConfiguration100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddTapPoint )( 
            IDTSBufferTapConfiguration100 * This,
            /* [in] */ BSTR pathIdentification,
            /* [in] */ long maxRowCount,
            /* [in] */ BSTR fileName);
        
        END_INTERFACE
    } IDTSBufferTapConfiguration100Vtbl;

    interface IDTSBufferTapConfiguration100
    {
        CONST_VTBL struct IDTSBufferTapConfiguration100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSBufferTapConfiguration100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSBufferTapConfiguration100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSBufferTapConfiguration100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSBufferTapConfiguration100_AddTapPoint(This,pathIdentification,maxRowCount,fileName)	\
    ( (This)->lpVtbl -> AddTapPoint(This,pathIdentification,maxRowCount,fileName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSBufferTapConfiguration100_INTERFACE_DEFINED__ */


#ifndef __IDTSDataFileCreator100_INTERFACE_DEFINED__
#define __IDTSDataFileCreator100_INTERFACE_DEFINED__

/* interface IDTSDataFileCreator100 */
/* [unique][helpstring][uuid][dual][object] */ 


EXTERN_C const IID IID_IDTSDataFileCreator100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A2ED9418-D384-4F54-A813-906F7E6D1DF3")
    IDTSDataFileCreator100 : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateDataFile( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSDataFileCreator100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSDataFileCreator100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSDataFileCreator100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSDataFileCreator100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSDataFileCreator100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSDataFileCreator100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSDataFileCreator100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSDataFileCreator100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *CreateDataFile )( 
            IDTSDataFileCreator100 * This);
        
        END_INTERFACE
    } IDTSDataFileCreator100Vtbl;

    interface IDTSDataFileCreator100
    {
        CONST_VTBL struct IDTSDataFileCreator100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSDataFileCreator100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSDataFileCreator100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSDataFileCreator100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSDataFileCreator100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSDataFileCreator100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSDataFileCreator100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSDataFileCreator100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSDataFileCreator100_CreateDataFile(This)	\
    ( (This)->lpVtbl -> CreateDataFile(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSDataFileCreator100_INTERFACE_DEFINED__ */


#ifndef __IDTSLookupDesign100_INTERFACE_DEFINED__
#define __IDTSLookupDesign100_INTERFACE_DEFINED__

/* interface IDTSLookupDesign100 */
/* [unique][helpstring][uuid][dual][object] */ 


EXTERN_C const IID IID_IDTSLookupDesign100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("196756AD-FD04-4123-A306-B558244AC473")
    IDTSLookupDesign100 : public IDispatch
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CacheRowSize( 
            /* [retval][out] */ long *pcbRowSize) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSLookupDesign100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSLookupDesign100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSLookupDesign100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSLookupDesign100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSLookupDesign100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSLookupDesign100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSLookupDesign100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSLookupDesign100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CacheRowSize )( 
            IDTSLookupDesign100 * This,
            /* [retval][out] */ long *pcbRowSize);
        
        END_INTERFACE
    } IDTSLookupDesign100Vtbl;

    interface IDTSLookupDesign100
    {
        CONST_VTBL struct IDTSLookupDesign100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSLookupDesign100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSLookupDesign100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSLookupDesign100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSLookupDesign100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSLookupDesign100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSLookupDesign100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSLookupDesign100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSLookupDesign100_get_CacheRowSize(This,pcbRowSize)	\
    ( (This)->lpVtbl -> get_CacheRowSize(This,pcbRowSize) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSLookupDesign100_INTERFACE_DEFINED__ */


#ifndef __IDTSPivotDesign100_INTERFACE_DEFINED__
#define __IDTSPivotDesign100_INTERFACE_DEFINED__

/* interface IDTSPivotDesign100 */
/* [unique][helpstring][uuid][dual][object] */ 


EXTERN_C const IID IID_IDTSPivotDesign100;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("36941B47-C52E-48F9-A393-8334BC3FADD5")
    IDTSPivotDesign100 : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateNewOutputColumnsFromPivotKeyValueList( 
            /* [in] */ long lPivotValueColumnID,
            /* [in] */ BSTR bstrPivotKeyValueList) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDTSPivotDesign100Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDTSPivotDesign100 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out _Result_nullonfailure_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDTSPivotDesign100 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDTSPivotDesign100 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDTSPivotDesign100 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDTSPivotDesign100 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDTSPivotDesign100 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDTSPivotDesign100 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateNewOutputColumnsFromPivotKeyValueList )( 
            IDTSPivotDesign100 * This,
            /* [in] */ long lPivotValueColumnID,
            /* [in] */ BSTR bstrPivotKeyValueList);
        
        END_INTERFACE
    } IDTSPivotDesign100Vtbl;

    interface IDTSPivotDesign100
    {
        CONST_VTBL struct IDTSPivotDesign100Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDTSPivotDesign100_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDTSPivotDesign100_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDTSPivotDesign100_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDTSPivotDesign100_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDTSPivotDesign100_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDTSPivotDesign100_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDTSPivotDesign100_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDTSPivotDesign100_CreateNewOutputColumnsFromPivotKeyValueList(This,lPivotValueColumnID,bstrPivotKeyValueList)	\
    ( (This)->lpVtbl -> CreateNewOutputColumnsFromPivotKeyValueList(This,lPivotValueColumnID,bstrPivotKeyValueList) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDTSPivotDesign100_INTERFACE_DEFINED__ */

#endif /* __DTSPipeline_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


