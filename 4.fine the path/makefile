all:fine_path

fine_path:make_tree.o fine.o
	gcc -g -Wall -o fine_path fine.o make_tree.o
fine.o:fine.c
	gcc -c -Wall fine.c

make_tree.o:make_tree.c
	gcc  -c -Wall make_tree.c

dep:
	gcc -H make_tree.h fine.h make_tree.c fine.c > .depend
clean:
	rm -f fine_path *.o .depend
