//Inheritance Example 
//	o Write a program that implements inheritance using a base class Person and derived classes Student and Teacher. 
//		Demonstrate reusability through inheritance. 
//	o Objective: Learn the concept of inheritance.

#include<iostream>
using namespace std;
class Person
{
	public:
		int age;
};
class Student : public Person
{
	public:
	    int student_id;	
};
class Teacher : public Person
{
	public:
		int teacher_id;	
}; 
int main()
{
	Teacher t1;
	t1.teacher_id = 101;
	t1.age = 30;

	cout<< "Teacher ID: " << t1.teacher_id <<endl;
	cout << "Teacher Age: " << t1.age  << endl;
	cout<<endl;
	
	Student s1;
	s1.student_id = 1;
	s1.age = 23;
	
	cout<<"Student ID: " << s1.student_id << endl; 
    cout << "Student Age: " << s1.age  << endl;
    
	
	return 0;
}
