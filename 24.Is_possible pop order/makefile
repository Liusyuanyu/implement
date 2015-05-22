all:ispossible

ispossible:is_possible_pop_order.o
	g++ -g is_possible_pop_order.o -o ispossible

is_possible_pop_order.o:is_possible_pop_order.c
	g++ -g -Wall -c is_possible_pop_order.c
dep:
	g++ -H is_possible_pop_order.c >.depend
clean:
	rm -f ispossible *.o .depend