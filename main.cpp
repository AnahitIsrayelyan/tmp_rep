#include <iostream>
#include "library.h"


int main() {
    Library lib = Library("Picsart library");
    Book book1 = Book("OOAD", "Booch", 2007);
    Book book2 = Book("Effective Python", "Slatkin", 2020);
    Student me = Student("Anahit");

    std::cout << "Here is info about book2:" << std::endl;
    std::cout << book2 << std::endl;

    lib.addBook(book1);
    lib.addBook(book2);
    lib.addBook(book2);

    lib.printBooks();

    lib.takeBook(book2, me);
    
    std::cout << "I took a book" << std::endl;
    me.printBooks();
    lib.printBooks();

    lib.returnBook(book2, me);
    
    std::cout << "I returned the book" << std::endl;
    me.printBooks();
    lib.printBooks();
}