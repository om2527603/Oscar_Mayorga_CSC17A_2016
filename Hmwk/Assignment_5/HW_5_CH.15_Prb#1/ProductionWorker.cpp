/* 
 * File:   ProductionWorker.cpp
 * Author: OscJos
 *
 * Created on May 25, 2016, 1:24 PM
 */

//System Library
#include <cstdlib>
#include <iostream>

//User Library
#include "ProductionWorker.h"

using namespace std;
void ProductionWorker::setShift(int s){
    if(s<0||s>2){
        cout << "Invalid shift." << endl;
    }
    else{
        shift = s;
    }
}

void ProductionWorker::output(){
    cout << "Name: " << getName() << endl;
    cout << "Employee Number: " << getNum() << endl;
    cout << "Date of Hire: " << getDate() << endl;
    cout << "Shift: " << getShift() << endl;
    cout << "Rate of Pay: " << getRate() << endl;
}

