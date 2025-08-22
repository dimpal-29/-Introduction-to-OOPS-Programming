//POP vs. OOP Comparison Program 
//using oop

#include <iostream>
using namespace std;

class Rectangle 
{
	public:
    	int length, width;   

    int getarea() 
	{
        return length * width;
    }
};

int main() 
{
    Rectangle r;   

    cout << "Enter length: ";
    cin >> r.length;

    cout << "Enter width: ";
    cin >> r.width;

    cout << "Area of Rectangle = " << r.getarea() << endl;

    return 0;
}

