#ifndef MERGE_H_INCLUDED
#define MERGE_H_INCLUDED
#include "sort.h"
template<class T>
class Merge:public Sort<T>{
    private:
    T a[10000000];
	public:
		Merge(){}
		~Merge(){}
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


#endif // MERGE_H_INCLUDED
