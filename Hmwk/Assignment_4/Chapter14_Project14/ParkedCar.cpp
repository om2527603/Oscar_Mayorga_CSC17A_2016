/* 
 * File:   ParkedCar.cpp
 * Author: Oscar Mayorga
 *
 */

#include <cstdlib>
#include <iostream>

#include "ParkedCar.h"

ParkedCar::ParkedCar()
{

}

void ParkedCar::setColor(string c)
{
    color = c;
}

void ParkedCar::setMake(string m)
{
    make = m;
}

void ParkedCar::setModel(int modl)
{
   model = modl; 
}


void ParkedCar::setLicNum(int l)
{
   licNum = l; 
}

void ParkedCar::setTime(float t)
{
  time = t;  
}

ParkedCar::~ParkedCar()
{
    
}


//parking simulator
ParkingMeter::ParkingMeter()
{
    
}


void ParkingMeter::setMinutes(int m)
{
    minNum = m;
}

ParkingMeter::~ParkingMeter()
{
    
}
//parkingticket object

ParkingTicket::ParkingTicket()
{
    fine = 0;
    additional =0;
}


void ParkingTicket::setFine(int f)
{
    fine = f;
}

void ParkingTicket::setAdditional(int a)
{
    additional = a;
}

ParkingTicket::~ParkingTicket()
{
    
}



//police officer object

PoliceOfficer::PoliceOfficer()
{
    
}


void PoliceOfficer::setBadge(int p)
{
    badgeNum = p;
}

void PoliceOfficer::setName(string n)
{
    name = n;
}
PoliceOfficer::~PoliceOfficer()
{
    
}

