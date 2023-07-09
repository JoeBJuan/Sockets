#ifndef TCPIPBASE_H_
#define TCPIPBASE_H_

#include <netinet/in.h>
#include <sys/socket.h>

class TcpIpBase
{
public:

   // Default Constructor
   TcpIpBase();

   // Copy Constructor
   TcpIpBase(const TcpIpBase& copy);

   // Destructor
   virtual ~TcpIpBase();

   // Assignment Operator
   TcpIpBase& operator=(const TcpIpBase& right);

private:

   // 
   struct sockaddr_in servaddr = {0};
   
   // Socket descriptor
   int sock;            

   /* Echo server address */
   struct sockaddr_in servAddr; 
   
   unsigned short servPort;     /* Echo server port */
   char *servIP;                    /* Server IP address (dotted quad) */
   char *echoString;                /* String to send to echo server */
   char echoBuffer[RCVBUFSIZE];     /* Buffer for echo string */
   unsigned int echoStringLen;      /* Length of string to echo */
   int bytesRcvd, totalBytesRcvd; 

};
#endif