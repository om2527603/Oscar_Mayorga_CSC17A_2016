/* 
 * File:   main.cpp
 * Author: Oscar Mayorga 
 *
 * Created on March 2, 2016, 8:43 PM
 */

//Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

/*
 * 
 */

   
//User Libraries

//Global Constants
float celsius(int fTemp);

int main(int argc, char** argv) {
    
    //Declare variables
    float temp;
    //Use the for loop to output the table of temperatures from 0 to 20
    for (int i=0;i <=20;i++){
        
        cout <<"Temperature in Fahrenheit "<< i << "\t" <<" to Celsius "<< celsius(i) << endl;
    }

    return 0;
}

float celsius(int fTemp){
    
    return (5.0/9.0)*((float)fTemp - 32.0);
    
} 

