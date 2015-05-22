all: make_tree
make_tree:make_tree.o trans.o
	gcc -g  -Wall -o make_tree make_tree.o trans.o
make_tree.o:make_tree.c
	gcc -g -Wall -c make_tree.c
trans.o:trans.c
	gcc -g -Wall -c trans.c
dep:
	gcc -H make_tree.c trans.c >.depend
clean:
	rm -f  make_tree *.o .depend
