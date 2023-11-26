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
    int x = 1, y[5] = {10, 20, 30, 40, 50};
    int *xPtr, *yPtr;
    xPtr = &x, yPtr = &y[0];

    cout << "(a): " << &x << " " << y << endl;
    cout << "(b): " << xPtr << " " << yPtr << endl;
    cout << "(c): x and y[0]" << endl;
    cout << "(d): " << (*yPtr + 2) << " " << *(yPtr + 2) << "\t// y[0]+2 y[2]" << endl;

    xPtr = yPtr + 2;
    (*xPtr)++;
    (*yPtr)++;

    cout << "(e): " << *xPtr << " " << *yPtr << "\t// y[2]+1 y[0]+1";
}

void swapInteger(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void Q2()
{
    int x = 2, y = 5;

    cout << "Before swapping:" << endl;
    cout << "x is: " << x << endl;
    cout << "y is: " << y << endl;

    swapInteger(&x, &y);

    cout << "After swapping:" << endl;
    cout << "x is: " << x << endl;
    cout << "y is: " << y << endl;
}

void printArray(const int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void multiplyArray(int *const a, int size, int n)
{
    for (int i = 0; i < size; i++)
    {
        *(a + i) *= n;
    }
}

void Q3()
{
    const int arraySize = 10;

    int c[arraySize] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    cout << "Before multiplyArray, array is: ";
    printArray(c, arraySize);

    multiplyArray(c, arraySize, 3);

    cout << "After multiplyArray, array is: ";
    printArray(c, arraySize);
}

void spaceConvert(char *xPtr)
{
    while (*xPtr != '\0')
    {
        if (*xPtr == ' ')
        {
            *xPtr = '\0';
        }
        xPtr++;
    }
}
void Q4()
{
    char *buffer = new char[100]; // reserve 100 characters
    char *word[10] = {};          // initialize all pointers to 0 (NULL)
    char a[1];
    cin.getline(a, 1);

    cin.getline(buffer, 100, '\n');
    int n = 1;
    *word = buffer;
    for (int i = 1; buffer[i] != '\0'; i++)
    {
        if (buffer[i] == ' ')
        {
            *(word + n) = &*(buffer + i + 1);
            n++;
        }
    }

    spaceConvert(buffer);

    for (int i = 0; i < 10; i++)
        if (word[i] != 0) // check if it is a NULL pointer
            cout << i << ": " << word[i] << endl;
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