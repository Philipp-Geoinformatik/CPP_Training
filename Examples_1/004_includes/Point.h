#ifndef POINT_H
#define POINT_H
class Point 
    {
    public:
        double x,y;
    
    //constructor
    public: Point(): x(0),y(0){}
        //contructor
        Point(double u, double v): x(u),y(v){};
    
    
double distanceTo(Point p)const;
};
#endif