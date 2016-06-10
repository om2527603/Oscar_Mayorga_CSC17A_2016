/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 *
 * Created on June 3, 2016, 12:31 AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//User Libraries
#include "employee.h"
#include "productionworker.h"
#include "teamleader.h"


//Execution Starts Here
int main(int argc, char** argv) {
    //Variable Declaration
    
    //Create Employee
    ProductionWorker worker("Eduardo Rangel", 101707, "09/16/15", 2, 21.50);
    
    //Display Employee Information
    cout<<setprecision(2)<<showpoint<<fixed;
    cout<<"Employee Name:         "<<worker.getName()<<endl;
    cout<<"Employee Number:       "<<worker.getNum()<<endl;
    cout<<"Employee's Hire Date:  "<<worker.getHire()<<endl;
    cout<<"Employee's Shift:      "<<worker.getShift()<<endl;
    cout<<"Employee's Pay Rate:   $"<<worker.getPayRate()<<endl;
    cout<<endl<<endl;
    
    //Create Team Leader
    TeamLeader lead("Big Boss", 101000, "01/01/1900", 2, 35.00, 200.00, 30, 9);
    cout<<setprecision(2)<<showpoint<<fixed;
    cout<<"--> Shift Team Leader <--"<<endl;
    cout<<"Employee Name:           "<<lead.getName()<<endl;
    cout<<"Employee's Number:       "<<lead.getNum()<<endl;
    cout<<"Employee's Hire Date:    "<<lead.getHire()<<endl;
    cout<<"Employee's Shift:        "<<lead.getShift()<<endl;
    cout<<"Employee's Pay Rate:     $"<<lead.getPayRate()<<endl;
    cout<<"Team Lead Monthly Bonus: $"<<lead.getMoBonus()<<endl;
    cout<<"Required Training Hours: "<<lead.getReqHours()<<endl;
    cout<<"Attended Training Hours: "<<lead.getAttHours()<<endl;
    
    //Exit Stage Right
    return 0;
}

