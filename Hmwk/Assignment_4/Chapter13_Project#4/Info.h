/* 
 * File:   Info.h
 * Author: OscJos
 *
 * Created on April 24, 2016, 10:13 PM
 */

#ifndef INFO_H
#define	INFO_H
#include <string>

using namespace std;

class Info
{
    //declare the private data
private:
  string name;  
  string addres;
  int age;
  int phoneNu;//phone number
  
  
  //declare the public data  
public:
    Info(string, string, int, int);
    Info(const Info& orig);
    string getName(){return name;}
    string getAdd(){return addres;}
    int getAge(){return age;}
    int getPhne(){return phoneNu;}
    virtual ~Info();
};

#endif	/* INFO_H */

