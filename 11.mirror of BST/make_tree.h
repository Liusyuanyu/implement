#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int number;
	struct node *left;
	struct node *right;
}NODE;
//NODE *head;
#define N  9

void create(int num,NODE **);
NODE* maketree();

void MirrorRecursively(NODE *node);