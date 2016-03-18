/* 
 * File:   main.cpp
 * Author: Oscar Mayorga 
 *
 * Created on March 16, 2016, 11:12 PM
 */

//System Libraries 
#include <cstdlib>
#include<iostream>
#include<vector>
#include<algorithm>
#include <cstddef>
#include <ctime>

using namespace std;

//Variables 
int *Fill_Array(int, int);
int *Fill_Array(int);
void Print_Array(int*, int);
void Print_Array(int*, int, int);
float Mean(int[], int);
float Median(int[], int);
int *Mode(int[], int, int&);
void quick_Sort(int [], int, int);
void sort_Array(int*, int);
int Avg(int*, int);
int Amount;
int Scores;
int doSomething(int *, int *);
int *x,*y;
int x1,y1;
//This are the Problem numbers, 
void Mean_Median_Mode();
void Chap_9_1();
void Chap_9_2();
void Chap_9_5();
void Chap_9_6();
void Chap_9_13();

bool cmp(const pair<int, int>&a, const pair<int, int>&b) {
    return a.second < b.second;
}

/* 
 * 
 */
int main(int argc, char** argv) {
    while (true) {
        bool go;
        int option = 100;
        do {
            go = false;
            cout << "There are 6 problems, enter 1-6 to run one by one: " << endl;
            cout <<"If you wish to exit enter the number 7" << endl;
            string input = "";
            cin>>input;
            option = (int) input[0] - 48;
            //Exit The choices by entering #7
            if (option > 7 || option < 1)
                go = true;
        } while (go);

        switch (option) {
            case 1: Mean_Median_Mode();
                break;
            case 2: Chap_9_1();
                break;
            case 3: Chap_9_2();
                break;
            case 5: Chap_9_5();
                break;
            case 4: Chap_9_6();
                break;
            case 6: Chap_9_13();
                break;
            case 7: exit(0);
            default: break;
        }
    }
    return 0;
}

void Mean_Median_Mode() {
    int size, range;
    cout << "Enter the Size and the range: " << endl;
    cin >> size>>range; 
    cout << "This are the results from where the Mode array, Median, and Mean will be find: " << endl;
    int * pArray = Fill_Array(size, range);
    Print_Array(pArray, size);
    int len;
    int *mArray = Mode(pArray, size, len);
    cout << "..............................." << endl;
    cout << "Mean: " << Mean(pArray, size) << endl << "Median: " << Median(pArray, size)
            << endl << "Mode array: ";

    for (int i = 0; i < len; i++)
        cout << mArray[i] << " ";
    cout << endl;

}

int *Mode(int *a, int size, int&len) {
    vector<pair<int, int> >v;
    quick_Sort(a, 0, size - 1);
    int comValue = a[0];
    int count = 1;
    for (int i = 1; i < size; i++) {
        if (a[i] == comValue) {
            count++;
        } else {
            v.push_back(make_pair(comValue, count));
            count = 1;
            comValue = a[i];
        }
    }
    v.push_back(make_pair(comValue, count));
    sort(v.begin(), v.end(), cmp);
    int frequency = v[v.size() - 1].second;
    count = 1;
    int *temp;
    for (int i = v.size() - 2; i >= 0; i--) {
        if (frequency != v[i].second) {
            len = count + 2;
            temp = new int[len];
            temp[0] = count;
            temp[1] = frequency;
            int index = 0;
            while (count > 0) {
                temp[2 + index] = v[v.size() - count].first;
                count--;
                index++;
            }
            return temp;
        } else {
            count++;
        }
    }
    //Frequency are same
    len = count + 2;
    temp = new int[len];
    temp[0] = count;
    temp[1] = frequency;
    int index = 0;
    while (count > 0) {
        temp[2 + index] = v[v.size() - count].first;
        count--;
        index++;
    }
    return temp;
}

