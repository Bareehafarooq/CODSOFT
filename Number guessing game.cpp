// CodSoft Virtual Internship (C++ Programming)
// Task - 1(Number Guessing Game)
// Intern Name - Bareeha Farooq

#include<iostream>
#include<conio.h>
using namespace std;

int input;
char choice;
bool playagain;

const string BOLD_RED = "\033[1;31m";
const string GREEN = "\033[32m";
const string RESET = "\033[0m";

int main()
{
	do
	{
		system("cls");
		srand(time(0));
		int z = rand() % 100 + 1;

		int count = 0;

		cout << "\t\t\t\t====================================\n";
		cout << GREEN<<"\t\t\t\tWelcome to the number guessing game!" << RESET<<endl;
		cout << "\t\t\t\t====================================\n";

		cout << "I'm thinking of a number between 1 and 100. Can you guess it?" << endl;

		do
		{
			cout << "Enter a number to guess:" << endl;
			cin >> input;

			if (input < 1 || input > 100)
			{
				cout << BOLD_RED;
				cout << "Invalid guess. Please enter a number between 1 and 100." << endl;
				cout << RESET;
				continue;
			}

			// Check for correct input
			if (z == input)
			{
				cout << GREEN<<"Welldone! You guessed the correct number after" << " " << count << " " << "attempt......" <<RESET<< endl;
			}
			// Check if input is high
			else if (input > z)
			{
				cout << BOLD_RED<< "Oops! The number guessed is too high.... Try again!" <<RESET<< endl;
			}
			// Check if input is low
			else if (input < z)
			{
				cout << BOLD_RED<<"Oops! The number guessed is too low....Try again!" <<RESET<< endl;
			}
			count++;

		} while (input != z);

		cout << "\nWould you like to keep playing? (y/n): ";
		cin >> choice;
		if (choice == 'y')
			playagain = true;
		else
			playagain = false;

	}while (playagain);
	_getch();
	return 0;
}