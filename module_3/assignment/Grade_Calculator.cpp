//Grade Calculator 
//	o Write a C++ program that takes a student’s marks as input and calculates the grade based on if-else conditions. 
//	o Objective: Practice conditional statements (if-else).

#include <iostream>
using namespace std;

int main() 
{
    int marks;
    cout << "Enter Marks: ";
    cin >> marks;

    if (marks >= 99 && marks <= 100) 
	{
        cout << "Grade: A+" << endl;
    } 
    else if (marks >= 80) 
	{
        cout << "Grade: A" << endl;    
    } 
    else if (marks >= 70) 
	{
        cout << "Grade: B" << endl;
    } 
    else if (marks >= 60) 
	{
        cout << "Grade: C" << endl;
    } 
    else if (marks >= 50) 
	{
        cout << "Grade: D" << endl;
    } 
    else if(marks >= 30)
    {
    	cout << "Grade: E" << endl;
	}
    else 
	{
        cout << "Fail" << endl;
    }

    return 0;
}

