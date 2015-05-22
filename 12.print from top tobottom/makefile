all: printBST
printBST:make_tree.o mirror_sol1.o printBST.o
	g++ -g  -Wall make_tree.o mirror_sol1.o printBST.o -o printBST
make_tree.o:make_tree.cpp
	g++ -g -Wall -c make_tree.cpp
mirror_sol1.o:mirror_sol1.cpp
	g++ -g -Wall -c mirror_sol1.cpp

printBST.o:printBST.cpp
	g++ -g -Wall -c printBST.cpp
dep:
	g++ -H make_tree.cpp mirror_sol1.cpp printBST.cpp >.depend
clean:
	rm -f  printBST *.o .depend
