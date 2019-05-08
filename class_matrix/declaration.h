#ifndef DECLARATION_H_INCLUDED
#define DECLARATION_H_INCLUDED
#include<iostream>
#include <stdlib.h>
#include<algorithm>
#include<ctime>
#include<cstdlib>
#include<cstring>
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

template<class E>
Matrix<E>:: Matrix()
    {
    col = 0;row = 0;
    R = 0 ; C = 0;
    data = new E[1];
    data[0] = new E[1];
    }

template<class E>
Matrix<E>::Matrix(int r,int c)
    {
    col = c;row = r;
    R = 0 ; C = 0;
    data = new E [col*row];
    }

template<class E>
Matrix<E>::Matrix(const Matrix<E> & summ )
    {
    col = summ.col;
    row = summ.row;
    R = 0 ; C = 0;
    data = new E [col*row];
    memcpy(data ,summ.data,sizeof(E)*(col*row));}

template<class E>
Matrix<E>:: ~Matrix()
    {
    delete[] data;
    }

template<class E>
void Matrix<E>::fill_in()
    {
	for (int i = 0 ; i < col*row ; i++)
            	data[i] = 0;
    }

template<class E>
Matrix<E>& Matrix<E>::  operator = (const Matrix<E> & summ ){
    delete[] data;
    col = summ.col;
    row = summ.row;
    R = 0 ; C = 0;
    data = new E [col*row];
    memcpy(data ,summ.data,sizeof(E)*(col*row));
    return *this;
}

template<class E>
Matrix<E> Matrix<E>::  operator +(const Matrix<E> & summ )
    {
    assert (row == summ.row && col==summ.col);
    Matrix <E> aux(row,col);
    for (int i = 0 ; i < row ; i++)
        for (int j = 0 ; j < col ; j++)
            aux.data[j*row+i] = data[j*row+i] + summ.data[j*row+i];
    return aux;
    }

template<class E>
Matrix<E>  Matrix<E>::  operator -(const Matrix<E> & summ )
    {

    assert(row == summ.row && col==summ.col);
    Matrix <E> aux(row,col);
    for (int i = 0 ; i < row ; i++)
        for (int j = 0 ; j < col ; j++)
            aux.data[j*row+i] = data[j*row+i] + summ.data[j*row+i];
    return aux;
    }

template<class E>
Matrix<E> Matrix<E>::  operator *(const Matrix<E> & summ )
    {
    assert(col == summ.row);
    Matrix <E> aux(row,summ.col);
    aux.fill_in();
    for (int i = 0 ; i < aux.row ; i++)
        for (int j = 0 ; j < aux.col ; j++)
            for(int k = 0 ; k < col ; k++)
                aux.data[j*row+i] +=data[k*row+i] * summ.data[j*row+k];
    return aux;
    }

template<class E>
Matrix<E>& Matrix<E>::  operator *(double a)
    {
    for (int i = 0 ; i < row*col ; i++)
                data[i]*= a;
    return *this;
    }

template<class E>
Matrix<E>& Matrix<E>::  operator /(double a){
    for (int i = 0 ; i < row *col; i++)
                data[i]/= a;
    return *this;
}

template<class E>
E & Matrix<E>::  operator ()(int a, int b)
    {
    return data[b*row+a];
    }
template<class E>
Matrix<E> & Matrix<E>:: operator << (E v)
    {
    if(C == col)
        {
        C = 0;R++;
        }
    if(C == 0 && R == row)
        {
        C = 0;R=0;
        }
    data[(C++)*row+R] = v;
    return *this;
    }

#endif // DECLARATION_H_INCLUDED
