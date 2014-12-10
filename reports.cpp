/**
 * Name: Dennis Bradt
 * Date: 12/06/2014
 * Purpose: C++ Practice CSC-134-YN1
 * Assignment: Serendipity-#08-reports.cpp
 */
#include<iostream>
#include<iomanip>
#include<string>
#include "reports.h"
#include "bookdata.h"
using namespace std;

void reports ()
{
    bool userChoice = false;
    while(userChoice == false)
    {
        int userInput = 0;
        bool trueFalse = false;

        cout << "\n" << setw(45) << "Serendipity Booksellers\n"
             << setw(38) << "Reports\n\n"
             << "1.Inventory Listing\n"
             << "2.Inventory Wholesale Value\n"
             << "3.Inventory Retail Value\n"
             << "4.Listing by Quantity\n"
             << "5.Listing by Cost\n"
             << "6.Listing by Age\n"
             << "7.Return to the Main Menu\n\n";

        do{
            cout << "\nEnter your choice: ";
                cin >> userInput;

            if(userInput >= 1 && userInput <= 7)
                { trueFalse = true; }
            else
                { cout << "\nPlease enter a number in the range 1 - 7.\n"; }

        }while(trueFalse != true);

        switch(userInput)
        {
            case 1: repListing();   break;
            case 2: repWholesale(); break;
            case 3: repRetail();    break;
            case 4: repQty();       break;
            case 5: repCost();      break;
            case 6: repAge();       break;
            case 7:
                userChoice = true;
                break;
        }
    }

}

void repListing(){
    cout << "\nYou selected Inventory Listing\n";}
void repWholesale(){
    cout << "\nYou selected Inventory Wholesale Value\n";}
void repRetail(){
    cout << "\nYou selected Inventory Retail Value\n";}
void repQty(){
    cout << "\nYou selected Inventory Listing By Quantity\n";}
void repCost(){
    cout << "\nYou selected Inventory Listing By Cost\n";}
void repAge(){
    cout << "\nYou selected Inventory Listing By Age\n";}
