#include <iostream>
#include "declaration.h"


using namespace std;

int main()
{
    Matrix<int> uno(3,3);
    Matrix<int> dos(3,3);
    uno<<1<<2<<3<<4<<5<<6<<7<<8<<9<<10;
    dos.data[0][0]=10;
    dos.data[0][1]=11;
    dos.data[0][2]=12;
    dos.data[1][0]=13;
    dos.data[1][1]=14;
    dos.data[1][2]=15;
    dos.data[2][0]=16;
    dos.data[2][1]=17;
    dos.data[2][2]=18;
    cout<<uno<<endl;
    cout<<uno*dos<<endl;
    cout<<uno+dos<<endl;
    return 0;
}
