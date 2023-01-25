#include <iostream>
#include <vector>
#include "book.h"

class Student {
private:
    std::vector<Book> books;
    std::string name;

public:
    Student(const std::string name) : name(name) {}

    void read() {}
    std::vector<Book>& getBooks() { return books; }
    void takeBook(Book book) { this->books.push_back(book); }

    void printBooks() {
        std::cout << '\n' << "My books" << std::endl;
        for (const auto& book : books) {
            std::cout << book << std::endl;
        }
    }
};
