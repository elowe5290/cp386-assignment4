#Do not edit the contents of this file.
CC = gcc
CFLAGS = -Werror -Wall -g -std=gnu99
LDFLAGS = -lrt -lpthread
TARGET = Question2 Question3 
OBJFILES = Question2.o Question3.o 
all: $(TARGET)
Question2: Question2.c
	$(CC) $(CFLAGS) -o Question2 Question2.c $(LDFLAGS)
Question1: Question1.c
	$(CC) $(CFLAGS) -o Question1 190755290_190298910_a04_q1.c $(LDFLAGS)

runq2: Question2
	./Question2
runq3: Question1
	./Question1 n.txt
clean:
	rm -f $(OBJFILES) $(TARGET) *~ 