/* 
 * File:   main.cpp
 * Author: Oscar Mayorga 
 *
 * Created on April 25, 2016, 8:11 PM
 */

#include <cstdlib>
#include <iostream> 
#include "RetailItem.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
     RetailItem item1("Jacket", 12, 59.95);
    RetailItem item2("Designer Jeans", 40, 34.95);
    RetailItem item3("Shirt", 20, 24.95);
    cout << "           " << "Description: "<<"      Unit on Hand:"<<"        Price:"<<endl;
    cout << "Item #1    " <<item1.getDesc()<<"            "<< item1.getUnits()<<"                    "<<item1.getPrice();
    cout << endl;
    cout << "Item #2    " <<item2.getDesc()<<"    "<< item2.getUnits()<<"                    "<<item2.getPrice();
    cout << endl;
    cout << "Item #3    " <<item3.getDesc()<<"             "<< item3.getUnits()<<"                    "<<item3.getPrice();
    
    cout<<endl<<endl;

    return 0;
}

