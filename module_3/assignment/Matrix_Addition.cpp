//Matrix Addition 
//	o Write a C++ program to perform matrix addition on two 2x2 matrices. 
//	o Objective: Practice multi-dimensional arrays.

#include <iostream>
using namespace std;

int main() {
    int a[2][2], b[2][2], sum[2][2];
    int i, j;

    cout << "--------- Addition of Two 2x2 Matrices -----------" << endl;

    cout << "Enter elements for Matrix A (2x2):" << endl;
    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            cout << "A[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    cout << "\nEnter elements for Matrix B (2x2):" << endl;
    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            cout << "B[" << i << "][" << j << "]: ";
            cin >> b[i][j];
        }
    }

    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "\nSum of 2x2 Matrices (A + B):" << endl;
    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            cout << sum[i][j] << " "; 
        }
        cout << endl;
    }

    return 0;
}

