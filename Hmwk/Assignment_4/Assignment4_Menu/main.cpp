/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 *
 * Created on April 25, 2016, 9:12 PM
 */

//Libraries 
#include <cstdlib>
#include <iostream>


//User Libraries 
#include "Date.h"
#include "Info.h"
#include "RetailItem.h"
#include "Inventory.h"
#include "TestScore.h"
#include "Numbers.h"

using namespace std;

void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();
void problem9();
void problem10();


    int main(int argv,char *argc[])
    {
	int inN;
        do{
         Menu();
         inN=getN();
         switch(inN){
          case 1:    problem1();break;
          case 2:    problem2();break;
          case 3:    problem3();break;
          case 4:    problem4();break;
          case 5:    problem5();break;
          case 6:    problem6();break;
          case 7:    problem7();break;
          case 8:    problem8();break;
          case 9:    problem9();break;
          case 10:   problem10();break;
          default:   def(inN);}
        }while(inN<11);
        return 1;
    }
    void Menu()
    {
           cout<<"Type 1 for problem 13.1"<<endl;
           cout<<"Type 2 for problem 13.4"<<endl;
           cout<<"Type 3 for problem 13.5"<<endl;
           cout<<"Type 4 for problem 13.6"<<endl;
           cout<<"Type 5 for problem 13.7"<<endl;
           cout<<"Type 6 for problem 14.1"<<endl;
           cout<<"Type 7 for problem 7"<<endl;
           cout<<"Type 8 for problem 8"<<endl;
           cout<<"Type 9 for problem 9"<<endl;
           cout<<"Type 10 for problem 10"<<endl;
           cout<<"Type 11 to exit \n"<<endl;
    }
    int getN()
    {
           int inN;
           cin>>inN;
           return inN;
    }
    
    
    void problem1()
    {
        cout<<endl;   
        cout<<"In problem # 13.1"<<endl<<endl;
           
           //declare variables
     int month, day, year;
    
     //do-while loop to loop until the user enters all the information needed
    do{
    //prompt user for input
    cout << "Enter the month (1-12): ";
    cin >> month;
    }while(!cin || month < 1 || month > 12);
    do{
    cout << "Enter the day (1-31): ";
    cin >> day;
    }while(!cin || day < 1 || day > 31);
    do{
    cout << "Enter the year (Positive Numbers Only): ";
    cin >> year;
    }while(!cin || year < 1);
    //call variables
    Date theDate(month, day, year);
    cout << endl;
    
    //call the classes
    cout<<"The date is: ";
    theDate.prntDay();
    cout<<"The date is: ";
    theDate.prntMnt();
    cout<<"The date is: ";
    theDate.prntNum();
    cout<<""<<endl;
           
    }
    
    
    void problem2()
    {
        cout<<endl; 
        cout<<"In problem # 13.4"<<endl<<endl;
           
        //Declare variables
    Info a[3] = {Info("Oscar Mayorga", "4361 house ave.", 20, 1234567),
    Info("Josue Polanco", "756 Mission Blvd.", 21, 8765432),
    Info("Efer Monterroza", "8321 California st.", 32, 3332245)};
    
    //print names
    for(int i = 0; i< 3; i++){
        cout << "Name: " << a[i].getName() << endl;
        cout << "Address: " << a[i].getAdd() << endl;
        cout << "Age: " << a[i].getAge() << endl;
        cout << "Phone Number: " << a[i].getPhne() << endl;
        cout << " " <<endl;
    }
    }
    
    
    void problem3()
    {
        cout<<endl;   
        cout<<"In problem # 13.5"<<endl<<endl;
        
        RetailItem item1("Jacket", 12, 59.95);
    RetailItem item2("Designer Jeans", 40, 34.95);
    RetailItem item3("Shirt", 20, 24.95);
    cout << "           " << "Description: "<<"      Unit on Hand:"<<"        Price:"<<endl;
    cout << "Item #1    " <<item1.getDesc()<<"             "<< item1.getUnits()<<"                    "<<item1.getPrice();
    cout << endl;
    cout << "Item #2    " <<item2.getDesc()<<"     "<< item2.getUnits()<<"                    "<<item2.getPrice();
    cout << endl;
    cout << "Item #3    " <<item3.getDesc()<<"              "<< item3.getUnits()<<"                    "<<item3.getPrice();
    
    cout<<endl<<endl;
    }
    
    
    void problem4()
    {
            cout<<endl;
            cout<<"In problem # 13.6"<<endl<<endl;
            
            int itemNumber;
    int quantity;
    float cost;
    cout << "Please  Enter the item number: ";
    cin >> itemNumber;
    cout << "Please Enter the quantity of the item: ";
    cin >> quantity;
    cout << "Please Enter the cost of the item: ";
    cin >> cost;
    Inventory ralphs(itemNumber,quantity,cost);
    cout << " " << endl;
    
    cout << "Item Number: " << ralphs.getItemNumber() << endl;
    cout << "Quantity: " << ralphs.getQuantity() << endl;
    cout << "Cost: " << ralphs.getCost() << endl;
    cout << "Total cost: " << ralphs.getTotalCost() << endl;  
    
    cout<<endl;
    }
    
    
    void problem5()
    {
           cout<<"In problem # 13.7"<<endl<<endl;
           
           //declare variables
	float a,b,c;		//test score variables
	TestScore student;

	//prompt for user input
	cout<<"Please enter the score for test #1: ";
	cin>>a;
	cout<<"Please enter the score for test #2: ";
	cin>>b;
	cout<<"Please enter the score for test #3: ";
	cin>>c;

	//pass results into TestScores class for calculation
	student.setOne(a);
	student.setTwo(b);
	student.setThree(c);
	cout<<endl<<endl;
	cout<<"Test #1: "<<student.getOne()<<endl;
	cout<<"Test #2: "<<student.getTwo()<<endl;
	cout<<"Test #3: "<<student.getThree()<<endl;
	//display average score
	cout<<"Average Test Score: "<<student.avgScore()<<endl;
        
        cout<<endl;
    }
    
    
    void problem6()
    {
           cout<<"In problem # 14.1"<<endl<<endl;
           
           //declare variables
	Numbers user;		//variable for users input to be translated

	int num;
	do{
		//prompt for user input
		cout<<"Enter a number to be translated into a phrase"<<endl;
                cout<<"(Number Must Be < 9999):"<<endl;
		cin>>num;
                cout<<endl;
	}while(num>9999 || num < 0);

	user.setNum(num);
	user.print();
        
        cout<<endl<<endl;
            
    }
    
    void problem7()
    {
		cout<<"In problem # 7"<<endl<<endl;
    }
    
   
    void problem8()
    {
		cout<<"In problem # 7"<<endl<<endl;
    }
    
    
    void problem9()
    {
		cout<<"In problem # 7"<<endl<<endl;
    }
    
    void problem10()
    {
		cout<<"In problem # 7"<<endl<<endl;
    }
    
    
    void def(int inN)
    {
           cout<<"You typed "<<inN<<" to exit the program"<<endl;
    }
    