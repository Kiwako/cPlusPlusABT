/**
 * Name: Dennis Bradt
 * Date: 12/06/2014
 * Purpose: C++ Practice CSC-134-YN1
 * Assignment: Serendipity-#09-mainmenu.cpp
 */
#include<iostream>
#include<iomanip>
#include<string>
#include "bookdata.h"
#include "bookinfo.h"
#include "invmenu.h"
#include "reports.h"
#include "cashier.h"

using namespace std;

const int ARRAYNUM = 20;
BookData bookdata[ARRAYNUM];

int main ()
{
    bool userChoice = false;
    while(userChoice == false)
    {
        int userInput = 0;
        bool trueFalse = false;

        cout << "\n" << setw(45) << "Serendipity Booksellers\n"
             << setw(39) << "Main Menu\n\n"
             << "1.Cashier Module\n"
             << "2.Inventory Database Module\n"
             << "3.Report Module\n"
             << "4.Exit\n";

        do{
            cout << "\nEnter your choice: ";
                cin >> userInput;

            if(userInput >= 1 && userInput <= 4)
                { trueFalse = true; }
            else
                { cout << "\nPlease enter a number in the range 1 - 4.\n"; }
        }while(trueFalse != true);

        switch(userInput)
        {
            case 1: cashier(); break;
            case 2: invmenu(bookdata,ARRAYNUM); break;
            case 3: reports(); break;
            case 4:
                cout << "\nExiting Program\n\n";
                userChoice = true;
                break;
        }
    }
    return 0;
}
