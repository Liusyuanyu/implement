all:fine_lcs

fine_lcs:fine_lcs.o print_lcs.o
	gcc -g -o fine_lcs fine_lcs.o print_lcs.o

print_lcs.o:print_lcs.c
	gcc -g -std=c99 -Wall -c print_lcs.c

fine_lcs.o:fine_lcs.c
	gcc -g -Wall -c fine_lcs.c

dep:
	gcc -H fine_lcs.c print_lcs.c >.depend

clean:
	rm -f fine_lcs *.o .depend