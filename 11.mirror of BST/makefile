all: mirror_sol1
mirror_sol1:make_tree.o mirror_sol1.o
	gcc -g  -Wall -o mirror_sol1 make_tree.o mirror_sol1.o
make_tree.o:make_tree.c
	gcc -g -Wall -c make_tree.c
mirror_sol1.o:mirror_sol1.c
	gcc -g -Wall -c mirror_sol1.c
#trans.o:trans.c
#	gcc -g -Wall -c trans.c
dep:
	gcc -H make_tree.c mirror_sol1.c >.depend
clean:
	rm -f  mirror_sol1 *.o .depend
