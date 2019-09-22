IDIR =../include
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=obj

LIBS=-lm -lncurses

all:
	$(CC) -o

clean:
	rm -f $(ODIR)/*.o
