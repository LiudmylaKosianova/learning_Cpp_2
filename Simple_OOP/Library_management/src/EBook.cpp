#include "../headers/EBook.h"

EBook::EBook(string title, string author, string ISBN, string format):
        Book(title, author, ISBN), 
        format(format){}

EBook::~EBook()
{
    cout << "EBook title \"" << title << "\"" << " deleted from liblrary\n";
}

void EBook::displayBook()
{
    cout << "EBook info: \n";
    cout << "\tFormat: " << format << endl;
    Book::displayBook();
}
