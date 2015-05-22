#include "trans.h"

int main(int argc, char const *argv[])
{
	maketree();
	printf("\n ----%d -----\n",head->number);
	return 0;
}
NODE * Convert_Solution(NODE * ptrHead){
	NODE *temp = NULL;
	ConvertNode(ptrHead , lastnode);

	NODE * headlist=lastnode;

	while(headlist && headlist->left)
		headlist = headlist->left;
	return headlist;
}

void *ConvertNode(NODE *pnode , NODE *lastnode){
	if(pnode = NULL)
		return ;

	NODE *temp= pnode;
	if(temp->left !=NULL)
		ConvertNode(temp->left,lastnode );

	temp->left = lastnode;

	if(lastnode != NULL)
		lastnode->right = temp;

	lastnode = temp;

	if(temp->right != NULL)
		ConvertNode(temp->right , lastnode);
}