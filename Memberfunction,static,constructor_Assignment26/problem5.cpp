#include <iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date(int D, int M, int Y)
    {
        day = D;
        month = M;
        year = Y;
    }
    void Display_Date()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};
int main()
{
    int day;
    int month;
    int year;
    char ch;
    cout << "Enter date in(day/month/year) Formate: ";
    cin >> day >> ch >> month >> ch >> year;
    Date d1(day, month, year);
    d1.Display_Date();

    return 0;
}