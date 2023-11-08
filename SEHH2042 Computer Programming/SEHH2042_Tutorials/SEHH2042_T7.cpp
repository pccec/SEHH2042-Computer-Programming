// SEHH SEHS 2042 In-class Exercises (Tutorial Work)
// Program template file
// Do not modify the given codes

// =======================================
// Insert more header files when necessary
// =======================================
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void showInfo()
{
    // Fill in your personal particulars below
    cout << "Name      : Chan Chun Hin\n";
    cout << "Student ID: 22167230A\n";
    cout << "Class     : 102C\n";
}

// ============================================================

void Q1()
{
    class Date
    {
    public:
        void setDate(int d, int m, int y)
        {
            day = d;
            month = m;
            year = y;
        }

        Date(int d, int m, int y)
        {
            setDate(d, m, y);
        }

        void print()
        {
            cout << day << "-" << month << "-" << year;
        }

    private:
        // Declare private data members
        int day;
        int month;
        int year;
    };

    // Create an object called xmas
    Date xmas(25, 12, 2023);
    cout << "xmas is: ";
    // Use xmas object to call print()
    xmas.print();
    cout << endl;
}

// ============================================================

class Car
{
public:
    Car()
    {
        speed = 0;
    }

    void showSpeed()
    {
        cout << "The car is moving at " << speed << " km/h." << endl;
    }

    void accelerate(int a)
    {
        cout << "Accelerating ... " << endl;
        speed += a;
        if (speed > 150)
            speed = 150;
    }

    void decelerate(int d)
    {
        cout << "Decelerating ... " << endl;
        speed -= d;
        if (speed < 0)
            speed = 0;
    }

    void stop()
    {
        cout << "Stopping ... " << endl;
        speed = 0;
    }

private:
    int speed; // speed of the car, in km/h
};

void Q2()
{
    Car myCar;

    myCar.showSpeed();
    myCar.accelerate(70);
    myCar.showSpeed();
    myCar.decelerate(20);
    myCar.showSpeed();
    myCar.accelerate(120);
    myCar.showSpeed();
    myCar.decelerate(100);
    myCar.showSpeed();
    myCar.stop();
    myCar.showSpeed();
}

// ============================================================

class Phone
{
public:
    Phone(string b, string o)
    {
        brand = b;
        os = o;
    }

    void setPrice(double p)
    {
        price = p;
    }

    void showConfig()
    {
        cout << "Brand:\t" << brand << endl;
        cout << "OS:\t" << os << endl;
        cout << "Price:\t$";
        if (price < 0)
            cout << " N/A\n";
        else
            cout << price << endl;
    }

private:
    string brand;
    string os;
    double price;
};

void Q3()
{
    Phone iPhone("Apple", "iOS version 6");
    Phone noteTwo("Samsung", "Android 4.1");

    iPhone.setPrice(5588);
    noteTwo.setPrice(4630);

    cout << "Specification of iPhone:" << endl;
    iPhone.showConfig();
    cout << "\nSpecification of Note 2:" << endl;
    noteTwo.showConfig();
}

// ============================================================

// (a) Implementation of class Account should be inserted here
class Account
{
public:
    Account(double b)
    {
        balance = b;
    }

    void credit(double c)
    {
        balance += c;
    }

    void debit(double d)
    {
        balance -= d;
    }

    double getBalance()
    {
        return balance;
    }

private:
    double balance;
};

void transfer(Account &a1, Account &a2)
{
    // (b) code for function body should be inserted here
    double money;
    cout << "How much to transfer: ";
    cin >> money;
    if (a1.getBalance() < money)
        cout << "Insufficient balance.\n";
    else
    {
        a1.debit(money);
        a2.credit(money);
    }
}

void Q4()
{
    Account peter(1000), mary(1500);
    int option;

    cout << fixed << setprecision(2); // 2 decimal places

    do
    {
        cout << "\n";
        cout << "Peter's balance: " << peter.getBalance() << endl;
        cout << "Mary's balance:  " << mary.getBalance() << endl;
        cout << "------\n";
        cout << "(1) Transfer money from Peter to Mary\n";
        cout << "(2) Transfer money from Mary to Peter\n";
        cout << "(3) Quit\n";
        cout << "Option: ";
        cin >> option;

        switch (option)
        {
        case 1:
            transfer(peter, mary);
            break;
        case 2:
            transfer(mary, peter);
            break;
        case 3:
            cout << "Bye Bye.\n";
            break;
        default:
            cout << "Incorrect option.\n";
        }
    } while (option != 3);
}

// ============================================================

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