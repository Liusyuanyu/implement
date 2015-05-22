all:method_1 method_2

method_1:lisk_method_1.o
	gcc -g -Wall lisk_method_1.o -o method_1

lisk_method_1.o:lisk_method_1.c
	gcc -g -Wall -c lisk_method_1.c
method_2:lisk_method_2.o
	gcc -g -Wall lisk_method_2.o -o method_2 

lisk_method_2.o:lisk_method_2.c
	gcc -g -Wall -c lisk_method_2.c
dep:
	gcc -H lisk_method_2.c lisk_method_2.c > .depend
clean:
	rm -f method_2 method_1 *.o .depend