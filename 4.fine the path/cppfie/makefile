all:fine_path

fine_path: fine.o
	g++ fine.o -o fine_path

fine.o:fine.cpp
	gcc -g -Wall -c fine.cpp
dep:
	g++ -H fine.cpp fine.h> .depend
clean:
	rm -f fine_path *.o .depend