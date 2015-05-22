all:reverselist

reverselist:ReverseList.o
	gcc -g -o reverselist ReverseList.o

reverselist.o:reverselist.c
	gcc -g -Wall -c reverselist.c

dep:
	gcc -H reverselist.c > .depend

clean:
	rm -f reverselist .depend *.o