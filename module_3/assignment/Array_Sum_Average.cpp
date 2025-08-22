//Array Sum and Average 
 //	o Write a C++ program that accepts an array of integers, calculates the sum and average, and displays the results. 
//	 o Objective: Understand basic array manipulation.

#include<iostream>
using namespace std;
int main()
{
	int num ,sum =0,average;
	
	cout<<"Enter Number:";
	cin >> num;
	
	int numbers[num];
	cout << "Enter " << num << " numbers:"<<endl;;
	for(int i = 0; i < num ;i++)
	{
		cout << "Number " << i<<"=";
        cin >> numbers[i];
        sum += numbers[i];
	}
	average = sum / num;
	cout<<"Sum of all numbers ="<<sum<<endl;
	cout<<"Average of all numbers ="<<average<<endl;
	 
	
	return 0;
}
