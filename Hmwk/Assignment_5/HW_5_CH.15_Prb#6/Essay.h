/* 
 * File:   Essay.h
 * Author: Oscar Mayorga
 *
 */

#ifndef ESSAY_H
#define	ESSAY_H
#include <string>
#include "GradedActivity.h"

using namespace std;

class Essay : GradedActivity
{
    private:
        float grammar;
        float spelling;
        float length;
        float content;
        
    public:
        Essay();
        //mutators
        void setGrammar(float);
        void setSpelling(float);
        void setLength(float);
        void setContent(float);
        //accessors
        float getGrammar() const {return grammar;}
        float getSpelling() const {return spelling;}
        float getLength() const {return length;}
        float getContent() const {return content;}
        //other
        float getScore();
        char getLetterGrade();
};


#endif	/* ESSAY_H */