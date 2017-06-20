//
// Generated file, do not edit! Created by nedtool 5.0 from A_PDU.msg.
//

#ifndef __A_PDU_M_H
#define __A_PDU_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0500
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>A_PDU.msg:19</tt> by nedtool.
 * <pre>
 * //
 * // TODO generated message class
 * //
 * packet A_PDU
 * {
 *     int id;
 *     int source;
 *     int destination;
 *     string type;
 *     char data;
 * }
 * </pre>
 */
class A_PDU : public ::omnetpp::cPacket
{
  protected:
    int id;
    int source;
    int destination;
    ::omnetpp::opp_string type;
    char data;

  private:
    void copy(const A_PDU& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const A_PDU&);

  public:
    A_PDU(const char *name=nullptr, int kind=0);
    A_PDU(const A_PDU& other);
    virtual ~A_PDU();
    A_PDU& operator=(const A_PDU& other);
    virtual A_PDU *dup() const {return new A_PDU(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b);

    // field getter/setter methods
    virtual int getId() const;
    virtual void setId(int id);
    virtual int getSource() const;
    virtual void setSource(int source);
    virtual int getDestination() const;
    virtual void setDestination(int destination);
    virtual const char * getType() const;
    virtual void setType(const char * type);
    virtual char getData() const;
    virtual void setData(char data);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const A_PDU& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, A_PDU& obj) {obj.parsimUnpack(b);}


#endif // ifndef __A_PDU_M_H
