#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {
    string title;
    string author;
    string isbn;

public:
    Book(string title, string author, string ISBN);

    string getTitle() const;
    string getAuthor() const;
    string getIsbn() const;

    void setTitle(string title);
    void setAuthor(string author);
    void setIsbn(string isbn);
};

#endif