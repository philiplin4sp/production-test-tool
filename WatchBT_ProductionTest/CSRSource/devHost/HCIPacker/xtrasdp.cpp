///////////////////////////////////////////////////////////////////////////////
//
//  FILE:     xtrasdp.cpp
//
//  PURPOSE:  define non-autogenerated SDC and SDS primitive pdus
//
///////////////////////////////////////////////////////////////////////////////

#include "hcipacker/xtrasdp.h"
//   FILE DEFINING A BLUECORE-FRIENDY PROTOCOL
#include "bcflayout.h"

#define OFFSET_uint8Ptr(name) OFFSET_uint16(name)

enum {
	OFFSET_START(SDC_SERVICE_ATTRIBUTE_REQ_T)
	OFFSET_uint16(SDC_SERVICE_ATTRIBUTE_REQ_T_type),
	OFFSET_uint16(SDC_SERVICE_ATTRIBUTE_REQ_T_phandle),
        OFFSET_uint16(SDC_SERVICE_ATTRIBUTE_REQ_T_con_ctx),
	OFFSET_BluetoothDeviceAddress(SDC_SERVICE_ATTRIBUTE_REQ_T_bd_addr),
	OFFSET_uint32(SDC_SERVICE_ATTRIBUTE_REQ_T_svc_rec_hndl),
	OFFSET_uint16(SDC_SERVICE_ATTRIBUTE_REQ_T_size_attr_list),
	OFFSET_uint8Ptr(SDC_SERVICE_ATTRIBUTE_REQ_T_attr_list),
	OFFSET_uint16(SDC_SERVICE_ATTRIBUTE_REQ_T_max_num_attr),
	SDC_SERVICE_ATTRIBUTE_REQ_T_pduSize
} ;

enum {
	OFFSET_START(SDS_REGISTER_REQ_T)
	OFFSET_uint16(SDS_REGISTER_REQ_T_type),
	OFFSET_uint16(SDS_REGISTER_REQ_T_phandle),
        OFFSET_uint16(SDS_REGISTER_REQ_T_reg_ctx),
        OFFSET_uint16(SDS_REGISTER_REQ_T_num_rec_bytes),
	OFFSET_uint8Ptr(SDS_REGISTER_REQ_T_service_rec),
	SDS_REGISTER_REQ_T_pduSize
} ;

enum {
	OFFSET_START(SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T)
	OFFSET_uint16(SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_type),
	OFFSET_uint16(SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_phandle),
        OFFSET_uint16(SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_con_ctx),
	OFFSET_BluetoothDeviceAddress(SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_bd_addr),
	OFFSET_uint16(SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_size_srch_pttrn),
	OFFSET_uint8Ptr(SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_srch_pttrn),
	OFFSET_uint16(SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_size_attr_list),
	OFFSET_uint8Ptr(SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_attr_list),
	OFFSET_uint16(SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_max_num_attr),
	SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_pduSize
} ;

enum {
	OFFSET_START(SDC_SERVICE_SEARCH_REQ_T)
	OFFSET_uint16(SDC_SERVICE_SEARCH_REQ_T_type),
	OFFSET_uint16(SDC_SERVICE_SEARCH_REQ_T_phandle),
        OFFSET_uint16(SDC_SERVICE_SEARCH_REQ_T_con_ctx),
	OFFSET_BluetoothDeviceAddress(SDC_SERVICE_SEARCH_REQ_T_bd_addr),
	OFFSET_uint16(SDC_SERVICE_SEARCH_REQ_T_size_srch_pttrn),
	OFFSET_uint8Ptr(SDC_SERVICE_SEARCH_REQ_T_srch_pttrn),
	OFFSET_uint16(SDC_SERVICE_SEARCH_REQ_T_max_num_recs),
	SDC_SERVICE_SEARCH_REQ_T_pduSize
} ;

enum {
	OFFSET_START(SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T)
	OFFSET_uint16(SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_type),
	OFFSET_uint16(SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_phandle),
        OFFSET_uint16(SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_con_ctx),
        OFFSET_BluetoothDeviceAddress(SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_bd_addr),
	OFFSET_uint16(SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_total_response_size),
	OFFSET_uint16(SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_size_attr_list),
	OFFSET_uint8Ptr(SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_attr_list),
	OFFSET_bool(SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_more_to_come),
	OFFSET_uint16(SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_response),
	OFFSET_uint16(SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_err_code),
	OFFSET_uint16(SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_size_err_info),
	OFFSET_uint8Ptr(SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_err_info),
	SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_pduSize
} ;

