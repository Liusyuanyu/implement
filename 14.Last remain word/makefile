all:remain_sol1 remain_sol2

remain_sol1:last\ remain\ word_sol1.o main.o
	gcc -g -Wall -o remain_sol1 last\ remain\ word_sol1.o main.o

remain_sol2:last\ remain\ word_sol2.o main.o
	gcc -g -Wall -o remain_sol2 last\ remain\ word_sol2.o main.o
	rm *.o
last\ remain\ word_sol2.o:last\ remain\ word_sol2.c
	gcc -g -c last\ remain\ word_sol2.c

last\ remain\ word_sol1.o:last\ remain\ word_sol1.c
	gcc -g -c last\ remain\ word_sol1.c

main.o:main.c
	gcc -g -c main.c

dep:
	gcc -H last\ remain\ word_sol1.c >.depend
clean:
	rm -f remain_sol1 remain_sol2 *.o .depend	