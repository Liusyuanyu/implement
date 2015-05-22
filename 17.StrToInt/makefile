all:strtoint

strtoint:strtoint.o
	gcc -g -o strtoint strtoint.o

strtoint.o:strtoint.c
	gcc -g -Wall -c strtoint.c

dep:
	gcc -H strtoint.c > .depend
clean:
	rm -f strtoint *.o .depend