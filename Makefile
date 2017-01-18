## This is a simple Makefile

# Define what compiler to use and the flags.
CC=cc
CXX=CC
#CCFLAGS= -g -Wall -Werror
CCFLAGS = -g -std=c99 -Wall -Werror

all: main test

# Compile all .c files into .o files
# % matches all (like * in a command)
# $< is the source file (.c file)

%.o : %.c
	$(CC) -c $(CCFLAGS) $<

main: hamcall.o fileio.o
	$(CC) -o main main.o fileio.o

test: main
	./main

clean:
	rm *.o
