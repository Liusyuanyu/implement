#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define tablesize 256
char FirstNotRepeating_number(char *);
int main(int argc, char const *argv[])
{
	char *pString;
	pString = argv[1];
	printf("String :%s\n",pString );
	char flag =FirstNotRepeating_number(pString);
	/*if(flag==0)
		printf("There is not string.\n");*/
	if(flag==NULL)
		printf("There is not any one char.\n");
	//if(fflag!=NULL)
	else
		printf("The first not repeating Char is %c\n",(char)flag);

	return 0;
}

char FirstNotRepeating_number(char *pString){
	if(!pString)
		return NULL;
	unsigned int hashTable[tablesize]={0};

	char *key=pString;
	for(;*key != '\0';key++){
		hashTable[(unsigned)*key]++;
	}
	key=pString;
	while(key!='\0'){
		if(hashTable[(unsigned)*key]==1)
			return *key;
		key++;
	}
	return NULL;
}