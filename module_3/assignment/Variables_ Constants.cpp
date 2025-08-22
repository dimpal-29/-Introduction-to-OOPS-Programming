// Variables and Constants 
//o Write a C++ program that demonstrates the use of variables and constants. Create variables of different data types and perform operations on them. 
//o Objective: Understand the difference between variables and constants.

#include<iostream>
using namespace std;

int main()
{
	const float pi = 3.14;
	
	int age;
    float height;
    char grade;
    string name;
    double salary;
    
    cout<<"Enter Your Name :";
	cin	>> name;
    
    cout<<"Enter Your Age :";
    cin >> age;
    
    cout<<"Enter Your height :";
    cin >> height;
    
    cout<<"Enter Your Grade :";
    cin >> grade;
	
	cout<<"Enter Your Salary :";
	cin >> salary;
	
	cout << "----- User Details -----" << endl;
    cout << "Name   : " << name << endl;
    cout << "Age    : " << age << endl;
    cout << "Height : " << height  << endl;
    cout << "Grade  : " << grade << endl;
    cout << "Salary : " << salary << endl;
    
     age = age + 2;  
    cout << "Age after 2 years = " << age << endl<<endl;;

	cout<<"------constants varible----"<<endl;
    float radius;
    cout << "\nEnter radius of a circle: ";
    cin >> radius;

    float area = pi * radius * radius;   
    cout << "Area of Circle = " << area << endl;

	return 0;
}
