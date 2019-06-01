#ifndef CIRCLE_H
#define CIRCLE_H

#include<iostream>
#include<QMainWindow>
#include<figure.h>
#include<QColor>
#include<QPainter>
#include<QPixmap>
#include<QPen>

using namespace std;

class circle:public figure{

    private:
        int x,y,w;
    public:
        circle(int _x=0,int _y=0, int _w=0){
            x=_x;
            y=_y;
            w=_w;
        }
        ~circle(){}
       void draw(QPainter * painter);
};

#endif // CIRCLE_H
