#include<iostream>
using namespace std;
int z =0;
int c=0;
void inversion (int *A,int i,int m, int j,int& z){
    int d = m + 1 , b = i;
        while(b <= m){
            if(A[b] > A[d++])z++;
            if(d > j){b++;
                d = m + 1;
                     }
        }
}
void inversion (int *A,int i, int j,int& z ){
    if(i == j)return;
    int m = ( i + j ) / 2;
    inversion(A,i,m,z);
    inversion(A,m+1,j,z);
    inversion(A,i,m,j,z);}
void inversion(int *A,int & z,int j,int i=0){
    for( i; i < j ; i++)
        for(int k =i+1 ; k < j ; k++)
            if(A[i] > A[k])
                z++;
int main(){
    int As[] = {8,2,7,5,4,1};
    inversion(As,c,6);
    inversion(As,0,6,z);
    cout<<c<<" este es c"<<endl;
    cout<<z <<" este es z"<<endl;
    return 0;}
