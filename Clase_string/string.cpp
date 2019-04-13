#include "my_string.h"
#include<iostream>
my_string::my_string(){
            A=new char[0];}
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
    return *this;
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
	for( i=0;i<tam;i++)aux[i]=A[i];
	A=new char[b-1];
	for( i=0;i<tam;i++)A[i]=aux[i];
    for( i=tam-1;i<tam+b-1;i++) A[i]=text[c++];
    tam=tam+b-1;
    delete[] aux;
    return *this;
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
int main(){
	my_string prim("h");
	cout<<prim.tam<<endl;
	my_string prim2("hsd");
	my_string prim3("bye");
	cout<<prim2<<endl;
	prim3=prim+"hey"+"bye";
	if(prim==prim2)cout<<"verdadero"<<endl;
	cout<<prim2[1];}
