// SEHH SEHS 2042 In-class Exercises (Tutorial Work)
// Program template file
// Do not modify the given codes

// =======================================
// Insert more header files when necessary
// =======================================
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void showInfo()
{
	// Fill in your personal particulars below
	cout << "Name      : Chan Chun Hin\n";
	cout << "Student ID: 22167230A\n";
	cout << "Class     : 102C\n";
}

void Q1()
{
	// declare variables
	int input = 1;

	// prompt for user input
	// display result
	while (input > 0)
	{
		cout << "Enter a positive interger: ";
		cin >> input;
		if (input > 0)
		{
			cout << "Factors of " << input << ": ";
			for (int i = 1; i < input; i++)
			{
				if (input % i == 0)
					cout << i << " ";
			}
			cout << input << endl;
		}
	}
	cout << "Only positive integer is accepted. Program ends.";
}

void Q2()
{
	// declare variables
	bool notPrime = 0;
	const int n = 200;
	int counter = 1;
	cout << fixed << right;

	// display result
	cout << setw(10) << "2";
	for (int input = 0; input < n; input++)
	{
		if (counter == 10)
		{
			cout << endl;
			counter = 0;
		}
		if (input > 2)
		{
			for (int i = 2; i < input; i++)
			{
				if (input % i == 0)
				{
					notPrime = 1;
					break;
				}
			}
			if (notPrime == 0)
			{
				cout << setw(10) << input;
				counter++;
			}
		}
		notPrime = 0;
	}
}

void Q3()
{
	// declare variables
	int terms = 10;
	double PI = 0;
	cout << fixed << setprecision(15) << right;

	// display result
	cout << setw(10) << "Terms" << setw(20) << "Value of PI" << endl;
	cout << setw(10) << "-----" << setw(20) << "-----------" << endl;

	do
	{
		for (int i = 0; i < terms; i++)
		{
			PI += pow(-1, i) * 4.0 / (i * 2 + 1);
		}
		cout << setw(10) << terms << setw(20) << PI << endl;
		terms *= 10;
		PI = 0;
	} while (terms != 1000000);
}

void Q4()
{
	// declare variables;
	int size;
	char type;

	// prompt for user input
	cout << "Pattern size: ";
	cin >> size;
	cout << "Pattern type (a-e): ";
	cin >> type;

	// display result;
	switch (type)
	{
	case 'a':
		for (int i = 1; i <= size; i++)
		{
			for (int j = 1; j <= size; j++)
			{
				if (i == 1 || i == size || j == 1 || j == size)
					cout << "*";
				else
					cout << " ";
			}
			cout << endl;
		}
		break;
	case 'b':
		for (int i = 1; i <= size; i++)
		{
			for (int j = 1; j <= size; j++)
			{
				if (i == 1 || i == j || i == size)
					cout << "*";
				else
					cout << " ";
			}
			cout << endl;
		}
		break;
	case 'c':
		for (int i = 1; i <= size; i++)
		{
			for (int j = size - 1; j >= 1; j--)
			{
				if (i == 1 || i == j || i == size)
					cout << "*";
				else
					cout << " ";
			}
			cout << endl;
		}
		break;
	case 'd':
		for (int i = 1; i <= size; i++)
		{
			for (int j = 1; j <= size; j++)
			{
				if (i == 1 || i == size || i == j || i == size - j + 1)
					cout << "*";
				else
					cout << " ";
			}
			cout << endl;
		}
		break;
	case 'e':
		for (int i = 1; i <= size; i++)
		{
			for (int j = 1; j <= size; j++)
			{
				if (i == 1 || i == size || j == 1 || j == size || i == j || i == size - j + 1)
					cout << "*";
				else
					cout << " ";
			}
			cout << endl;
		}
		break;
	}
}

// IMPORTANT: DO NOT MODIFY main()
int main()
{
	char prog_choice;

	do
	{
		cout << "\n\n";
		cout << "Program Selection Menu" << endl;
		cout << "---------------------------------------" << endl;
		cout << "Enter question number ('q' to quit): ";
		cin >> prog_choice;
		cout << "\n\n";

		switch (prog_choice)
		{
		case '0':
			showInfo();
			break;
		case '1':
			Q1();
			break;
		case '2':
			Q2();
			break;
		case '3':
			Q3();
			break;
		case '4':
			Q4();
			break;
		case 'q':
			break;
		default:
			cout << "No such question " << prog_choice << endl;
			break;
		}
	} while (prog_choice != 'q');

	cout << "Program terminates. Good bye!" << endl;
	return 0;
}
// END