enum {
	OFFSET_START(SDC_SERVICE_ATTRIBUTE_CFM_T)
	OFFSET_uint16(SDC_SERVICE_ATTRIBUTE_CFM_T_type),
	OFFSET_uint16(SDC_SERVICE_ATTRIBUTE_CFM_T_phandle),
        OFFSET_uint16(SDC_SERVICE_ATTRIBUTE_CFM_T_con_ctx),
        OFFSET_BluetoothDeviceAddress(SDC_SERVICE_ATTRIBUTE_CFM_T_bd_addr),
	OFFSET_uint16(SDC_SERVICE_ATTRIBUTE_CFM_T_size_attr_list),
	OFFSET_uint8Ptr(SDC_SERVICE_ATTRIBUTE_CFM_T_attr_list),
	OFFSET_uint16(SDC_SERVICE_ATTRIBUTE_CFM_T_response),
	OFFSET_uint16(SDC_SERVICE_ATTRIBUTE_CFM_T_err_code),
	OFFSET_uint16(SDC_SERVICE_ATTRIBUTE_CFM_T_size_err_info),
	OFFSET_uint8Ptr(SDC_SERVICE_ATTRIBUTE_CFM_T_err_info),
	SDC_SERVICE_ATTRIBUTE_CFM_T_pduSize
} ;

enum {
	OFFSET_START(SDC_SERVICE_SEARCH_CFM_T)
	OFFSET_uint16(SDC_SERVICE_SEARCH_CFM_T_type),
	OFFSET_uint16(SDC_SERVICE_SEARCH_CFM_T_phandle),
        OFFSET_uint16(SDC_SERVICE_SEARCH_CFM_T_con_ctx),
        OFFSET_BluetoothDeviceAddress(SDC_SERVICE_SEARCH_CFM_T_bd_addr),
	OFFSET_uint16(SDC_SERVICE_SEARCH_CFM_T_num_recs_ret),
	OFFSET_uint16(SDC_SERVICE_SEARCH_CFM_T_size_rec_list),
	OFFSET_uint8Ptr(SDC_SERVICE_SEARCH_CFM_T_rec_list),
	OFFSET_uint16(SDC_SERVICE_SEARCH_CFM_T_response),
	OFFSET_uint16(SDC_SERVICE_SEARCH_CFM_T_err_code),
	OFFSET_uint16(SDC_SERVICE_SEARCH_CFM_T_size_err_info),
	OFFSET_uint8Ptr(SDC_SERVICE_SEARCH_CFM_T_err_info),
	SDC_SERVICE_SEARCH_CFM_T_pduSize
} ;

#include "hcipacker/gen_sdp.h"

///////////////////////////////////////////////////////////////////////////////
//
//  Class: SDC_SERVICE_ATTRIBUTE_REQ_T_PDU
//
///////////////////////////////////////////////////////////////////////////////

SDC_SERVICE_ATTRIBUTE_REQ_T_PDU::SDC_SERVICE_ATTRIBUTE_REQ_T_PDU()
: SDP_PDU ( SDC_SERVICE_ATTRIBUTE_REQ , SDC_SERVICE_ATTRIBUTE_REQ_T_pduSize )
{
}

SDC_SERVICE_ATTRIBUTE_REQ_T_PDU::SDC_SERVICE_ATTRIBUTE_REQ_T_PDU( const PDU& from )
: SDP_PDU ( from )
{
}

SDC_SERVICE_ATTRIBUTE_REQ_T_PDU::SDC_SERVICE_ATTRIBUTE_REQ_T_PDU( const uint8 * buffer , uint32 len )
: SDP_PDU ( buffer , len )
{
}

uint16 SDC_SERVICE_ATTRIBUTE_REQ_T_PDU::get_phandle() const
{
    return get_uint16 ( SDC_SERVICE_ATTRIBUTE_REQ_T_phandle );
}

void SDC_SERVICE_ATTRIBUTE_REQ_T_PDU::set_phandle( uint16 value )
{
    set_uint16 ( SDC_SERVICE_ATTRIBUTE_REQ_T_phandle , value );
}

uint16 SDC_SERVICE_ATTRIBUTE_REQ_T_PDU::get_con_ctx() const
{
    return get_uint16 ( SDC_SERVICE_ATTRIBUTE_REQ_T_con_ctx );
}

void SDC_SERVICE_ATTRIBUTE_REQ_T_PDU::set_con_ctx( uint16 value )
{
    set_uint16 ( SDC_SERVICE_ATTRIBUTE_REQ_T_con_ctx , value );
}

BluetoothDeviceAddress SDC_SERVICE_ATTRIBUTE_REQ_T_PDU::get_bd_addr() const
{
    return get_BluetoothDeviceAddress ( SDC_SERVICE_ATTRIBUTE_REQ_T_bd_addr );
}

