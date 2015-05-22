all:stack_with_min

stack_with_min:stack.o
	gcc -g -Wall -o stack_with_min stack.o

stack.o:stack.c
	gcc -g -c stack.c

dep:
	gcc -H stack.c > .depend

clean:
	rm -f stack *.o .depend