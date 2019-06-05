#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double one;
    double two;
    const double PI=4*atan(1.0);
    double three=sin(108.0*PI/180.0);
    double four=sin(63.0*PI/180.0);
    while(cin>>two){
        one=(two*three)/four;
        printf("%.10lf", one);
        cout<<endl;

    }
    return 0;
}
