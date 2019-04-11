#include<iostream>
using namespace std;
class my_string{
	private:
		char *A;
		int tamano(const char * text=NULL);
		int tamo(char * text=NULL);
		int tam=0;
	public:
		my_string(const char * text=NULL);
		my_string(const my_string & text);
		~my_string();
		my_string & operator = (const my_string & text);
		my_string & operator = (const char* & text);
		my_string & operator + (const my_string & text);
		bool operator == (const my_string & text);
		friend std::ostream & operator << (ostream & os ,const my_string &texto);
		friend std::istream & operator >> (istream & is ,const my_string &texto);
};
