/* 
 * File:   main.cpp
 * Author: Oscar Mayorga 
 *
 * Created on February 29, 2016, 7:30 PM
 */

//Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables 
    int month; 
    int year; 
    
    //Ask the user to enter the month
    cout<<"Enter the number that correspond to the month you intend to determine(1-12): "<<endl;
    cin>>month; 
    
    //Ask the user to Enter the year
    cout<<"enter the year: "<<endl;
    cin>>year; 
    
    //Determine the month entered that has 31 days
    if (month==1|| month==3 || month==5 || month==7 || month==8
            || month==10 || month==12) { 
        cout<<"The month you entered has 31 days"<<endl;
    }
    
    //Determine the month entered that has 30 days
    if (month==4 || month==6 || month==9 || month==11) {
        cout<<"The month you entered has 30 days"<<endl;
    }
    
    //Determine if the month has 28 or 29 days for the 2nd month(February)
    
    bool leapYr(int year); 
    if ((year % 100 == 0 && year % 400 == 0) 
         || (year % 100 != 0 && year % 400 == 0)){ 
        return true;
    }
    else {
        return false;
    }
    
    //not leapYr
    if (month == 2 && leapYr(year) == true) {
        cout<<"The month you entered has 28 days"<<endl;
    }
    //leapYr
    if (month == 2 && leapYr(year) == false) { 
        cout<<"The month you entered has 29 days"<<endl;
    }

    return 0;
}

