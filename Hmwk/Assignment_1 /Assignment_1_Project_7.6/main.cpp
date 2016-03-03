/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 *
 * Created on March 2, 2016, 9:34 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    // declare array for days
    char days[3][30];
    //rainy, sunny, cloudy days for each month
    int rainy = 0, sunny = 0, cloudy = 0;
    //total rainy, sunny, cloudy days for all months combined
    int totalRain = 0, totalSun = 0, totalCloud = 0;
    //Rain for june, july, august
    int juneRain, julyRain, augustRain;
    //setting up bool for month with most rain
    bool rainyJune = false, rainyJuly = false, rainyAugust = false;
           
    ifstream infile;
    //open file to read from
    infile.open("RainOrShine.txt");
    
    //create loop to put values from file into array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            infile >> days[i][j];
        }
    }
    
    //close file
    infile.close();
    
    //create loop to determine if it was rainy, sunny, or cloudy
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            //if it was rainy then add 1 to number of rainy days
            if (days[i][j] == 'R')
            {
                rainy += 1;
                totalRain += 1;
            }
            //if it was sunny then add 1 to number of sunny days
            else if (days[i][j] == 'S')
            {
                sunny += 1; 
                totalSun += 1;
            }
            //if it was cloudy then add 1 to number of cloudy days
            else
            {
                cloudy += 1;
                totalCloud += 1;
            }
        }
        // 0 represents june
        // if june output number of rainy, cloudy, and sunny days for june
        if (i == 0)
        {
            juneRain = rainy;
            cout << "June Weather: Rainy: " << rainy << " Sunny: " << sunny
                    << " Cloudy: " << cloudy << endl;
        }
        // 1 represents july
        // if july output number of rainy, cloudy, and sunny days for july
        else if (i == 1)
        {
            julyRain = rainy;
            cout << "July Weather: Rainy: " << rainy << " Sunny: " << sunny
                    << " Cloudy: " << cloudy << endl;
        }
        // 2 represents august
        // if august output number of rainy, cloudy, and sunny days for august
        else
        {
            augustRain = rainy;
            cout << "August Weather: Rainy: " << rainy << " Sunny: " << sunny
                    << " Cloudy: " << cloudy << endl;
        }
        
        //Determine which month had most rain
        if (julyRain > juneRain)
        {
            rainyJuly = true;
        }
        else 
        {
            rainyJune = true;
        }
        if (augustRain > julyRain)
        {
            rainyAugust = true;
            rainyJune = false;
            rainyJuly = false;
        }
        //reset rainy, sunny, and cloudy to 0 for each new month
        rainy = 0;
        sunny = 0;
        cloudy = 0;
    }
    
    cout << endl;
    //Output total rainy, sunny, and coudy days throughout summer
    cout << "Total Rainy: " << totalRain << " Total Sunny: " << totalSun
            << " Total Cloudy: " << totalCloud << endl;
    
    //Determine month with most rain
    cout << "Month with most rain: ";
    if (rainyJune)
    {
        cout << "June";
    }
    else if (rainyJuly)
    {
        cout << "July";
    }
    else
    {
        cout << "August";
    }
    cout << endl << endl;
}
