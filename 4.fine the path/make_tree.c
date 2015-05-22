#include "make_tree.h"

void maketree()
{
	//NODE *temp = head;
	int i,ran[N];
	//srand(time(NULL));
	for(i=0; i<N;i++){
		/*while(1){
			check = 0;
			ran[i] = rand()%20;
			for(r = 0 ;r < i;r++){
				if(ran[i] == ran[r])
					check = 1;
			}
			if(check == 0)
				break;
		}*/
		printf("Enter : ");
		fflush(stdin);
		scanf("%d",&ran[i]);
		//printf("%d\n",ran[i] );
		create(ran[i]);
		//printf("==%d==",head->number);
	}
	printf("creat done \n");
	/*temp = head;

	for( i =0; i <3 ; i++){
		printf("==%d==",temp->number);
		temp = temp->left;
	}
	printf("\n");*/
	return ;
}

void create(int num){
	NODE *temp , *past;
	int RL;
	if(head ==NULL){
		temp = (NODE*)malloc(sizeof(NODE));
		temp->number=num;
		temp->right = NULL;
		temp->left = NULL;
		head = temp;
	}
	else{
		temp = head;
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