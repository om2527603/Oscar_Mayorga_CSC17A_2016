/* 
 * File:   DayOfYear.cpp
 * Author: Oscar Mayorga 
 *
 */

#include <cstdlib>
#include <iostream>
#include "DayOfYear.h"

using namespace std;

DayOfYear::DayOfYear(int day)
{
    this->day = day;
    
}

void DayOfYear::print()
{
    if(day < 32) cout << "January " << day << "\n\n";
    else if(31 < day && day < 60) cout << "February " << day - 31 << "\n\n";
    else if(59 < day && day < 91) cout << "March " << day - 59 << "\n\n";
    else if(90 < day && day < 121) cout << "April " << day - 90 << "\n\n";
    else if(120 < day && day < 152) cout << "May " << day - 120 << "\n\n";
    else if(151 < day && day < 182) cout << "June " << day - 151 << "\n\n";
    else if(181 < day && day < 213) cout << "July " << day - 181 << "\n\n";
    else if(212 < day && day < 243) cout << "August " << day - 212 << "\n\n";
    else if(242 < day && day < 274) cout << "September " << day - 242 << "\n\n";
    else if(273 < day && day < 305) cout << "October " << day - 273 << "\n\n";
    else if(304 < day && day < 335) cout << "November " << day - 304 << "\n\n";
    else if(334 < day && day < 365) cout << "December " << day - 334 << "\n\n";
    
    
}
