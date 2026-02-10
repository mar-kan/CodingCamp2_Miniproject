#ifndef MYLIBRARY_H
#define MYLIBRARY_H

#include <string>
#include "AbstractLibrary.h"
#include "Book.h"
#include "Member.h"

using namespace std;

class MyLibrary : public AbstractLibrary {
    list<Book *> books;
    list<Member *> members;

public:
    MyLibrary() = default;
    virtual ~MyLibrary() = default;
    void addBook(Book * book) override;
    void borrowBook(Member * member, string title) override;
    void returnBook(Member * member, Book * book) override;
    void returnBook(Member * member, string title) override;
    Book * findBookByTitle(string title);
    int getBookCount();
};

#endif