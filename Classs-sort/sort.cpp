#include <stdlib.h>
#include<algorithm>
#include<ctime>
#include<cstdlib>
#include<cstring>
#include <iostream>
#include<vector>
#include "merge.h"
#include "Selectionsort.h"
#include "insertion.h"
#include "bubble.h"
using namespace std;
int const N=10000000;
int a[N];
int *TB;
int *TA;
bool test_sort( Sort<int> * A, const int *B, int n)
{
	memcpy(TA,B,sizeof(int)*n);
	memcpy(TB,B,sizeof(int)*n);
	clock_t t = clock();
	A->sortq(TA,n);//el sort
	float time=float(clock()-t)/CLOCKS_PER_SEC;
	std::sort(TB,TB+n);//std sort
	for(int i =0;i<n;i++)
		if(TA[i]!=TB[i]) return false;
	std::cout<<time<<" ";
	return true;
}
int main(){
	srand(time(NULL));
	vector<Sort<int> *> S;
    int n;
	cin>>n;
	int * A=new int [N];
    TA=new int [N];TB=new int [N];
	S.push_back(new Insertion<int>);
	S.push_back(new Bubble<int>);
	S.push_back(new Merge<int>);
	S.push_back(new Selection <int>);
	for(int n=100;n<=N;n*=10){
		for(int i=0;i<n;i++)
			A[i]=rand()%n;
		cout<<n<<" ";
		for(int s=0;s<4;s++){
			if(!test_sort(S[s],A,n)){
				cout<<"Fail\n";
				return 0;
			}}
		cout<<endl;
			}
	delete []A;
	delete []TA;
	delete []TB;
	return 0;
}
