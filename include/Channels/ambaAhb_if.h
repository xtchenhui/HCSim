//////////////////////////////////////////////////////////////////////
// C++ header file generated by SpecC V2.2.1
// Design: ambaAhb_tlm
// File:   ambaAhb_tlmOut.h
// Time:   Fri Jul 19 13:57:57 2013
//////////////////////////////////////////////////////////////////////

// Note: Notes are suppressed in this file.

// Note: Line infos are suppressed in this file.
#include <systemc>

#include "Channels/global_ambaAhb.h"

#ifndef SC_AMBAAHB_IF__H
#define SC_AMBAAHB_IF__H

namespace HCSim {
 
// interface class definitions ///////////////////////////////////////

class IAmbaAhbBusMasterMacLink: public sc_core::sc_interface
{
public:
    virtual void masterRead(unsigned long int, void *, unsigned long int) = 0;
    virtual void masterWrite(unsigned long int, const void *, unsigned long int) = 0;
};

class IAmbaAhbBusMasterMacMem: public sc_core::sc_interface
{
public:
    virtual void masterMemRead(unsigned long int, void *, unsigned long int) = 0;
    virtual void masterMemWrite(unsigned long int, const void *, unsigned long int) = 0;
};

class IAmbaAhbBusSlaveMacLink: public sc_core::sc_interface
{
public:
    virtual void slaveRead(unsigned long int, void *, unsigned long int) = 0;
    virtual void slaveWrite(unsigned long int, const void *, unsigned long int) = 0;
};

class IAmbaAhbBusSlaveMacMem: public sc_core::sc_interface
{
public:
    virtual void serve(unsigned long int, void *, unsigned long int) = 0;
    virtual void serveRead(unsigned long int, void *, unsigned long int) = 0;
    virtual void serveWrite(unsigned long int, void *, unsigned long int) = 0;
};

class IAmbaAhbBusMasterMacTlmProt: public sc_core::sc_interface
{
public:
    virtual void masterMemRead(unsigned long int, void *, unsigned long int) = 0;
    virtual void masterMemWrite(unsigned long int, const void *, unsigned long int) = 0;
    virtual void masterRead(unsigned long int, void *, unsigned long int) = 0;
    virtual void masterWrite(unsigned long int, const void *, unsigned long int) = 0;
};

class IAmbaAhbBusSlaveMacTlmProt: public sc_core::sc_interface
{
public:
    virtual void serve(unsigned long int, void *, unsigned long int) = 0;
    virtual void serveRead(unsigned long int, void *, unsigned long int) = 0;
    virtual void serveWrite(unsigned long int, void *, unsigned long int) = 0;
    virtual void slaveRead(unsigned long int, void *, unsigned long int) = 0;
    virtual void slaveWrite(unsigned long int, const void *, unsigned long int) = 0;
};

class IAmbaAhbMacTlm_MasterSlave: public sc_core::sc_interface
{
public:
    virtual void masterMemRead(unsigned long int, void *, unsigned long int) = 0;
    virtual void masterMemWrite(unsigned long int, const void *, unsigned long int) = 0;
    virtual void masterRead(unsigned long int, void *, unsigned long int) = 0;
    virtual void masterWrite(unsigned long int, const void *, unsigned long int) = 0;
    virtual void serve(unsigned long int, void *, unsigned long int) = 0;
    virtual void serveRead(unsigned long int, void *, unsigned long int) = 0;
    virtual void serveWrite(unsigned long int, void *, unsigned long int) = 0;
    virtual void slaveRead(unsigned long int, void *, unsigned long int) = 0;
    virtual void slaveWrite(unsigned long int, const void *, unsigned long int) = 0;
};

} // namespace HCSim

#endif //SC_AMBAAHB_IF__H
