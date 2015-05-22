#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int StringToInteger(char *str);
int main(int argc, char const *argv[])
{
	printf("The string  %s \n",argv[1]);
	//int num = StringToInteger(argv[1]);
	printf("Number : %d\n",StringToInteger(argv[1]));
	//printf("Number : %d\n",num);
	return 0;
}

int StringToInteger(char *str){
	int num=0,i=0;
	int negative=0;
	if(str[i]=='-'){
		negative=1;
		i++;
	}
	//printf("The string  %s \n",str);
	for(;str[i] !='\0';i++){
		num = num*10;
		num +=(int ) (str[i] - '0');
		printf("%c===%d \n",str[i],str[i]-'0');
	}
	if(negative)
		num -=0;
	return num;
}