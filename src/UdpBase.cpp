#include "UdpBase.h"

UdpBase::UdpBase()
{

}

UdpBase::UdpBase(const UdpBase &copy)
{
   *this = copy;
}

UdpBase::~UdpBase()
{

}

UdpBase &UdpBase::operator=(const UdpBase &right)
{
   if(this == &right)
   {
      return *this;
   }

   
   return *this;
}
