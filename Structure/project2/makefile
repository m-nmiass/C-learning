main : main.o struct.o read.o
	gcc -o main main.o struct.o read.o

struct.o : struct.h struct.c
	gcc -c struct.c

read.o : read.h read.c struct.h
	gcc -c read.c
