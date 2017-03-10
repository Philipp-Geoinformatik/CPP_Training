//#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cassert>
//#include <stdlib.h> 

using namespace std;

class Point {
    
    public: double x,y;
    //constructor
    public: 
        Point()
            :    
            x(0),y(0)
        {
        }
        //contructor
        Point(double u, double v)
            :
            x(u),
            y(v)
        {
        }
    
    double distanceTo(Point p) const
    {
        double dx = p.x-x;
        double dy = p.y-y;
        
        return sqrt(dx*dx+dy*dy);
    }
    
     /*
    *
    */
    Point rotate(Point center) 
    {
        double phi = 0.3;    
        double x_new = x *  cos(phi) + y* sin(phi);
        double y_new = -x * sin(phi) + y* cos(phi);
       // cout << "Point is now: (" << x << ", " << y <<")"<<endl;
        return Point(x_new,y_new);
    }
    
};



class Triangle {
  
    public: Point A, B, C;
    
    /*
    *CONSTRUCTOR
    */
    public: Triangle(Point X, Point Y, Point Z)
        :
        A(X),B(Y),C(Z)
    {
    }    
    /*
    *
    */
    double getPerimeter() const
    {
        //distances
        double c = A.distanceTo(B);
        double b = A.distanceTo(C);
        double a = B.distanceTo(C);
        //
        return a+b+c;
    }
    
    /*
    *
    */
    double getArea()const
    {
        
        double area = 0.5 *(B.x-A.x)*(C.y-A.y)-(C.x-A.x)*(B.y-A.y);
       return abs(area);        
    }
    
    /*
    *
    */
    Point getCentroid() const
    {
        double x = (A.x + B.x + C.x)/3;
        double y = (A.y + B.y + C.y)/3;
        
    return  Point (x,y);    
    }
    
    /*
    *
    */
    Triangle rotateAroundCentroid(){
        Point cent = getCentroid();
        Point A_new = A.rotate(cent);
        Point B_new = B.rotate(cent);
        Point C_new = C.rotate(cent);
        return Triangle(A_new, B_new, C_new);
    }
};




int main(){
    cout.setf(ios::fixed);
    cout.precision(5);
        
    Point A{1.6161 , 7.684616},B{7.86161,7.681635},C{23.68431, 1.0234}; //initialization
    //Point p2(12.0 , 50.0); //initialization
    //cout << "Point A is : (" << A.x << ", " << A.y << ")" << endl;
    //cout << "Point B is : (" << B.x << ", " << B.y << ")" << endl;
    //cout << "Point C is : (" << C.x << ", " << C.y << ")" << endl;
    cout << "=============================" << endl;
    
    
    
    
    // initialize a triangle
    Triangle t(A,B,C);
    double u = t.getPerimeter();
    double area = t.getArea();
    Point c = t.getCentroid();
    Triangle t2 = t.rotateAroundCentroid();
    cout << "Periemter is: (" << u << ") " << endl;
    cout << "Area is: (" << area << ") " << endl;
    cout << "Centroid is: (" << c.x <<","<< c.y << ") " << endl;
    cout << "Old Triangle is: (" << t.A.x <<"|"<< t.A.y <<"), (" << t.B.x <<"|"<< t.B.y <<"), (" << t.C.x <<"|"<< t.C.y <<")" << endl; 
    cout << "New Triangle is: (" << t2.A.x <<"|"<< t2.A.y <<"), (" << t2.B.x <<"|"<< t2.B.y <<"), (" << t2.C.x <<"|"<< t2.C.y <<")" << endl;
    
    
    
    //============END OF PROGRAMM====================        
    cout << "ENTER druecken zum beenden" << endl;
    cin.ignore(100, '\n');// zum beenden des programms ueber die Eingabetaste
    string s;
    getline(cin, s);
    return 0;
}