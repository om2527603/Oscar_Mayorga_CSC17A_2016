/* 
 * File:   MInesweeper.cpp
 * Author: Oscar Mayorga
 *
 */

//System Libraries
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iomanip>

#include "Minesweeper.h"

//User Library


using namespace std;

/*
 * 
 */
void Minesweeper::create (int row, int col) {
    
//Create Minesweeper dinamically 
    rows=row; 
     cols = col;
    
    // Set up the rows
    data = new int *[rows];
    
    // Create each column
    for (int row = 0; row != rows; ++row)
        data[row] = new int [cols];
}

void Minesweeper::setRows (int row) {
    
    if ( row <= 0 )
        throw wrong();
    rows = row;
    
}

void Minesweeper::setCols (int col) {
    
    if (col <= 0 )
        throw wrong();
    cols = col;
    
}

void Minesweeper::prompt() {
    
     cout << "Please Enter the number of rows(1-10)\n"<<endl;
    cout<<"Area will be rows x rows in size: "<<endl;
    int row;
    cin >> row;
    // invalid sizes
    if (row > 10 || row < 1)
        throw wrong();
    rows = row;
    cols = row;
    char diff;
    cout << "Enter the difficulty (make sure is a lowercase letter)\n"
    "e = Easy\t n = Normal\t h = Hard\n";
    cin >> diff;
    mines = nMines(intToDiff(diff));
    
}

//Set Up GAME
void Minesweeper::setUpG () {
    
     // Get the user name
    char *player = userName();
    // ask user if they want to play
    cout << "Hello " << player
         << ", Would you like to play minesweeper?"<<endl;
           cout<< "Enter 'y' if yes or enter 'n' if not"<<endl;
    char ans;
    cin >> ans;
    
    // play if answer is yes
    if (ans == 'y' || ans == 'Y') {
        cout << "would you like load previous settings?"<<endl;
        cout<<"(enter 'y' if yes enter 'n' if not)"<<endl;
        char ans2;
        cin >> ans2;
        if ( ans2 == 'y' || ans2 == 'Y') {
            loadGame();
        }
        else
            
    // Get game information from user
        prompt();
    if (isValidIn()) {
        while (ans == 'y' || ans == 'Y' && isValidIn()) {
            playGame();
            cout << endl;
            cin.ignore();
            cout << "Would you like to play again " << player << "? ";
            cin >> ans;
            cout << endl;
            
    // Get new data only if user wants to continue
    if (ans =='y' || ans == 'Y') {
        prompt();
        clear();
            }
        }
    }
        
    // Information was invalid
    else
       throw wrong();
    }
    
    cout << "Game is Over.\n";
    
    // Cleanup
    delete player;
    
    cout << endl;
    cout << "Goodbye"<<endl;
    
}

// Play a game of minesweeper
// User inputs how many rows and columns and the difficulty
void Minesweeper::playGame() {
    setMines();
    prntObscr();
    int row, col;
    int turn = 0;
    int initialTime = static_cast<unsigned int>(time(0));
    do {
        
        int begTime = static_cast<unsigned int>(time(0));
        cout << "Turn: " << turn++ << endl;
        // Select the row
        do {
            cout << "Enter -0 to save the settings and exit"<<endl;
            cout << "Enter the row " << 0 << "-" << rows-1 << ": "<<endl;
            cin >> row;
            
        // User wants to save the game
        // save the game and exit
        if ( row == -0) {
            saveGame();
            return;
        }
            
            // check bounds
        } while (row < 0 || row >= rows);
        
        // Select the column
        do {
            cout << "Enter the column " << 0 << "-" << cols-1 << ": ";
            cin >> col;
            
            // check bounds
        } while (col < 0 || col >= cols);
        
        // endTime
        int endTime = static_cast<unsigned int>(time(0));
        cout << "Turn took: " << endTime - begTime << " seconds.\n";
        cout << endl;
    } while (cont(row, col) && !hasWon());
    
    // Prepare to print completed Minesweeper
    if (hasWon()) {
        cout << "You win"<<endl;
        setSquares();
    }
    else{
        cout << "You have, lost"<<endl;
        setSquares();
        data[row][col]= Minesweeper::LOSER;
    }

    int finalTime = static_cast<unsigned int>(time(0));
    cout << "Game was completed in " << finalTime - initialTime << " seconds."<<endl;
    
    // Print the complete Minesweeper
    print();
}
