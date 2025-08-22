//Operator Demonstration
//o Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise operators. 
//	Perform operations using each type of operator and display the results. 
//o Objective: Reinforce understanding of different types of operators in C++.


#include <iostream>
using namespace std;

int main() 
{
    int a, b;

    cout << "Enter number1: ";
    cin >> a;

    cout << "Enter number2: ";
    cin >> b;

    
    cout << "--------------------- Arithmetic --------------------\n";
    cout << "Addition is : " << a + b << endl;
    cout << "Subtraction is : " << a - b << endl;
    cout << "Multiplication is : " << a * b << endl;
    cout << "Division is : " << a / b << endl;
    cout << "Modulo is : " << a % b << endl;

    
    cout << "--------------------- Relational ---------------------";
    cout << "Greater than: " << (a > b) << endl;
    cout << "Less than: " << (a < b) << endl;
    cout << "Greater or equal: " << (a >= b) << endl;
    cout << "Less or equal: " << (a <= b) << endl;
    cout << "Equal: " << (a == b) << endl;
    cout << "Not equal: " << (a != b) << endl;


    cout << "--------------------- Logical ------------------------";
    cout << "AND Ans is : " << (a > b && b < a) << endl;
    cout << "OR Ans is : " << (a > b || b < a) << endl;
    cout << "NOT Ans is : " << !(a < b || b < a) << endl;

   
    cout << "--------------------- Bitwise ------------------------";
    cout <<"AND Ans is : " << (a & b) << endl;
    cout << "OR Ans is : " << (a | b) << endl;
    cout << "XOR Ans is : " << (a ^ b) << endl;
    cout << "NOT Ans is    : " << (~a) << endl;
    cout << "Left Shift Ans is  : " << (a << 1) << endl;
    cout << "Right Shift Ans is : " << (a >> 1) << endl;

    return 0;
}

