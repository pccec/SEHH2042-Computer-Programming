// SEHH SEHS 2042 In-class Exercises (Tutorial Work)
// Program template file
// Do not modify the given codes

// =======================================
// Insert more header files when necessary
// =======================================
#include <iostream>
#include <iomanip>
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
    int input;

    // prompt for user input
    cout << "Enter a two-digit integer (00-99): ";
    cin >> input;

    // separate the digits
    int a = input / 10, b = input % 10;

    // display result
    if (a == b)
        cout << a << " = " << b;
    else if (a > b)
        cout << a << " > " << b;
    else
        cout << a << " < " << b;
}

void Q2()
{
    // declare variables
    int x, y = 0;

    // prompt for user input
    cout << "Input x: ";
    cin >> x;
    cout << "Input y: ";
    cin >> y;

    // display result
    if (y % x == 0)
        cout << x << " is a factor of " << y;
    else
        cout << x << " is not a factor of " << y;
}

void Q3()
{
    // declare variables
    int year;

    // prompt for user input
    cout << "Input a year: ";
    cin >> year;

    // display result
    cout << "Is " << year << " a leap year? ";
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        cout << "Yes";
    else
        cout << "No";
}

void Q4()
{
    // declare variables
    double x, y, z;

    // prompt for user input
    cout << "Input side x: ";
    cin >> x;
    cout << "Input side y: ";
    cin >> y;
    cout << "Input side z: ";
    cin >> z;

    // display result
    if (x * x + y * y != z * z)
        cout << "Error: Not right-angled triangle";
    else
    {
        cout << fixed << right << setprecision(3);
        cout << setw(10) << "sinA";
        cout << setw(10) << "cosA";
        cout << setw(10) << "tanA" << setw(10) << endl;
        cout << setw(10) << x / z;
        cout << setw(10) << y / z;
        cout << setw(10) << x / y;
    }
}

void Q5()
{
    // declare variables
    double value, rate;
    int type;

    // prompt for user input
    cout << "What is the principal value? ";
    cin >> value;
    cout << "Please enter the customer type: ";
    cin >> type;

    // display result
    cout << "Interest payable after one year: ";

    switch (type)
    {
    case 0:
        rate = 0.005;
        break;
    case 1:
        rate = 0.008;
        break;
    case 2:
        rate = 0.01;
        break;
    case 3:
        rate = 0.012;
        break;
    case 4:
        rate = 0.02;
        break;
    default:
        cout << "Error in customer type";
        type = 5;
    }

    if (type != 5)
        cout << "$" << (int)(value * rate);
}

void Q6()
{
    // declare variables
    int day, month, year;

    // prompt for user input
    cout << "Input day month year: ";
    cin >> day >> month >> year;

    // display result
    cout << day << "-" << month << "-" << year;

    if (day < 0 || month < 0 || year < 0)
        cout << " is incorrect";
    else
        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (day <= 31)
            {
                cout << " is correct";
                break;
            }
        case 4:
        case 6:
        case 9:
        case 11:
            if (day <= 30)
            {
                cout << " is correct";
                break;
            }
        case 2:
            if (day <= 28 || (day <= 29 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)))
                cout << " is correct";
            else
                cout << " is incorrect";
            break;
        default:
            cout << " is incorrect";
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
        case '5':
            Q5();
            break;
        case '6':
            Q6();
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