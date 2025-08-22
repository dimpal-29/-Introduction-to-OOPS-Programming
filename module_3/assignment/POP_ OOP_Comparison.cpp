// POP vs. OOP Comparison Program 
//	o Write two small programs: one using Procedural Programming (POP) to calculate the area of a rectangle,
//	 and another using Object-Oriented Programming (OOP) with a class and object for the same task. 
//	o Objective: Highlight the difference between POP and OOP approaches.

//pop

#include <iostream>
using namespace std;
int main() 
{
    int length, width, area;
    
    cout << "Enter length: ";
    cin >> length;
    
    cout << "Enter width: ";
    cin >> width;
    
    area = length * width;
    cout << "Area of Rectangle = " << area << endl;
    return 0;
}

