/*
* Unique Lab 2018 Spring network problem
* Part: Websocket Server
* Developed by zxcpyp
*/

#include "server.h"

// read a line string form buffer
int readline(char *buff, int pos, char *line) {
  int len = strlen(buff);
  for (; pos < len; pos++) {
    if (buff[pos] == '\r' && buff[pos + 1] == '\n')
      return pos + 2;
    else
      *(line++) = buff[pos];
  }
  return -1;
}


// reverse string
void strreverse(char *str, int len) {
  int i;
  char tmp;
  for (i = 0; i< len/2; i++) {
    tmp = *(str + i);
    *(str + i) = *(str + len - i - 1);
    *(str + len - i - 1) = tmp;
  }
}


// main sever function
void Start_server() {
  // Your code here
}


int main(void) {

  // Start your server
  Start_server();

  return 0;
}
