#include <stdio.h>
#include <string.h>

#include <errno.h>
#include <fcntl.h> 
#include <string.h>
#include <termios.h>
#include <unistd.h>
#include "serial.h"

int main(){
  
  const uint32_t BAUD_RATE = 115200;
  
  // int serial_port = open("/dev/ttyAMC0", O_RDWR);
  int serial_port = open("/dev/ttyr7.usbmodem142103",O_RDWR);

  serial_init(BAUD_RATE, serial_port);
  
  unsigned char msg[] = {'1','2','3','4'};

  int size = sizeof(msg)/sizeof(char);

  while(1){
    write(serial_port, msg, size);
  }

  return 0;
}
