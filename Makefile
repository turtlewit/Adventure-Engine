CC=gcc
CFLAGS=-I.
LD_FLAGS=-lncurses
DEPS = engine.h screen.h
OBJ = main.c screen.c 

%.o: %.c $(DEPS) 
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	gcc -o build/$@ $^ $(CFLAGS) $(LD_FLAGS)