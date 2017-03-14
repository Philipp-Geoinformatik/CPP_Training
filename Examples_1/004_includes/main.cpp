//#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

#include "Point.h"

using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(5);
        
    Point p1{3.023423 , -7.0234234},p2{-7.2340,-70.0234}; //initialization
    //Point p2(12.0 , 50.0); //initialization
    double d1 = p1.distanceTo(p2); //calculation of distance between points
    cout << "Point 1 is : (" << p1.x << ", " << p1.y << " ) " << endl;
    cout << "Point 2 is : (" << p2.x << ", " << p2.y << " ) " << endl;
    cout << "Distance is : (" << d1 << " ) " << endl;
        
    cout << "ENTER druecken zum beenden" << endl;
    
    
    
    cin.ignore(100, '\n');// zum beenden des programms ueber die Eingabetaste
    string s;
    
    getline(cin, s);
    
    return 0;
            
}