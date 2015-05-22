#include "verifysequence.h"

int main(int argc, char const *argv[])
{
	int num_in,length;
	printf("How many number in the sequence : ");
	scanf("%d",&length);

	int seq[length] , r;

	for( r= 0 ;r < length ; r++){
		fflush(stdin);
		printf("Enter %d number :",r+1 );
		scanf("%d",&num_in);
		seq[r] = num_in;
	}//end of for

	for( r= 0 ;r < length ; r++){
		printf("%d  ",seq[r]);
	}//end of for PRINTER
	printf("\n");

	if(verfy(seq,length) == TRUE)
		printf("This is BST\n");
	else
		printf("This is not BST\n");

	return 0;
}

int verfy(int *seq , int length){
	if(seq == NULL || length <=0 )
		return FALSE;
	int root = seq [length -1];
	int l_part;
	for(l_part=0;l_part<length-1;l_part++){
		if(seq[l_part] > root )
			break;
	}//end for BST left part

	int r_part = l_part;

	for(;r_part<length-1;r_part++){
		if(seq[r_part] < root)
			return FALSE;// all left part need greater than root
	}//end of BST right part

	//Verify left part &right part
	int BOOL_left,BOOL_right;
	BOOL_left = verfy(seq,l_part);
	BOOL_right = verfy(&seq[l_part],length-1- l_part);
	return (BOOL_right && BOOL_left);
}