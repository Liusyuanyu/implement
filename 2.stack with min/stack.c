#include <stdio.h>
#include <stdlib.h>

struct s_data{
	int number;
	struct s_data *next;
};
int min;

void push(int num,struct s_data** node,struct s_data** s_node);
int pop(struct s_data**node,struct s_data**s_node);

int main(int argc, char const *argv[])
{
	struct s_data *main_head=NULL,*store=NULL;
	int choice,i,n;
	min = -1;
	while(i != 3){
		printf(" 1 pop or   0:  push 3: exit: ");
		scanf("%d",&i);
		if( i== 3) continue;
		if(i == 0){
			fflush(stdin);
			printf("Enter a num :");
			scanf("%d",&n);
			push(n,&main_head,&store);
			printf("MINium number Right now is : %d \n",min);
		}
		else{
			n= pop(&main_head,&store);
			if( n == -1){
				printf("Empty! \n");
				min = -1;
			}
			else{
				if(min != -1)
					printf("pop = %d Min = %d\n",n,min);
				else
					printf("pop = %d Min = Empty!\n",n);
			}
		}
	}
	
	return 0;
}

void push(int num,struct s_data **node,struct s_data** s_node){
	struct s_data *temp,*t_store;
	temp = (struct s_data *)malloc(sizeof(struct s_data));
	t_store = (struct s_data *)malloc(sizeof(struct s_data));
	if(num < min || min < 0){
		t_store->number = min; // push min number in store
		min= num;
		t_store->next = (*s_node) ;
		(*s_node) = t_store;
	}
	else{
		t_store->number = -1;///push -1 to store
		t_store->next = (*s_node) ;
		(*s_node) = t_store;
	}
	temp->number = num;
	temp->next = (*node) ;
	(*node) = temp;
}

int pop(struct s_data **node,struct s_data **s_node){
	//printf("%d\n",(*node)->number);
	if((*node) == NULL)
		return -1;
	int temp = (*node)->number;
	struct s_data *rem = (*node),*s_rem;
	(*node )= (*node)->next;
	free(rem);

	s_rem = (*s_node);
	(*s_node) = (*s_node)->next;
	if(temp == min){
		///minium number is poped out
		min = s_rem->number;
		//printf("\n____%d____\n",min);
	}
	free(s_rem);
	return temp;
}