/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 *
 * Created on April 28, 2016, 10:39 PM
 */

//system libraries
#include <cstdlib>
#include <iostream>

//user libraries
#include "DayOfYear.h"

using namespace std;

int main(int argc, char** argv) {
    //Change Values to get different days.
    DayOfYear a(234), b(21), c(336);
    cout<<"enter"<<endl;
    a.print();
    b.print();
    c.print();
    
    
    return 0;
}
