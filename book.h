#include <iostream>

class Book {
private:
    std::string name;
    std::string author;
    int year;

public:
    Book(std::string name, std::string author, int year): name(name), author(author), year(year) {}

    void setName(std::string name) { this->name = name; }
    std::string getName() { return name; }
    
    void setAuthor(std::string author) { this->author = author; }
    std::string getAuthor() { return author; }

    void setYear(int year) { this->year = year; }
    int getYear() { return year; }

    friend std::ostream& operator<<(std::ostream& os, const Book& book) {
        os << book.name << " by " << book.author << " (" << book.year << ")";
        return os;
    };
};