#include "main.h"

INTEGER *first=NULL;

int lastRemaining(unsigned n,unsigned m){
	if(n < 1|| m< 1)
		return -1;
	int remain = 0,i;

	for(i = 2;i<=n;i++){
		remain = (remain + m) % i;
		printf("Remove : %d\n",remain);
	}
	return remain;
}

void insert(int n){
	INTEGER *newone;
	newone = (INTEGER*)malloc(sizeof(INTEGER));
	newone->num = n;
	if(first ==NULL){
		first=newone;
		newone->prev=first;
		newone->next=first;
	}
	else{
		first->prev->next = newone;
		newone->prev = first->prev;
		newone->next = first;
		first->prev = newone;
	}
	return;
}
void remove_node(INTEGER *node){
	if(node ==NULL)
		return;
	node->prev->next=node->next;
	node->next->prev=node->prev;
	free(node);
	return;
}