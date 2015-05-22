all:numberof1

numberof1:numberof1.o
	gcc -g -Wall -o numberof1 numberof1.o

numberof1.o:numberof1.c
	gcc -g -Wall -c numberof1.c

dep:
	gcc -H numberof1.c >.depend
clean:
	rm -f numberof1 *.o .depend