/* 
 * File:   NumDays.cpp
 * Author: Oscar Mayorga
 *
 */


//Library
#include <cstdlib>
#include <iostream>

//User Library
#include "NumDays.h"
using namespace std;

void NumDays::setHour(int h){
    hour = h;
}

void NumDays::setDay(int d){
    days = d;
}

NumDays NumDays::operator++(){
    ++hour;
    return *this;
}

NumDays NumDays::operator++(int){
    NumDays temp(hour);
    hour++;
    return temp;
}

NumDays NumDays::operator--(){
    --hour;
    return *this;
}

NumDays NumDays::operator--(int){
    NumDays temp(hour);
    hour--;
    return temp;
}

NumDays NumDays::operator+(const NumDays &n){
    NumDays temp;
    temp.hour = hour + n.hour;
    return temp;
}

NumDays NumDays::operator-(const NumDays &n){
    NumDays temp;
    temp.hour = hour - n.hour;
    return temp;
}

void NumDays::convert(int h){
    days = h / 8.0;
    cout << days;
}

NumDays::NumDays(int h){
    hour = h;
}

NumDays::NumDays(){
    hour = 0;
}
