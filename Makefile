CFLAGS=-g -Wall

all: linkedlist.o
	gcc $(CFLAGS) -o main main.c

linkedlist.o: linkedlist.c linkedlist.h
	gcc $(CFLAGS) -c -o linkedlist.o linkedlist.c

clean:
	rm linkedlist.o main
