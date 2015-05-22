all:twonumber

twonumber:numberwithsum.o
	g++ -g -Wall numberwithsum.o -o twonumber

numberwithsum.o:numberwithsum.cpp
	g++ -g -Wall -c numberwithsum.cpp

dep:
	g++ -H numberwithsum.cpp > .depend

clean:
	rm -f twonumber *.o .depend