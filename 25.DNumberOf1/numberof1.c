#include <stdio.h>
#include <stdlib.h>

int NumberOf1(int n);

int main(int argc, char const *argv[])
{
	int num;
	int i,total=0;
	num=atoi(argv[1]);
	printf("Enumber :%d\n",num);

	for(i=1 ; i <=num;i++)
		total += NumberOf1(i);

	printf("There are total %d \'1\' \n",total);
	return 0;
}

int NumberOf1(int n){
	int num=0;
	while(n){
		if(n%10==1)
			num++;
		n = n/10;
	}
	return num;
}