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

void printData(int list[], int size)
{
    cout << "The integers are:\n";
    for (int i = 0; i < size; i++)
    {
        cout << setw(5) << list[i];
        if (size == 100)
        {
            if (i % 10 == 9)
                cout << endl;
        }
        else if (i % 5 == 4)
            cout << endl;
    }
}

void printBar(int list[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < list[i]; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int largest(int list[], int size)
{
    int L = -1;
    for (int i = 0; i < size; i++)
    {
        if (list[i] > L)
            L = list[i];
    }
    return L;
}

double average(int list[], int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += list[i];
    }
    return sum / size;
}

void maxAppear(int list[], int size, int &max, int &freq)
{
    int b[10] = {0};
    for (int i = 0; i < size; i++)
    {
        b[list[i] - 1]++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (b[i] > freq)
        {
            freq = b[i];
            max = i + 1;
        }
    }
    cout << max;
    for (int i = max; i < 10; i++)
    {
        if (b[i] == freq)
            cout << ", " << i + 1;
    }
}

// =============================================================

void Q1()
{
    int n;
    cout << "How many integers to enter? ";
    cin >> n;
    int a[21] = {0};

    for (int i = 0; i < n; i++)
    {
        cout << "? ";
        cin >> a[i];
    }

    printData(a, n);
}

void Q2()
{
    int n;
    cout << "How many integers to enter? ";
    cin >> n;
    int a[21] = {0};

    for (int i = 0; i < n; i++)
    {
        cout << "? ";
        cin >> a[i];
    }

    printBar(a, n);
}

void Q3()
{
    int seed;
    int a[21] = {0};
    cout << "Please enter the seed value: ";
    cin >> seed;
    srand(seed);

    for (int i = 0; i < 20; i++)
    {
        a[i] = rand() % 100 + 1;
    }

    printData(a, 20);
    cout << "The largest number is: " << largest(a, 20) << endl;
    cout << "The average value is: " << average(a, 20);
}

void Q4()
{
    int seed, largest = -1, num = 0;
    int a[101] = {0};
    cout << "Please enter the seed value: ";
    cin >> seed; // try 12
    srand(seed);

    cout << "The random integers are:\n";
    for (int i = 0; i < 100; i++)
    {
        a[i] = rand() % 10 + 1;
    }
    printData(a, 100);
    maxAppear(a, 100, num, largest);

    cout << " appears the most with " << largest << " times";
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