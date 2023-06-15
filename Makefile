CC=gcc
CFLAGS=-Wall

all: sorteio

sorteio: sorteio.c
	$(CC) $(CFLAGS) -o sorteio sorteio.c

clean:
	rm -f sorteio
