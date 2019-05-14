#include<iostream>
using namespace std;
int a[1000000];
int b[1000000];
void fill_in(int a[1000000]){
	for(int i=0;i<1000000;i++)
		a[i]=0;
}
void primos(int a[],int b[],size_t n=10000){
	b[0]=b[1]=1;
	size_t q=0;
	for(size_t i=3;i<n;i+=2){
		if(!b[i]){
			a[q++]=i;
			for(size_t j=i*i;j<n;j+=2*i){
				b[j]=1;
				}
		}
}}
void search_summ(int b,int a[]){
	int i=0;
	int dif=0;
	int j=0;
	while(a[i++]<b&&a[i]!=0);
	i--;
	while(j<=i+1){
		if(b==a[i]+a[j]){
            cout<< b <<" = "<< a[j] <<  " + " << a[i]<<endl;
			return;
		}
		else if (b>a[i]+a[j])
			j++;
		else
		 i--;
	}
	cout<<"Goldbach's conjecture is wrong."<<endl;
	}

int main(){
	int val1,val2,numero;
	fill_in(b);
	primos(a,b,1000000);
	while(cin>>numero&& numero>=6 && numero<=1000000){
	search_summ(numero,a);
	}
	return 0;
}
