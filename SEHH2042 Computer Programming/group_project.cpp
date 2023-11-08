#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Flight
{
public:
    Flight(string c, string d, string t, string o, int s, bool D)
    {
        code = c;
        date = d;
        time = t;
        ori = o;
        status = s;
        dir = D;
    };

    void printFlight()
    {
        cout << code << setw(15) << date << setw(15) << time << setw(15) << ori << setw(15);
        switch (status)
        {
        case 0:
            cout << "Delayed";
            break;
        case 1:
            cout << "On Time";
            break;
        case 2:
            cout << "Cancelled";
            break;
        default:
            cout << "Unknown";
        }

        if (dir)
        {
            cout << setw(15) << "Arrival";
        }
        else
            cout << setw(15) << "Departing";
    }

    void checkValid()
    {
    }

private:
    string code, date, time, ori;
    int status;
    bool dir;
};

int main()
{
    Flight CX251("CX251", "12/09/23", "12:15", "SYD", 1, 1);
    CX251.printFlight();
    return 0;
}