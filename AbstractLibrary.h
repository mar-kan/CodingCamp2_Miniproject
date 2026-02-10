#ifndef ABSTRACT_LIBRARY_H
#define ABSTRACT_LIBRARY_H

#include "Book.h"
#include "Member.h"

class AbstractLibrary {
    
public:
    virtual void addBook(Book * book) = 0;
    virtual void borrowBook(Member * member, string isbn) = 0;
    virtual void returnBook(Member * member, Book * book) = 0;
    virtual void returnBook(Member * member, string isbn) = 0;
};

#endif