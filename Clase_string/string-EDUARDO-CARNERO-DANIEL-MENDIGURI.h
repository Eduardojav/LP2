#include<iostream>
using namespace std;
class my_string{
	private:
		char *A;
		int tamano(const char * text=NULL);
		int tamo(char * text=NULL);
	public:
	    int tam;
	    void print(){
	    for(int i=0;i<tam;i++)
		cout<<A[i];
		cout<<endl;}
		my_string();
		my_string(const char * text=NULL);
		my_string(const my_string & text);
		~my_string();
		my_string & operator = (const my_string & text);
		my_string & operator = (const char* text);
		my_string & operator + (const my_string & text);
		my_string & operator + (const char* text);
		my_string &operator[](const my_string & text);
		bool  operator == (const my_string & text);
		char & operator[](int  i);
		friend std::istream &operator >>(std::istream & is, my_string &str){
        char* c = new char[1000];
        is >> c;
        str = my_string(c);
        delete[] c;
        return is;
        }
        friend std::ostream &operator <<(std::ostream & os,const my_string &str){
        int b=str.tam;
        for(int i=0;i<b;i++)
            os<<str.A[i];
        return os;
    }
};
