CC = gcc #gcc compilier
TARGET = main

all:	main.o serial.o
	$(CC) main.c serial.c -o $(TARGET)

clean:
	rm *.o $(TARGET)