/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 *
 * Created on May 2, 2016, 9:40 PM
 */

#include <iostream>
#include <string>

using namespace std;
#include "ParkedCar.h"
//global constants

//function prototypes
void ticketC();
//execution begins here
int main(int argc, char** argv) {
    //declare variables
    string make, color;
    int licNum,model;
    int hour = 60;
    float time;
    string name;
    int badgeNum;
    //call the class
    ParkedCar carInfo;
    
    //prompt user for input 
    cout<<"Please enter the following information \n";
    cout<<"Enter the make of the car"<<endl;
    cin>>make;
    
    cout<<"Enter the color of the car"<<endl;
    cin>>color;
    
    cout<<"Enter the model"<<endl;
    cin>>model;
    
    cout<<"Enter the license number"<<endl;
    cin>>licNum;
    
    cout<<"Enter the number of minutes"<<endl;
    cin>>time;
    //call all the setter functions
    carInfo.setColor(color);
    carInfo.setMake(make);
    carInfo.setModel(model);
    carInfo.setLicNum(licNum);
    carInfo.setTime(time);
    
    cout<<"The make of the car is: "<<carInfo.getMake()<<endl;  
    cout<<"The color of the car is: "<<carInfo.getColor()<<endl;
    cout<<"The model of the car is: "<<carInfo.getModel()<<endl;
    cout<<"The license number is: "<<carInfo.getLicNum()<<endl;
    cout<<"The time is: "<<carInfo.getTime()<<endl;
    cout<<endl;
    
    cout<<"Parking Meter object"<<endl;
    ParkingMeter minutes;
    minutes.setMinutes(time);
    
    cout<<"The n umber of minutes is: "<<minutes.getMinutes()<<endl;
    
    //ParkingTicket object
    ParkingTicket ticket;
    
    cout<<"~~~~~~~~Car Information for the ticket~~~~~~~~~~"<<endl;
    cout<<"The make of the car is: "<<carInfo.getMake()<<endl;  
    cout<<"The color of the car is: "<<carInfo.getColor()<<endl;
    cout<<"The model of the car is: "<<carInfo.getModel()<<endl;
    cout<<"The license number is: "<<carInfo.getLicNum()<<endl;
    cout<<"The time is: "<<carInfo.getTime()<<endl;
    
    if (time > hour*time)
    {
        time + 25;
    }
    
    PoliceOfficer police;
    
    cout<<"Enter the name of the police officer"<<endl;
    cin>>name;
    
    cout<<"Enter the badge number of the police officer"<<endl;
    cin>>badgeNum;
    
    police.setName(name);
    police.setBadge(badgeNum);
    
    
    cout<<"Police information: "<<endl;
    cout<<"Name: "<<police.getName()<<endl;
    cout<<"Badge Number: "<<police.getBadge()<<endl;    
    
    
    return 0;
}
