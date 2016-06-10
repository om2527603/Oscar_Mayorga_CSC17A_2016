/* 
 * File:   main.cpp
 * Author: OscJos
 *
 * Created on June 4, 2016, 11:07 AM
 */


//System libraries
#include <iostream>
#include <cstdlib>

//user libraries
#include "Essay.h"
#include "GradedActivity.h"

using namespace std;

//execution begins here
int main(int argc, char** argv) {
    //declare variables
    float grammar, spelling, length, content;
    float score;
    //ask user for input
    cout<<"Enter the points for the grammar (0-30)"<<endl;
    cin>>grammar;
    while (grammar < 0 || grammar > 30)
    {
        cout<<"Invalid information try again"<<endl;
        cin>>grammar;
    }
    
    cout<<"Enter the points for the spelling (0-20)"<<endl;
    cin>>spelling;
    while (spelling < 0 || spelling > 20)
    {
        cout<<"Invalid information try again"<<endl;
        cin>>spelling;
    }
    
    cout<<"Enter the length points (0-20)"<<endl;
    cin>>length;
    while (length < 0 || length > 20)
    {
        cout<<"Invalid information try again"<<endl;
        cin>>length;
    }
    
    cout<<"Enter the points for the content (0-30)"<<endl;
    cin>>content;
    while (content < 0 || content > 30)
    {
        cout<<"Invalid information try again "<<endl;
        cin>>content;
    }
    
    //add all the points
    score = grammar + spelling + length + content;
    
    //use mutators
    
    Essay grades;
    GradedActivity graded;
    //mutators
    graded.setScore(score);
    grades.setGrammar(grammar);
    grades.setSpelling(spelling);
    grades.setLength(length);
    grades.setContent(content);
    
//    //get grades
//    if (score  < 57)
//    {
//        cout<<"The student got an F"<<endl;
//    }
//    
//    else if (score )
   
        //use accessors
    
    cout<<"Grammar: "<<grades.getGrammar();
    cout<<endl;
    cout<<"Spelling: "<<grades.getSpelling();
    cout<<endl;
    cout<<"Length: "<<grades.getLength();
    cout<<endl;
    cout<<"Content: "<<grades.getContent();
    cout<<endl;
    cout<<"Score: "<<graded.getScore();
    cout<<endl;
    cout<<"Grade: "<<graded.getLetterGrade()<<endl;
    
    return 0;
}


