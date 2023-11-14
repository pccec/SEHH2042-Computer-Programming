// SEHH SEHS 2042 In-class Exercises (Tutorial Work)
// Program template file
// Do not modify the given codes

// =======================================
// Insert more header files when necessary
// =======================================
#include <iostream>
#include <cstring>
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
    char a[100] = {0};
    cout << "Enter a string: ";
    cin >> a;

    cout << "Converted string is: ";
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] > 96)
            a[i] -= 32;
        cout << a[i];
    }
}

void swapString(char s1[], char s2[])
{
    char temp = '\0';
    for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
    {
        temp = s1[i];
        s1[i] = s2[i];
        s2[i] = temp;
    }
}

void Q2()
{
    char w1[20], w2[20];

    cout << "Enter the two words (separated by space): ";
    cin >> w1;
    cin >> w2;

    cout << "Before swapping, words are:\n";
    cout << w1 << endl
         << w2 << endl;

    swapString(w1, w2);

    cout << "After swapping, words are:\n";
    cout << w1 << endl
         << w2 << endl;
}

void Q3()
{
    char buffer[80] = {0};
    char msgs[10][15] = {
        "a", "ab", "abc", "abcd", "abcde", "abcdef",
        "abcdefg", "abcdefgh", "abcdefghi", "abcdefghij"};

    for (int i = 0; i < 10; i++)
    {
        strcat(buffer, msgs[i]);
        strcat(buffer, "\n");
    }

    // Print the buffer content
    cout << "buffer is:" << endl;
    cout << buffer;

    cout << "Length of buffer is: " << strlen(buffer);
}

const int NMSG = 3;    // (Global) maximum no. of messages
const int MAXLEN = 80; // (Global) maximum length of each message

void printReverse(char msg[][MAXLEN])
{
    cout << endl
         << "The messages are printed in a last-in-first-out sequence." << endl;
    cout << "Characters in each message are printed in a reverse order." << endl;
    for (int i = NMSG - 1; i >= 0; i--)
    {
        cout << "Message " << i << ": ";
        for (int j = strlen(msg[i]) - 1; j >= 0; j--)
        {
            cout << msg[i][j];
        }
        cout << endl;
    }
} // prototype

void Q4()
{
    char message[NMSG][MAXLEN];
    char a[1];
    cin.getline(a, 1);
    for (int i = 0; i < NMSG; i++)
    {
        cout << "Enter message " << i << ": ";
        cin.getline(message[i], MAXLEN);
    }

    printReverse(message);
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