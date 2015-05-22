#include "trans.h"

int main(int argc, char const *argv[])
{
	maketree();
	NODE *tail;
	tail = convert(head , true);
	while(tail){
		printf("==%d",tail->number);
		tail = tail->right;
	}
	printf("\n");
	return 0;
}

NODE * convert(NODE * p_node , bool isRight ){
	if( p_node == NULL){
		return NULL;
	}//if it leaves is null then return null

	NODE *t_right= NULL ,*t_left = NULL; 
	///convert right leaves
	if(p_node -> left){//left side
		t_left = convert(p_node->left,false);
	}
	if(t_left){
		t_left->right = p_node;
		p_node->left = t_left;
	}// connect node-left point to the left leaves' greatest one

	//Convert right leaves
	if(p_node->right){
		t_right = convert(p_node->right,true);
	} 

	if(t_right){
		t_right->left = p_node;
		p_node->right = t_right;
	}//connnect right root to the smallest one 

	NODE *temp = p_node;
	if(isRight){///RIGHT child
		while(temp->left)
			temp = temp->left;
	}
	else{//LEFT CHild
		while(temp->right)
			temp = temp->right;
	}
	return temp;
}