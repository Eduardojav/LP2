#ifndef VECTOR_INL_INCLUDED
#define VECTOR_INL_INCLUDED
#include <cstring>
#include <iostream>
#include<assert.h>
template<class E>
    vector<E>::vector()
    {
        size = 0;
        data = new E[1];
    }
    template<class E>
    vector<E>::vector(int a)
        {
            size = a;
            data = new E[size];
        }

    template<class E>
    vector<E>::vector(const vector<E>& ex)
        {
            size = ex.size;
            data = new E[size];
            memcpy(data,ex.data,sizeof(E) * size);
        }

    template<class E>
    vector<E>::~vector()
        {
            delete [] data;
        }

    template<class E>
    void vector<E>:: push_back(const E a)
        {
            vector<E> aux(*this);
            delete[] data;
            data = new E[++size];
            memcpy(data,aux.data,sizeof(E) * aux.size);
            data[size-1] = a;
        }

    template<class E>
    void vector<E>:: pop_back()
    {
            assert (size!=0);
            vector<E> aux(*this);
            delete[] data;
            data = new E[--size];
            memcpy(data,aux.data,sizeof(E) * size);
    }

    template<class E>
    void vector<E>:: swap(vector<E> & ex)
    {
        vector<E> aux(*this);
        vector<E> aux1(ex);
        delete[] ex.data;
        delete[] data;
        data=new E[aux1.size];
        ex.data=new E[aux.size];
        memcpy(ex.data,aux.data,sizeof(E) * aux.size);
        memcpy(data,aux1.data,sizeof(E) * aux1.size);
        ex.size=aux.size;
        size=aux1.size;
    }

    template<class E>
    void vector<E>:: erase(int a){
        assert (a<=size&&a>0);
        vector<E> aux(*this);
        delete [] data;
        data= new E[--size];
        memcpy(data,aux.data,sizeof(E) * a--);
        memcpy(data+a,aux.data+a+1,sizeof(E) *size-a);
    }

    template<class E>
    void vector<E>:: erase(int a, int b){
        assert (a <= size && a > 0 && b <= size && b > 0);
        vector<E> aux(*this);
        delete [] data;
        size-=(b-a) + 1;
        data= new E[size];
        memcpy(data,aux.data,sizeof(E) * a--);
        memcpy(data+a,aux.data+b,sizeof(E)*size-a);
    }

    template<class E>
    E& vector<E>:: operator[](unsigned i)
    {
        return data[i];
    }

    template<class E>
    const int vector<E>::si_ze() {
        return size;
    }


#endif // VECTOR_INL_INCLUDED
