all:numberof1

left_roate:numberof1.o
	gcc -g -Wall -o left_roate numberof1.o

numberof1.o:numberof1.c
	gcc -g  -c numberof1.c

dep:
	gcc -H numberof1.c >.depend

clean:
	rm -f numberof1 .depend *.o