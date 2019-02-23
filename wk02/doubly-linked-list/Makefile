CC = gcc
CFLAGS = -std=c11 -Wall -Werror

all: main mainSol

main: main.c list.c list.h
	$(CC) $(CFLAGS) -o main main.c list.c

mainSol: main.c listSol.c list.h
	$(CC) $(CFLAGS) -o mainSol main.c listSol.c

clean:
	rm main mainSol
