all:left_roate

left_roate:leftroate.o
	gcc -g -Wall -o left_roate leftroate.o

leftroate.o:leftroate.c
	gcc -g  -c leftroate.c

dep:
	gcc -H leftroate.c >.depend

clean:
	rm -f left_roate .depend *.o