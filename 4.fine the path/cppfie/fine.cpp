#include "fine.h"
using namespace std;

int main(int argc, char const *argv[]){

	int i,expect_num,current=0;
	NODE *temp;
	vector<int> path;

	maketree();
	temp = head;
	for( i =0; i <3 ; i++){
		cout<<"=="<<temp->number<<"==";
		temp = temp->left;
	}
	cout<<"Which sum of path : ";
	cin>>expect_num;

	FinePath(head,expect_num,path,current);
	return 0 ;
}

void maketree()
{
	int i,ran[N];
	for(i=0; i<N;i++){
		cout<<"Enter : ";
		cin>>ran[i];
		create(ran[i]);
	}
	cout<<"Create Done\n";
	return ;
}

void create(int num){
	NODE *temp , *past;
	int RL;
	if(head ==NULL){
		temp = new NODE;
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

		temp = new NODE;
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

void FinePath(NODE *treenode , int expect ,vector<int> &path,int& current){
	if(treenode ==NULL) // there is no tree
		return ;
	current += treenode->number;
	path.push_back(treenode->number);

	bool ifLeaf(!treenode->left && !treenode->right);

	if(current == expect && ifLeaf){
		vector<int>::iterator temp = path.begin();

		for(;temp != path.end() ; temp++)
			cout<<"=="<<*temp<<'\t';
		cout<<endl;
	}

	if(treenode->left)
		FinePath(treenode->left,expect,path,current);
	if(treenode->right)
		FinePath(treenode->right,expect,path,current);

	current -= treenode->number;
	path.pop_back();

}