all:sum_max

sum_max:sum.o
	gcc -g -Wall -o sum_max sum.o

sum.o:sum.c
	gcc -g -Wall -c sum.c

dep:
	gcc -H sum.c > .depend
clean:
	rm -f sum_max *.o .depend