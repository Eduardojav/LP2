#ifndef INSERTION_H_INCLUDED
#define INSERTION_H_INCLUDED
#include "sort.h"
template<class T>
class Insertion:public Sort<T>{
	private:
	public:
		Insertion(){}
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


#endif // INSERTION_H_INCLUDED
