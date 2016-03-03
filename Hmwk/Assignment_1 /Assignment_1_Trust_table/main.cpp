/* 
 * File:   main.cpp
 * Author: Oscar Mayorga 
 *
 * Created on March 1, 2016, 12:16 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
            cout<<"X   Y   !X    !Y  X&&Y   X||Y   X^Y   X^Y^Y  X^Y^X    "
                    "!(X||Y)   !X&&!Y   !(X&&Y)  !X||!Y"<<endl;

    
    fstream infile;
    infile.open("table.txt");
    for(int i = 0; i < 13; i++)
    {
        string fromFile = "";
        infile >> fromFile;
        cout << fromFile;
        ((fromFile == "!X||!Y") ? cout << endl : cout << " | ");
    }
    infile.close();
    cout << setw(90) << setfill('-') << " ";
    cout << endl;


    for(int i = 0; i <= 3; i++)
    {
        bool x = 1;
        bool y = 1;

        //iterate through possible combos
        if(i == 1)
                y = 0;
        else if(i == 2)
                x = 0;
        else if(i == 3)
        {
                x = 0;
                y = 0;
        }
      
       
        //Print T or F based on truth
        ((x) ? cout << "T" : cout << "F");
        cout << setw(4) << setfill(' ');
        ((y) ? cout << "T" : cout << "F");
        cout << setw(5);
        ((!x) ? cout << "T" : cout << "F");
        cout << setw(5);
        ((!y) ? cout << "T" : cout << "F");
        cout << setw(5);
        ((x&&y) ? cout << "T" : cout << "F");
        cout << setw(7);
        ((x||y) ? cout << "T" : cout << "F");
        cout << setw(7);
        ((x^y) ? cout << "T" : cout << "F");
        cout << setw(7);
        ((x^y^y) ? cout << "T" : cout << "F");
        cout << setw(8);
        ((x^y^x) ? cout << "T" : cout << "F");
        cout << setw(9);
        ((!(x||y)) ? cout << "T" : cout << "F");
        cout << setw(9);
        ((!x&&!y) ? cout << "T" : cout << "F");
        cout << setw(10);
        ((!(x&&y)) ? cout << "T" : cout << "F");
        cout << setw(9);
        ((!x||!y) ? cout << "T" : cout << "F");
        cout << endl;
    }

    return 0;
}

