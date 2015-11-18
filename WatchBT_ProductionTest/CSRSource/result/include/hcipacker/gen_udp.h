/////////////////////////WARNING - AUTOGENERATED FILE//////////////////////////
//
//  FILENAME:   gen_udp.h
//
//  PURPOSE :   Headers for autogenerated udp pdus
//
///////////////////////////////////////////////////////////////////////////////

#ifndef __GEN_UDP_H__
#define __GEN_UDP_H__

#include "common/types.h"
#include "hcipacker/bluestackpdu.h"
#include "common/types_t.h"
#include "app/bluestack/bluetooth.h"
#include "app/pan/udp_hacked.h"


class UDP_DATA_CFM_T_PDU : public UDP_PDU
{
public:
    UDP_DATA_CFM_T_PDU() ;
    UDP_DATA_CFM_T_PDU( const PDU& );
    UDP_DATA_CFM_T_PDU( const uint8 * buffer , uint32 len ) ;
    uint16 get_phandle(void) const ;
    void set_phandle(uint16 value) ;
    uint16 get_id(void) const ;
    void set_id(uint16 value) ;
    uint16 get_len(void) const ;
    void set_len(uint16 value) ;
};

class UDP_CLOSE_CFM_T_PDU : public UDP_PDU
{
public:
    UDP_CLOSE_CFM_T_PDU() ;
    UDP_CLOSE_CFM_T_PDU( const PDU& );
    UDP_CLOSE_CFM_T_PDU( const uint8 * buffer , uint32 len ) ;
    uint16 get_phandle(void) const ;
    void set_phandle(uint16 value) ;
    uint16 get_id(void) const ;
    void set_id(uint16 value) ;
};

class UDP_OPEN_CFM_T_PDU : public UDP_PDU
{
public:
    UDP_OPEN_CFM_T_PDU() ;
    UDP_OPEN_CFM_T_PDU( const PDU& );
    UDP_OPEN_CFM_T_PDU( const uint8 * buffer , uint32 len ) ;
    uint16 get_phandle(void) const ;
    void set_phandle(uint16 value) ;
    uint16 get_status(void) const ;
    void set_status(uint16 value) ;
    uint16 get_id(void) const ;
    void set_id(uint16 value) ;
    uint16 get_reserved(void) const ;
    void set_reserved(uint16 value) ;
};

class UDP_LISTEN_REQ_T_PDU : public UDP_PDU
{
public:
    UDP_LISTEN_REQ_T_PDU() ;
    UDP_LISTEN_REQ_T_PDU( const PDU& );
    UDP_LISTEN_REQ_T_PDU( const uint8 * buffer , uint32 len ) ;
    uint16 get_id(void) const ;
    void set_id(uint16 value) ;
    IPAddress get_loc_addr(void) const ;
    void set_loc_addr(IPAddress value) ;
};

class UDP_CLOSE_REQ_T_PDU : public UDP_PDU
{
public:
    UDP_CLOSE_REQ_T_PDU() ;
    UDP_CLOSE_REQ_T_PDU( const PDU& );
    UDP_CLOSE_REQ_T_PDU( const uint8 * buffer , uint32 len ) ;
    uint16 get_id(void) const ;
    void set_id(uint16 value) ;
};

class UDP_OPEN_REQ_T_PDU : public UDP_PDU
{
public:
    UDP_OPEN_REQ_T_PDU() ;
    UDP_OPEN_REQ_T_PDU( const PDU& );
    UDP_OPEN_REQ_T_PDU( const uint8 * buffer , uint32 len ) ;
    uint16 get_phandle(void) const ;
    void set_phandle(uint16 value) ;
    uint16 get_flags(void) const ;
    void set_flags(uint16 value) ;
    IPAddress get_rem_addr(void) const ;
    void set_rem_addr(IPAddress value) ;
    uint16 get_rem_port(void) const ;
    void set_rem_port(uint16 value) ;
    uint16 get_loc_port(void) const ;
    void set_loc_port(uint16 value) ;
};

class UDP_IGNORE_REQ_T_PDU : public UDP_PDU
{
public:
    UDP_IGNORE_REQ_T_PDU() ;
    UDP_IGNORE_REQ_T_PDU( const PDU& );
    UDP_IGNORE_REQ_T_PDU( const uint8 * buffer , uint32 len ) ;
    uint16 get_id(void) const ;
    void set_id(uint16 value) ;
    IPAddress get_loc_addr(void) const ;
    void set_loc_addr(IPAddress value) ;
};

#include "hcipacker/xtraudp.h"

#endif//__GEN_UDP_H__