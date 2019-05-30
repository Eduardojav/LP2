#include <iostream>
#include <QMainWindow>
#include <QColor>
#include <QPainter>
#include <QPixmap>
#include <QPen>
#include "figure.h"
#include "mainwindow.cpp"
circle::circle()
{
  radio = rand() % 100 + 1;
  x=rand()%pixmap->width();
  y=rand()%pixmap->height();
  painter->drawEllipse({x, y}, radio, radio);
}
square::square()
{
 side=rand() % 100 + 1;
 x=rand()%pixmap->width();
 y=rand()%pixmap->height();
 painter->drawRect(x, y,side,side);
}
Triangle::triangle()
{
  int x1=rand()%pixmap->width();y1=rand()%pixmap->height();
  int x2=rand()%pixmap->width();y2=rand()%pixmap->height();
  int x3=rand()%pixmap->width();y3=rand()%pixmap->height();
  painter->drawLine(b, c, p, e);
  painter->drawLine(p, e, f, g);
  painter->drawLine(f, g, b, c);
}