void SDC_SERVICE_ATTRIBUTE_REQ_T_PDU::set_bd_addr( BluetoothDeviceAddress value )
{
    set_BluetoothDeviceAddress ( SDC_SERVICE_ATTRIBUTE_REQ_T_bd_addr , value );
}

uint32 SDC_SERVICE_ATTRIBUTE_REQ_T_PDU::get_svc_rec_hndl() const
{
    return get_uint32 ( SDC_SERVICE_ATTRIBUTE_REQ_T_svc_rec_hndl );
}

void SDC_SERVICE_ATTRIBUTE_REQ_T_PDU::set_svc_rec_hndl( uint32 value )
{
    set_uint32 ( SDC_SERVICE_ATTRIBUTE_REQ_T_svc_rec_hndl , value );
}

uint16 SDC_SERVICE_ATTRIBUTE_REQ_T_PDU::get_size_attr_list() const
{
    return get_uint16 ( SDC_SERVICE_ATTRIBUTE_REQ_T_size_attr_list );
}

void SDC_SERVICE_ATTRIBUTE_REQ_T_PDU::set_size_attr_list(uint16 size_attr_list)
{
    set_uint16 ( SDC_SERVICE_ATTRIBUTE_REQ_T_size_attr_list , size_attr_list );
}

void SDC_SERVICE_ATTRIBUTE_REQ_T_PDU::get_attr_list( uint8 * toFill ) const
{
    PDU::get_uint8Array ( toFill , SDC_SERVICE_ATTRIBUTE_REQ_T_pduSize , get_size_attr_list() );
}

const uint8 * SDC_SERVICE_ATTRIBUTE_REQ_T_PDU::get_attr_listPtr() const
{
     return get_uint8ArrayPtr ( SDC_SERVICE_ATTRIBUTE_REQ_T_pduSize );
}

void SDC_SERVICE_ATTRIBUTE_REQ_T_PDU::set_attr_list( const uint8 * toCopy , uint16 size )
{
    set_final_uint8Ptr ( SDC_SERVICE_ATTRIBUTE_REQ_T_size_attr_list  ,
                         SDC_SERVICE_ATTRIBUTE_REQ_T_pduSize ,
                         toCopy , size );
}

uint16 SDC_SERVICE_ATTRIBUTE_REQ_T_PDU::get_max_num_attr() const
{
    return get_uint16 ( SDC_SERVICE_ATTRIBUTE_REQ_T_max_num_attr );
}

void SDC_SERVICE_ATTRIBUTE_REQ_T_PDU::set_max_num_attr( uint16 value )
{
    set_uint16 ( SDC_SERVICE_ATTRIBUTE_REQ_T_max_num_attr , value );
}

///////////////////////////////////////////////////////////////////////////////
//
//  Class: SDS_REGISTER_REQ_T_PDU
//
///////////////////////////////////////////////////////////////////////////////

SDS_REGISTER_REQ_T_PDU::SDS_REGISTER_REQ_T_PDU()
: SDP_PDU ( SDS_REGISTER_REQ , SDS_REGISTER_REQ_T_pduSize )
{
}

SDS_REGISTER_REQ_T_PDU::SDS_REGISTER_REQ_T_PDU( const PDU& from )
: SDP_PDU ( from )
{
}

SDS_REGISTER_REQ_T_PDU::SDS_REGISTER_REQ_T_PDU( const uint8 * buffer , uint32 len )
: SDP_PDU ( buffer , len )
{
}

uint16 SDS_REGISTER_REQ_T_PDU::get_phandle() const
{
    return get_uint16 ( SDS_REGISTER_REQ_T_phandle );
}

void SDS_REGISTER_REQ_T_PDU::set_phandle( uint16 value )
{
    set_uint16 ( SDS_REGISTER_REQ_T_phandle , value );
}

uint16 SDS_REGISTER_REQ_T_PDU::get_reg_ctx() const
{
    return get_uint16 ( SDS_REGISTER_REQ_T_reg_ctx );
}

void SDS_REGISTER_REQ_T_PDU::set_reg_ctx( uint16 value )
{
    set_uint16 ( SDS_REGISTER_REQ_T_reg_ctx , value );
}

void SDS_REGISTER_REQ_T_PDU::get_service_rec( uint8 * toFill ) const
{
    PDU::get_uint8Array ( toFill , SDS_REGISTER_REQ_T_pduSize , get_num_rec_bytes() );
}

const uint8 * SDS_REGISTER_REQ_T_PDU::get_service_recPtr() const
{
    return PDU::get_uint8ArrayPtr ( SDS_REGISTER_REQ_T_pduSize );
}

