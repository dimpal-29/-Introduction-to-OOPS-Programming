//Number Guessing Game 
//	o Write a C++ program that asks the user to guess a number between 1 and 100. The program should provide hints if the guess is too high or too low.
//		 Use loops to allow the user multiple attempts.
//	 o Objective: Understand while loops and conditional logic.

#include <iostream>
using namespace std;

int main() {
    int secretNumber, guess;
    int attempts = 0;

    cout << "Enter the secret number (1 to 100): ";
    cin >> secretNumber;


    cout << "Now, try to guess the number!" << endl;

    while (true) 
	{
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) 
		{
            cout << "Too high! Try again." << endl;
        } 
        else if (guess < secretNumber) 
		{
        	
            cout << "Too low! Try again." << endl;
        } 
        else 
		{
            cout << "Congratulations! You guessed the number " << secretNumber 
                 << " in " << attempts << " attempts." << endl;
            break;     
        }
    }

    return 0;
}


