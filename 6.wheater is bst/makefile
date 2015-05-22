all:verify

verify:verifysequence.o
	gcc -g -Wall -o verify verifysequence.o

verifysequence.o:verifysequence.c
	gcc -g -Wall -c verifysequence.c

dep:
	gcc -H verifysequence.c >.depend

clean:
	rm -f verify *.o .depend