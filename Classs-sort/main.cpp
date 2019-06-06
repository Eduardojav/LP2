
#include <stdlib.h>
#include<algorithm>
#include<ctime>
#include<cstdlib>
#include<cstring>
#include <iostream>
#include<vector>

using namespace std;

int const N=10000000;
int a[N];		
int *TB;
int *TA;
template<class T>
class Sort{
	public:	
		virtual void sortq(T *&A =NULL,int a=0) =0;
		virtual ~Sort(){}
};

template< class T>
class Bubble:public Sort<T>{
	public:
		Bubble(){}
		~Bubble(){}
		
		void sortq(T *&A,int a) {
			while(a){
				for(int i=0;i<a-1;i++){
					if(A[i]>A[i+1]){
						T aux;
						aux=A[i]; A[i]=A[i+1]; A[i+1]=aux;
					}
				}
				a--;
			}
		}

};

template<class T>
class Insertion:public Sort<T>{
	private:	
	public:
		Insertion(){	}
		~Insertion(){}
		
		void sortq(T *&A,int a){
    		int ext;
    		int j=1;
    		int aux;
    		while(j<a){
        		ext=A[j];
        		for(int i=j-1;i>=0;i--){
            		if(A[i]>ext){
                		A[i+1]=A[i];
            		}
            		else{
                		A[i+1]=ext;
                		i=-1;
            		}
            		aux=i;
        		}
        		if(aux==0){
            		A[0]=ext;
        		}
        		j++;
    		}
		}

};

template<class T>


class Selection:public Sort<T>{
	public:
		Selection(){		
		}
		~Selection(){
		}
		
		void sortq(T *&A,int a){
		int temp;
		for(int i=0;i < a;i++){
            int menor=i;
        for(int j= i+1;j <a ;j++){
            if(A[menor] > A[j])  menor = j;}
        temp = A[menor];
        A[menor] = A[i];
        A[i] = temp;}
	}
		};


template<class T>
class Merge:public Sort<T>{
	public:
		Merge(){}
		~Merge(){
		}
		void merge(int* A,int i,int m,int j){
			int b=i,d=m+1; int c=0;
			while(b<=m && d<=j ){
				if(A[b]>=A[d]){
					a[c]=A[d];
					d++; c++;
				}
				else{
					a[c]=A[b];
					b++; c++;
				}
			}	
			while(b<=m) a[c++]=A[b++];
			while(d<=j) a[c++]=A[d++];		
			for(int in=0;in<j-i+1;in++)
				A[in+i]=a[in];
			}
			
		void merge_sort(int* A,int i,int j){
			if(i==j)return;
			int m=(i+j)/2;
			merge_sort(A,i,m);
			merge_sort(A,m+1,j);
			merge(A,i,m,j);
		}
		void merge_sort(int*A, int n){
			merge_sort(A,0,n-1);
		}
		void sortq(T *&A,int a)  { 
			merge_sort(A,a);
		}	
				
};
bool test_sort( Sort<int> * A, const int *B, int n){
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
	Sort<char>sc;
		int n;
	cin>>n;
	int * A=new int [N];
	 TA=new int [N];TB=new int [N];
	S.push_back(new Selection<int>);
	S.push_back(new Insertion<int>);
	S.push_back(new Bubble<int>);
	S.push_back(new Merge<int>);
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
