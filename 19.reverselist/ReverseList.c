#include <stdio.h>
#include <stdlib.h>
#define N 10
struct ListNode
{
	int m_nkey;
	struct ListNode *m_pNext;
};
struct ListNode* makelist();
struct ListNode* reverselist(struct ListNode *);

int main(int argc, char const *argv[])
{
	struct ListNode *use;
	struct ListNode *temp;
	use = makelist();
	for (temp = use; temp != NULL ; temp = temp->m_pNext){
		printf("%d-->",temp->m_nkey);
	}
	printf("\n");

	temp = reverselist(use);
	for (; temp != NULL ; temp = temp->m_pNext){
		printf("%d-->",temp->m_nkey);
	}
	printf("\n");


	return 0;
}

struct ListNode* makelist(){
	int i=0;
	struct ListNode *temp;
	struct ListNode *pointer;
	struct ListNode *first;
	for(i = 0 ; i <= N ; i++){
		temp = (struct ListNode*)malloc(sizeof(struct ListNode));
		temp->m_nkey = i;
		temp->m_pNext=NULL;
		if(pointer==NULL){
			pointer = temp;
			first = pointer;
		}
		else{
			pointer->m_pNext = temp;
			pointer = temp;
		}
	}
	return first;
}

struct ListNode *reverselist(struct ListNode *first){
	struct ListNode *node = first;
	struct ListNode *prev=NULL;
	struct ListNode *next;
	//printf("%d==",node->m_nkey);
	while(node != NULL){
		//printf("%d==",node->m_nkey);
		next=node->m_pNext;
		node->m_pNext = prev;
		prev = node;
		node = next;
	}
	printf("\n");

	return prev;
}