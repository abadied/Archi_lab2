all: 2a

2a: 2a.o
	gcc -g -m32 -Wall -o 2a 2a.o

2a.o: 2a.c
	gcc -g -m32 -c -Wall -Iinclude -o 2a.o 2a.c

.PHONY: clean

clean:
	rm -f *.o 2a