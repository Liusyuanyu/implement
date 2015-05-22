#include "main.h"

int main(int argc, char const *argv[])
{
	int R,n,m;
	printf("N: ");
	scanf("%d",&n);
	fflush(stdin);
	printf("M: ");
	scanf("%d",&m);
	R = lastRemaining(n,m);
	if(R==-1)
		printf("Wrong enter\n");
	else
		printf("The last remaining number : %d\n",R);
	return 0;
}