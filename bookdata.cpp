/**
 * Name: Dennis Bradt
 * Date: 12/06/2014
 * Purpose: C++ Practice CSC-134-YN1
 * Assignment: Serendipity-#08-bookdata.cpp
 */
#include<iostream>
#include<iomanip>
#include<string>
#include "bookdata.h"
using namespace std;


BookData::BookData()
{
    bookTitle = "";
    isbn = "";
    author = "";
    publisher = "";
    dateAdded = "";
    qtyOnHand = 0;
    wholesale = 0;
    retail = 0;
    Empty = true;
};

void BookData::setTitle(string t)
    { bookTitle = t; };
void BookData::setIsbn(string i)
    { isbn = i; };
void BookData::setAuthor(string a)
    { author = a; };
void BookData::setPub(string p)
    { publisher = p; };
void BookData::setDateAdded(string d)
    {dateAdded = d; };
void BookData::setQty(int q)
    { qtyOnHand = q; };
void BookData::setWholesale(double w)
    { wholesale = w; };
void BookData::setRetail(double r)
    { retail = r; };

bool BookData::isEmpty()
    { return Empty; };
void BookData::insertBook()
    { Empty = false; };
void BookData::removeBook()
    { Empty = true; };

string BookData::getTitle()
    { return bookTitle; };
string BookData::getIsbn()
    { return isbn; };
string BookData::getAuthor()
    { return author; };
string BookData::getPub()
    { return publisher; };
string BookData::getDateAdded()
    { return dateAdded; };
int BookData::getQty()
    { return qtyOnHand; };
double BookData::getWholesale()
    { return wholesale; };
double BookData::getRetail()
    { return retail; };

