//Class for a Simple Calculator 
//	o Write a C++ program that defines a class Calculator with functions for addition, subtraction, multiplication, and division. 
//		Create objects to use these functions. 
//	o Objective: Introduce basic class structure.

#include <iostream>
using namespace std;

class Calculator 
{
	public:
	    
	    int add(int a, int b) 
		{
	        return a + b;
	    }
	
	    
	    int subtract(int a, int b) 
		{
	        return a - b;
	    }
	
	    int multiply(int a, int b) 
		{
	        return a * b;
	    }

	    int divide(int a, int b) 
		{
	        if (b != 0)
	            return a / b;
	        else 
			{
	            cout << "Error! Division by zero." << endl;
	            return 0;
	        }
	    }
};

int main() 
{
    Calculator c1;   
    int num1, num2;

    cout << "Enter first numbers: ";
    cin >> num1 ;
    
    cout << "Enter second numbers: ";
    cin >> num2 ;

    cout << "Addition: " << c1.add(num1, num2) << endl;
    cout << "Subtraction: " << c1.subtract(num1, num2) << endl;
    cout << "Multiplication: " << c1.multiply(num1, num2) << endl;
    cout << "Division: " << c1.divide(num1, num2) << endl;

    return 0;
}

