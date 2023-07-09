#include "TcpIpBase.h"

TcpIpBase::TcpIpBase()
{

}

TcpIpBase::TcpIpBase(const TcpIpBase& copy)
{
   *this = copy;
}

TcpIpBase::~TcpIpBase()
{

}

TcpIpBase& TcpIpBase::operator=(const TcpIpBase& right)
{
   if(this == &right)
   {
      return *this;
   }

   return *this;
}