/* 
 * File:   Info.cpp
 * Author: Oscar Mayorga 
 *
 */

#include <string>
//user Libraries
#include "Info.h"

Info::Info(string name, string addres, int age, int phoneNu)
{
    this->name = name;
    this->addres = addres;
    this->age = age;
    this->phoneNu = phoneNu;
}

Info::Info(const Info& orig)
{
    
}

Info::~Info() {
}