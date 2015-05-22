#include "listk.h"
void create(int number,LIST **node);
int dup(int n , LIST * head);
LIST * FindKthToTail_first(LIST *head,int k);
int main(int argc, char const *argv[])
{
	int length,K;
	LIST *node;
	printf("Enter K:");
	scanf(" %d",&K);

	node = makelist();
	printf("\nNEXT LISt :\n");
	/*while(node){
		printf("%d==",node->k_num);
		node=node->next_node;
	}*/
	printf("\n");
	node = FindKthToTail_first(node,K);
	if(!node){
		printf("There is not Kth number.\n");
	}
	else
		printf("Kth number : %d\n",node->k_num);
	return 0;
}

LIST * makelist(){
	int i,n,check;

	LIST *node;
	LIST *head;

	for(i = 0;i <LEN; i++){
		check =1;
		while(check == 1){
			check = 0;
			n = rand()%20;
			check = dup(n,head);
		}
		printf("%d--",n);
		create(n,&node);
		if(head ==NULL)
			head = node;
	}
	return head;
}

void create(int number,LIST **node){
	LIST *temp;
	temp = (LIST *)malloc(sizeof(LIST));
	temp->k_num = number;
	temp->next_node = NULL;
	if((*node))
		(*node)->next_node = temp;
	(*node)=temp;
	return;
}
int dup(int n , LIST * head){
	LIST * temp= head;
	while(temp){
		if(temp->k_num ==n){
			return 1;
		}
		temp= temp->next_node;
	}
	return 0;
}

LIST * FindKthToTail_first(LIST *head,int k){
	int lenght=0;
	LIST *temp = head;
	if(!head)
		return NULL;
	//printf("\nnext node ==%d\n",temp->k_num);
	while(temp!=NULL){
		temp=temp->next_node;
		lenght++;
	}
	if(lenght<k)
		return NULL;

	int i;
	temp=head;
	for(i=0; i < lenght - k;i++)
		temp = temp ->next_node;
	return temp;
}