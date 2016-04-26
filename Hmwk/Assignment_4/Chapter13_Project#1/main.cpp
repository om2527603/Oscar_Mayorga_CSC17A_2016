/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 *
 * Created on April 24, 2016, 9:05 PM
 */

//System libraries
#include <iostream>

using namespace std;
//User Libraries
#include "Date.h"

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //declare variables
     int month, day, year;
    
     //do-while loop to loop until the user enters all the information needed
    do{
    //prompt user for input
    cout << "Enter the month (1-12)\n\n";
    cin >> month;
    }while(!cin || month < 1 || month > 12);
    do{
    cout << "Enter the day (1-31)\n\n";
    cin >> day;
    }while(!cin || day < 1 || day > 31);
    do{
    cout << "Enter the year (no negative numbers allowed)\n\n";
    cin >> year;
    }while(!cin || year < 1);
    //call variables
    Date theDate(month, day, year);
    cout << endl;
    
    //call the classes
    cout<<"The date is: ";
    theDate.prntDay();
    cout<<"The date is: ";
    theDate.prntMnt();
    cout<<"The date is: ";
    theDate.prntNum();
    
    
    //exit stage right
    
    return 0;
}
