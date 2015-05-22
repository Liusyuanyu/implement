#include "lcs.h"

int main(int argc, char const *argv[])
{
	char str1[N],str2[N];
	int lcs_long;
	printf("enter one string :");
	scanf("%s",str1);
	printf("String 1 : %s Length = %zu \n",str1,strlen(str1));
	printf("enter two string :");
	scanf("%s",str2);
	printf("String 2 : %s Length = %zu \n",str2,strlen(str2));
	lcs_long = LCS(str1,str2);
	printf("\nLCS : %d\n",lcs_long);

	return 0;
}
int LCS (char *str1,char *str2){
	if(!str1 || !str2)
		return 0;
	size_t lenght1 = strlen(str1);
	size_t lenght2 = strlen(str2);
	size_t i,j;

	/*
	int **LCS_direction;
	int **LCS_length;
	LCS_length = (int **)malloc(sizeof(int)*lenght1);
	for( i = 0 ; i <lenght2;i++)
		LCS_length[i]=(int *)malloc(sizeof(int)*lenght2);
	for(i = 0; i <lenght1 ; i++)
		for(j=0 ; j < lenght2 ; j++)
			LCS_length[i][j]=0;

	LCS_direction = (int **)malloc(sizeof(int)*lenght1);
	for( i = 0 ; i <lenght2;i++)
		LCS_direction[i]=(int *)malloc(sizeof(int)*lenght2);
	for(i = 0; i <lenght1 ; i++)
		for(j=0 ; j < lenght2 ; j++)
			LCS_direction[i][j]=kinit;
	*/
	
	int LCS_length[lenght1][lenght2];
	int LCS_direction[lenght1][lenght2];
	for(i =0; i<lenght1;i++)
		for(j = 0; j < lenght2 ;j++)
			LCS_length[i][j] = 0;
	for(i =0; i<lenght1;i++)
		for(j = 0; j < lenght2 ;j++)
			LCS_direction[i][j] = kinit;

	for(i=0;i<lenght1;i++){
		for(j=0;j < lenght2; j++){
			if(i==0 || j == 0){
				if(str1[i]==str2[j]){
					LCS_length[i][j] = 1;
					LCS_direction[i][j] = kleftup;
				}
				else
					LCS_length[i][j] = 0;
			}//only one letter in one string
			else if(str1[i] == str2[j]){
				LCS_length[i][j] = LCS_length[i-1][j-1] +1;
				LCS_direction[i][j] = kleftup;
			}//same letter in two strings
			else if (LCS_length[i-1][j] > LCS_length[i][j-1]){
				LCS_length[i][j] = LCS_length[i-1][j];
				LCS_direction[i][j] = kup;
			}// choice the longest one 
			else {
				LCS_length[i][j] = LCS_length[i][j-1];
				LCS_direction[i][j] = kleft;
			}
		}//inside for
	}//outside for
	print_lcs((int *)LCS_direction,str1,str2,(lenght1-1),(lenght2-1));
	//printf("AAA:%d %d  %d  %d",**LCS_direction,LCS_length[0][1],LCS_length[0][2],LCS_length[0][3]);
	return LCS_length[lenght1-1][lenght2-1];
}