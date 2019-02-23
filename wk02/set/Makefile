CC = gcc
CFLAGS = -std=c11 -Wall -Werror

all: useSetList useSetArray

useSetList: useSet.o listSet.o
	$(CC) $(CFLAGS) -o useSetList useSet.o listSet.o

useSetArray: useSet.o arraySet.o
	$(CC) $(CFLAGS) -o useSetArray useSet.o arraySet.o

useSet.o: useSet.c set.h
	$(CC) $(CFLAGS) -c useSet.c

listSet.o: listSet.c set.h
	$(CC) $(CFLAGS) -c listSet.c

arraySet.o: arraySet.c set.h
	$(CC) $(CFLAGS) -c arraySet.c

clean:
	-rm -f useSetList useSet.o listSet.o
	-rm -f useSetArray useSet.o arraySet.o
