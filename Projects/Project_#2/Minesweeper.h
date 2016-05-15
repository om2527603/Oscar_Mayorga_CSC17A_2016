/* 
 * File:   Minesweeper.h
 * Author: Oscar Mayorga 
 *
 * Created on May 11, 2016, 9:13 PM
 */

#ifndef MINESWEEPER_H
#define	MINESWEEPER_H

//System Library 
#include <string> 
//User Library 
#include "GameBoard.h"

//This class holds the minesweeper 
class Minesweeper: 

public GameBoard {
    
    private: 
        // Determines how many mines to set
             enum Difficulty {EASY, NORMAL, HARD};
        // Flags representing various square possibilities
             enum Squares {EMPTY=10, MINE, CLEAR, LOSER};
             
        // number of mines
        int mines;
        
        void create(int, int);
    
    //Destroy
        
        Minesweeper::Difficulty intToDiff(char);
        bool isValidIn() const;
        int nMines(Minesweeper::Difficulty) const;
        void setMines();
        void setSquares();
        int nAdjacent(int, int, int = Minesweeper::MINE) const;
        bool isClear(int, int) const;
        void setPerim();
        void showZeros(int, int);
        bool hasWon() const;
        bool cont(int, int);
        void prompt (); 
        char *userName();
public: 
    //constructors 
    Minesweeper(int row, int col):GameBoard(row, col)
                                {clear();}
    
    
// Main Game Functions
    void setRows(int);
    void setCols(int);
    int getRows() const {return rows;}
    int getCols() const {return cols;}
    void print() const;
    void prntObscr() const;
    void setUpG();//set up the game
    void playGame();
    void clear();
    void saveGame();
    void rules();
    void loadGame();
    int getMines() const { return mines;}
    
    Minesweeper& operator=(const Minesweeper&);
};


#endif	/* MINESWEEPER_H */

