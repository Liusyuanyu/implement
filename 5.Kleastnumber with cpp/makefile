all:kleastnum

kleastnum:kleast.o
	g++ -g -Wall kleast.o -o kleastnum

kleast.o:kleast.cpp
	g++ -g -Wall -c kleast.cpp

dep:
	kleast.c kleast.h > .depend

clean:
	rm -f kleastnum *.o .depend