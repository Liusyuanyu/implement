#include <stdio.h>

long long Fibonacci_Solution1(unsigned n); 
long long Fibonacci_Solution2(unsigned n); 

int main(int argc, char const *argv[])
{
	int answer;
	unsigned N;
	printf("Enter N :");
	scanf("%d",&N);
	fflush(stdin);

	answer = Fibonacci_Solution1(N);
	printf("Fibonacci_Solution1 : %d\n",answer);

	answer = Fibonacci_Solution2(N);
	printf("Fibonacci_Solution2 : %d\n",answer);

	return 0;
}

long long Fibonacci_Solution1(unsigned n){
	int result[2]={0,1};
	if(n<2)
		return result[n];

	return Fibonacci_Solution1(n-1) + Fibonacci_Solution1(n-2);
}

long long Fibonacci_Solution2(unsigned n){
	int result[2]={0,1};
	int r;
	if(n<2)
		return result[n];
	
	long long fibNMinusOne = 1;
	long long fibNMinusTwo = 0;
	long long fibN = 0;

	for(r = 2; r <= n;r++){
		fibN = fibNMinusTwo +fibNMinusOne;
		fibNMinusTwo = fibNMinusOne;
		fibNMinusOne = fibN;
	}
	return fibN;
}