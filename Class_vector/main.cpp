#include<iostream>
#include "vector.h"
using namespace std;

int main(){
    cout<<"hola"<<endl;
    vector<int> a;
    a.push_back(23);
    a.push_back(23);
    a.push_back(1);
    a.push_back(14);
    a.push_back(152);
    a.push_back(123);
    a.push_back(15);
    a.push_back(65);
    a.push_back(52);
    vector<int> b(a);
    cout<<b.si_ze()<<endl;
    b.pop_back();
    for(int i=0;i<b.si_ze();i++)
      cout<<b[i]<<",";
    cout<<endl;
      a.swap(b);
    cout<<endl;
    cin>>a[0];
    cout<<a[0]<<endl;
    for(int i=0;i<b.si_ze();i++)
      cout<<b[i]<<",";
    cout<<endl;
    for(int i=0;i<a.si_ze();i++)
      cout<<a[i]<<",";
    cout<<endl;
    cout<<a.si_ze()<<endl;
    a.erase(4,5);
    for(int i=0;i<a.si_ze();i++)
      cout<<a[i]<<",";
    cout<<endl;
    cout<<a.si_ze()<<endl;

    return 0;
}
