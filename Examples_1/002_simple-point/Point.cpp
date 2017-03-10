//#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cassert>

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
        
        return sqrt(dx*dx-dy*dy);
    }
};


int main(){
    cout.setf(ios::fixed);
    cout.precision(5);
        
    Point p1{3.023423 , -7.0234234},p2{-7.2340,-7.0234}; //initialization
    //Point p2(12.0 , 50.0); //initialization
    cout << "hallo welt" << endl;
    
    //assert(p1 == p2);
    
    double d1 = p1.distanceTo(p2); //calculation of distance between points
    cout << "Point 1 is : (" << p1.x << ", " << p1.y << " ) " << endl;
    cout << "Point 1 is : (" << p2.x << ", " << p2.y << " ) " << endl;
    cout << "Distance is : (" << d1 << " ) " << endl;
        
    cout << "ENTER druecken zum beenden" << endl;
    
    
    
    cin.ignore(100, '\n');// zum beenden des programms ueber die Eingabetaste
    string s;
    
    getline(cin, s);
    
    return 0;
            
}