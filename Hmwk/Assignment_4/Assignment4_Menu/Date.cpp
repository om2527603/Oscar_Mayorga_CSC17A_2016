#include <iostream>

//user Libraries
#include "Date.h"

using namespace std;

Date::Date(int day, int month, int year)
{
    this->month = month;
    this->day = day;
    this->year = year;
}

Date::Date(const Date& orig)
{
    
}

//print numerical date
void Date::prntNum()
{
    cout << month << "/" << day << "/" << year << "\n";
}

//print day and year date
void Date::prntMnt()
{
    //array containing the 12 months of the year
    string a[] = {"JANUARY", "FEBUARY", "MARCH", "APRIL", "MAY", "JUNE", "JULY", 
                  "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"};
    
    //output the month the day
      cout << a[month - 1] << " " << day << ", " << year << "\n";
}

//print date month and year
void Date::prntDay()
{
    string a[] = {"JANUARY", "FEBUARY", "MARCH", "APRIL", "MAY", "JUNE", "JULY", 
                  "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"};
      cout << day << " " << a[month - 1] << " " << year << "\n";
}

Date::~Date() 
{
    
}