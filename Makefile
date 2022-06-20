CC = gcc

OBJS = main.c

EXEC = tosscoins

all:
	$(CC) -o $(EXEC) -Wall $(OBJS)
