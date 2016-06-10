/* 
 * File:   miltime.cpp
 * Author: Oscar Mayorga
 *
 */

#include <cstdlib>

#include "miltime.h"

void MilTime::setTime(int mH, int mS){
    
    milHour=mH;
    milSeconds=mS;
    hour=(milHour/100);
    min=milHour%100;
    sec=milSeconds;
    
    
}

