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
	const double PI = 3.14159265;
	double radian, degree = 0;

	// display result
	cout << "Degree\t\tSin\t\tCos\n";
	do
	{
		radian = degree * PI / 180.0;
		cout << degree << "\t\t" << sin(radian) << "\t\t" << cos(radian) << endl;
		degree += 10;
	} while (degree <= 360);
}

void Q2()
{
	// declare variables
	const double PI = 3.14159265;
	double radian, degree = 0;

	// display result
	cout << left;
	cout << setw(20) << "Degree" << setw(20) << "Sin" << setw(20) << "Cos" << endl;
	do
	{
		radian = degree * PI / 180.0;

		cout << noshowpos << fixed << right << setprecision(0);
		cout << setw(3) << degree;

		cout << showpos << fixed << left << setprecision(4);
		cout << setw(17) << " " << setw(20) << sin(radian) << setw(20) << cos(radian) << endl;

		degree += 10;
	} while (degree <= 360);
}

float integerPower(float base, int expo)
{
	float ans = 1.0;
	if (expo != 0)
		for (int i = 0; i < abs(expo); i++)
		{
			ans *= base;
		}

	if (expo < 0)
		ans = 1 / ans;

	return ans;
}

void Q3()
{
	// declare variables
	float base;
	int expo;

	// prompt for user input
	cout << "Enter the base value: ";
	cin >> base;
	cout << "Enter the exponent value: ";
	cin >> expo;

	// display result
	cout << base << " to the power " << expo << " is " << integerPower(base, expo);
}

void nChar(int n, char c)
{
	for (int i = 0; i < n; i++)
	{
		cout << c;
	}
}

void top_tri(int n)
{
	char c;
	for (int i = 1; i <= (n + 1) / 2; i++)
	{
		c = ' ';
		nChar((n + 1) / 2 - i, c);
		c = '*';
		nChar((i - 1) * 2 + 1, c);
		cout << endl;
	}
}

void bottom_tri(int n)
{
	char c;
	for (int i = (n - 1) / 2; i >= 1; i--)
	{
		c = ' ';
		nChar((n + 1) / 2 - i, c);
		c = '*';
		nChar((i - 1) * 2 + 1, c);
		cout << endl;
	}
}

void left_tri(int n)
{
	char c;
	for (int i = 1; i <= (n + 1) / 2; i++)
	{
		c = ' ';
		nChar((n + 1) / 2 - i, c);
		c = '*';
		nChar(i, c);
		cout << endl;
	}
}

void right_tri(int n)
{
	char c;
	for (int i = 1; i <= (n + 1) / 2; i++)
	{
		c = '*';
		nChar(i, c);
		cout << endl;
	}
}

void Q4()
{
	int n = 9;
	char c;
	right_tri(n);
	cout << endl;

	left_tri(n);
	cout << endl;

	top_tri(n);
	cout << endl;

	top_tri(n);
	bottom_tri(n);
	cout << endl;

	top_tri(n);
	top_tri(n);
	top_tri(n);
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