#include "make_tree.h"

NODE* maketree()
{
	NODE *head=NULL;
	int r,i,ran[N];
	int check = 0;
	//srand(time(NULL));
	for(i=0; i<N;i++){
		while(1){
			check = 0;
			ran[i] = rand()%20;
			for(r = 0 ;r < i;r++){
				if(ran[i] == ran[r])
					check = 1;
			}
			if(check == 0)
				break;
		}
		//cout<<ran[i]<<"===";
		printf("%d===",ran[i] );
		create(ran[i],&head);
	}
	/* code */
	NODE *temp;
	/*temp =head;
	while(temp!=NULL){
		printf("====%d",temp->number);
		temp= temp->left;		
	}*/
	/*temp = head;
	printf("\n");
	while(temp!=NULL){
		printf("====%d",temp->number);
		temp= temp->right;		
	}*/
	//cout<<endl;
	printf("\n");
	///TESTING
	return head;
}

void create(int num , NODE **head){
	NODE *temp , *past;
	int RL;
	if(*head ==NULL){
		temp = (NODE*)malloc(sizeof(NODE));
		temp->number=num;
		temp->right = NULL;
		temp->left = NULL;
		*head = temp;
	}
	else{
		temp = *head;
		while(temp != NULL){
			past = temp;
			if(temp->number > num){
				temp = temp->left;
				RL = 0;
			}
			else{
				temp = temp->right;
				RL =1;
			}
		}//end of while

		temp = (NODE*)malloc(sizeof(NODE));
		temp->number=num;
		temp->right = NULL;
		temp->left = NULL;

		if(RL == 0){//input number smaller than root
			past->left = temp;
		}
		else{
			past->right = temp;
		}
	}
	return ;
}