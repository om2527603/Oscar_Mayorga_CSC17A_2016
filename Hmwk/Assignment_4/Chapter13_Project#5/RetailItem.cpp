/* 
 * File:   RetailItem.cpp
 * Author: OscJos
 *
 * Created on April 25, 2016, 9:00 PM
 */

#include <cstdlib>
#include "RetailItem.h"
using namespace std;
RetailItem::RetailItem(string d, int u, float p){
    description = d;
    unitsOnHand = u;
    price = p;
}

 void RetailItem::setDesc(string d){
     description = d;
 }
 
 void RetailItem::setUnits(int u){
     unitsOnHand = u;
 }
 
 void RetailItem::setPrice(float p){
     price = p;
 }
