#include <iostream>
#include <vector>
using namespace std;

typedef struct node{
	int number;
	struct node *left;
	struct node *right;
}NODE;
NODE *head;

#define N  5

void create(int num);
void maketree();
void FinePath(NODE *treenode , int expect ,vector<int> &path,int &current);