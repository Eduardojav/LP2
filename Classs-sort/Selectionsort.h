#ifndef SELECTIONSORT_H_INCLUDED
#define SELECTIONSORT_H_INCLUDED
#include "sort.h"
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

#endif // SELECTIONSORT_H_INCLUDED
