#include "Point.h"
#include <cmath>

double Point::distanceTo(Point p)const{
    double dx = p.x-x;
	double dy = p.y-y;
    return sqrt(dx*dx+dy*dy);
}