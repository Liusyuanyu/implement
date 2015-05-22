#include "lcs.h"

void print_lcs(int *LCS_direction,char * str1,char * str2,size_t row,size_t col){
	if(str1 == NULL || str2 ==NULL)
		return;
	size_t length1=strlen(str1);
	size_t length2=strlen(str2);

	/*printf("print1 lcs : %s\n",str1);
	printf("print2 lcs : %s\n LCS_direction :",str2);
	for(int i =0; i < length2 ; i++)
		printf("%d ",LCS_direction[i]);*/

	if(length1 ==0||length2 ==0 ||!(row < length1 && col <length2))
		return;

	if(LCS_direction[row*length2 +col] == kleftup){
		if(row > 0 &&col >0)
			print_lcs(LCS_direction,str1,str2,row-1,col-1);
		printf("%c",str1[row]);
	}//FINE
	else if (LCS_direction[row*length2 +col] == kleft){
		if(col > 0)
			print_lcs(LCS_direction,str1,str2,row,col-1);
	}//LEFT
	else if(LCS_direction[row*length2 +col] == kup){
		if(row > 0)
			print_lcs(LCS_direction,str1,str2,row-1,col);
	}

}