
#include<iostream>
#include "declaration.h"
using namespace std;
int main()
{
    Matrix<int> uno(3,3);
    Matrix<int> dos(3,3);
    uno<<1<<2<<3<<4<<5<<6<<7<<8<<9<<10<<12<<14;
    dos<<2<<11<<12<<13<<14<<15<<16<<17<<18;
    cout<<uno<<endl;
    cout<<dos<<endl;
    cout<<dos*uno<<endl;
    cout<<uno (1,1)<<endl;
    cout<<uno+dos<<endl;
    return 0;
}
