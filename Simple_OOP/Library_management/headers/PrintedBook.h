#pragma once

#include "Book.h"

class PrintedBook : public Book
{
    protected:
    int pages;

    public:
    PrintedBook(string title, string author, string ISBN, int pages);
    ~PrintedBook();

    void displayBook()override;
};