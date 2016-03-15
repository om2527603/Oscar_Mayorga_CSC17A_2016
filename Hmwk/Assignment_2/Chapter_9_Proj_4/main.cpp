/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 *
 * Created on March 15, 2016, 11:48 AM
 */
// User Libraries 
#include <cstdlib>
#include <iostream>
#include <cstddef>
#include <ctime>

using namespace std;


int main(int argc, char** argv) {
    
    int doSomething(int *, int *);
    
    int *x,*y;
    int x1,y1;
    x = &x1;
    y = &y1;
    
    //Ask User to enter the two desired numbers
    cout << "Enter a number x: "<<endl;
    cin >> x1;
    cout << "Enter another number y: "<<endl;
    cin >> y1;
    
    //Output the result
    doSomething(x,y);
    cout << "Your numbers multiplied by 10 and added together are: " << endl;
    cout<< *x+*y << endl;
    
}
int doSomething(int *x, int *y){
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
   
    return *x+*y;
}

