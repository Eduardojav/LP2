#include "my_string2.h"
#include<iostream>
my_string::my_string(){
            A=new char[1];
            tam=0;}
my_string::my_string (const char * text){
	tamano(text);
	A = new char[tam];
	for(int i=0;i<tam;i++){
		A[i]=text[i];}}
my_string::~my_string(){
	delete[] A;}
my_string::tamano(const char * text){
    int i=0;
    tam=0;
	while(text[i] != '\0'){
            i++;
            tam++;}
	tam++;
	return tam;
}
my_string::my_string(const my_string & text){
	int b=text.tam;
	delete[] A;
	A=new char[b];
	tam=b;
	for(int i=0;i<b;i++)
		A[i]=text.A[i];}
my_string& my_string::operator = (const my_string & text){
	int b=text.tam;
	delete[] A;
	A=new char[b];
	tam=b;
	for(int i=0;i<b;i++)
		A[i]=text.A[i];
     return *this;
}
my_string & my_string::operator = (const char* text){
	int b=tamano(text);
	delete[] A;
	A=new char[b];
	tam=b;
	for(int i=0;i<b;i++)
		A[i]=text[i];
    return *this;
}
my_string my_string::operator + (const my_string & text){
    my_string aux(*this);
	int b=text.tam;
	int i=0;
	int c=0;
	aux.A=new char[b];
	aux.tam=tam+b;
	for( i=0;i<tam;i++)aux[i]=A[i];
    for( i=tam-1;i<tam+b;i++) aux[i]=text.A[c++];
    return aux;
}
my_string my_string:: operator +(const  char* text){
    my_string aux;
    int i=0;
    int b=0;
	while(text[i] != '\0'){
            i++;
            b++;}
	int c=0;
	delete[] aux.A;
	aux.A=new char[b+tam];
	aux.tam=tam+b;
	for( i=0;i<tam;i++)aux[i]=A[i];
    for( i=tam-1;i<tam+b;i++) aux[i]=text[c++];
    return aux;
}
char &my_string:: operator[]( int i){
    if(i>=0&&i<tam)
        return A[i];
    else{
        cout << "Posición incorrecta: " << i << endl;
    }}
bool my_string:: operator == (const my_string & text){
    if(tam!=text.tam) return false;
    for(int i=0;i<tam;i++)
        if(A[i]!=text.A[i])  return false;
    return true;}

