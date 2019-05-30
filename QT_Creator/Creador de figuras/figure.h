#ifndef FIGURE_H
#define FIGURE_H
#include "ui_mainwindow.h"


class figure
{
public:
    figure();
    void draw(QPainter  * &painters);
};
class circle:public figure{
private:
    int radio;
    int x;
    int y;
public:
    circle(int x, int y, int radio);
    void draw(QPainter  * &painters);
};
class square:public figure{
private:
    int side;
    int x;
    int y;
public:
   square(int x, int y,  int size);
   void draw(QPainter * &painters);
};
class triangle:public figure{
private:
    int x1,y1;
    int x2,y2;
    int x3, y3;
public:
   triangle(int x1, int y1, int x2, int y2, int x3, int y3);
    void draw(QPainter * &painters);
};

#endif // FIGUREH_H
