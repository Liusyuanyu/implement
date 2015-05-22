all:reverse

reverse:reverse.o
	gcc -g -Wall -o reverse reverse.o

reverse.o:reverse.c
	gcc -g -Wall -c reverse.c

dep:
	gcc -H reverse.c > .depend
clean:
	rm -f reverse *.o .depend