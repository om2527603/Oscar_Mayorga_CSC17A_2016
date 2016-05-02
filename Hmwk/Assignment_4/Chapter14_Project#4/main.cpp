/* 
 * File:   main.cpp
 * Author: Oscar Mayorga 
 *
 * Created on May 2, 2016, 1:29 PM
 */

#include <cstdlib>
#include <iostream>

//User Library 
#include "NumDays.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int hours;
    cout << "Please Enter how many hours you worked this week: ";
    cin >> hours;
    NumDays tri(hours);
    cout << "Your hours converted into days are: ";
    tri.convert(hours);
    
    cout<<endl<<endl<<endl;

    return 0;
}

