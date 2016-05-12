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
class Minesweeper: public GameBoard {
    
//Destroy
    
    void prompt (); 
    
// Main Game Functions
    void setRows (int);
    void setCols (int); 
    void getRows () const {return rows;}
    void getCols () const {return cols;}
    void setUpG (); 
 
};


#endif	/* MINESWEEPER_H */

