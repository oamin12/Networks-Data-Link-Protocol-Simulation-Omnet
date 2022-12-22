//
// Generated file, do not edit! Created by nedtool 5.6 from Message.msg.
//

#ifndef __MESSAGE_M_H
#define __MESSAGE_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0506
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>Message.msg:28</tt> by nedtool.
 * <pre>
 * //
 * // TODO generated message class
 * //
 * packet Message
 * {
 *     int seqNum;
 *     string payload;
 *     char trailer;
 *     int frameType;
 *     int ackNum;
 *     int errorType;
 *     int messageType; // 0 -> coordinator message
 *    					// 1 -> node message
 * }
 * </pre>
 */
class Message : public ::omnetpp::cPacket
{
  protected:
    int seqNum;
    ::omnetpp::opp_string payload;
    char trailer;
    int frameType;
    int ackNum;
    int errorType;
    int messageType;

  private:
    void copy(const Message& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Message&);

  public:
    Message(const char *name=nullptr, short kind=0);
    Message(const Message& other);
    virtual ~Message();
    Message& operator=(const Message& other);
    virtual Message *dup() const override {return new Message(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getSeqNum() const;
    virtual void setSeqNum(int seqNum);
    virtual const char * getPayload() const;
    virtual void setPayload(const char * payload);
    virtual char getTrailer() const;
    virtual void setTrailer(char trailer);
    virtual int getFrameType() const;
    virtual void setFrameType(int frameType);
    virtual int getAckNum() const;
    virtual void setAckNum(int ackNum);
    virtual int getErrorType() const;
    virtual void setErrorType(int errorType);
    virtual int getMessageType() const;
    virtual void setMessageType(int messageType);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Message& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Message& obj) {obj.parsimUnpack(b);}


#endif // ifndef __MESSAGE_M_H

