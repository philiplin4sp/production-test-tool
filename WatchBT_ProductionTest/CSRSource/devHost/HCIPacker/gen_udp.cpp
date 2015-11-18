////////////////////////////////////////////////////////////////////////////////
//
//  WARNING THIS IS AN AUTOGENERATED FILE DEFINING A BLUECORE-FRIENDY PROTOCOL
//
////////////////////////////////////////////////////////////////////////////////

#include "bcflayout.h"


enum {
	OFFSET_START(UDP_DATA_CFM_T)
	OFFSET_uint16(UDP_DATA_CFM_T_type),
	OFFSET_uint16(UDP_DATA_CFM_T_phandle),
	OFFSET_uint16(UDP_DATA_CFM_T_id),
	OFFSET_uint16(UDP_DATA_CFM_T_len),
	UDP_DATA_CFM_T_pduSize
} ;

enum {
	OFFSET_START(UDP_CLOSE_CFM_T)
	OFFSET_uint16(UDP_CLOSE_CFM_T_type),
	OFFSET_uint16(UDP_CLOSE_CFM_T_phandle),
	OFFSET_uint16(UDP_CLOSE_CFM_T_id),
	UDP_CLOSE_CFM_T_pduSize
} ;

enum {
	OFFSET_START(UDP_OPEN_CFM_T)
	OFFSET_uint16(UDP_OPEN_CFM_T_type),
	OFFSET_uint16(UDP_OPEN_CFM_T_phandle),
	OFFSET_uint16(UDP_OPEN_CFM_T_status),
	OFFSET_uint16(UDP_OPEN_CFM_T_id),
	OFFSET_uint16(UDP_OPEN_CFM_T_reserved),
	UDP_OPEN_CFM_T_pduSize
} ;

enum {
	OFFSET_START(UDP_LISTEN_REQ_T)
	OFFSET_uint16(UDP_LISTEN_REQ_T_type),
	OFFSET_uint16(UDP_LISTEN_REQ_T_id),
	OFFSET_IPAddress(UDP_LISTEN_REQ_T_loc_addr),
	UDP_LISTEN_REQ_T_pduSize
} ;

enum {
	OFFSET_START(UDP_CLOSE_REQ_T)
	OFFSET_uint16(UDP_CLOSE_REQ_T_type),
	OFFSET_uint16(UDP_CLOSE_REQ_T_id),
	UDP_CLOSE_REQ_T_pduSize
} ;

enum {
	OFFSET_START(UDP_OPEN_REQ_T)
	OFFSET_uint16(UDP_OPEN_REQ_T_type),
	OFFSET_uint16(UDP_OPEN_REQ_T_phandle),
	OFFSET_uint16(UDP_OPEN_REQ_T_flags),
	OFFSET_IPAddress(UDP_OPEN_REQ_T_rem_addr),
	OFFSET_uint16(UDP_OPEN_REQ_T_rem_port),
	OFFSET_uint16(UDP_OPEN_REQ_T_loc_port),
	UDP_OPEN_REQ_T_pduSize
} ;

enum {
	OFFSET_START(UDP_IGNORE_REQ_T)
	OFFSET_uint16(UDP_IGNORE_REQ_T_type),
	OFFSET_uint16(UDP_IGNORE_REQ_T_id),
	OFFSET_IPAddress(UDP_IGNORE_REQ_T_loc_addr),
	UDP_IGNORE_REQ_T_pduSize
} ;
#include "hcipacker/gen_udp.h"
 
///////////////////////////////////////////////////////////////////////////////
//
//  Class: UDP_DATA_CFM_T_PDU
//
///////////////////////////////////////////////////////////////////////////////

UDP_DATA_CFM_T_PDU::UDP_DATA_CFM_T_PDU()
: UDP_PDU ( UDP_DATA_CFM , UDP_DATA_CFM_T_pduSize )
{
}

UDP_DATA_CFM_T_PDU::UDP_DATA_CFM_T_PDU( const PDU& from )
: UDP_PDU ( from )
{
}

UDP_DATA_CFM_T_PDU::UDP_DATA_CFM_T_PDU( const uint8 * buffer , uint32 len )
: UDP_PDU ( buffer , len )
{
}

uint16 UDP_DATA_CFM_T_PDU::get_phandle() const
{
    return get_uint16 ( UDP_DATA_CFM_T_phandle );
}

void UDP_DATA_CFM_T_PDU::set_phandle( uint16 value )
{
    set_uint16 ( UDP_DATA_CFM_T_phandle , value );
}

uint16 UDP_DATA_CFM_T_PDU::get_id() const
{
    return get_uint16 ( UDP_DATA_CFM_T_id );
}

void UDP_DATA_CFM_T_PDU::set_id( uint16 value )
{
    set_uint16 ( UDP_DATA_CFM_T_id , value );
}

uint16 UDP_DATA_CFM_T_PDU::get_len() const
{
    return get_uint16 ( UDP_DATA_CFM_T_len );
}

