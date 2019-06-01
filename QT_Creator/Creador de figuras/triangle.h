#ifndef TRIANGLE_H
#define TRIANGLE_H
#include<iostream>
#include<QMainWindow>
#include<figure.h>
#include<QColor>
#include<QPainter>
#include<QPixmap>
#include<QPen>

using namespace std;

class triangle:public figure{

    private:
        int a,b,c,d,e,f;
    public:
        triangle(int _a, int _b, int _c, int _d, int _e, int _f){
            a=_a;
            b=_b;
            c=_c;
            d=_d;
            e=_e;
            f=_f;
        }
        ~triangle(){}
       void draw(QPainter * painter);
};
#endif // TRIANGLE_H
