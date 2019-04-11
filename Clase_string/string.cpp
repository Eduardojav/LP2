#include "my_string.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
my_string::my_string (const char * text){
	tamano(text);
	A = new char[tam];
	for(int i=0;i<tam;i++)
		A[i]=text[i];}
my_string::~my_string(){
	delete[] A;}
my_string::tamano(const char * text){
	while(text != '\0')tam++;
	tam+=1;
	return tam;
}
my_string::my_string(const my_string & text){
	int b=text.tam;
	delete[] A;
	A=new char[b];
	for(int i=0;i<b;i++)
		A[i]=text.A[i];}
my_string& my_string::operator = (const my_string & text){
	int b=text.tam;
	delete[] A;
	A=new char[b];
	for(int i=0;i<b;i++)
		A[i]=text.A[i];
}
my_string& my_string::operator + (const my_string & text){
	int b=text.tam;
	int c=0;
	A=new char[b];
	for(int i=0;i<b;i++)
		
		A[tam-1+i]=text.A[i];
}

int main(int argc, char** argv) {
	return 0;
}
