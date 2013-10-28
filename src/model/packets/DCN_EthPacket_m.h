//
// Generated file, do not edit! Created by opp_msgc 4.3 from model/packets/DCN_EthPacket.msg.
//

#ifndef _DCN_ETHPACKET_M_H_
#define _DCN_ETHPACKET_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0403
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{
#include "IPv4Datagram_m.h"
#include "IPvXAddress.h"
#include "IPProtocolId_m.h"


enum IPProtocolId;


#define SEQUENCE_NO_BITS 32







#define UDP_HEADER_SIZE			8
#define IP_HEADER_SIZE			(IP_HEADER_BYTES + 8) 
#define ETHER_FRAME_SIZE 		38
#define ETHER_MIN_PAYLOAD 		46
#define ETHER_MAX_SEG_SIZE		1500
#define DCN_MIN_PACKET_SIZE		(ETHER_MIN_PAYLOAD + ETHER_FRAME_SIZE)
#define IP_OVERHEAD				IP_HEADER_SIZE
// }}



/**
 * Enum generated from <tt>model/packets/DCN_EthPacket.msg</tt> by opp_msgc.
 * <pre>
 * enum DCN_EthPacketType
 * {
 *     DCN_ETH_PACKET = 0;
 *     DCN_SCHEDULING_PACKET = 1;
 *     DCN_IP_PACKET = 2;
 *     DCN_UDP_PACKET = 3;
 *     DCN_TCP_PACKET = 4;
 * }
 * </pre>
 */
enum DCN_EthPacketType {
    DCN_ETH_PACKET = 0,
    DCN_SCHEDULING_PACKET = 1,
    DCN_IP_PACKET = 2,
    DCN_UDP_PACKET = 3,
    DCN_TCP_PACKET = 4
};

/**
 * Class generated from <tt>model/packets/DCN_EthPacket.msg</tt> by opp_msgc.
 * <pre>
 * packet DCN_EthPacket
 * {
 *     @customize(true); 
 *     
 *     
 *     
 *     unsigned int srcAddr;
 *     unsigned int destAddr;
 *     
 *     unsigned int sequenceNo;
 *   	
 *   
 *     
 *   	unsigned short payload; 
 *     
 *     unsigned short path;
 *     
 *     unsigned short kind enum(DCN_EthPacketType) = DCN_ETH_PACKET; 
 *     
 *     bool dataPacket = true;
 * }
 * </pre>
 *
 * DCN_EthPacket_Base is only useful if it gets subclassed, and DCN_EthPacket is derived from it.
 * The minimum code to be written for DCN_EthPacket is the following:
 *
 * <pre>
 * class DCN_EthPacket : public DCN_EthPacket_Base
 * {
 *   private:
 *     void copy(const DCN_EthPacket& other) { ... }

 *   public:
 *     DCN_EthPacket(const char *name=NULL, int kind=0) : DCN_EthPacket_Base(name,kind) {}
 *     DCN_EthPacket(const DCN_EthPacket& other) : DCN_EthPacket_Base(other) {copy(other);}
 *     DCN_EthPacket& operator=(const DCN_EthPacket& other) {if (this==&other) return *this; DCN_EthPacket_Base::operator=(other); copy(other); return *this;}
 *     virtual DCN_EthPacket *dup() const {return new DCN_EthPacket(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from DCN_EthPacket_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(DCN_EthPacket);
 * </pre>
 */
class DCN_EthPacket_Base : public ::cPacket
{
  protected:
    unsigned int srcAddr_var;
    unsigned int destAddr_var;
    unsigned int sequenceNo_var;
    unsigned short payload_var;
    unsigned short path_var;
    unsigned short kind_var;
    bool dataPacket_var;

  private:
    void copy(const DCN_EthPacket_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const DCN_EthPacket_Base&);
    // make constructors protected to avoid instantiation
    DCN_EthPacket_Base(const char *name=NULL, int kind=0);
    DCN_EthPacket_Base(const DCN_EthPacket_Base& other);
    // make assignment operator protected to force the user override it
    DCN_EthPacket_Base& operator=(const DCN_EthPacket_Base& other);

  public:
    virtual ~DCN_EthPacket_Base();
    virtual DCN_EthPacket_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class DCN_EthPacket");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getSrcAddr() const;
    virtual void setSrcAddr(unsigned int srcAddr);
    virtual unsigned int getDestAddr() const;
    virtual void setDestAddr(unsigned int destAddr);
    virtual unsigned int getSequenceNo() const;
    virtual void setSequenceNo(unsigned int sequenceNo);
    virtual unsigned short getPayload() const;
    virtual void setPayload(unsigned short payload);
    virtual unsigned short getPath() const;
    virtual void setPath(unsigned short path);
    virtual unsigned short getKind() const;
    virtual void setKind(unsigned short kind);
    virtual bool getDataPacket() const;
    virtual void setDataPacket(bool dataPacket);
};


#endif // _DCN_ETHPACKET_M_H_
