CC = gcc
DEBUG = -g
CFLAGS = -Wall -lpthread -c $(DEBUG)
LFLAGS = -Wall -lpthread $(DEBUG)

all: client server

client: client.o utils.o
	$(CC) $(LFLAGS) client.o utils.o -o client

server: server.o utils.o
	$(CC) $(LFLAGS) server.o utils.o -o server


client.o: client.c utils.h
	$(CC) $(CFLAGS) client.c

server.o: server.c utils.h
	$(CC) $(CFLAGS) server.c

utils.o: utils.h utils.c
	$(CC) $(CFLAGS) utils.c

clean:
	rm -rf *.o *~ client server
