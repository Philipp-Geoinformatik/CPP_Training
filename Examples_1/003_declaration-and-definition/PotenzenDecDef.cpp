//#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cassert>

using namespace std;

//if this declartion is missing, the compiler doesn't know about this function, when it's calles in the main function.
void Potenzen(double x, int n); // return value and input parameters define the signature of a function!
//SOLUTION declaration --> now, the compiler knows about this method.


int main(){
    //Formatting
    cout.setf(ios::fixed);
    cout.precision(5);
    //
    double x;
    int n ;
    cout << "please type the base" << endl;
    cin >> x;
    cout << "please type the exponent" << endl;
    cin >> n;
    //
    Potenzen(x, n);

    //============END OF PROGRAMM====================        
    cout << "ENTER druecken zum beenden" << endl;
    cin.ignore(100, '\n');// zum beenden des programms ueber die Eingabetaste
    string s;
    getline(cin, s);
    return 0;
}


void Potenzen (double x, int n)
{
    double erg = 1;
    for(int i = 0; i < n; i++)
    {
        erg*= x;
        cout << "Potenz (" << erg <<")"<< endl;
    }
}