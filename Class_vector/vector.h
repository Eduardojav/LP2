#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED
template<class E>
class vector{
    private:

        E * data;

        int size;

    public:

        vector();// defecto

        vector(int a);// con un tamaño establecido

        vector(const vector<E>& ex);// copia

        ~vector();// destructor

        void push_back(const E a);// agrega un valor al final

	void pop_back();	// elimina el ultimo

	void swap(vector<E> & ex);// intercambia datos de 2 vectores

	void erase(int a);// borra el a-esimo elemento

	void erase(int a, int b);// borra en un rango 

	const int si_ze();	// muestra el tamaño

	E& operator[](unsigned i);// retorna el valor en la posicion [i]

};
#include "vector.inl"
#endif // VECTOR_H_INCLUDED
