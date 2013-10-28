//
// Generated file, do not edit! Created by opp_msgc 4.3 from model/node/schedulingLayer/SchedulingMessage.msg.
//

#ifndef _SCHEDULINGMESSAGE_M_H_
#define _SCHEDULINGMESSAGE_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0403
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{
#include "ControlMessage.h"
// }}



/**
 * Class generated from <tt>model/node/schedulingLayer/SchedulingMessage.msg</tt> by opp_msgc.
 * <pre>
 * message SchedulingControlMessage extends ControlMessage {
 *     type enum(ControlMessageType) = SCHEDULING_CONTROL_MSG;
 *     
 * };
 * </pre>
 */
class SchedulingControlMessage : public ::ControlMessage
{
  protected:

  private:
    void copy(const SchedulingControlMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SchedulingControlMessage&);

  public:
    SchedulingControlMessage(const char *name=NULL, int kind=0);
    SchedulingControlMessage(const SchedulingControlMessage& other);
    virtual ~SchedulingControlMessage();
    SchedulingControlMessage& operator=(const SchedulingControlMessage& other);
    virtual SchedulingControlMessage *dup() const {return new SchedulingControlMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, SchedulingControlMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, SchedulingControlMessage& obj) {obj.parsimUnpack(b);}


#endif // _SCHEDULINGMESSAGE_M_H_
