/* 
 * File:   Templates.h
 * Author: Oscar Mayorga 
 * 
 */

#ifndef TEMPLATES_H
#define	TEMPLATES_H

template<class T>
class Game {
    
    private: 
            T* p;

    public:
            Game():p(0){}
            Game(T* t):p(t){}
            ~Game() {delete p;}
            Game<T>& operator=(const T&);
            operator bool(){return p;}
            T* operator->() const;
            T& operator*() const;
                
};


#endif	/* TEMPLATES_H */

