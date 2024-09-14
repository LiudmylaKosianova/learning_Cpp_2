#include "../headers/PrintedBook.h"

PrintedBook::PrintedBook(string title, string author, string ISBM, int pages):
        Book(title, author,ISBM),pages(pages){}

PrintedBook::~PrintedBook()
{
    cout << "Printed book title \"" << title << "\"" << " deleted from liblrary\n";
}

void PrintedBook::displayBook()
{
    cout << "Printed paper book info: \n";
    Book::displayBook();
    cout << "\tNumber of pages: " << pages << endl;
}