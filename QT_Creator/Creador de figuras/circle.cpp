#include "circle.h"


void circle::draw(QPainter * painter){
    painter->drawEllipse(x,y,w,w);
}