void Print_Array(int*a, int size) {
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int *Fill_Array(int size, int range) {
    srand(static_cast<unsigned int> (time(0)));
    int *p = new int[size];
    for (int i = 0; i < size; i++) {
        *(p + i) = rand() % range + 1;
    }
    return p;
}

void Chap_9_1() {
    int size, range;
    cout << "Please Enter the Size and the Range: " << endl;
    cout << "SIZE: ";
    cin >> size;
    cout << "Range: ";
    cin >> range;
    cout << "...................."<<endl;
    cout << "array: "<<endl;
    int*a = Fill_Array(size, range);
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
    cout << endl;
}

void Chap_9_2() {
    
    //Ask the user for the total number of testes  
    cout << "Please enter the number of testes you wish to Calculate: " << endl;
    cin >> Amount;
    
    //Ask the user to enter Scores 
    cout << "Please enter the Scores of all testes: " << endl;
    
    //Fill array with test Scores 
    int* testScores = Fill_Array(Amount);
    
    sort_Array(testScores, Amount);//sort array
    
    //outputs
    cout << "Test Scores from lowest to highest: "  << endl;
    Print_Array(testScores, Amount, 10);
    cout<<""<<endl;
    
    //The Average score
    cout << "The average score is: " << endl 
            << Avg(testScores, Amount);
    
    cout << endl << endl;
}

//Use the values entered by user to fill in the array
int* Fill_Array(int Amount)
{
    int* a = new int[Amount];
    int input;
    
    for (int i = 0; i < Amount; i++)
    {
        cin >> input;
        a[i] = input;
    }
    return a;          
}

void sort_Array(int* a, int size)//sort array
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

void Print_Array(int* a, int size, int perLine)//print array
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
int Avg(int* a, int size)
{
    //declaring variables 
    int sum = 0;
    int average;
    
    //Calculations to get the sum of all numbers in array
    for(int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    
    //Calculations for the average
    average = sum / size;
    
    return average;
    
}

void Chap_9_5() {
    
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

void Chap_9_6() {
    
    int num_donations;
    
    //prompt user to enter number of donations
    cout << "How many donations do you want to enter? " << endl;
    cin >> num_donations;
    //prompt user to enter donation Amounts
    cout << "Enter donation Amounts: " << endl;
    //call fill array function to fill with donations
    int* donations = Fill_Array(num_donations);
    //sort array
    sort_Array(donations, num_donations);
    //print array and output donation Amounts
    cout << "Donation Amounts: "  << endl;
    Print_Array(donations, num_donations, 10);

    cout << endl << endl;
        }

void Chap_9_13() {
    int studentNum;
    bool go = true;
    while (go) {
        cout << "Enter the number of students that did the survey?" << endl;
        if (cin >> studentNum && studentNum >= 0) {
            go = false;
        } else {
            cin.clear();
            cin.ignore(1024, '\n');
        }
    }
    cout << "The size is: " << studentNum << endl;
    int *seeMovie = new int[studentNum];
    while (!go) {
        go = true;
        cout << "Now people enter one by one the number of movies each student saw: " << endl;
        for (int i = 0; i < studentNum; i++) {
            if (cin >> seeMovie[i]) {

            } else {
                go = false;

                cin.clear();
                cin.ignore(1024, '\n');
                break;

            }
            if (seeMovie[i] < 0)
                go = false; //break
        }
    }

    int len = 0;
    cout << "Mean: " << Mean(seeMovie, studentNum) << endl << "Median: " << Median(seeMovie, studentNum)
            << endl << "Mode array: ";
    int *mArray = Mode(seeMovie, studentNum, len);
    for (int i = 0; i < len; i++)
        cout << mArray[i] << " ";
    cout << endl;

}

void quick_Sort(int*a, int l, int r) {
    if (l < r) {
        int i = l, j = r, x = a[l];
        while (i < j) {
            while (i < j && a[j] >= x)
                j--;
            if (i < j)
                a[i++] = a[j];
            while (i < j && a[i] < x)
                i++;
            if (i < j)
                a[j--] = a[i];
        }
        a[i] = x;
        quick_Sort(a, l, j - 1);
        quick_Sort(a, i + 1, r);
    }
}

float Mean(int*a, int size) {
    float temp = 0;
    for (int i = 0; i < size; i++)
        temp += *(a + i);
    return temp / (float) size;
}

float Median(int *a, int size) {
    quick_Sort(a, 0, size - 1);
    float temp = 0;
    if (size % 2 == 0) {
        temp = (*(a + (size - 1) / 2)+*(a + (size - 1) / 2 + 1)) / (float) 2;
        return temp;
    } else {
        return a[size / 2 ];
    }
}
