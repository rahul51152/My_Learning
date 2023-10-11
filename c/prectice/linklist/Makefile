cc=gcc

all:main.o link_data.o
	$(cc) main.o link_data.o -o output

main.o: main.c file.h file1.h
	$(cc) main.c -o main.o 

link_data.o:link_data.c file.h
	$(cc) link_data.c -o link_data.o
