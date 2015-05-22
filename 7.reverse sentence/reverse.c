#include "reverse.h"

int main(int argc, char const *argv[])
{
	char node[STRING],*arrow;
	int i = 1;
	arrow = argv[1];
	strcpy(node,"");//Clean string
	while(arrow != '\0'){
		printf("%s  ",arrow);
		strcat(node,arrow);
		arrow = argv[++i];
		if(arrow != '\0')
			strcat(node," ");
	}
	//strcat(node,'\0');
	printf("\nCAT DONE : %s=Length : %d\n",node,(int)strlen(node));
	reverse(node,&node[(int)strlen(node)-1]);
	printf("Reverse : %s\n",node);
	reverse_word(node);
	printf("Reverse_word : %s \n",node);
	return 0;
}

void reverse(char *head , char *tail){

	if(head ==NULL || tail ==NULL)
		return;
	char temp;

	//printf("Head : %c tail: %c\n",*head,*tail);
	while(head < tail){
		//printf("Head : %c tail: %c\n",*head,*tail);
		temp = *head;
		*head = *tail;
		*tail = temp;
		head++;
		tail--;
	}
	return;
}

void reverse_word(char *node){
	char *temp_tail;
	while( node != '\0'){
		temp_tail = node;
		while(*temp_tail !=' ' && *temp_tail != '\0'){
			temp_tail++;
		}
		//temp_tail--;
		if(*temp_tail == ' '){
			//printf("Head : %c tail: %c\n",*node,*(temp_tail-1));
			reverse(node,temp_tail-1);
			node = temp_tail+1;
		}
		else{
			//printf("Head : %c tail: %c\n",*node,*(temp_tail-1));
			reverse(node,temp_tail-1);
			node = temp_tail+1;
			break;
		}
		//reverse(node,temp_tail);
	}
	return;
}