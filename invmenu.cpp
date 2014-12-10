/**
 * Name: Dennis Bradt
 * Date: 12/06/2014
 * Purpose: C++ Practice CSC-134-YN1
 * Assignment: Serendipity-#08-invmenu.cpp
 */
#include<iostream>
#include<iomanip>
#include<string>
#include"bookdata.h"
#include"bookinfo.h"
#include"invmenu.h"
using namespace std;



void invmenu(BookData bookdata[], const int NUM)
{

    bool userChoice = false;
    while(userChoice == false)
    {
        int userInput = 0;
        bool trueFalse = false;

        cout << "\n" << setw(45) << "Serendipity Booksellers\n"
             << setw(43) << "Inventory Database\n\n"
             << "1.Look-up a Book\n"
             << "2.Add a Book\n"
             << "3.Edit a Book's Record\n"
             << "4.Delete a Book\n"
             << "5.Return to the Main Menu\n";

        do{
            cout << "\nEnter your choice: ";
                cin >> userInput;

            if(userInput >= 1 && userInput <= 5)
                { trueFalse = true; }
            else
                { cout << "\nPlease enter a number in the range 1 - 5.\n"; }

        }while(trueFalse != true);

        switch(userInput)
        {
            case 1: lookUpBook(bookdata); break;
            case 2: addBook(bookdata);    break;
            case 3: editBook(bookdata);   break;
            case 4: deleteBook(bookdata); break;
            case 5:
                userChoice = true;
                break;
        }

    }

}


void lookUpBook(BookData d[])
{
    string u = "";
    int b = 0;
    cout << "\nEnter the Title or IBSN: ";
        cin >> u;
    b = findBook(d, u);

    if( b == -1 )
        { cout << "\nBook not found."; }
    else
        {bookinfo(d, b); }
}

int findBook(BookData d[], string u)
{
    int fb = 0;

    for(int i = 0; i < 20; i++)
    {
        cout << "\nBonk " << i << "\n";

        if(u == d[i].getTitle() || u == d[i].getIsbn())
            { fb = i; break; }
        else
            {fb = -1;}
    }
    return fb;
}

void addBook(BookData d[])
{
    int space;
    for(int i = 0; i <= 20; i++)
    {
        //cout << "\nBonk " << i << "\n";
        if(d[i].isEmpty() != false)
            { space = i; break; }
    }

    if(space != -1)
    {
        string temp = "";
        int t = 0;
        double td = 0;

        d[space].insertBook();
        cout << "Book Title: "; cin >> temp; d[space].setTitle(temp);
        cout << "ISBN: ";       cin >> temp; d[space].setIsbn(temp);
        cout << "Author: ";     cin >> temp; d[space].setAuthor(temp);
        cout << "Publisher: ";  cin >> temp; d[space].setPub(temp);
        cout << "Date Added: "; cin >> temp; d[space].setDateAdded(temp);
        cout << "Quantity to be Added: "; cin >> t; d[space].setQty(t);
        cout << "Wholesale: $"; cin >> td; d[space].setWholesale(td);
        cout << "Retail: $";    cin >> td; d[space].setRetail(td);
    }
}

void editBook(BookData d[])
{
    bool trueFalse = false;
    string u = "";
    int b = 0;
    cout << "\nEnter the Title or IBSN: ";
        cin >> u;
    b = findBook(d, u);

    if( b == -1 )
        { cout << "\nBook not found."; trueFalse = true;}

    while(trueFalse != true)
    {
        bookinfo(d, b);
        string temp = "";
        int t = 0;
        double td = 0;

        cout << "\nEdit\n1.Title\n2.ISBN\n3.Author\n4.Publisher\n5.Date Added\n6.Quantity\n7.Wholesale\n"
             << "8.Retail\n9.Exit\n";

        bool aaa = false;
        do{
            cout << "\nEnter your choice: ";
                cin >> t;

            if(t >= 1 && t <= 9)
                { aaa = true; }
            else
                { cout << "\nPlease enter a number in the range 1 - 9.\n"; }

        }while(aaa != true);

        switch(t)
        {
            case 1: cout << "Book Title: "; cin >> temp; d[b].setTitle(temp); break;
            case 2: cout << "ISBN: ";       cin >> temp; d[b].setIsbn(temp);  break;
            case 3: cout << "Author: ";     cin >> temp; d[b].setAuthor(temp); break;
            case 4: cout << "Publisher: ";  cin >> temp; d[b].setPub(temp); break;
            case 5: cout << "Date Added: "; cin >> temp; d[b].setDateAdded(temp); break;
            case 6: cout << "Quantity to be Added: "; cin >> t; d[b].setQty(t); break;
            case 7: cout << "Wholesale: $"; cin >> td; d[b].setWholesale(td); break;
            case 8: cout << "Retail: $";    cin >> td; d[b].setRetail(td); break;

            default: trueFalse = true;
        }

    }

}

void deleteBook(BookData d[])
{
    string u = "";
    char c = '0';
    int b = 0;
    cout << "\nEnter the Title or IBSN: ";
        cin >> u;
    b = findBook(d, u);

    if( b == -1 )
        { cout << "\nBook not found."; }
    else
    {
        bookinfo(d, b);
        cout << "\nDo you wish to delete this book?(y/n): ";
            cin >> c;
        if(c == 'y' || c == 'Y')
        {
            cout << "\nBook has been deleted!";
            d[b].removeBook();
        }

    }
}
