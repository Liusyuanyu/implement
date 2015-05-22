all:fibonacci_1\&2 fibonacci_3

fibonacci_1\&2:fibonacci_solution1_2.o
	gcc -g -Wall -o fibonacci_1\&2 fibonacci_solution1_2.o

fibonacci_solution1_2.o:fibonacci_solution1_2.c
	gcc -g -c fibonacci_solution1_2.c

fibonacci_3:fibonacci_solution3.o
	g++ -g -Wall fibonacci_solution3.o -o fibonacci_3
fibonacci_solution3.o:fibonacci_solution3.c
	g++ -g -Wall -c fibonacci_solution3.c
dep:
	gcc -H fibonacci_solution1_2.c fibonacci_solution3.c>.depend

clean:
	rm -f fibonacci_1\&2 fibonacci_3 *.o .depend
