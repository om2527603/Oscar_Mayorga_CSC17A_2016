/* 
 * File:   NumDays.h
 * Author: Oscar Mayorga
 *
 */

#ifndef NUMDAYS_H
#define	NUMDAYS_H

class NumDays{
    private:
        int hour;
        float days;
    public:
        NumDays(int);
        NumDays();
        void setHour(int);
        void setDay(int);
        int getHours(){return hour;}
        int getDays(){return days;}
        NumDays operator++();
        NumDays operator++(int);
        NumDays operator--();
        NumDays operator--(int);
        NumDays operator+(const NumDays &);
        NumDays operator-(const NumDays &);
        void convert(int);
};

#endif	/* NUMDAYS_H */