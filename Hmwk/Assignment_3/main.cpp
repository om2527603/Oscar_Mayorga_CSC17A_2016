/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 *
 * Created on March 31, 2016, 12:21 PM
 */

#include <cstdlib>
#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

//User libraries


struct Data{
    string divName[4];
    float sales[4][4];
};


//Prototypes
bool select();
bool playAgain();
int menu();
void num1();
int nOfWrds(char *, int);
void num2();
int menu2(char *, int);
int isVowel(char *);
int isCons(char *);
void menu3();

void num3();
void num4();
void arrayToFile(string, char *, int);
void fileToArray(string, char *, int);
int num5();

int main(int argc, char** argv) {
    
   srand(time(0));
    do{
        int choice = menu();
        switch(choice){
            case 1: 
                num1();
                break;
            case 2:
                num2();
                break;
            case 3:
                num3();
                break;
            case 4:
                num4();
                break;
            case 5:
                num5();
                break;
            
        }
    }while(select());
    return 0;
}

int menu(){
    //The Menu that is displayed for the user
    int choice;
    do{
        cout << endl << endl;
        cout << "Assignment_3" << endl;
        cout << "[1] Project 10.4" << endl;
        cout << "[2] Project 10.6" << endl;
        cout << "[3] Project 12.7" << endl;
        cout << "[4] Project 12.8" << endl;
        cout << "[5] Project 12.11" << endl;
        
        cout << "Please Enter your choice (1-5) :  ";
        cin >> choice;
        cin.clear();
        cin.ignore();
        if(!cin){
            cout << "Invalid, enter again: " << endl;
            cin.clear();
            cin.ignore();
            cin >> choice;
        }
        cout<<"=============================================="<<endl;
    }while(choice != 1 && choice!= 2 && choice != 3 && choice != 4
            && choice != 5 && choice != 6 && choice != 7 && choice != 8);
    return choice;
}

void num1(){
    const int SIZE = 51;    //Constant int of 32 to set the size of my array.
    char *sntPrt;           //Pointer which points to the char array.
    char sentnce[SIZE];
    sntPrt = sentnce;
    cout << "Please enter a sentence of no more than 50 characters: ";
    cin.getline(sentnce, SIZE, '\n');
    int numWord = nOfWrds(sntPrt,SIZE); //Stores the number of words in "numWord"
    cout << "The total number of words in your sentance is " << numWord << "." << endl;
    cout << endl;
    cout << "Press Enter for next step";
}
int nOfWrds(char * text, int SIZE){
    int space=0;  //Counts the number of spaces in the string. 
    int letter=0;   //Counts the number of letters in the array. 
    for(int i=0;i<SIZE;i++){    //For loop to count the number of white space
        if(isspace(text[i])){   //characters in the array. 
            space++;  
        }
    }    
    letter = strlen(text) - space + 1;
    float average = static_cast<float>(letter) / static_cast<float>(space);
    cout << "The average number of letters in your sentence is " << average <<  "." << endl;
    return space;
}


void num2(){
    const int SIZE = 51;    //Constant int of 51 to set the size of my array.
    char *sntPrt;           //Pointer which points to the char array.
    char sentnce[SIZE];
    sntPrt = sentnce;
    cout << "Enter a sentence (Under 50 character): ";
    cin.clear();
    cin.getline(sentnce, SIZE, '\n');
    menu2(sntPrt, SIZE);
}


int menu2(char * text, int SIZE){
    char choice;
    //Second menu for problem 12.4
    do{
        cout << endl;
        cout << "A) Count the number of vowels in the string." << endl;
        cout << "B) Count the number of consonants in the string." << endl;
        cout << "C) Count both the vowels and consonants in the string." << endl;
        cout << "D) Enter another string." << endl;
        cout << "E) Exit the program." << endl;
        cout << "Enter a choice:  ";
        cin >> choice;
        cout<<"=============================================="<<endl;
        //"Switch" begins.
        //Through char choice.
        if(tolower(choice) == 'a'){                    
            int vowels = isVowel(text);
            cout << "The number of vowels is " << vowels << "." << endl;
            menu2(text, SIZE);
        }
        if(tolower(choice) == 'b'){
            int cons = isCons(text);
            cout << "The number of consonants is " << cons << "." << endl;
            menu2(text, SIZE);
        }
        if(tolower(choice) == 'c'){
            int v = isVowel(text);
            int c = isCons(text);
            cout << "The number of characters in your string is " <<
                    c+v << "." << endl;
            cout << endl;
            num2();
        }
        if(tolower(choice) == 'd'){
            cin.ignore();
            num2();
        }
        if(tolower(choice) == 'e'){

            return 0;
        }
    }while(tolower(choice) != 'a' && tolower(choice) != 'b'
            && tolower(choice) != 'c' && tolower(choice) != 'e');
    
    return choice;
}

