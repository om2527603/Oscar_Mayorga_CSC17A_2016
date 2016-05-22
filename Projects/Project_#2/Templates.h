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

template<class T>
T* Game<T>::operator->() const {
    // only return p if it points to something
    if (p)
        return p;
    return 0;
    
}


template<class T>
T& Game<T>::operator*() const{
    if (p)
        return *p;
}


template<class T>
Game<T>& Game<T>::operator=(const T& rhs) {
    p = &rhs;
}


#endif	/* TEMPLATES_H */

