/*#include <stdio.h>
#include <stdlib.h>*/
#include <iostream>
#include <cstdlib>
using namespace std;

struct matrix22
{
	matrix22(long long m00 = 0,long long m01 = 0,long long m10 =0,long long m11=0)
	:m_00(m00),m_01(m01),m_10(m10),m_11(m11)
	{}
	long long m_00;
	long long m_01;
	long long m_10;
	long long m_11;
};

matrix22 matrixPower(int n);
matrix22 matrixMultiply(matrix22,matrix22);


int main(int argc, char const *argv[])
{
	int n , result[2]={0,1};
	n = atoi(argv[1]);
	if( n < 2){
		//printf("Fibonacci %d : %d\n",n,result[n]);
		cout<<"Fibonacci "<<n<<": "<<result[n]<<endl;
		return 0;
	}
	matrix22 answer;
	answer = matrixPower(n-1);
	//printf("Fibonacci %d : %d\n",n,answer.m_00);
	cout<<"Fibonacci "<<n<<" : "<<answer.m_00<<endl;
	return 0;
}

matrix22 matrixMultiply(matrix22 matrix1,matrix22 matrix2){
	matrix22 product;
	product.m_00 = matrix1.m_00*matrix2.m_00 + matrix1.m_01*matrix2.m_10;
	product.m_01 = matrix1.m_00*matrix2.m_01 + matrix1.m_01*matrix2.m_11;
	product.m_10 = matrix1.m_10*matrix2.m_00 + matrix1.m_11*matrix2.m_10;
	product.m_11 = matrix1.m_10*matrix2.m_01 + matrix1.m_11*matrix2.m_11;
	return product;
}

matrix22 matrixPower(int n){
	if( n == 1)
		return matrix22(1,1,1,0);
	matrix22 product;
	if( n%2 ==0){
		product = matrixPower(n/2);
		product = matrixMultiply(product , product);
	}
	else{
		product = matrixPower((n-1)/2);
		product = matrixMultiply(product,product);
		product = matrixMultiply(product,matrix22(1,1,1,0));
	}
	return product;
}