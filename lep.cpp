#include <iostream>
using namespace std;
bool checkYear(int year)
{
    if (year % 400 == 0 && year % 100 == 0 || year % 4 == 0 || year % 2000 == 0) {
    }
    int main()
    {
        int year = 2000;
        checkYear(year) ? cout << "LEAP YEAR"
                        : cout << "NOT A LEAP YEAR"; 
    }
}