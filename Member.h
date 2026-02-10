#ifndef MEMBER_H
#define MEMBER_H

#include <iostream>
#include <string>
#include "Book.h"
#include <list>
using namespace std;

class Member {
    string name;
    int memberId;
    list<Book*> *borrowedBooks;
    int bookLimit;

public:
    Member(string name, int memberId, int bookLimit);
    bool borrowBook(Book * book);
    Book * returnBook(Book * book);
    Book * returnBook(string title);
    Book * findBookByTitle(string title);
    int getBookCount();
    string getName();
    ~Member();
};

#endif