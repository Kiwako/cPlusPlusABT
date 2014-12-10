/**
 * Name: Dennis Bradt
 * Date: 12/06/2014
 * Purpose: C++ Practice CSC-134-YN1
 * Assignment: Serendipity-#08-bookinfo.cpp
 */

#include<iostream>
#include<iomanip>
#include<string>
#include "bookdata.h"
#include "bookinfo.h"
using namespace std;

void bookinfo (BookData d[], int i)
{
    cout << setw(45) << "Serendipity Booksellers\n"
         << setw(42) << "Book Information\n\n";

    cout << "\nISBN: "             << d[i].getIsbn()
         << "\nTitle: "            << d[i].getTitle()
         << "\nAuthor: "           << d[i].getAuthor()
         << "\nPublisher: "        << d[i].getPub()
         << "\nDate Added: "       << d[i].getDateAdded()
         << "\nQuantity-On-Hand: " << d[i].getQty()
         << fixed << setprecision(2)
         << "\nWholesale Cost: $"  << d[i].getWholesale()
         << "\nRetail Price: $"    << d[i].getRetail() << "\n";

}
