CC=gcc
LD_FLAGS=-lncurses

all: main.c 
	$(CC) -o build/advent main.c 