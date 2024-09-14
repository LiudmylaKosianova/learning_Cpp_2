#pragma once

#include <iostream>
#include <string>

using std::string;

class Book
{
    protected:
    string title;
    string author;
    string ISBN;

    public:
    Book(string title, string author, string ISBN);
    virtual ~Book();
    virtual void displayBook();
};