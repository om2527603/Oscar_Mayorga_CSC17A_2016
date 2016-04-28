/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 *
 * Created on April 27, 2016, 9:17 PM
 */

#include <iostream>
#include "Numbers.h"
using namespace std;

int main( int argc, const char* argv[] ){
	//declare variables
	Numbers user;		//variable for users input to be translated

	int num;
	do{
		//prompt for user input
		cout<<"Enter a number to be translated into a phrase"<<endl;
                cout<<"(Number Must Be < 9999):"<<endl;
		cin>>num;
	}while(num>9999 || num < 0);

	user.setNum(num);
	user.print();
}