#ifndef UDPBASE_H_
#define UDPBASE_H_


class UdpBase
{
   // Default Constructor
   UdpBase();

   // Copy Constructor
   UdpBase(const UdpBase& copy);

   // Destructor
   virtual ~UdpBase();

   // Assignment Operator
   UdpBase& operator=(const UdpBase& right);

};
#endif