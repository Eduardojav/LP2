#include "triangle.h"


void triangle::draw(QPainter * painter){
    painter->drawLine(a,b,c,d);
    painter->drawLine(c,d,e,f);
    painter->drawLine(e,f,a,b);
}
