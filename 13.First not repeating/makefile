all:firstnotrepeating

firstnotrepeating:firstnotrepeating.o
	gcc -g -Wall -o firstnotrepeating firstnotrepeating.o
firstnotrepeating.o:firstnotrepeating.c
	gcc -c -Wall firstnotrepeating.c
dep:
	gcc -H firstnotrepeating.c >.depend
clean:
	rm -f firstnotrepeating *.o .depend