void SDS_REGISTER_REQ_T_PDU::set_service_rec( const uint8 * toCopy , uint16 size )
{
    set_final_uint8Ptr ( SDS_REGISTER_REQ_T_num_rec_bytes  ,
                         SDS_REGISTER_REQ_T_pduSize ,
                         toCopy , size );
}

uint16 SDS_REGISTER_REQ_T_PDU::get_num_rec_bytes() const
{
    return get_uint16 ( SDS_REGISTER_REQ_T_num_rec_bytes );
}

void SDS_REGISTER_REQ_T_PDU::set_num_rec_bytes(uint16 num_rec_bytes)
{
    set_uint16 (SDS_REGISTER_REQ_T_num_rec_bytes, num_rec_bytes);
}

///////////////////////////////////////////////////////////////////////////////
//
//  Class: SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_PDU
//
///////////////////////////////////////////////////////////////////////////////

SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_PDU::SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_PDU()
: SDP_PDU ( SDC_SERVICE_SEARCH_ATTRIBUTE_REQ , SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_pduSize )
{
}

SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_PDU::SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_PDU( const PDU& from )
: SDP_PDU ( from )
{
}

SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_PDU::SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_PDU( const uint8 * buffer , uint32 len )
: SDP_PDU ( buffer , len )
{
}

uint16 SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_PDU::get_phandle() const
{
    return get_uint16 ( SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_phandle );
}

void SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_PDU::set_phandle( uint16 value )
{
    set_uint16 ( SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_phandle , value );
}

uint16 SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_PDU::get_con_ctx() const
{
    return get_uint16 ( SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_con_ctx );
}

void SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_PDU::set_con_ctx( uint16 value )
{
    set_uint16 ( SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_con_ctx , value );
}

BluetoothDeviceAddress SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_PDU::get_bd_addr() const
{
    return get_BluetoothDeviceAddress ( SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_bd_addr );
}

void SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_PDU::set_bd_addr( BluetoothDeviceAddress value )
{
    set_BluetoothDeviceAddress ( SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_bd_addr , value );
}

uint16 SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_PDU::get_size_srch_pttrn() const
{
    return get_uint16 ( SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_size_srch_pttrn );
}

void SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_PDU::set_size_srch_pttrn(uint16 size_srch_pttrn)
{
    set_uint16 ( SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_size_srch_pttrn, size_srch_pttrn );
}

void SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_PDU::get_srch_pttrn( uint8 * toFill ) const
{
    PDU::get_uint8Array ( toFill , SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_pduSize , get_size_srch_pttrn() );
}

const uint8 * SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_PDU::get_srch_pttrnPtr() const
{
    return PDU::get_uint8ArrayPtr ( SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_pduSize );
}

void SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_PDU::set_srch_pttrn( const uint8 * toCopy , uint16 size )
{
    set_penult_uint8Ptr ( SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_size_srch_pttrn ,
                          SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_size_attr_list  ,
                          SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_pduSize ,
                          toCopy , size );
}

uint16 SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_PDU::get_size_attr_list() const
{
    return get_uint16 ( SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_size_attr_list );
}

void SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_PDU::set_size_attr_list(uint16 size_attr_list)
{
    set_uint16 ( SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_size_attr_list , size_attr_list);
}

void SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_PDU::get_attr_list( uint8 * toFill ) const
{
    PDU::get_uint8Array ( toFill , SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_pduSize + get_size_srch_pttrn() , get_size_attr_list() );
}

const uint8 * SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_PDU::get_attr_listPtr() const
{
     return get_uint8ArrayPtr ( SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_pduSize + get_size_srch_pttrn() );
}

void SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_PDU::set_attr_list( const uint8 * toCopy , uint16 size )
{
    set_final_uint8Ptr ( SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_size_attr_list  ,
                         SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_pduSize + get_size_srch_pttrn(),
                         toCopy , size );
}

uint16 SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_PDU::get_max_num_attr() const
{
    return get_uint16 ( SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_max_num_attr );
}

void SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_PDU::set_max_num_attr( uint16 value )
{
    set_uint16 ( SDC_SERVICE_SEARCH_ATTRIBUTE_REQ_T_max_num_attr , value );
}

///////////////////////////////////////////////////////////////////////////////
//
//  Class: SDC_SERVICE_SEARCH_REQ_T_PDU
//
///////////////////////////////////////////////////////////////////////////////

SDC_SERVICE_SEARCH_REQ_T_PDU::SDC_SERVICE_SEARCH_REQ_T_PDU()
: SDP_PDU ( SDC_SERVICE_SEARCH_REQ , SDC_SERVICE_SEARCH_REQ_T_pduSize )
{
}

