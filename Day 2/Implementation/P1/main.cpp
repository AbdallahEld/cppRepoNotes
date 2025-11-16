#include <iostream>

using namespace std;

int main()
{
    //22yrs , 5 month , 29 days
    int currentYear = 2025, currentMonth = 11, currentDay = 3;
    int year , month , day, daysOfMonth;
    bool isLeap = false;
    cout << "insert your birth date to know how old are you" << endl;
    // Year
    do
    {
        cout << "Please enter your year from 1980-2025" << endl;
        cin >> year;
    } while (year < 1980 || year > currentYear);
    // Month
    do
    {
        cout << "Please enter your month from 12-1" << endl;
        cin >> month;
        if (month == 4 || month == 6 || month == 8 || month == 11)
            {
                daysOfMonth = 30;
            }
        else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 9 || month == 10 || month == 12)
            {
                daysOfMonth = 31;
            }
        else
            {
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 != 0))
                    {
                        daysOfMonth = 29;
                        isLeap = true;
                    }
                else
                    {
                        daysOfMonth = 28;
                        isLeap = false;
                    }
            }
    } while (month > 12 || month < 0 );
    //Day
    do
    {
        cout << "Please enter your day" << endl;
        cin >> day;
        while ((isLeap == true) && (month == 2) && (day >= 29 || day < 1))
        {
            cout << "error XwX Enter day again" << endl;
            cin >> day;
        }
    }while (day > 31 || day < 1);
    //Calculate
    if(month <= currentMonth)
    {
        year = currentYear - year;
        if (day <= currentDay)
        {
            month = currentMonth - month;
            day = currentDay - day;
        }
        else
        {
            month = currentMonth - month - 1;
            day = daysOfMonth - (day - currentDay);
        }
    }
    //1/12/2003 21,11,2
    else
    {
        year = currentYear - year - 1;
        month = 12 - (month - currentMonth);
        if (currentDay < day)
        {
            month = month - 1;
            day = daysOfMonth - (day - currentDay);
        }
        else
        {
            day = currentDay - day;
        }
    }

    cout << "Your are " << year << "yrs, " << month << " months, " << day << " days" ;
    return 0;
}
