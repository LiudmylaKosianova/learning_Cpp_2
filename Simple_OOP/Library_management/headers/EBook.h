#pragma once

#include "Book.h"

class EBook : public Book
{
    protected:
    string format;

    public:
    EBook(string title, string author, string ISBM, string format);
    ~EBook();

    void displayBook() override;

};