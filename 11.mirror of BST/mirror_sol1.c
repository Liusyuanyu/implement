#include "make_tree.h"

void MirrorRecursively(NODE *node);

int main(int argc, char const *argv[])
{
	NODE *head;
	head = maketree();
	printf("\n%d  --\n",head->left->number);

	MirrorRecursively(head);
	printf("\n%d  --\n",head->left->number);
	return 0;
}

void MirrorRecursively(NODE *node){
	if(node == NULL)// ==if(!node)
		return;
	NODE *temp;
	
	temp=node->left;
	node->left=node->right;
	node->right=temp;

	if(node->left)
		MirrorRecursively(node->left);
	if(node->right)
		MirrorRecursively(node->right);
	return;
}