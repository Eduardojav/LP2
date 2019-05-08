#ifndef DECLARATION_H_INCLUDED
#define DECLARATION_H_INCLUDED
#include<iostream>
#include <stdlib.h>
#include<cstdlib>
#include<assert.h>
using namespace std;
template<class E>
class Matrix{

    private:

    int row , col , R , C;
    E* data;

    public:

        Matrix();

    	Matrix(int r,int c);

    	Matrix(const Matrix<E> & summ );

	~Matrix();

    	void fill_in ();

    	Matrix<E> & operator = (const Matrix<E> & summ );

  	Matrix<E>   operator +(const Matrix<E> & summ );

	Matrix<E>   operator -(const Matrix<E> & summ );

  	Matrix<E>   operator *(const Matrix<E> & summ);

	Matrix<E> & operator *(double a);

  	Matrix<E> & operator /(double a);

	Matrix<E> & operator << (E v);

        E  & operator ()(int a, int b);

  	friend std::ostream &operator << (std::ostream & os, const Matrix <E> & m)
            {
           for(int i = 0; i < m.col ;i++)
                {
               for(int j = 0; j < m.row ;j++)
                    os<<m.data[j*m.row+i]<<" ";
                std::cout<<std::endl;
                }
                return os;
            }

  };


#include "edu.inl"
#endif // DECLARATION_H_INCLUDED
