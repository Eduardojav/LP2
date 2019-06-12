#ifndef SELECTION_H_INCLUDED
#define SELECTION_H_INCLUDED
template<class T>
class Sort{
	public:
		virtual void sortq(T *&A =NULL,int a=0) =0;
		virtual ~Sort(){}
};
#endif // SELECTION_H_INCLUDED
