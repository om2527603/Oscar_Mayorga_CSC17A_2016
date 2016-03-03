/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 *
 * Created on March 2, 2016, 10:27 PM
 */

//Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main(int argc, char** argv) 
{
    const int SIZE = 20;

    string names[SIZE] ={"Collins, Bill", "Smith, Bart", "Allen, Jim",
                                "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                                "Taylor, Terri", "Johnson, Jill",
                                "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
                                "James, Jean", "Weaver, Jim", "Pore, Bob",
                                "Rutherford, Greg", "Javens, Renee",
                                "Harrison, Rose", "Setzer, Cathy",
                                "Pike, Gordon", "Holland, Beth" };
    
    int x = sizeof(names)/sizeof(names[0]);
    sort(names, names+x);
    
    for(int i = 0; i < x; i++){
        cout << *(names + i) << " ";
    }
    string name = "Collins, Bill";  //Chance string to any name in the array 
                                    //Above to test and find position.
    
   // cout << "Enter a name: ";
   // getline(cin, name, '\n'); // Makes sure you get the whole name, start until \n
    cout << endl;
    cout << "We will be searching for: " << name << endl;
    int pos=binary_search(names, SIZE, name);
    cout << endl;
    if(pos!=-1){
       cout << "The position of " << names[pos] << " is " << pos << endl; 
    }
    else{
        cout<<"Not found"<<endl;
    }
    

}
int binarySearch(string array[], int SIZE, string value){
    int first = 0, // First array element
    last = SIZE - 1, // Last array element
    middle, // Midpoint of search
    position = -1; // Position of search value
    bool found = false; // Flag

    while (!found && first <= last){
    middle = (first + last) / 2; // Calculate midpoint
    if (array[middle] == value) // If value is found at mid
    {
    found = true;
    position = middle;
    }
    else if (array[middle] > value) // If value is in lower half
    last = middle - 1;
    else
    first = middle + 1; // If value is in upper half
    }
    return 0;
 }

