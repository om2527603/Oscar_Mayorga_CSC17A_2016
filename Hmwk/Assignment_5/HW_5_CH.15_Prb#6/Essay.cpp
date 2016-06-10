/* 
 * File:   Essay.cpp
 * Author: Oscar Mayorga
 *
 */

#include "Essay.h"
#include "GradedActivity.h"
#include <iostream>

char GradedActivity::getLetterGrade() const
{
    char letterGrade;
    
    if (score > 89){
    letterGrade = 'A';
    }
    else if (score > 79){
    letterGrade = 'B';
    }
    else if (score > 69){
    letterGrade = 'C';
    }
    else if (score > 59){
    letterGrade = 'D';
    }
    else
    letterGrade = 'F';
    
}


Essay::Essay()
{
    grammar = 0.0;
    spelling = 0.0;
    length = 0.0;
    content = 0.0;
}

void Essay::setGrammar(float p)
{
    //set the limit of points for grammar
    if (p<0 || p>30)
    {
        cout<<"Invalid information"<<endl;
    }
    grammar = p;
}

void Essay::setSpelling(float s)
{
    if (s<0 || s>20)
    {
        cout<<"invalid information"<<endl;
    }
    spelling = s;
}

void Essay::setLength(float l)
{
    if (l<0 || l>20)
    {
        cout<<"invalid information"<<endl;
    }
    length = l;
}

void Essay::setContent(float c)
{
    if (c<0 || c>30)
    {
        cout<<"Invalid information"<<endl;
    }
    content = c;
}
