all: menu

menu: menu.o
	gcc -g -m32 -Wall -o menu menu.o

menu.o: menu.c
	gcc -g -m32 -Wall -Iinclude -c -o menu.o menu.c
	
.PHONY: clean

clean:
	rm -f *.o menu