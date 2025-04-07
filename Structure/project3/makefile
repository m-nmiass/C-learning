main : main.o rectangle.o
	cc -o main main.o rectangle.o

main.o : main.c rectangle.h
	cc -c main.c

reactangle.o : reactangle.c rectangle.h
	cc -c rectangle.c
