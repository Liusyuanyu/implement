#include <iostream>

using namespace std;
bool FindTwoNumberWithSum(int data[],int SUM,unsigned int length,int &first,int &second);
int main(int argc, char const *argv[])
{
	int n,length,first,second;
	cout<<"How many number in array ? ";
	cin>>length;

	int data[length],temp;
	for(n = 0;n<length;n++){
		cout<<n+1<<" number : ";
		cin>>temp;
		data[n] = temp;
	}
	cout<<"SUM :";
	cin>>n;
	if(FindTwoNumberWithSum(data,n,length,first,second)){
		cout<<endl<<"First :"<<first<<"  Second : "<<second<<endl;
	}
	else{
		cout<<"There are not any two number with sum!\n";
	}
	return 0;
}

bool FindTwoNumberWithSum(int data[],int SUM,unsigned int length,int &first,int &second){
	if(length<1)
		return false;
	int ahead= length -1 ;
	int behind = 0;
	bool found = false;
	long long curSum ;
	while(ahead > behind){
		curSum = data[ahead] + data[behind];
		if(curSum == SUM){
			first = data[behind];
			second = data[ahead];
			found = true;
			return found;
		}
		else if(curSum < SUM){
			behind ++;
		}
		else
			ahead--;
	}
	return found;
}