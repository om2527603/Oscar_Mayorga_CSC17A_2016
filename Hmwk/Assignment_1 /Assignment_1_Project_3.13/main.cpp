/* 
 * File:   main.cpp
 * Author: Oscar Mayorga 
 *
 * 
 * 
 * Created on February 29, 2016, 6:23 PM
 */

//Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;


int main(int argc, char** argv) {
//1 US Dollar equals 0.92 Euros 
//1 US Dollar equals 112.37 Japanese Yen
    
    //Declare Variables 
    const float YEN_PER_DOLLAR=112.37; 
    const float EUROS_PER_DOLLAR=0.92; 
    float yen; 
    float euros;
    float dollars; 
    
    //Ask user to Enter the amount of Dollars they want to convert 
    cout<< "Enter the Amout of U.S.A Dollars you want to convert: " <<endl;
    cin>>dollars;
    
    //Convert Dollars to YENS AND EUROS 
    yen=dollars*YEN_PER_DOLLAR;
    euros=dollars*EUROS_PER_DOLLAR; 
    
    //Output the results 
    cout<<"Total in yens: " <<setprecision(2)<<fixed<<yen <<endl;
    cout<<"Total in Euros: "<<setprecision(2)<<fixed<<euros<<endl;
    
    return 0;
}

