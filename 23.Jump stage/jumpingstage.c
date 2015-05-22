#include <stdio.h>

long long jumping_1(int stage);
long long jumping_2(int stage);
int main(int argc, char const *argv[])
{
	int stage;
	printf("How many stages do you want ? ");
	scanf("%d",&stage);
	long long answer;

	answer = jumping_1(stage);
	printf("Method__1 : %lld\n",answer);
	answer = jumping_2(stage);
	printf("Method--2 : %lld\n",answer);
	return 0;
}

long long jumping_1(int stage){
	if(stage ==0)return 0;
	long long result[2] ={1,2};
	if(stage <=2){
		return result[stage-1];
	}
	return jumping_1(stage-1) + jumping_1(stage-2);
}

long long jumping_2(int stage){
	long long first =1;
	long long second = 2;
	long long jump = 0;
	int i;

	switch(stage){
		case 1:
			return first;
		case 2:
			return second;
		default:
			for( i = 3 ; i <= stage ; i++){
				jump = first + second;
				first = second;
				second = jump;
			}
			return jump;
	}
}