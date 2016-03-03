/* 
 * File:   main.cpp
 * Author: Oscar Mayorga 
 *
 * 
 * 
 * Created on February 29, 2016, 8:33 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //Declare Variables 
    int Sn;//This is the starting number of organisms.
    float Pi;//This is the rate at which the population o Orgsm are increasing 
    int Nd;//This is the time in days the orgms are increasing 
    
    //Ask the user to enter the Inputs: Sn, Pi, Nd. 
    cout<<"What is the starting number of Organisms: "<<endl;
    cin>>Sn;
    if(Sn <2){
        cout << "INVALID INPUT! Initial population must be higher than 2."<<endl;
        return 0;
    }
    cout<<"At what rate are the organisms increasing?(Enter amount in %)"<<endl;
    cin>>Pi; 
    if(Pi < 0){
        cout << "INVALID INPUT! Population increase must be greater than 0"<<endl;
        return 0;
    }
    cout<<"Enter the number of days the Organism is going to increase: "<<endl;
    cin>>Nd;
    
    if(Nd < 1){
        cout << "INVALID INPUT! Number of days they will multiply must be greater than 0"<<endl;
        return 0;
       
    } 
    
    //Calculations 
    Sn = Sn * (Pi * .01 + 1);
     
    //Outputs
    for(int i = 1; i < Nd + 1; i++){
    cout<<setprecision(1)<< fixed <<"The final population for day "<<i<<" is: "<<Sn<<endl;
    Sn = Sn * (Pi + 1);
    
    }
    
    return 0;
}

