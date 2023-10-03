// SEHH SEHS 2042 In-class Exercises (Tutorial Work)
// Program template file
// Do not modify the given codes

// =======================================
// Insert more header files when necessary
// =======================================
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void showInfo()
{
    // Fill in your personal particulars below
    cout << "Name      : Chan Chun Hin\n";
    cout << "Student ID: 22167230A\n";
    cout << "Class     : 102C\n";
}

double hypoten(double x, double y)
{
    double ans;
    ans = sqrt(x * x + y * y);
    return ans;
}
void Q1()
{
    double x, y;

    cout << "Please enter the length of first side: ";
    cin >> x;
    cout << "Please enter the length of second side: ";
    cin >> y;
    cout << "Hypotenuse of a " << x << " by " << y << " right triangle is " << hypoten(x, y);
}

void sumAvg(int lower, int upper, int &sum, float &average)
{
    sum = 0;
    for (int i = lower; i <= upper; i++)
    {
        sum += i;
    }
    average = (float)sum / (upper - lower + 1);
}

void Q2()
{
    int lower, upper, sum;
    float average;

    cout << "Enter the lower bound: ";
    cin >> lower;
    cout << "Enter the upper bound: ";
    cin >> upper;

    sumAvg(lower, upper, sum, average);

    cout << "From " << lower << " to " << upper << ":\n";
    cout << "Sum     = " << sum << endl;
    cout << "Average = " << average << endl;
}

double calcPI(int n, double &PI)
{
    PI += pow(-1, n - 1) * 4.0 / (n * 2 - 1);
    n--;
    if (n == 0)
        return PI;
    else
        return calcPI(n, PI);
}

void Q3()
{
    double PI = 0;
    int n;
    cin >> n;
    cout << fixed << setprecision(15) << calcPI(n, PI);
}

void Q4()
{
    // =====================================
    // Insert your codes for Question 4 here
    // No need main() and return 0
    // =====================================
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