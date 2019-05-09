#include <iostream>
#include "header.h"
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{  
    Matrix<int> uno(3,3);
    Matrix<int> dos(3,3);
    Matrix<int> cuatro(3,3);
    uno.fill_in();
    uno<<1<<1<<1<<1<<1<<1<<1<<1<<1<<1<<1;
    dos<<1<<1<<1<<1<<1<<1<<1<<1<<1<<1<<1;
    uno(1,1)=12;
    uno(0,2)=13;
    Matrix<int> tres(uno);
    cuatro=dos;
    cout<<"1.-esta es la uno"<<endl;
    cout<<uno<<endl;
    cout<<"2.-esta es la dos"<<endl;
    cout<<dos<<endl;
    cout<<"3.-esta es la tres"<<endl;
    cout<<tres<<endl;
    cout<<"4.-esta es la cuatro"<<endl;
    cout<<cuatro<<endl;
    cout<<"5.-esta es la multiplicacion de la uno y dos"<<endl;
    cout<<uno*dos<<endl;
    cout<<"6.-esta es la suma de la dos y uno"<<endl;
    cout<<uno-dos<<endl;
    cout<<"7.-multiplicacion o division de la cuatro por una constante"<<endl;
    cout<< cuatro/2<<endl;
    return 0;
}
