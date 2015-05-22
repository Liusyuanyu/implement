all:method_1 method_2

method_1:sum_method_1.o
	g++ -g -Wall sum_method_1.o -o method_1

sum_method_1.o:sum_method_1.cpp
	g++ -g -Wall -c sum_method_1.cpp
method_2:sum_method_2.o
	g++ -g -Wall sum_method_2.o -o method_2 

sum_method_2.o:sum_method_2.cpp
	g++ -g -Wall -c sum_method_2.cpp
dep:
	gcc -H sum_method_1.cpp sum_method_2.cpp > .depend
clean:
	rm -f method_2 method_1 *.o .depend