#ifndef FIGURE_H
#define FIGURE_H


class figure
{
public:
    figure();
};
class circle:public figure{
private:
    int radio;
    int x;
    int y;
public:
    circle();
};
class square:public figure{
private:
    int side;
    int x;
    int y;
public:
    square();
};
class triangle:public figure{
private:
    int x1,y1;
    int x2,y2;
    int x3, y3;
public:
    triangle();
};

#endif // FIGUREH_H
