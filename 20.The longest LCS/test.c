#include <stdio.h>
void print_it(int *arr[],int n,int m){
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			printf("%d  ",*((arr+i*n)+j));
		printf("\n");
	/*printf("%d   %d   %d\n",*(arr),*(arr+1),*(arr+2));
	printf("%d   %d   %d\n",**(arr+3),**(arr+4),**(arr+5));
	printf("%d   %d   %d\n",**(arr+6),**(arr+7),**(arr+8));*/
}
int main(int argc, char const *argv[])
{
	int arr[3][3]={{0,1,2},{3,4,5},{6,7,8}};
	print_it((int**)arr,3,3);
	return 0;
}