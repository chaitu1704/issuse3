all: chaitu12

chaitu12: main.o mainsort.o
	gcc main.o mainsort.o -o chaitu12.o

main.o: main.c
	gcc -c main.c

mainsort.o: mainsort.c
	gcc -c mainsort.c

