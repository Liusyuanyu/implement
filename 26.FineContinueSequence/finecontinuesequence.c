#include <stdio.h>

void printsequence(int small,int big);
void finecontinuesequence(int num);
int main(int argc, char const *argv[])
{
	int num  =atoi(argv[1]);
	finecontinuesequence(num);
	return 0;
}


void printsequence(int small,int big){
	for(small;small <= big ;small++)
		printf("%d  ",small);
	printf("\n");
}
void finecontinuesequence(int num){
	if(num  < 3)
		return;

	int small = 1,big =2 , middle = (1+num)/2;
	int sum = small + big;
	while(small < middle){
		if(sum == num)
			printsequence(small,big);
		while( sum > num){
			sum -= small;
			small++;
			if(sum == num)
				printsequence(small,big);
		}
		big++;
		sum +=big;
	}
}