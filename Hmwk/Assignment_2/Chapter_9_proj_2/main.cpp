/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 *
 * Created on March 15, 2016, 10:40 AM
 */

#include <cstdlib>
#include <iostream>
#include <cstddef>
#include <ctime>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int *fillArray(int);
    void sortArray(int*, int);
    void printArray(int*, int, int);
    int avg(int*, int);
    int amount;
    int scores;
    
    //prompt user to enter test score amount
    cout << "How many test scores do you want to enter? " << endl;
    cin >> amount;
    
    //prompt user to enter test scores
    cout << "Please enter the test scores: " << endl;
    
    //call fill array function to fill with test score
    int* testScores = fillArray(amount);
    
    //sort array
    sortArray(testScores, amount);
    
    //print array and output test scores
    cout << "Test Scores: "  << endl;
    printArray(testScores, amount, 10);
    cout<<""<<endl;
    
    //the average from all test scores
    cout << "The average score is: " << endl 
            << avg(testScores, amount);
    
    cout << endl << endl;
}

//fill array with values entered from user
int* fillArray(int amount)
{
    int* a = new int[amount];
    int input;
    
    for (int i = 0; i < amount; i++)
    {
        cin >> input;
        a[i] = input;
    }
    return a;          
}

//sort array
void sortArray(int* a, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

//print array
void printArray(int* a, int size, int perLine)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
        
        if (i % perLine == (perLine - 1))
        {
            cout << endl;
        }
    }   
}

//get average
int avg(int* a, int size)
{
    //declare sum
    int sum = 0;
    
    //declare average
    int average;
    
    //get sum of all numbers in array
    for(int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    
    //calculate average
    average = sum / size;
    
    return average;

}