SDC_SERVICE_SEARCH_REQ_T_PDU::SDC_SERVICE_SEARCH_REQ_T_PDU( const PDU& from )
: SDP_PDU ( from )
{
}

SDC_SERVICE_SEARCH_REQ_T_PDU::SDC_SERVICE_SEARCH_REQ_T_PDU( const uint8 * buffer , uint32 len )
: SDP_PDU ( buffer , len )
{
}

uint16 SDC_SERVICE_SEARCH_REQ_T_PDU::get_phandle() const
{
    return get_uint16 ( SDC_SERVICE_SEARCH_REQ_T_phandle );
}

void SDC_SERVICE_SEARCH_REQ_T_PDU::set_phandle( uint16 value )
{
    set_uint16 ( SDC_SERVICE_SEARCH_REQ_T_phandle , value );
}

uint16 SDC_SERVICE_SEARCH_REQ_T_PDU::get_con_ctx() const
{
    return get_uint16 ( SDC_SERVICE_SEARCH_REQ_T_con_ctx );
}

void SDC_SERVICE_SEARCH_REQ_T_PDU::set_con_ctx( uint16 value )
{
    set_uint16 ( SDC_SERVICE_SEARCH_REQ_T_con_ctx , value );
}

BluetoothDeviceAddress SDC_SERVICE_SEARCH_REQ_T_PDU::get_bd_addr() const
{
    return get_BluetoothDeviceAddress ( SDC_SERVICE_SEARCH_REQ_T_bd_addr );
}

void SDC_SERVICE_SEARCH_REQ_T_PDU::set_bd_addr( BluetoothDeviceAddress value )
{
    set_BluetoothDeviceAddress ( SDC_SERVICE_SEARCH_REQ_T_bd_addr , value );
}

uint16 SDC_SERVICE_SEARCH_REQ_T_PDU::get_size_srch_pttrn() const
{
    return get_uint16 ( SDC_SERVICE_SEARCH_REQ_T_size_srch_pttrn );
}

void SDC_SERVICE_SEARCH_REQ_T_PDU::set_size_srch_pttrn(uint16 size_srch_pttrn)
{
    set_uint16 ( SDC_SERVICE_SEARCH_REQ_T_size_srch_pttrn, size_srch_pttrn );
}

void SDC_SERVICE_SEARCH_REQ_T_PDU::get_srch_pttrn( uint8 * toFill ) const
{
    PDU::get_uint8Array ( toFill , SDC_SERVICE_SEARCH_REQ_T_pduSize , get_size_srch_pttrn() );
}

const uint8 * SDC_SERVICE_SEARCH_REQ_T_PDU::get_srch_pttrnPtr() const
{
    return PDU::get_uint8ArrayPtr ( SDC_SERVICE_SEARCH_REQ_T_pduSize );
}

void SDC_SERVICE_SEARCH_REQ_T_PDU::set_srch_pttrn( const uint8 * toCopy , uint16 size )
{
    set_final_uint8Ptr ( SDC_SERVICE_SEARCH_REQ_T_size_srch_pttrn  ,
                         SDC_SERVICE_SEARCH_REQ_T_pduSize ,
                         toCopy , size );
}

uint16 SDC_SERVICE_SEARCH_REQ_T_PDU::get_max_num_recs() const
{
    return get_uint16 ( SDC_SERVICE_SEARCH_REQ_T_max_num_recs );
}

void SDC_SERVICE_SEARCH_REQ_T_PDU::set_max_num_recs( uint16 value )
{
    set_uint16 ( SDC_SERVICE_SEARCH_REQ_T_max_num_recs , value );
}


///////////////////////////////////////////////////////////////////////////////
//
//  Class: SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_PDU
//
///////////////////////////////////////////////////////////////////////////////

SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_PDU::SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_PDU()
: SDP_PDU ( SDC_SERVICE_SEARCH_ATTRIBUTE_CFM , SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_pduSize )
{
}

SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_PDU::SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_PDU( const PDU& from )
: SDP_PDU ( from )
{
}

SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_PDU::SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_PDU( const uint8 * buffer , uint32 len )
: SDP_PDU ( buffer , len )
{
}

uint16 SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_PDU::get_phandle() const
{
    return get_uint16 ( SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_phandle );
}

void SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_PDU::set_phandle( uint16 value )
{
    set_uint16 ( SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_phandle , value );
}

uint16 SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_PDU::get_con_ctx() const
{
    return get_uint16 ( SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_con_ctx );
}

void SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_PDU::set_con_ctx( uint16 value )
{
    set_uint16 ( SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_con_ctx , value );
}

uint16 SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_PDU::get_total_response_size() const
{
    return get_uint16 ( SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_total_response_size );
}

void SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_PDU::set_total_response_size( uint16 value )
{
    set_uint16 ( SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_total_response_size , value );
}

uint16 SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_PDU::get_size_attr_list() const
{
    return get_uint16 ( SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_size_attr_list );
}

void SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_PDU::get_attr_list( uint8 * toFill ) const
{
    PDU::get_uint8Array ( toFill , SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_pduSize , get_size_attr_list() );
}

const uint8 * SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_PDU::get_attr_listPtr() const
{
    return get_uint8ArrayPtr ( SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_pduSize );
}

void SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_PDU::set_attr_list( const uint8 * toCopy , uint16 size )
{
    set_penult_uint8Ptr ( SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_size_attr_list ,
                          SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_size_err_info ,
                          SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_pduSize ,
                          toCopy , size );
}

bool SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_PDU::get_more_to_come() const
{
    return get_bool ( SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_more_to_come );
}

void SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_PDU::set_more_to_come( bool value )
{
    set_bool ( SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_more_to_come , value );
}

uint16 SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_PDU::get_response() const
{
    return get_uint16 ( SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_response );
}

void SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_PDU::set_response( uint16 value )
{
    set_uint16 ( SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_response , value );
}

uint16 SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_PDU::get_err_code() const
{
    return get_uint16 ( SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_err_code );
}

void SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_PDU::set_err_code( uint16 value )
{
    set_uint16 ( SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_err_code , value );
}

uint16 SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_PDU::get_size_err_info() const
{
    return get_uint16 ( SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_size_err_info );
}

void SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_PDU::get_err_info( uint8 * toFill ) const
{
    PDU::get_uint8Array ( toFill , SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_pduSize + get_size_attr_list() , get_size_err_info() );
}

const uint8 * SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_PDU::get_err_infoPtr() const
{
    return PDU::get_uint8ArrayPtr ( SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_pduSize + get_size_attr_list() );
}

void SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_PDU::set_err_info( const uint8 * toCopy , uint16 size )
{
    set_final_uint8Ptr ( SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_size_err_info  ,
                         SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_pduSize + get_size_attr_list() ,
                         toCopy , size );
}

BluetoothDeviceAddress SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_PDU::get_bd_addr() const
{
    return get_BluetoothDeviceAddress ( SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_bd_addr );
}

void SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_PDU::set_bd_addr( BluetoothDeviceAddress value )
{
    set_BluetoothDeviceAddress ( SDC_SERVICE_SEARCH_ATTRIBUTE_CFM_T_bd_addr , value );
}


///////////////////////////////////////////////////////////////////////////////
//
//  Class: SDC_SERVICE_ATTRIBUTE_CFM_T_PDU
//
///////////////////////////////////////////////////////////////////////////////

SDC_SERVICE_ATTRIBUTE_CFM_T_PDU::SDC_SERVICE_ATTRIBUTE_CFM_T_PDU()
: SDP_PDU ( SDC_SERVICE_ATTRIBUTE_CFM , SDC_SERVICE_ATTRIBUTE_CFM_T_pduSize )
{
}

SDC_SERVICE_ATTRIBUTE_CFM_T_PDU::SDC_SERVICE_ATTRIBUTE_CFM_T_PDU( const PDU& from )
: SDP_PDU ( from )
{
}

SDC_SERVICE_ATTRIBUTE_CFM_T_PDU::SDC_SERVICE_ATTRIBUTE_CFM_T_PDU( const uint8 * buffer , uint32 len )
: SDP_PDU ( buffer , len )
{
}

uint16 SDC_SERVICE_ATTRIBUTE_CFM_T_PDU::get_phandle() const
{
    return get_uint16 ( SDC_SERVICE_ATTRIBUTE_CFM_T_phandle );
}

void SDC_SERVICE_ATTRIBUTE_CFM_T_PDU::set_phandle( uint16 value )
{
    set_uint16 ( SDC_SERVICE_ATTRIBUTE_CFM_T_phandle , value );
}

uint16 SDC_SERVICE_ATTRIBUTE_CFM_T_PDU::get_con_ctx() const
{
    return get_uint16 ( SDC_SERVICE_ATTRIBUTE_CFM_T_con_ctx );
}

void SDC_SERVICE_ATTRIBUTE_CFM_T_PDU::set_con_ctx( uint16 value )
{
    set_uint16 ( SDC_SERVICE_ATTRIBUTE_CFM_T_con_ctx , value );
}

uint16 SDC_SERVICE_ATTRIBUTE_CFM_T_PDU::get_size_attr_list() const
{
    return get_uint16 ( SDC_SERVICE_ATTRIBUTE_CFM_T_size_attr_list );
}

