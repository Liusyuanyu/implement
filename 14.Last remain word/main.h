#include <stdio.h>
#include <stdlib.h>
typedef struct integers
{
	int num;
	struct integers *next;
	struct integers *prev;
}INTEGER;


int lastRemaining(unsigned n,unsigned m);
void remove_node(INTEGER *node);
void insert(int n);
