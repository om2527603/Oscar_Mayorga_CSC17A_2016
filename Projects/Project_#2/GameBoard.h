/* 
 * File:   GameBoard.h
 * Author: Oscar Mayorga 
 *
 * Created on May 11, 2016, 9:35 PM
 */

#ifndef GAMEBOARD_H
#define	GAMEBOARD_H

class GameBoard {
    
protected:
    int**data;
    int rows;
    int cols;
    virtual void create (int, int ); 
    
    
};

#endif	/* GAMEBOARD_H */

