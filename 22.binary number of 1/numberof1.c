#include <stdio.h>

int numberof1_so1(int num);
int numberof1_so2(int num);
int numberof1_so3(int num);

int main(int argc, char const *argv[])
{
	printf("enter a number:");
	int num,one;
	scanf("%d",&num);

	one = numberof1_sol1(num);
	printf("Solution 1: %d\n",one);
	one = numberof1_sol2(num);
	printf("Solution 2: %d\n",one);
	one = numberof1_sol3(num);
	printf("Solution 3: %d\n",one);
	return 0;
}

int numberof1_sol1(int num){
	int count = 0;
	while( num != 0){
		if(num & 1 )
			count++;
		num =num >>1;
	}
	return count;
}
int numberof1_sol2(int num){
	int count = 0;
	unsigned flag = 1;
	while( flag){
		if(num & flag )
			count++;
		flag =flag << 1;
	}
	return count;
}
int numberof1_sol3(int num){
	int count = 0;
	while( num){
		count++;
		num = (num -1) & num;
	}
	return count;
}