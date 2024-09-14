#include "../headers/Book.h"
#include "../headers/EBook.h"
#include "../headers/PrintedBook.h"

int main()
{
    Book* library[4];
    library[0] = new EBook("1984", "George Orwell", "123-456-789", "PDF");
    library[1] = new PrintedBook("To Kill a Mockingbird", "Harper Lee", "987-654-321", 281);
    library[2] = new EBook("The Martian", "Andy Weir", "321-654-987", "EPUB");
    library[3] = new PrintedBook("Moby Dick", "Herman Melville", "456-789-123", 635);

    for(const auto& element : library) //display books
    {
        element -> displayBook();
    }

    for(auto& element : library)//delete books
    {
        delete element;
    }

    return 0;
}