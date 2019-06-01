#ifndef SQUARE_H
#define SQUARE_H

#include<iostream>
#include<QMainWindow>
#include<figure.h>
#include<QColor>
#include<QPainter>
#include<QPixmap>
#include<QPen>

using namespace std;

class square:public figure{
    private:
        int x,y,h,w;
    public:
        square(int _x=0,int _y=0, int _h=0){
            x=_x;
            y=_y;
            h=_h;
        }
        ~square(){}
        void draw(QPainter * painter);
};

#endif // SQUARE_H