int isVowel(char * text){
    int vowels=0;
    for(int i=0;i<strlen(text);i++){
        cout << text[i] << " ";
    }
    for(int i=0;i<strlen(text);i++){
        if(tolower(text[i]) == 'a' || tolower(text[i]) == 'e' || 
                tolower(text[i]) == 'i' || tolower(text[i]) == 'o' ||
                tolower(text[i]) == 'u'){
            vowels++;
        }
    }
    return vowels;
}

int isCons(char * text){
    int cons=0;
    for(int i=0;i<strlen(text);i++){
        if(!(tolower(text[i]) == 'a' || tolower(text[i]) == 'e' || 
                tolower(text[i]) == 'i' || tolower(text[i]) == 'o' ||
                tolower(text[i]) =='u' || text[i] == ' ')){
            cons++;
        }
    }
    return cons;
}


void num3(){
    //Makes the user think they are actually opening a file.
    string file;
    cout << "Enter a file name with a '.txt' extention: ";
    cin >> file;
    
    char ch;
    fstream upper("uppercase.txt", ios::in);
    fstream lower("lowercase.txt", ios::out);
    
    if(upper){
        //Reads the contents into ch.
        upper.get(ch);
 
        while(upper){
            lower.put(tolower(ch));
            
            upper.get(ch);
        }
    }
    //Close files.
    upper.close();
    lower.close();
    
    cout << "Process complete" << endl;
}


void num4(){
    const int SIZE = 5;
    char array[SIZE] = {'1','2','3','4','5'};
    string fileName;
    char *ptr; 
    ptr = array;
    char array2[SIZE];
    char *ptr2;
    ptr2 = array;
    cout << "Enter a file name with a '.txt' extention" << endl;
    cin >> fileName;
    //Adding the contents of the array to the file.
    cout << "Beginning to add contents of the array to the file " << 
            fileName << "." << endl;
    arrayToFile(fileName, ptr, SIZE);
    cout << "Finished" << endl;
    cout << endl;
    cout << "Beginning to read back from the file " << fileName << "." << endl;
    fileToArray(fileName, ptr2, SIZE);
    cout << "Finished" << endl;
    
    cout << "The contents of the first array: " << endl;
    for(int i=0;i<SIZE;i++){
        cout << array[i] << " ";
    }
    cout << endl;
    cout << "The contents of the second array: ";
    for(int i=0;i<SIZE;i++){ 
        cout << array2[i] << " ";
    }
}

void arrayToFile(string fileName, char *arr, int SIZE){
    fstream file;
    //Opens file in output and binary mode.
    file.open(fileName.c_str(), ios::out | ios::binary);
    //Writes the contents of the file into the array.
    file.write(arr, SIZE);
    //Closes file.
    file.close();
}

void fileToArray(string fileName, char *arr, int SIZE){
    char ch;
    fstream file;
    file.open(fileName.c_str(), ios::in | ios:: binary);
    file.get(ch);
    while(file){
        for(int i=0;i<SIZE;i++){
        arr[i] = ch;
        file.get(ch); 
        }
    }
    //Closes file.
    file.close();
}


int num5(){
    int choice;
    const int SIZE = 4;
    Data div;
    fstream file("compData.txt", ios::out | ios::binary);
    
    for(int i=0;i<SIZE;i++){
        cout << "Enter the name of the division";
        cin >> div.divName[i];
        for(int j=0;j<SIZE;j++){
            cout << "Enter the sales for quarter " << j + 1 << ": $";
    do{  
        cin >> div.sales[i][j];
        if(div.sales[i][j] < 0){
            cout << "Invalid amount. Please enter again: ";
    }
            }while(div.sales[i][j] < 0);
        }
    }
    file.write(reinterpret_cast<char *>(&file), sizeof(file));
    file.close();
}

bool playAgain(){
    cout << endl;
    cout << "Do you want to enter again? [y/n]:  ";
    char choice;
    cin.get(choice);
    if(choice=='y'){
        return true;
    }
    else{
        return false;
    }
}

bool select(){
    //Used in the main function to call the looping of the whole program.
    cout << endl;
    cin.clear();
    cin.ignore();
    cout << "Do you want to select another problem? [y/n]:  ";
    char choice;
    cin.get(choice);
    if(choice=='y'){
        return true;
    }
    else{
        return false;
    }
}

