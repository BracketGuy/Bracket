all: bracket

bracket: main file	
	gcc -o bracket main.o file.o

main:	
	gcc -c ./src/main.c

file:	 
	gcc -c ./src/file.c
