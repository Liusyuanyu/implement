#include <iostream>
#include <stack>
#define N 10

using namespace std;

bool IsPossiblePopOrder(int* pPush,int * pPop ,int nLength);
int main(int argc, char const *argv[])
{
	int input,r,l;
	int pPush[N],pPop[N];
	cout<<"Enter a push string :";
	cin>>input;
	int nLength, temp;
	//make push order
	for(r=0;input > 0;r++ ){
		pPush[r] = input %10;
		input /= 10;
	}
	nLength = r;
	l = --r;
	for(r = 0 ; r <= l ;r++,l--){
		temp =pPush[r];
		pPush[r] = pPush[l];
		pPush[l] = temp;
	}
	cout << "Push order :";
	for(r =0 ;r < nLength ;r++){
		cout<<pPush[r]<<" ";
	}
	cout<<endl;

	//make pop order
	cout<<"Enter a pop string :";
	cin>>input;
	for(r=0;input > 0;r++ ){
		pPop[r] = input %10;
		input /= 10;
	}
	nLength = r;
	l = --r;
	for(r = 0 ; r <= l ;r++,l--){
		temp =pPop[r];
		pPop[r] = pPop[l];
		pPop[l] = temp;
	}
	cout << "Pop order :";
	for(r =0 ;r < nLength ;r++){
		cout<<pPop[r]<<" ";
	}
	cout<<endl;
//	bool bPossible;
	if(IsPossiblePopOrder(pPush,pPop,nLength))
		cout<<"It is possible !"<<endl;
	else
		cout<<"False"<<endl;

	return 0;
}

bool IsPossiblePopOrder(int* pPush,int * pPop ,int nLength){
	
	bool bPossible =false;
	if(pPush && pPop && nLength > 0){
		int *pNextPush = pPush;
		int *pNextPop = pPop;
		stack<int> stackData;

		while(pNextPop - pPop < nLength){
			while(stackData.empty() || stackData.top() != *pNextPop){
				if(pNextPush == NULL)
					break;
				stackData.push(*pNextPush);
				//because first has been pushed in stack,only need do nlength -1 times ++ 
				if(pNextPush - pPush < nLength -1 )
					pNextPush++;
				else
					pNextPush = NULL;
			}
			if(stackData.top() != *pNextPop)
				break;

			stackData.pop();
			pNextPop++;
		}
		if(stackData.empty() && pNextPop - pPop == nLength)
			bPossible = true;
	}
	return bPossible;
}
