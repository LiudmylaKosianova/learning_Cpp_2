#include "../headers/Book.h"

Book::Book(string title, string author, string ISBN) : title(title), author(author), ISBN(ISBN)
{}

Book::~Book(){}

void Book::displayBook()
{
    cout << "\tTitle: \"" << title << "\"\n";
    cout << "\tAuthor: " << author << endl;
    cout << "\tISBN: " << ISBN << endl;
}