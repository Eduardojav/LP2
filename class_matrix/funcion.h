#ifndef DECLARATION_H_INCLUDED
#define DECLARATION_H_INCLUDED
#include<iostream>
using namespace std;
template<class E>
class Matrix{
    private:
    int row;
    int col;
    int complete=0;
    int R=0;
    int C=0;

    public:
        E** data;

    	Matrix(int r,int c);

		~Matrix();

    	Matrix();

    	void llenar();

  		Matrix<E> operator +(const Matrix<E> & summ );

  		Matrix<E>  operator *(const Matrix<E> & summ);

  		Matrix<E> & operator << (E v);

        Matrix<E>  & operator ()(int a, int b);

  		friend std::ostream &operator << (std::ostream & os, const Matrix <E> & m){
            for(int i = 0; i < m.row ;i++)
            {
                for(int j = 0; j < m.col ;j++)
                    std::cout<<m.data[i][j]<<" ";
                std::cout<<std::endl;
            }
                return os;
                }


  };
template<class E>
Matrix<E>:: ~Matrix()
{
for(int i=0;i<row;i++)
	delete[] data[i];
delete [] data;
}
template<class E>
Matrix<E>::Matrix(int c,int r)
    {
        col=c;
        row=r;
        data=new E*[r];
        for (int i=0;i<row;i++)
        data[i]=new E[c];
    }

template<class E>
Matrix<E>:: Matrix()
    {
		col=0;
        row=0;
        data=new E[1];
        data[0]=new E[1];
    }

template<class E>
 Matrix<E> Matrix<E>::  operator +(const Matrix<E> & summ )
{
    if(row == summ.row && col==summ.col)
    {
        Matrix <E> aux(row,col);
        for (int i=0;i<row;i++)
            for (int j=0;j<col;j++)
              aux.data[i][j] = data[i][j] + summ.data[i][j];
              cout<<aux<<endl;
        return aux;
        }
}
template<class E>
void Matrix<E>::llenar()
{
	for (int i=0;i<row;i++)
            for (int j=0;j<col;j++)
            	data[i][j]=0;
}
template<class E>
Matrix<E> Matrix<E>::  operator * (const Matrix<E> & summ )
{
	 if(col == summ.row)
        {
        Matrix <E> aux(row,summ.col);
        aux.llenar();
        for (int i = 0 ; i < aux.row ; i++)
            for (int j = 0 ; j < aux.col ; j++)
             	for(int k = 0 ; k < col ; k++)
              		aux.data[i][j] += data[i][k] * summ.data[k][j];
        cout<<aux<<endl;
        return aux;
        }
}
template<class E>
Matrix<E> & Matrix<E>::  operator ()(int a, int b)
{
    return data[a][b];
}
template<class E>
Matrix<E> & Matrix<E>:: operator << (E v){
    if(C == col)
            {
        C=0;R++;
            }
    if(C == 0 && R == row){
        C=0;R=0;
    }
    data[R][C++] = v;
    return *this;
    }

#endif // DECLARATION_H_INCLUDED