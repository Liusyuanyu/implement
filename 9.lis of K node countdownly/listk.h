#include <stdio.h>
#include <stdlib.h>
#define LEN 20

struct listnode{
	int k_num;
	struct listnode *next_node;
};

typedef struct listnode LIST;

LIST * makelist();