void UDP_DATA_CFM_T_PDU::set_len( uint16 value )
{
    set_uint16 ( UDP_DATA_CFM_T_len , value );
}

///////////////////////////////////////////////////////////////////////////////
//
//  Class: UDP_CLOSE_CFM_T_PDU
//
///////////////////////////////////////////////////////////////////////////////

UDP_CLOSE_CFM_T_PDU::UDP_CLOSE_CFM_T_PDU()
: UDP_PDU ( UDP_CLOSE_CFM , UDP_CLOSE_CFM_T_pduSize )
{
}

UDP_CLOSE_CFM_T_PDU::UDP_CLOSE_CFM_T_PDU( const PDU& from )
: UDP_PDU ( from )
{
}

UDP_CLOSE_CFM_T_PDU::UDP_CLOSE_CFM_T_PDU( const uint8 * buffer , uint32 len )
: UDP_PDU ( buffer , len )
{
}

uint16 UDP_CLOSE_CFM_T_PDU::get_phandle() const
{
    return get_uint16 ( UDP_CLOSE_CFM_T_phandle );
}

void UDP_CLOSE_CFM_T_PDU::set_phandle( uint16 value )
{
    set_uint16 ( UDP_CLOSE_CFM_T_phandle , value );
}

uint16 UDP_CLOSE_CFM_T_PDU::get_id() const
{
    return get_uint16 ( UDP_CLOSE_CFM_T_id );
}

void UDP_CLOSE_CFM_T_PDU::set_id( uint16 value )
{
    set_uint16 ( UDP_CLOSE_CFM_T_id , value );
}

///////////////////////////////////////////////////////////////////////////////
//
//  Class: UDP_OPEN_CFM_T_PDU
//
///////////////////////////////////////////////////////////////////////////////

UDP_OPEN_CFM_T_PDU::UDP_OPEN_CFM_T_PDU()
: UDP_PDU ( UDP_OPEN_CFM , UDP_OPEN_CFM_T_pduSize )
{
}

UDP_OPEN_CFM_T_PDU::UDP_OPEN_CFM_T_PDU( const PDU& from )
: UDP_PDU ( from )
{
}

UDP_OPEN_CFM_T_PDU::UDP_OPEN_CFM_T_PDU( const uint8 * buffer , uint32 len )
: UDP_PDU ( buffer , len )
{
}

uint16 UDP_OPEN_CFM_T_PDU::get_phandle() const
{
    return get_uint16 ( UDP_OPEN_CFM_T_phandle );
}

void UDP_OPEN_CFM_T_PDU::set_phandle( uint16 value )
{
    set_uint16 ( UDP_OPEN_CFM_T_phandle , value );
}

uint16 UDP_OPEN_CFM_T_PDU::get_status() const
{
    return get_uint16 ( UDP_OPEN_CFM_T_status );
}

void UDP_OPEN_CFM_T_PDU::set_status( uint16 value )
{
    set_uint16 ( UDP_OPEN_CFM_T_status , value );
}

uint16 UDP_OPEN_CFM_T_PDU::get_id() const
{
    return get_uint16 ( UDP_OPEN_CFM_T_id );
}

void UDP_OPEN_CFM_T_PDU::set_id( uint16 value )
{
    set_uint16 ( UDP_OPEN_CFM_T_id , value );
}

uint16 UDP_OPEN_CFM_T_PDU::get_reserved() const
{
    return get_uint16 ( UDP_OPEN_CFM_T_reserved );
}

void UDP_OPEN_CFM_T_PDU::set_reserved( uint16 value )
{
    set_uint16 ( UDP_OPEN_CFM_T_reserved , value );
}

///////////////////////////////////////////////////////////////////////////////
//
//  Class: UDP_LISTEN_REQ_T_PDU
//
///////////////////////////////////////////////////////////////////////////////

UDP_LISTEN_REQ_T_PDU::UDP_LISTEN_REQ_T_PDU()
: UDP_PDU ( UDP_LISTEN_REQ , UDP_LISTEN_REQ_T_pduSize )
{
}

UDP_LISTEN_REQ_T_PDU::UDP_LISTEN_REQ_T_PDU( const PDU& from )
: UDP_PDU ( from )
{
}

UDP_LISTEN_REQ_T_PDU::UDP_LISTEN_REQ_T_PDU( const uint8 * buffer , uint32 len )
: UDP_PDU ( buffer , len )
{
}

uint16 UDP_LISTEN_REQ_T_PDU::get_id() const
{
    return get_uint16 ( UDP_LISTEN_REQ_T_id );
}

void UDP_LISTEN_REQ_T_PDU::set_id( uint16 value )
{
    set_uint16 ( UDP_LISTEN_REQ_T_id , value );
}

IPAddress UDP_LISTEN_REQ_T_PDU::get_loc_addr() const
{
    return get_IPAddress ( UDP_LISTEN_REQ_T_loc_addr );
}

void UDP_LISTEN_REQ_T_PDU::set_loc_addr( IPAddress value )
{
    set_IPAddress ( UDP_LISTEN_REQ_T_loc_addr , value );
}

