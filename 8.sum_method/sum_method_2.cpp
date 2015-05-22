#include <iostream>
using namespace std;
class A;
A* Array[2];

class A{
	public:
		virtual int Sum (int n){return 0;}
};
class B: public A
{
public:
	virtual int Sum(int n){return Array[!!n]->Sum(n-1) +n;}
};

int main(int argc, char const *argv[])
{
	int Num;

	A a;
	B b;
	Array[0] = &a;
	Array[1] =&b;
	cout<<"How many N ? ";
	cin>>Num;
	
	cout<<"Sum :"<<Array[1]->Sum(Num)<<endl;
	return 0;
}