#ifndef SERIAL_H_
#define SERIAL_H_

struct termios tty;
void serial_init(uint32_t BAUD_RATE, int serial_port);
#endif 