/**
 * Name: Dennis Bradt
 * Date: 12/07/2014
 * Purpose: C++ Practice CSC-134-YN1
 * Assignment: Serendipity-#08-bookdata.h
 */
#include<iostream>
#include<iomanip>
using namespace std;

class BookData
{
    private:
        string bookTitle;
        string isbn;
        string author;
        string publisher;
        string dateAdded;
        int qtyOnHand;
        double wholesale;
        double retail;
        bool Empty;

    public:
        BookData();
        void setTitle(string);
        void setIsbn(string);
        void setAuthor(string);
        void setPub(string);
        void setDateAdded(string);
        void setQty(int);
        void setWholesale(double);
        void setRetail(double);

        bool isEmpty();
        void insertBook();
        void removeBook();

        string getTitle();
        string getIsbn();
        string getAuthor();
        string getPub();
        string getDateAdded();
        int getQty();
        double getWholesale();
        double getRetail();
};
