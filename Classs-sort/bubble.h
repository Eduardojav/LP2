#ifndef BUBBLE_H_INCLUDED
#define BUBBLE_H_INCLUDED
#include "sort.h"
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


#endif // BUBBLE_H_INCLUDED
