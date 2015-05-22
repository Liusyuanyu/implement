#include <iostream>
using namespace std;
class Temp{
	public:
		Temp(){
			N++;
			Sum += N;
		}
		static void Reset(){
			N = 0;
			Sum =0;
		}
		static int GetSum(){return Sum;}
	private:
		static int N;
		static int Sum;
};

int Temp::N =0;
int Temp::Sum = 0;

int main(int argc, char const *argv[])
{
	int Num;
	cout<<"How many N ? ";
	cin>>Num;
	Temp::Reset();
	Temp *a = new Temp[Num];
	delete []a;
	cout<<"Sum :"<<Temp::GetSum()<<endl;
	return 0;
}