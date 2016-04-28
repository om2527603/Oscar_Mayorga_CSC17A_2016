/* 
 * File:   Date.h
 * Author: Oscar Mayorga
 *
 */

#ifndef DATE_H
#define	DATE_H

class Date
{
private:
    int month;
    int day;
    int year;
    
public:
    Date(int, int, int);
    Date(const Date& orig);
    void prntNum();//print numerical date
    void prntMnt();//Print month and year
    void prntDay();//print day
    virtual ~Date();//delete
};


#endif	/* DATE_H */