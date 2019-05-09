#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED
template<class E>
class vector{
    private:

        E * data;

        int size;

    public:

        vector();

        vector(int a);

        vector(const vector<E>& ex);

        ~vector();

        void push_back(const E a);

	void pop_back();

	void swap(vector<E> & ex);

	void erase(int a);

	void erase(int a, int b);

	const int si_ze();

	E& operator[](unsigned i);

};
#include "vector.inl"
#endif // VECTOR_H_INCLUDED
