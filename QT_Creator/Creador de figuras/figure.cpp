#include <iostream>
#include <QMainWindow>
#include <QColor>
#include <QPainter>
#include <QPixmap>
#include <QPen>
#include "figure.h"
#include "mainwindow.cpp"
#include "mainwindow.ui"
circle::circle(int a, int b, int c)
{
  radio = c;
  x=a;
  y=b;
}
void circle::draw(QPainter * &painters){
    painters->drawEllipse({x, y}, radio, radio);
}
square::square(int a, int b, int c){
    x=a; y=b;side=c;
    }
void square::draw(QPainter * &painters){

     painters->drawRect(x, y,side,side);
}
triangle::triangle(int a, int b, int c, int d, int e, int f){
    x1=a;y1=b;
    x2=c;y2=d;
    x3=e;y3=f;
}
void triangle::draw(QPainter * &painters){
    painters->drawLine(x1,y1,x2,y2);
    painters->drawLine(x2,y2,x3,y3);
    painters->drawLine(x3,y3,x1,x2);
}
