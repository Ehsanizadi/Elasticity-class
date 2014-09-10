#Variables:
CC=g++
CFLAGS = -c -Wall
OUTPUT=output.out
EXE= ./$(OUTPUT)


all: Elasticity.o main.o
	$(CC) main.o Elasticity.o -o $(OUTPUT)


main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

Elasticity.o: Elasticity.cpp
	$(CC) $(CFLAGS) Elasticity.cpp

run:
	$(EXE)

clean:
	rm *.o 