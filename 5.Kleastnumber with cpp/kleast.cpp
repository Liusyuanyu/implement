#include "kleast.h"

using namespace std;

int main(int argc, char const *argv[])
{
	int num,l,i;
	unsigned k;
	vector<int> data;
	IntHeap leastNumber;

	cout<<"How many number you want to put in the array :";
	cin>>l;
	for(i = 0; i < l;i++){
		cout<<"Enter "<<i+1<<"number :";
		cin>>num;
		data.push_back(num);
	}
	cout<<"Your set :";
	for(i = 0; i < l;i++){
		cout<<data[i]<<"  ";
	}
	cout<<endl << "How many K :";
	cin>>k;

	FineKLeastNumbers(data , leastNumber , k);

	IntHeap::iterator iter = leastNumber.end() ;
	cout<< "List :";
	/*for(iter; iter != leastNumber.begin()  ; iter++ )
		cout<<*iter<<"  ";
	cout<<endl;*/
	for(iter--; ; iter-- ){//back to forward
		if(iter == leastNumber.begin() ){
			cout<<*iter<<"  ";
			break;
		}
		cout<<*iter<<"  ";
	}
	cout<<endl;
	return 0;
}

void FineKLeastNumbers( vector<int> & data,IntHeap& leastNumber , unsigned int k){

	leastNumber.clear();

	if(data.size() < k || k ==0)
		return;

	vector<int>::iterator iter = data.begin();

	for(;iter != data.end() ; iter++){

		if(leastNumber.size() < k)
			leastNumber.insert(*iter);
		//less than wanted
		else{
			IntHeap::iterator listFirst  = leastNumber.begin();
			//the multiset first data is the largest number

			if( *listFirst > *iter){
				leastNumber.erase(*listFirst);
				leastNumber.insert(*iter);
			}//need swap
		}
	}

	return;
}