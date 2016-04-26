/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 *
 * Created on April 25, 2016, 6:06 PM
 */

//System Libraries
#include <iostream>

using namespace std;
//User Libraries
#include "Inventory.h"


//Function Prototypes


//Execution begins here
int main(int argc, char** argv) {
    
    int itemNumber;
    int quantity;
    float cost;
    cout << "Please  Enter the item number: ";
    cin >> itemNumber;
    cout << "Please Enter the quantity of the item: ";
    cin >> quantity;
    cout << "Please Enter the cost of the item: ";
    cin >> cost;
    Inventory ralphs(itemNumber,quantity,cost);
    cout << " " << endl;
    
    cout << "Item Number: " << ralphs.getItemNumber() << endl;
    cout << "Quantity: " << ralphs.getQuantity() << endl;
    cout << "Cost: " << ralphs.getCost() << endl;
    cout << "Total cost: " << ralphs.getTotalCost() << endl;  
    
    cout<<endl<<endl<<endl;
}
    
