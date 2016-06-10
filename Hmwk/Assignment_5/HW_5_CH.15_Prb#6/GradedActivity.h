/* 
 * File:   GradedActivity.h
 * Author: Oscar Mayorga
 *
 */

#ifndef GRADEDACTIVITY_H
#define	GRADEDACTIVITY_H

class GradedActivity
 {
     protected:
         float score; // To hold the numeric score
         
     public:
         // Default constructor
         GradedActivity()
         { score = 0.0; }

         // Constructor
         GradedActivity(float s)
         { score = s; }

         // Mutator function
         void setScore(float s)
         { score = s; }

         // Accessor functions
        virtual float getScore() const
         { return score; }

         virtual char getLetterGrade() const;
 };


#endif	/* GRADEDACTIVITY_H */