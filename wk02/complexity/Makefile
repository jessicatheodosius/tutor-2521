CC = gcc
CFLAGS = -std=c11 -Wall -Werror

all: oneLoop doubleLoop

oneLoop: oneLoop.c
	$(CC) $(CFLAGS) -o oneLoop oneLoop.c

doubleLoop: doubleLoop.c
	$(CC) $(CFLAGS) -o doubleLoop doubleLoop.c

clean:
	rm oneLoop doubleLoop
