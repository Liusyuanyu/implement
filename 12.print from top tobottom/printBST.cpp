#include "make_tree.h"
#include <deque>
using namespace std;
void PrintFromTopToBottom(NODE *TreeRoot);
int main(int argc, char const *argv[])
{
	NODE *head;
	head =  maketree();
	cout<<"Make tree :"<<endl;
	PrintFromTopToBottom(head);
	cout<<endl;
	MirrorRecursively(head);
	cout<<"Mirror Tree : :"<<endl;
	PrintFromTopToBottom(head);
	cout<<endl;
	//cout<<head->left->number<<endl;
	return 0;
}

void PrintFromTopToBottom(NODE *TreeRoot){
	if(!TreeRoot)
		return;
	deque<NODE *> dequeTree;
	NODE *temp_node;

	dequeTree.push_back(TreeRoot);
	while(dequeTree.size()){
		temp_node = dequeTree.front();
		dequeTree.pop_front();

		cout<<temp_node->number<<"==";

		if(temp_node->left)
			dequeTree.push_back(temp_node->left);
		if(temp_node->right)
			dequeTree.push_back(temp_node->right);
	}
	return;
}