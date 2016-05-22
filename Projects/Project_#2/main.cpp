/* 
 * File:   main.cpp
 * Author: OscJos
 *
 * Created on May 11, 2016, 11:18 AM
 */

//Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iomanip>

//user libraries 
#include "Templates.h"
#include "Minesweeper.h"

//function prototypes
void GameRules();

using namespace std;

int main(int argc, char** argv) {
    //Call function to output the Game's Rules. 
    GameRules();
    
    //Seed Genarator 
    srand(static_cast<unsigned int>(time(0)));
    Game<GameBoard> m(new Minesweeper(10,10));
    
    //Exception 
    try {
        m->setUpG();
    }
    
    //Error
     catch (Minesweeper::wrong) {
        cout << "Size was invalid\n";
    }
    catch (const char* s) {
        cout << s << endl;
    }
    
    
    return 0;
}

//Function outputting the rules at the beginning of the Game
void GameRules() {
    
    cout<<"********** Minesweeper Rules **********"<<endl;
    cout<<"--- Please read the Rules carefully; GOODLUCK and ENJOY!!"<<endl;
    
                  }
