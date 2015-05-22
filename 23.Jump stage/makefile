all:jump

jump:jumpingstage.o
	gcc -g -o jump jumpingstage.o

jumpingstage.o:jumpingstage.c
	gcc -c -g -Wall jumpingstage.c

dep:
	gcc -H jumpingstage.c >.depend
clean:
	rm -f *.o jump .depend
