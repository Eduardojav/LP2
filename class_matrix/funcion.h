#include<iostream>
template<class E>;
class Matrix{
    E** data;
    unsigned row;
    unsigned col;
    int complete=0;
    
    public:
    
    	Matrix(int c,int r);
		
		~Matrix();
		
    	Matrix();
    	
    	void llenar();
    
  		Matrix operator +(const Matrix<E> & summ );
  		
  		Matrix operator *(const Matrix<E> & summ);
  		
  		Matrix & operator << (E & v);
  		
  		friend ostream & operator << (ostream & os; const matrix <E> & m);
  
  
  };
