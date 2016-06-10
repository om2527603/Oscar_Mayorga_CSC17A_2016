/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 *
 * Created on May 25, 2016, 11:37 AM
 */

//System Library
#include <cstdlib>
#include <iostream>

//User Library
#include "ProductionWorker.h"


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    ProductionWorker Josue;
    string name;
    int num,date,shift;
    float rate;
    
    //Ask User to Enter Employee Information
    cout<< "Please Enter the employee's first name: "<<endl;
    cout<< "(Enter First and Last name using no SPACES, For Example: JosuePolanco): ";
    cin>> name;
    cout<<endl;
    
    Josue.setName(name);
    cout<< "Enter " << Josue.getName() << "'s employee number: ";
    cin>> num;
    cout<<endl;
    
    cout<< "Enter " << Josue.getName() << "'s date of hire: "<<endl;
    cout<<"(Enter as just numbers: if is June 6 1990 then Enter:06061990)"<<endl;
    cin>> date;
    cout<<endl;
    
    cout<< "Enter " << Josue.getName() << "'s shift number (1 or 2): ";
    cin>> shift;
    cout<< "Enter " << Josue.getName() << "'s rate of pay: ";
    cin>> rate;
    cout<<endl;
    
    ProductionWorker jones(shift,rate,name,num,shift);
    cout<< endl;
    jones.output();
    cout<<endl<<endl<<endl;

    return 0;
}

