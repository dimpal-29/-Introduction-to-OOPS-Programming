//Factorial Calculation Using Recursion 
//	o Write a C++ program that calculates the factorial of a number using recursion. 
//	o Objective: Understand recursion in functions.

#include<iostream>
using namespace std;
int fact(int num);
int main()
{
	int num;
	
	cout<<"Enter the number to find factorial: ";
	cin >> num ;
	
	cout<<"Factorial Is :" << fact(num);
	
	return 0;
}
int fact(int num)
 {
	    if (num == 0)
	    {
	    	return 1;
		}
        
    return num * fact(num - 1);
}

