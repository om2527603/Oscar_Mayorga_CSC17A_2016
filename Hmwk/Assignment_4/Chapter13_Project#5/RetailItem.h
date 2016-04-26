/* 
 * File:   RetailItem.h
 * Author: OscJos
 *
 * Created on April 25, 2016, 8:39 PM
 */

#ifndef RETAILITEM_H
#define	RETAILITEM_H
using namespace std;
#include <string>
class RetailItem{
private:
    string description;
    int unitsOnHand;
    float price;
public:
    RetailItem(string,int,float);
    string getDesc(){return description;}
    int getUnits(){return unitsOnHand;}
    float getPrice(){return price;}
    void setDesc(string);
    void setUnits(int);
    void setPrice(float);
};

#endif	/* RETAILITEM_H */