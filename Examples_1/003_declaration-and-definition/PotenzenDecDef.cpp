//#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cassert>

using namespace std;



int main(){
    //Formatting
    cout.setf(ios::fixed);
    cout.precision(5);
    //
    
    
    
    
    
    //============END OF PROGRAMM====================        
    cout << "ENTER druecken zum beenden" << endl;
    cin.ignore(100, '\n');// zum beenden des programms ueber die Eingabetaste
    string s;
    getline(cin, s);
    return 0;
}