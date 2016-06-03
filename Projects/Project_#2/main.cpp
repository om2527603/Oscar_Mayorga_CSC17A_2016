/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 *
 * Created on May 11, 2016, 11:18 AM
 */

///System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iomanip>

//user libraries
#include "Minesweeper.h"
#include "Templates.h"

using namespace std;


//function prototypes
void GameRules();

//execution begins here
int main(int argc, const char * argv[]) {
    
    //call function here to show the game rules
    GameRules();
    
    //Cast for random time seed generator
    srand(static_cast<unsigned int>(time(0)));

    Game<GameBoard> m(new Minesweeper(10,10));
    
    //throw the exeption
    try {
        m->setUpG();
    }
    
    //error output
    catch (Minesweeper::wrong) {
        cout << "Size was invalid\n";
    }
    catch (const char* s) {
        cout << s << endl;
    }
    
    return 0;
    
    //Exit stage right
}

//function to output the rules at the beginning of the game
void GameRules()

{
  cout<<"********** Minesweeper Rules **********"<<endl;
    cout<<"--- Please read the Rules carefully; GOODLUCK and ENJOY!!"<<endl;
    cout<<"Welcome to minesweeper, first you are going to enter your username,"<<endl;
    cout<<"then you would have to choose the difficulty of the game."<<endl;
    cout<<"After you will have to choose how big the game board would be, "<<endl;
    cout<<"you can enter choose from 1 X 1 to 10 X 10 (Rows X Columns). "<<endl;
    cout<<"Then you will enter coordinates that would uncover mines,"<<endl;
    cout<<"You would choose coordinates Until you find a mine, "<<endl;
    cout<<"that would end the game and you would loose the game"<<endl;
     cout<<""<<endl;
  
}
