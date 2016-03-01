/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 *
 * Write a cout statement so the variable divSales is displayed in 
 * a field of 8 spaces, in fixed point notation, with a precision of 2 
 * decimal places. The decimal point should always be displayed.
 * 
 * Created on February 29, 2016, 5:56 PM
 */

//Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    //Enter Inputs
    string month;
    string year;
    float total = 0;
    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the year: ";
    cin >> year;
    cout << "Enter the total amount of Sales: ";
    cin >> total;
    //Set Presiccion 
    cout << fixed << showpoint << setprecision(2);
    //Declare Variables 
    float sales = total / 1.06;
    float sp = sales + .005;
    float totlTax = total - sp;
    float cntyTax = (totlTax * 1/3) + .005;
    float statTax = (totlTax * 2/3) + .005;

    //Set up Output
    cout << "Month: " << month << endl;
    cout << "--------------------" << endl;
    cout << "Total Collected      $ " << setw(9) << total << endl; 
    cout << "Sales:               $ " << setw(9) << sales << endl;
    cout << "County Sales Tax:    $ " << setw(9) << cntyTax << endl;
    cout << "State Sales Tax:     $ " << setw(9) << statTax << endl;
    cout << "Total Sales Tax:     $ " << setw(9) << totlTax << endl;

    return 0;
}

