all: 2b

2b: 2b.o
	gcc -g -m32 -Wall -o 2b 2b.o
2b.o: 2b.c
	gcc -g -c -m32 -Wall -o 2b.o 2b.c

.PHONY: clean

clean:
	rm -f *.o 2b