#include <stdlib.h>
#include<algorithm>
#include<ctime>
#include<cstdlib>
#include<cstring>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;
int a[10000];
void merg(int *A,int i,int m,int j){

    int b=i,d=m+1,c=0;
    while(b<=m &&d<=j){
        if(A[b]<=A[d])
            a[c++]=A[b++];
        else a[c++]=A[d++];
    }
    while(b<=m)a[c++]=A[b++];
    while(d<=j)a[c++]=A[d++];
    memcpy(A+i,a,sizeof(int)*(j-i+1));}
void merg(int *A,int i,int j){
    if(i==j)return;
    int m=(i+j)/2;
    merg(A,i,m);
    merg(A,m+1,j);
    merg(A,i,m,j);}
void merg(int *A, int n){
    merg(A,0,n-1);}
int main(){
	int L,D,tam,k,libros[10000];bool print;
	while(cin>>L){
        print=true;
        tam=L;
        for(int i=0;i<tam;i++){
                cin>>L;
            libros[i]=L;
        }
    merg(libros,tam);
    int mn=libros[0], mx=libros[tam-1];
        cin>>D;
        for(int i=0;i<tam;i++){
            k=i+1;
        while((libros[i]+libros[k])<=D&&k<tam){
        if(mx-mn>libros[k]-libros[i]&&libros[k]+libros[i]==D){
            mx=libros[k];mn=libros[i];}
        k++;
		}
		k=i+1;
		if(libros[i]+libros[k]>D && mx+mn==D){
            break;
            cout<<"Peter should buy books whose prices are "<< mn <<" and " << mx<<endl;

            print=false;
		}
		}
        if(print){
            cout<<"Peter should buy books whose prices are "<< mn <<" and " << mx<< "."<<endl;
            cout<<endl;
        }
        }}
