/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 *
 * Created on May 2, 2016, 11:42 AM
 */

#include <cstdlib>
#include <iostream>

//User Library
#include "Month.h"

using namespace std;

int main(int argc, char** argv) {
    
    string month;
    int monthNum;
    cout << "Please type in a month: ";
    cin >> month;
    Month kyle(month);
    kyle.print();
    cout << endl;
    cout << "The previous month is: ";
    kyle--;
    kyle.print();
    cout << endl;
    cout << "Please enter a month 1-12: ";
    cin >> monthNum;
    Month nick(monthNum);
    nick.print();
    cout << endl;
    cout << "The next month is: ";
    nick++;
    nick.print();
    
    cout<<endl<<endl<<endl;

    return 0;
}

