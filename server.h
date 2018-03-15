/*
* Unique Lab 2018 Spring network problem
* Part: Websocket Server head file
* Developed by zxcpyp
*/

#ifndef __WSSERVER_H_
#define __WSSERVER_H_

#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/shm.h>
#include <signal.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <errno.h>

/* You can add more head files here */

// Your head files here


/* Some defines you may use when coding */

// The socket queue length
#define QUEUE 20

// The port that server use (add by your self)
#define PORT XXXX

// The max message size receive from client
#define BUFF_SIZE 1024

// The line size
#define LINE_SIZE 256

// The key used to build connection
#define KEY "258EAFA5-E914-47DA-95CA-C5AB0DC85B11"


/* Here is the protocol structure you may use */

/*-------------------------------------------------------------------
0                   1                   2                   3
 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1
+-+-+-+-+-------+-+-------------+-------------------------------+
|F|R|R|R| opcode|M| Payload len |    Extended payload length    |
|I|S|S|S|  (4)  |A|     (7)     |             (16/64)           |
|N|V|V|V|       |S|             |   (if payload len==126/127)   |
| |1|2|3|       |K|             |                               |
+-+-+-+-+-------+-+-------------+ - - - - - - - - - - - - - - - +
|     Extended payload length continued, if payload len == 127  |
+ - - - - - - - - - - - - - - - +-------------------------------+
|                               |Masking-key, if MASK set to 1  |
+-------------------------------+-------------------------------+
| Masking-key (continued)       |          Payload Data         |
+-------------------------------- - - - - - - - - - - - - - - - +
:                     Payload Data continued ...                :
+ - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - +
|                     Payload Data continued ...                |
+---------------------------------------------------------------+
--------------------------------------------------------------------*/

/* Struct definations */
typedef struct {

  // Your code here

} websocket_head;

/* Functions */

// Your function prototypes here


#endif // !__WSSERVER_H_
