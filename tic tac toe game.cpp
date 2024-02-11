// CodSoft Virtual Internship (C++ Programming)
// Task - 3(Tic Tac Toe Game)
// Intern Name - Bareeha Farooq

#include<iostream>
#include<conio.h>
using namespace std;

const string BOLD_RED = "\033[1;31m";
const string GREEN = "\033[32m";
const string RESET = "\033[0m";

 
char arr[10] = {'0','1','2','3','4','5','6','7','8','9' };

void viewboard()
{
	system("cls");
	cout << "\t\t\t\t=================\n";
	cout <<GREEN<< "\t\t\t\tTic Tae Toe Game!" << RESET<< endl;
	cout << "\t\t\t\t=================\n";
	cout << "Player 1 (X) & Player 2 (O)\n\n";
	cout << "     |     |     " << endl;
	cout << "  " << arr[1] << "  |  " << arr[2] << "  |  " << arr[3] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << arr[4] << "  |  " << arr[5] << "  |  " << arr[6]<< endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << arr[7] << "  |  " << arr[8] << "  |  " << arr[9] << endl;
	cout << "     |     |     " << endl;
}
int winner()
{
	if (arr[1] == arr[2] && arr[2] == arr[3])
		return 1;
	else if (arr[4] == arr[5] && arr[5] == arr[6])
		return 1;
	else if (arr[7] == arr[8] && arr[8] == arr[9])
		return 1;
	else if (arr[1] == arr[4] && arr[4] == arr[7])
		return 1;
	else if (arr[2] == arr[5] && arr[5] == arr[8])
		return 1;
	else if (arr[3] == arr[6] && arr[6] == arr[9])
		return 1;
	else if (arr[1] == arr[5] && arr[5] == arr[9])
		return 1;
	else if (arr[3] == arr[5] && arr[5] == arr[7])
		return 1;
	else if (arr[1] != '1' && arr[2] != '2' && arr[3] != '3' && arr[4] != '4' && arr[5] != '5' && arr[6] != '6' && arr[7] != '7' && arr[8] != '8' && arr[9] != '9')

		return 0;
	else
	{
		return -1;
	}
}
int main()
{
	int player = 1, i;
	double choice;
	char mark, playagain;
	do
	{
	do
	{
		viewboard();
		if (player % 2 == 1)
			player = 1;
		else
			player = 2;
		cout << "Player" << " " << player << " " << "enter a number:";
		cin >> choice;
		if (player == 1)
		{
			mark = 'X';
		}
		else
		{
			mark = 'O';
		}
		if (choice == 1 && arr[1] == '1')
			arr[1] = mark;

		else if (choice == 2 && arr[2] == '2')
			arr[2] = mark;

		else if (choice == 3 && arr[3] == '3')
			arr[3] = mark;

		else if (choice == 4 && arr[4] == '4')
			arr[4] = mark;

		else if (choice == 5 && arr[5] == '5')
			arr[5] = mark;

		else if (choice == 6 && arr[6] == '6')
			arr[6] = mark;

		else if (choice == 7 && arr[7] == '7')
			arr[7] = mark;

		else if (choice == 8 && arr[8] == '8')
			arr[8] = mark;

		else if (choice == 9 && arr[9] == '9')
			arr[9] = mark;

		else
		{
			cout << BOLD_RED<< "\a\n Invalid Move! you entered a wrong number......"<<RESET;
			player--;
			cin.ignore();
			cin.get();
		}

		i = winner();
		player++;
	} while (i == -1);
	viewboard();
	if (i == 1)
	{
		cout <<GREEN<< "\a\n\nCongratulations! Player " << " " << --player << " " << "wins" << RESET<< endl;
	}
	else
		cout << "\aGame Tie!";

	cout << "\n\nDo you want to play again? (y/n): ";
	cin >> playagain;

	if (playagain == 'y' || playagain == 'Y')
	{
		for (int j = 1; j <= 9; j++)
			arr[j] = j + '0';
	}
}while (playagain == 'y' || playagain == 'Y');
	cin.ignore();
	cin.get();
	return 0;

}