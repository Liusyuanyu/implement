#include <stdlib.h>
#include <stdio.h>

int nGreatestSum ; 
int FindGreatestSum(int *DATA,unsigned length);

int main(int argc, char const *argv[])
{
	int i,input;
	unsigned array_num;
	printf("Enter a number : ");
	scanf("%u",&array_num);

	int pData[array_num];

	for (i = 0; i < array_num; ++i)
		{
			fflush(stdin);
			printf(" %d number : " ,i+1);
			scanf("%d",&input);
			pData[i] = input;
		}///Inpjut an array

	i  = FindGreatestSum(pData,array_num);

	printf("The greatest sum : %d\n",nGreatestSum);
	return 0;
}

int FindGreatestSum(int *DATA,unsigned length){
	nGreatestSum = 0;
	int temp_sum = 0;
	unsigned i;
	for( i =0 ;i <length ; i++){
		temp_sum += DATA[i];
		if(temp_sum < 0)
			temp_sum = 0;
		if(temp_sum > nGreatestSum)
			nGreatestSum = temp_sum;
	}

	if(nGreatestSum == 0){
		nGreatestSum = DATA[0];
		for( i =0 ; i<length ; i++){
			if(DATA[i]> nGreatestSum)
				nGreatestSum = DATA[i];
		}
	}

	return 0;
}