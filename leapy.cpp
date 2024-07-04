#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

bool leap_year(int year);
int main()
{
    int year;
    while (cout << "Enter a year ")
    {
        cin >> year;
        if (leap_year(year) == false && year <0 )
        {
            cout << "Bye!" << endl;
        }
        break;
        if (leap_year(year) == false && year >0 )
        {
            cout << "The year is not a loop year." << endl;
        }
        return 0;
    }
}
bool leap_year(int year)
{
    bool is_leap_year = false;
    if (year % 4 == 0)
    {
        is_leap_year = true;
    }
    if (year % 100 == 0)
    {
        is_leap_year = false;
    }
    if (year % 400 == 0)
    {
        is_leap_year = true;
    }
    if (year % 2000 == 0)
    {
        is_leap_year = true;
    }
    return is_leap_year;
}
