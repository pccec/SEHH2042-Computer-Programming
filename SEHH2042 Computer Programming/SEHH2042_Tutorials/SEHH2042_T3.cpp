// SEHH SEHS 2042 In-class Exercises (Tutorial Work)
// Program template file
// Do not modify the given codes

// =======================================
// Insert more header files when necessary
// =======================================
#include <iostream>
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
	int guess, ans = 31;

	// prompt for user input
	cout << "I have a number between 1 and 100.\nCan you guess my number?\n";

	// display result
	do
	{
		cout << "Guess: ";
		cin >> guess;
		if (guess > ans)
			cout << "Too high. Try again.\n";
		else if (guess < ans)
			cout << "Too low. Try again.\n";
		else
			cout << "Excellent! Correct guess.";
	} while (guess != ans);
}

void Q2()
{
	// declare variables
	int n, ans = 1;

	// prompt for user input
	cout << "n: ";
	cin >> n;

	// calculations
	for (int i = 0; i < n; i++)
	{
		ans *= i + 1;
	}

	// display result
	cout << n << "! = " << ans;
}

void Q3()
{
	// declare variables
	int valueA, valueB, sum = 0, ub, lb;

	// prompt for user input
	cout << "Please input value A: ";
	cin >> valueA;
	cout << "Please input value B: ";
	cin >> valueB;

	if (valueA > valueB)
	{
		ub = valueA;
		lb = valueB;
	}
	else
	{
		ub = valueB;
		lb = valueA;
	}

	// calculations
	for (int i = lb; i <= ub; i++)
	{
		if (i % 2 != 0)
			sum += i;
	}

	// display result
	cout << "Sum of odd integers from " << lb << " to " << ub << " is " << sum;
}

void Q4()
{
	// declare variables
	double base, ans = 1.0;
	int expo;

	// prompt for user input
	cout << "Enter the base value: ";
	cin >> base;
	cout << "Enter the exponent value: ";
	cin >> expo;

	// calculations
	if (expo != 0)
		for (int i = 0; i < abs(expo); i++)
		{
			ans *= base;
		}

	if (expo < 0)
		ans = 1 / ans;

	// display result
	cout << base << " to the power " << expo << " is " << ans;
}

void Q5()
{
	// declare variables
	int input;
	bool notPrime = 0;

	// prompt for user input
	cout << "Input a positive integer: ";
	cin >> input;

	// calculations
	if (input > 2)
		for (int i = 2; i < input; i++)
		{
			if (input % i == 0)
			{
				notPrime = 1;
				break;
			}
		}

	// display result
	cout << input << " is";
	if (notPrime)
		cout << " not";
	cout << " a prime number";
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
		case '5':
			Q5();
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