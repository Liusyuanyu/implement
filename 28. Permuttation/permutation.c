#include <stdio.h>
#include <string.h>
#define N 20
void permutation(char *str,char *begin);

int main(int argc, char const *argv[])
{
	char str[N];
	printf("Enter :");
	scanf("%s",str);
	permutation(str,str);
	return 0;
}

void permutation(char *str,char *begin){
	if(!str || !begin)
		return;
	if(*begin == '\0'){
		printf("%s\n",str);
	}
	else{
		char *ch,temp;
		for(ch = begin ; *ch !='\0' ; ch++){
			temp = *ch;
			*ch =*begin;
			*begin = temp;
			permutation(str,begin+1);

			temp = *ch;
			*ch =*begin;
			*begin = temp;
		}
	}
}
