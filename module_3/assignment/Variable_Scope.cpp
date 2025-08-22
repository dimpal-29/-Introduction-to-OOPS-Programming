//Variable Scope 
//	o Write a program that demonstrates the difference between local and global variables in C++. Use functions to show scope. 
//	o Objective: Reinforce the concept of variable scope

#include <iostream>
using namespace std;
int globalVar = 100;

void showScope() 
{
	
    int localVar = 50; 
    
    cout << "Inside showScope():" << endl;
    cout << "Local Variable = " << localVar << endl;
    cout << "Global Variable = " << globalVar << endl;
}

int main() 
{
    int localVar = 10;  

    cout << "Inside main():" << endl;
    cout << "Local Variable = " << localVar << endl;
    cout << "Global Variable = " << globalVar << endl;
    cout<< endl;

    showScope();

    return 0;
}


