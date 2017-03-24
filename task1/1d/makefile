all: 1d

1c: 1d.o
	gcc -g -m32 -Wall -o 1d 1d.o
	
1c.o: 1d.c
	gcc -g -m32 -Wall -ansi -c -Iinclude -o 1d.o 1d.c
	
.PHONY: clean

clean:
	rm -f *.o 1d