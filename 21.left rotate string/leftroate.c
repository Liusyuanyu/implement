#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

char *LeftRoateString(char * str ,unsigned n);
void reverse(char * strfront,char *strend);

int main(int argc, char const *argv[])
{
	char *str;
	unsigned n;
	n = strlen(argv[1]);
	str = (char * )malloc(sizeof(char)*n);
	strcpy(str,argv[1]);
	printf("%s\n",str);
	printf("Enter a number for reversing \nN : ");
	scanf("%u",&n);
	str = LeftRoateString(str,n);
	printf("After reverse : %s\n",str);
	return 0;
}

char *LeftRoateString(char * str ,unsigned n){
	if( n ==0)
		return str;
	if(str == NULL){
		printf("There is not a string.\n");
		return str;
	}
	unsigned len = strlen(str);
	//REverse the first part
	reverse(str,&str[n-1]);
	//Reverse the second part
	reverse(&str[n],&str[len-1]);
	//Reverse all string
	reverse(str,&str[len-1]);
	return str;
}
void reverse(char * strfront,char *strend){
	char temp;
	while(strfront <= strend){
		//printf("%c  %c---\n",*strfront,*strend);
		temp = *strfront;
		*strfront = *strend;
		*strend = temp;
		strfront ++;
		strend --;
	}
}