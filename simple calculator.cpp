// CodSoft Virtual Internship (C++ Programming)
// Task - 2(Simple calculator)
// Intern Name - Bareeha Farooq

#include<iostream>
#include<conio.h>
using namespace std;

const string BOLD_RED = "\033[1;31m";
const string GREEN = "\033[32m";
const string RESET = "\033[0m";

float firstno, secondno;
int input;
bool playagain;
char choice;

int main()
{
	do
	{
		system("cls");
		cout << "\t\t\t\t===========================\n";
		cout << GREEN << "\t\t\t\tWelcome to my Calculator!" << RESET << endl;
		cout << "\t\t\t\t===========================\n";

		cout << "Enter first number:";
		cin >> firstno;
		cout << "Enter second number:";
		cin >> secondno;

		cout << "1.Addition" << endl;
		cout << "2.Subtraction" << endl;
		cout << "3.Multiplication" << endl;
		cout << "4.Division" << endl;
		cout << "Enter a number to perform desired operations:" << endl;
		cin >> input;
		do
		{
			if (input < 1 || input>4)
			{
				cout << BOLD_RED << "\nInvalid choice! Enter 1,2,3 or 4....." << RESET;
				cin >> input;
			}
			float result;
			switch (input)
			{
			case 1:
				result = firstno + secondno;
				cout << GREEN << "The result after addition is " << " " << result << RESET << endl;
				break;

			case 2:

				result = firstno - secondno;
				cout << GREEN << "The result after subtraction is " << " " << result << RESET << endl;
				break;

			case 3:

				result = firstno * secondno;
				cout << GREEN << "The result after multiplication is " << " " << result << RESET << endl;
				break;

			case 4:

				if (secondno == 0)
				{
					cerr << BOLD_RED << "Error: Division by zero can not be done." <<RESET<< endl;
				}
				else
				{
					result = firstno / secondno;
					cout << GREEN << "The result after division is " << " " << result << RESET << endl;
				}
				break;
			}
		} while (input < 1 || input > 4);

		cout << "\nDo you want to perform any other calculation? (y/n): ";
		cin >> choice;
		if (choice == 'y')
			playagain = true;
		else
			playagain = false;

	} while (playagain);
	
		_getch();
		return 0;
}