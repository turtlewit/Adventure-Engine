CC=gcc
LD_FLAGS=-lncurses

all: main.c 
	$(CC) -o advent main.c 