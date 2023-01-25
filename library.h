#include <iostream>
#include <vector>
#include "student.h"

class Library {
private: 
    std::string name;
    std::vector<Book> lib_books;
public:
    Library(const std::string name) : name(name) {}

    void addBook(const Book& book) { lib_books.push_back(book); }
    std::vector<Book>& getBooks() { return lib_books; }

    void takeBook(Book& book, Student& student) {
        for (int i = 0; i < lib_books.size(); i++) {
            if (lib_books[i].getName() == book.getName() &&
                lib_books[i].getAuthor() == book.getAuthor() &&
                lib_books[i].getYear() == book.getYear()) {
                lib_books.erase(lib_books.begin() + i);
                student.takeBook(book);
                break;
            }
        }
    }

    void returnBook(Book& book, Student& st) {
        for (int i = 0; i < st.getBooks().size(); i++) {
            if (st.getBooks()[i].getName() == book.getName() &&
                st.getBooks()[i].getAuthor() == book.getAuthor() &&
                st.getBooks()[i].getYear() == book.getYear()) 
            {
                st.getBooks().erase(st.getBooks().begin() + i);
                lib_books.push_back(book);
                break;
            }
        }
    }

    void printBooks() {
        std::cout << '\n' << "Books in library" << std::endl;
        for (const auto& book : lib_books) {
            std::cout << book << std::endl; 
        }
    }
};