void SDC_SERVICE_ATTRIBUTE_CFM_T_PDU::get_attr_list( uint8 * toFill ) const
{
    PDU::get_uint8Array ( toFill , SDC_SERVICE_ATTRIBUTE_CFM_T_pduSize , get_size_attr_list() );
}

const uint8 * SDC_SERVICE_ATTRIBUTE_CFM_T_PDU::get_attr_listPtr() const
{
     return get_uint8ArrayPtr ( SDC_SERVICE_ATTRIBUTE_CFM_T_pduSize );
}

void SDC_SERVICE_ATTRIBUTE_CFM_T_PDU::set_attr_list( const uint8 * toCopy , uint16 size )
{
    set_penult_uint8Ptr ( SDC_SERVICE_ATTRIBUTE_CFM_T_size_attr_list ,
                          SDC_SERVICE_ATTRIBUTE_CFM_T_size_err_info ,
                          SDC_SERVICE_ATTRIBUTE_CFM_T_pduSize ,
                          toCopy , size );
}

uint16 SDC_SERVICE_ATTRIBUTE_CFM_T_PDU::get_response() const
{
    return get_uint16 ( SDC_SERVICE_ATTRIBUTE_CFM_T_response );
}

void SDC_SERVICE_ATTRIBUTE_CFM_T_PDU::set_response( uint16 value )
{
    set_uint16 ( SDC_SERVICE_ATTRIBUTE_CFM_T_response , value );
}

uint16 SDC_SERVICE_ATTRIBUTE_CFM_T_PDU::get_err_code() const
{
    return get_uint16 ( SDC_SERVICE_ATTRIBUTE_CFM_T_err_code );
}

void SDC_SERVICE_ATTRIBUTE_CFM_T_PDU::set_err_code( uint16 value )
{
    set_uint16 ( SDC_SERVICE_ATTRIBUTE_CFM_T_err_code , value );
}

uint16 SDC_SERVICE_ATTRIBUTE_CFM_T_PDU::get_size_err_info() const
{
    return get_uint16 ( SDC_SERVICE_ATTRIBUTE_CFM_T_size_err_info );
}

void SDC_SERVICE_ATTRIBUTE_CFM_T_PDU::get_err_info( uint8 * toFill ) const
{
    PDU::get_uint8Array ( toFill , SDC_SERVICE_ATTRIBUTE_CFM_T_pduSize + get_size_attr_list() , get_size_err_info() );
}

const uint8 * SDC_SERVICE_ATTRIBUTE_CFM_T_PDU::get_err_infoPtr() const
{
    return PDU::get_uint8ArrayPtr ( SDC_SERVICE_ATTRIBUTE_CFM_T_pduSize + get_size_attr_list() );
}

void SDC_SERVICE_ATTRIBUTE_CFM_T_PDU::set_err_info( const uint8 * toCopy , uint16 size )
{
    set_final_uint8Ptr ( SDC_SERVICE_ATTRIBUTE_CFM_T_size_err_info  ,
                         SDC_SERVICE_ATTRIBUTE_CFM_T_pduSize + get_size_attr_list() ,
                         toCopy , size );
}


BluetoothDeviceAddress SDC_SERVICE_ATTRIBUTE_CFM_T_PDU::get_bd_addr() const
{
    return get_BluetoothDeviceAddress ( SDC_SERVICE_ATTRIBUTE_CFM_T_bd_addr );
}

void SDC_SERVICE_ATTRIBUTE_CFM_T_PDU::set_bd_addr( BluetoothDeviceAddress value )
{
    set_BluetoothDeviceAddress ( SDC_SERVICE_ATTRIBUTE_CFM_T_bd_addr , value );
}


///////////////////////////////////////////////////////////////////////////////
//
//  Class: SDC_SERVICE_SEARCH_CFM_T_PDU
//
///////////////////////////////////////////////////////////////////////////////

SDC_SERVICE_SEARCH_CFM_T_PDU::SDC_SERVICE_SEARCH_CFM_T_PDU()
: SDP_PDU ( SDC_SERVICE_SEARCH_CFM , SDC_SERVICE_SEARCH_CFM_T_pduSize )
{
}

SDC_SERVICE_SEARCH_CFM_T_PDU::SDC_SERVICE_SEARCH_CFM_T_PDU( const PDU& from )
: SDP_PDU ( from )
{
}

SDC_SERVICE_SEARCH_CFM_T_PDU::SDC_SERVICE_SEARCH_CFM_T_PDU( const uint8 * buffer , uint32 len )
: SDP_PDU ( buffer , len )
{
}

uint16 SDC_SERVICE_SEARCH_CFM_T_PDU::get_phandle() const
{
    return get_uint16 ( SDC_SERVICE_SEARCH_CFM_T_phandle );
}

