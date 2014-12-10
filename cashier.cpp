/**
 * Name: Dennis Bradt
 * Date: 12/06/2014
 * Purpose: C++ Practice CSC-134-YN1
 * Assignment: Serendipity-#08-cashier.cpp
 */
#include<iostream>
#include<iomanip>
#include<string>
#include "cashier.h"
#include "bookdata.h"
using namespace std;

void cashier ()
{
    bool userChoice = false;
    while(userChoice == false)
    {
        string dateBook, codeBook, titleBook;
        int numBook;
        double priceBook;

        cout << "\nSerendipity Booksellers"
             << "\nCashier Module\n\n";

        cout << "Date: ";
            cin >> dateBook;
        cout << "Quantity of Book: ";
            cin >> numBook;
        cout << "ISBN: ";
            cin >> codeBook;
        cout << "Title: ";
            cin >> titleBook;
        cout << "Price: ";
            cin >> priceBook;
        cout << "\n\n";

        cout << "Serendipity Booksellers\n\n"
             << "Date: " << dateBook << "\n\n";

        cout << setw(5)  << left << "Qty "
             << setw(8)  << left << " ISBN "
             << setw(15) << left << " Title "
             << setw(6)  << left << " Price "
             << setw(6)  << left << " Total\n";

        cout << "------------------------------------------\n";

        cout << fixed << setprecision(2)
             << setw(5)  << numBook
             << setw(8)  << codeBook
             << setw(15) << titleBook
             << "$" << setw(6) <<  priceBook
             << "$" << setw(6) <<  (numBook * (priceBook * 1.06)) << "\n\n";

        cout << "\n" << setw(15) << right << "Subtotal:" << setw(20) << "$" << priceBook
             << "\n" << setw(15) << right << "Tax:" << setw(20) << "$" << (numBook * (priceBook * .06))
             << "\n" << setw(15) << right << "Total:" << setw(20) << "$" << (numBook * (priceBook * 1.06))
             << "\n\nThank You For Shopping Serendipity!\n\n";

        char choice = NULL;
        cout << "\nIs there another transaction that is to be processed?(y/n): ";
            cin >> choice;
            if( choice == 'n' || choice == 'N' ){userChoice = true;}
    }

}
