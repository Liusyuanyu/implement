#include <iostream>
#include <set>
#include <vector>

using namespace std;
typedef multiset<int,greater<int> > IntHeap;


void FineKLeastNumbers( vector<int> & data,IntHeap& leastNumber , unsigned int k);