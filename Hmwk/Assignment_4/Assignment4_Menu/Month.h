/* 
 * File:   Month.h
 * Author: Oscar Mayorga
 *
 */

#ifndef MONTH_H
#define	MONTH_H
using namespace std;
class Month{
    private:
        string name;
        int monthNumber;
        static string monthy[13];
    public:
        Month();
        Month(string);
        Month(int);
        string getName(){return name;}
        int getMonthNum(){return monthNumber;}
        string setName(string);
        int setMonthNum(int);
        void print();
        Month operator++();
        Month operator++(int);
        Month operator--();
        Month operator--(int);
};

#endif	/* MONTH_H */