///////////////////////////////////////////////////////////////////////////////
//
//  Class: UDP_CLOSE_REQ_T_PDU
//
///////////////////////////////////////////////////////////////////////////////

UDP_CLOSE_REQ_T_PDU::UDP_CLOSE_REQ_T_PDU()
: UDP_PDU ( UDP_CLOSE_REQ , UDP_CLOSE_REQ_T_pduSize )
{
}

UDP_CLOSE_REQ_T_PDU::UDP_CLOSE_REQ_T_PDU( const PDU& from )
: UDP_PDU ( from )
{
}

UDP_CLOSE_REQ_T_PDU::UDP_CLOSE_REQ_T_PDU( const uint8 * buffer , uint32 len )
: UDP_PDU ( buffer , len )
{
}

uint16 UDP_CLOSE_REQ_T_PDU::get_id() const
{
    return get_uint16 ( UDP_CLOSE_REQ_T_id );
}

void UDP_CLOSE_REQ_T_PDU::set_id( uint16 value )
{
    set_uint16 ( UDP_CLOSE_REQ_T_id , value );
}

///////////////////////////////////////////////////////////////////////////////
//
//  Class: UDP_OPEN_REQ_T_PDU
//
///////////////////////////////////////////////////////////////////////////////

UDP_OPEN_REQ_T_PDU::UDP_OPEN_REQ_T_PDU()
: UDP_PDU ( UDP_OPEN_REQ , UDP_OPEN_REQ_T_pduSize )
{
}

UDP_OPEN_REQ_T_PDU::UDP_OPEN_REQ_T_PDU( const PDU& from )
: UDP_PDU ( from )
{
}

UDP_OPEN_REQ_T_PDU::UDP_OPEN_REQ_T_PDU( const uint8 * buffer , uint32 len )
: UDP_PDU ( buffer , len )
{
}

uint16 UDP_OPEN_REQ_T_PDU::get_phandle() const
{
    return get_uint16 ( UDP_OPEN_REQ_T_phandle );
}

void UDP_OPEN_REQ_T_PDU::set_phandle( uint16 value )
{
    set_uint16 ( UDP_OPEN_REQ_T_phandle , value );
}

uint16 UDP_OPEN_REQ_T_PDU::get_flags() const
{
    return get_uint16 ( UDP_OPEN_REQ_T_flags );
}

void UDP_OPEN_REQ_T_PDU::set_flags( uint16 value )
{
    set_uint16 ( UDP_OPEN_REQ_T_flags , value );
}

IPAddress UDP_OPEN_REQ_T_PDU::get_rem_addr() const
{
    return get_IPAddress ( UDP_OPEN_REQ_T_rem_addr );
}

void UDP_OPEN_REQ_T_PDU::set_rem_addr( IPAddress value )
{
    set_IPAddress ( UDP_OPEN_REQ_T_rem_addr , value );
}

uint16 UDP_OPEN_REQ_T_PDU::get_rem_port() const
{
    return get_uint16 ( UDP_OPEN_REQ_T_rem_port );
}

void UDP_OPEN_REQ_T_PDU::set_rem_port( uint16 value )
{
    set_uint16 ( UDP_OPEN_REQ_T_rem_port , value );
}

uint16 UDP_OPEN_REQ_T_PDU::get_loc_port() const
{
    return get_uint16 ( UDP_OPEN_REQ_T_loc_port );
}

void UDP_OPEN_REQ_T_PDU::set_loc_port( uint16 value )
{
    set_uint16 ( UDP_OPEN_REQ_T_loc_port , value );
}

///////////////////////////////////////////////////////////////////////////////
//
//  Class: UDP_IGNORE_REQ_T_PDU
//
///////////////////////////////////////////////////////////////////////////////

UDP_IGNORE_REQ_T_PDU::UDP_IGNORE_REQ_T_PDU()
: UDP_PDU ( UDP_IGNORE_REQ , UDP_IGNORE_REQ_T_pduSize )
{
}

UDP_IGNORE_REQ_T_PDU::UDP_IGNORE_REQ_T_PDU( const PDU& from )
: UDP_PDU ( from )
{
}

UDP_IGNORE_REQ_T_PDU::UDP_IGNORE_REQ_T_PDU( const uint8 * buffer , uint32 len )
: UDP_PDU ( buffer , len )
{
}

uint16 UDP_IGNORE_REQ_T_PDU::get_id() const
{
    return get_uint16 ( UDP_IGNORE_REQ_T_id );
}

void UDP_IGNORE_REQ_T_PDU::set_id( uint16 value )
{
    set_uint16 ( UDP_IGNORE_REQ_T_id , value );
}

IPAddress UDP_IGNORE_REQ_T_PDU::get_loc_addr() const
{
    return get_IPAddress ( UDP_IGNORE_REQ_T_loc_addr );
}

void UDP_IGNORE_REQ_T_PDU::set_loc_addr( IPAddress value )
{
    set_IPAddress ( UDP_IGNORE_REQ_T_loc_addr , value );
}

