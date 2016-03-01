/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 *
 *Write a program that converts Celsius temperatures to Fahrenheit temperatures. The formula is
 *  F = 9/5C + 32
 *  F is the Fahrenheit temperature, and C is the Celsius temperature.
 * 
 * Created on February 29, 2016, 5:56 PM
 */

//Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
//declare Celsius and Fahrenheit
    float celsius; 
    float frnheit;
//prompt user to enter temperature
    cout << "Enter a temperature in Celsius: ";
    cin >> celsius;
    
//convert Celsius to Fahrenheit 
    frnheit = static_cast<float>(9)/5 * celsius + 32  ;
    
//Output results
    cout << "The temperature in Fahrenheit is " << setprecision(2) << fixed 
            << frnheit << " degrees." << endl << endl;       
    
    
    return 0;
}

