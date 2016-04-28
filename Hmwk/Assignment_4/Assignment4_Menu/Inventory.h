/* 
 * File:   Inventory.h
 * Author: Oscar Mayorga
 *
 * Created on April 25, 2016, 6:35 PM
 */

#ifndef INVENTORY_H
#define	INVENTORY_H

class Inventory{
    private:
        int itemNumber;
        int quantity;
        float cost;
        float totalCost;
    public:
        Inventory();
        Inventory(int,int,float);
        void setItemNumber(int);
        void setQuantity(int);
        void setCost(float);
        void setTotalCost(int,float);
        int getItemNumber(){return itemNumber;}
        int getQuantity(){return quantity;}
        float getCost(){return cost;}
        float getTotalCost(){return totalCost;}
};

#endif	/* INVENTORY_H */

