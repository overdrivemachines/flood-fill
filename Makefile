
# Variables to control Makefile operation

CC = g++
CFLAGS = -Wall -g

flood-fill: flood-fill.o
	$(CC) $(CFLAGS) -o flood-fill flood-fill.o

flood-fill.o: flood-fill.cpp
	$(CC) $(CFLAGS) -c flood-fill.cpp

clean:
	rm -rf flood-fill flood-fill.o