void SDC_SERVICE_SEARCH_CFM_T_PDU::set_phandle( uint16 value )
{
    set_uint16 ( SDC_SERVICE_SEARCH_CFM_T_phandle , value );
}

uint16 SDC_SERVICE_SEARCH_CFM_T_PDU::get_con_ctx() const
{
    return get_uint16 ( SDC_SERVICE_SEARCH_CFM_T_con_ctx );
}

void SDC_SERVICE_SEARCH_CFM_T_PDU::set_con_ctx( uint16 value )
{
    set_uint16 ( SDC_SERVICE_SEARCH_CFM_T_con_ctx , value );
}

uint16 SDC_SERVICE_SEARCH_CFM_T_PDU::get_num_recs_ret() const
{
    return get_uint16 ( SDC_SERVICE_SEARCH_CFM_T_num_recs_ret );
}

void SDC_SERVICE_SEARCH_CFM_T_PDU::set_num_recs_ret( uint16 value )
{
    set_uint16 ( SDC_SERVICE_SEARCH_CFM_T_num_recs_ret , value );
}

uint16 SDC_SERVICE_SEARCH_CFM_T_PDU::get_size_rec_list() const
{
    return get_uint16 ( SDC_SERVICE_SEARCH_CFM_T_size_rec_list );
}

void SDC_SERVICE_SEARCH_CFM_T_PDU::get_rec_list( uint8 * toFill ) const
{
    PDU::get_uint8Array ( toFill , SDC_SERVICE_SEARCH_CFM_T_pduSize , get_size_rec_list() );
}

const uint8 * SDC_SERVICE_SEARCH_CFM_T_PDU::get_rec_listPtr() const
{
    return PDU::get_uint8ArrayPtr ( SDC_SERVICE_SEARCH_CFM_T_pduSize );
}

void SDC_SERVICE_SEARCH_CFM_T_PDU::set_rec_list( const uint8 * toCopy , uint16 size )
{
    set_penult_uint8Ptr ( SDC_SERVICE_SEARCH_CFM_T_size_rec_list ,
                          SDC_SERVICE_SEARCH_CFM_T_size_err_info ,
                          SDC_SERVICE_SEARCH_CFM_T_pduSize ,
                          toCopy , size );
}

uint16 SDC_SERVICE_SEARCH_CFM_T_PDU::get_response() const
{
    return get_uint16 ( SDC_SERVICE_SEARCH_CFM_T_response );
}

void SDC_SERVICE_SEARCH_CFM_T_PDU::set_response( uint16 value )
{
    set_uint16 ( SDC_SERVICE_SEARCH_CFM_T_response , value );
}

uint16 SDC_SERVICE_SEARCH_CFM_T_PDU::get_err_code() const
{
    return get_uint16 ( SDC_SERVICE_SEARCH_CFM_T_err_code );
}

void SDC_SERVICE_SEARCH_CFM_T_PDU::set_err_code( uint16 value )
{
    set_uint16 ( SDC_SERVICE_SEARCH_CFM_T_err_code , value );
}

uint16 SDC_SERVICE_SEARCH_CFM_T_PDU::get_size_err_info() const
{
    return get_uint16 ( SDC_SERVICE_SEARCH_CFM_T_size_err_info );
}

void SDC_SERVICE_SEARCH_CFM_T_PDU::get_err_info( uint8 * toFill ) const
{
    PDU::get_uint8Array ( toFill , SDC_SERVICE_SEARCH_CFM_T_pduSize + get_size_rec_list() , get_size_err_info() );
}

const uint8 * SDC_SERVICE_SEARCH_CFM_T_PDU::get_err_infoPtr() const
{
    return get_uint8ArrayPtr ( SDC_SERVICE_SEARCH_CFM_T_pduSize + get_size_rec_list() );
}

void SDC_SERVICE_SEARCH_CFM_T_PDU::set_err_info( const uint8 * toCopy , uint16 size )
{
    set_final_uint8Ptr ( SDC_SERVICE_SEARCH_CFM_T_size_err_info  ,
                         SDC_SERVICE_SEARCH_CFM_T_pduSize + get_size_rec_list() ,
                         toCopy , size );
}

BluetoothDeviceAddress SDC_SERVICE_SEARCH_CFM_T_PDU::get_bd_addr() const
{
    return get_BluetoothDeviceAddress ( SDC_SERVICE_SEARCH_CFM_T_bd_addr );
}

void SDC_SERVICE_SEARCH_CFM_T_PDU::set_bd_addr( BluetoothDeviceAddress value )
{
    set_BluetoothDeviceAddress ( SDC_SERVICE_SEARCH_CFM_T_bd_addr , value );
}