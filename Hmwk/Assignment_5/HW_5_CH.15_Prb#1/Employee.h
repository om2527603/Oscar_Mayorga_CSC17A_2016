/* 
 * File:   Employee.h
 * Author: OscJos
 *
 * Created on May 25, 2016, 1:21 PM
 */

#ifndef EMPLOYEE_H
#define	EMPLOYEE_H

#include <string>
using namespace std;
class Employee{
    private:
        string empName;
        int empNum;
        int date;
    public:
        Employee()
        {empName = " "; empNum = 0; date = 0;}
        Employee(string n, int num, int d)
        {empName = n; empNum = num; date = d;}
        void setName(string n)
        {empName = n;}
        void setNum(int num)
        {empNum = num;}
        void setDate(int d)
        {date = d;}
        string getName(){return empName;}
        int getNum(){return empNum;}
        int getDate(){return date;}
};

#endif	/* EMPLOYEE_H */

