// Simple Calculator Using Functions
//	o Write a C++ program that defines functions for basic arithmetic operations (add, subtract, multiply, divide).
//		The main function should call these based on user input.
// 	o Objective: Practice defining and using functions in C++.

#include <iostream>
using namespace std;

int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
float divide(int num1, int num2);

int main() 
{
    int  num1, num2 ,choice;
    
    cout << "------- Simple Calculator Using Functions -------" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    switch (choice) 
	{
        case 1:
            cout << "Result = " << add(num1, num2) << endl;
            break;
        case 2:
            cout << "Result = " << subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "Result = " << multiply(num1, num2) << endl;
            break;
        case 4:
            if (num2 != 0)
                cout << "Result = " << divide(num1, num2) << endl;
            else
                cout << "Error! Division by zero." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}

int add(int num1, int num2) 
{
    return num1 + num2;
}
int subtract(int num1, int num2) 
{
    return num1 - num2;
}
int multiply(int num1, int num2) 
{
    return num1 * num2;
}
float divide(int num1, int num2) 
{
    return (float)num1 / num2;  
}

