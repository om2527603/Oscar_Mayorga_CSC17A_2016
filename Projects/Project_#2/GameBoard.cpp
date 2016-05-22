/* 
 * File:   GameBoard.cpp
 * Author: OscJos
 *
 */

//Libraries
#include <cstdlib>
#include <iostream>
#include "gameBoard.h"

using namespace std;

/*
 * 
 */


// Function that creates the grid where the game will be play
void GameBoard::create(int row, int col) {
    // dinamically create a Minesweeper
    rows=row;
    cols = col;
    
    // Set up the rows
    data = new int *[rows];
    
    // Create each column
    for (int row = 0; row != rows; ++row)
        data[row] = new int [cols];
}



