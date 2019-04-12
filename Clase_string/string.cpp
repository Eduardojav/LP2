#include "my_string.h"
#include<iostream>
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
}
my_string& my_string::operator = (const char* text){
	int b=tamano(text);
	delete[] A;
	A=new char[b];
	tam=b;
	for(int i=0;i<b;i++)
		A[i]=text[i];
}
my_string& my_string::operator + (const my_string & text){
	int b=text.tam;
	int c=0;
	char *aux=new char[tam];
	for(int i=0;i<tam;i++)aux[i]=A[i];
	A=new char[b-1];
	for(int i=0;i<tam;i++) A[i]=aux[i];
    for(int i=tam-1;i<tam+b-1;i++) A[i]=text.A[c++];
    tam=tam+b-1;
    delete[] aux;
}
my_string& my_string:: operator +(const  char* text){
    int i=0;
    int b=0;
	while(text[i] != '\0'){
            i++;
            b++;}
	b++;
	int c=0;
	char *aux=new char[tam];
	for(i=0;i<tam;i++)aux[i]=A[i];
	A=new char[b-1];
	for(i=0;i<tam;i++) A[i]=aux[i];
    for(i=tam-1;i<tam+b-1;i++) A[i]=text[c++];
    tam=tam+b-1;
    delete[] aux;
}
bool my_string:: operator == (const my_string & text){
    if(tam!=text.tam) return false;
    for(int i=0;i<tam;i++)
        if(A[i]!=text.A[i])  return false;
    return true;}
ostream & my_string::  operator << (ostream & os ,const my_string &texto){

}
int main() {
	my_string prim("h");
	my_string prim2("hola");
	my_string prim3("bye");
	if(prim==prim2)cout<<"verdadero"<<endl;
	prim3+prim;
	prim2+"adios";
	prim2+"no";

	prim.print();
	prim2.print();
	prim3.print();
}

