#include "main.h"

INTEGER *first=NULL;

int lastRemaining(unsigned n,unsigned m){
	if(n < 1|| m< 1)
		return -1;
	unsigned i ;
	printf("\n");
	for(i = 0 ; i < n;i++){
		printf("%d->",i);
		insert(i);
	}
	printf("%d\n",first->num);
	//printf("\n%d-->%d-->%d\n",first->num,first->next->num,first->next->next->num);
	INTEGER *temp;
	while(first->next!=first){
		for(i=1;i<m;i++)
			first=first->next;
		temp=first;
		first=first->next;
		printf("remove : %d \n",temp->num);
		remove_node(temp);
	}
	return first->num;

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