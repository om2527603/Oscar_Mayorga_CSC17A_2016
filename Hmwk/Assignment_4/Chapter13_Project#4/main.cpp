/* 
 * File:   main.cpp
 * Author: Oscar Mayorga 
 *
 * Created on April 24, 2016, 10:52 PM
 */

//System Libraries
#include <iostream>

using namespace std;
//User Libraries
#include "Info.h"

    //execution begins here
int main(int argc, char** argv) {
    
    //Declare variables
    Info a[3] = {Info("Oscar Mayorga", "4361 house ave.", 20, 1234567),
    Info("Josue Polanco", "756 Mission Blvd.", 21, 8765432),
    Info("Efer Monterroza", "8321 California st.", 32, 3332245)};
    
    //print names
    for(int i = 0; i< 3; i++){
        cout << "Name: " << a[i].getName() << "\n";
        cout << "Address: " << a[i].getAdd() << "\n";
        cout << "Age: " << a[i].getAge() << "\n";
        cout << "Phone Number: " << a[i].getPhne() << "\n";
    }
    
    
    
    

    return 0;
}