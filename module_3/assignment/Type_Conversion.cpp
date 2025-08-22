//Type Conversion 
//	o Write a C++ program that performs both implicit and explicit type conversions and prints the results. 
//	o Objective: Practice type casting in C++.

#include <iostream>
using namespace std;

int main() 
{
   
    int numInt = 10;        
    double numDouble;       
    numDouble = numInt;     
    cout << "Implicit Conversion:" << endl;
    cout << "Integer value (numInt) = " << numInt << endl;
    cout << "Converted to Double (numDouble) = " << numDouble << endl;

// Explicit

    float pi = 3.14;
    int Intnum;
    Intnum = (int)pi;   
    cout << "\nExplicit Conversion:" << endl;
    cout << "Float value (pi) = " << pi << endl;
    cout << "Converted to Integer (Intnum) = " << Intnum << endl;

    return 0;
}

