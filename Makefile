CC = gcc
CFLAGS = -std=c99 -Wall -Werror -pedantic
SOURCE = wc.c
EXE = prg

ALL:
		$(CC) $(CFLAGS) $(SOURCE) -o $(EXE) -lm
run:		
		./$(EXE)
