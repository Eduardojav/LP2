//trabajo de Daniel Mendiguri y Eduardo Carnero
#include "strings.h"
#include "testingstr.h"
#include<iostream>
my_string::my_string(){
        A=new char[0];}
my_string::my_string (const char * text){
	size(text);
	A = new char[tam];
	for(int i=0;i<tam;i++)
		A[i] = text[i];}
my_string::~my_string(){
	delete[] A;}
my_string::tamano(const char * text){
    	int i = 0;
    	siz = 0;
	while(text[i] != '\0'){
            i++;
            siz++;}
	siz++;
	return siz;
}
my_string::my_string(const my_string & text){
	int b = text.siz;
	delete[] A;
	A = new char[b];
	siz = b;
	for(int i = 0;i < b; i++)
		A[i] = text.A[i];}
my_string& my_string::operator = (const my_string & text){
	int b = text.siz;
	delete[] A;
	A = new char[b];
	size = b;
	for(int i=0;i<b;i++)
		A[i]=text.A[i];
     return *this;
}
my_string & my_string::operator = (const char* text){
	int b = tamano(text);
	delete[] A;
	A = new char[b];
	siz = b;
	for(int i = 0; i < b ;i++)
		A[i] = text[i];
    return *this;
}
my_string my_string :: operator + (const my_string text){
	int b = text.siz;
	int i = 0;
	int c = 0;
	my_string aux;
	aux.A = new char[b+siz];
	aux.siz = siz+b;
	for( i = 0 ; i < siz ; i++) aux[i] = A[i];
    for( i=siz-1;i<siz+b;i++) aux[i]=text.A[c++];
    return aux;
}
my_string my_string :: operator +(const  char* text){
    	int i=0;
    	int b=0;
	while(text[i] != '\0'){
            i++;
            b++;}
	int c=0;
	my_string aux;
	aux.A=new char[b+siz];
	aux.siz = siz + b;
	for( i=0;i<siz;i++)aux[i]=A[i];
    for( i = siz - 1 ; i < siz + b ; i++) aux[i] = text[c++];
    return aux;
}
char &my_string:: operator[]( int i){
    if(i >= 0 && i < tam)
        return A[i];
    else{
        cout << "Posición incorrecta: " << i << endl;
    }}
bool my_string:: operator == (const my_string & text){
    if(siz != text.siz) return false;
    for(int i = 0; i < siz ; i++)
        if(A[i] != text.A[i])  return false;
    return true;}
bool my_string:: operator < (const my_string & text){
    int t;
    if(text.siz>siz){
        t = siz;
    }
    else{
        t = text.siz;
    }
    for(int i  = 0; i < t ; i++){
        if(A[i] < text.A[i]){
            return true;
        }
        else if(A[i] > text.A[i]){
            return false;
        }
    }
    if(text.siz > siz){
        return true;
    }
    else{
        return false;
    }
}
bool my_string:: operator > (const my_string & text){
    int t;
    if(text.siz > siz){
        t = siz;
    }
    else{
        t = text.siz;
    }
    for(int i = 0; i < t ;i++){
        if(A[i] > text.A[i]){
            return true;
        }
        else if(A[i] < text.A[i])
            return false;
    }
    if(text.siz < siz)
        return true;
	    
    else
        return false;
}
bool my_string:: operator <= (const my_string & text){
    int t;
    if(text.siz>siz){
        t = siz;
    }
    else{
        t = text.siz;
    }
    for(int i = 0; i < t ; i++){
        if(A[i] < text.A[i])
            return true;
		
        else if(A[i]>text.A[i])
            return false;
        
    }
    if(text.siz>siz)
	    
        return true;
    
    else if(text.siz < siz)
	    
        return false;
    
    else
        
	return true;
  
}
bool my_string:: operator >= (const my_string & text){
    int t;
    if(text.siz > siz)
	t = siz;
    else
	t = text.siz;
    for(int i = 0; i < t ;i++){
	if(A[i] > text.A[i])
	    return true;
	else if(A[i] < text.A[i])
	    return false;}
    if(text.siz < siz)
	return true;
    else if(text.siz > siz)
	return false;
    else
	return true;
}
my_string& my_string::operator += (const my_string & text){
	int b = text.siz;
	int i = 0;
	int c = 0;
	char * e = new char[b+tam];
	for( i = 0;i < siz; i++)e[i] = A[i];
	for( i = siz - 1;i < siz + b ;i++)e[i] = text.A[c++];
	delete[]A;
	A = new char[b+siz];
	for( i = 0; i < siz + b; i++) A[i] = e[i];
	delete[]e;
}
my_string & my_string:: operator += (const  char* text){
	int i = 0;
	int b = 0;
	while(text[i] != '\0'){
	    i++;
	    b++;}
	int c = 0;
	char * e = new char[b + siz];
	for( i = 0;i < siz; i++) e[i] = A[i];
	for( i = siz-1 ; i < siz + b ; i++) e[i] = text[c++];
	delete[]A;
	A=new char[b + siz];
	for( i=0; i < siz + b; i++)A[i] = e[i];
	delete[]e;
}
int main(){
prueba();
return 0;
}
