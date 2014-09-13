#Variables:
CC = g++
CFLAGS = -c -Wall
OUTPUT = output.out
EXE = ./$(OUTPUT)

#Adding "@" makes that the commands in modules not to be revealed in the terminal.

all: Elasticity.o main.o
	@ $(CC) main.o Elasticity.o -o $(OUTPUT)


main.o: main.cpp
	@ $(CC) $(CFLAGS) main.cpp

Elasticity.o: Elasticity.cpp
	@ $(CC) $(CFLAGS) Elasticity.cpp


run:
	@ $(EXE)

nothing:
	@ echo "What are to expecting me to do for you??"

clean:
	@ rm *.o 
