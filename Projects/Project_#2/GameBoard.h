/* 
 * File:   GameBoard.h
 * Author: Oscar Mayorga 
 *
 * Created on May 11, 2016, 9:35 PM
 */

#ifndef GAMEBOARD_H
#define	GAMEBOARD_H

#include "Abstracts.h"
 

// Base class for the games

class GameBoard: public Abstracts{
private:
    
protected:
    
    int **data;
    int rows;
    int cols;
    virtual void create(int, int);

public:
    
    //If user tries to set negative rows or columns
    class wrong{};
    
    GameBoard(int rows, int cols) {create(rows,cols);clear();}
    virtual ~GameBoard(){destroy();}
    virtual void destroy();
    virtual void setRows(int);
    virtual void setCols(int);
    virtual int getRows() const {return rows;}
    virtual int getCols() const {return cols;}
    virtual void clear();
    //setup the game
    virtual void setUpG();
    //load the game
    virtual void loadGame();
    //Print
    virtual void print() const;
    int* operator[](int index) { return data[index];}
    int* operator[](int index) const { return data[index];}
};

#endif	/* GAMEBOARD_H */

