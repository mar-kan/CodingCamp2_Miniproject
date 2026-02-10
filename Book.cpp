#include "Book.h"


Book::Book(string title, string author, string isbn) {
    this->title = title;
    this->author = author;
    this->isbn = isbn;
}

string Book::getTitle() const {
    return title;
}

string Book::getAuthor() const {
    return author;
}

string Book::getIsbn() const {
    return isbn;
}

void Book::setTitle(string title) {
    this->title = title;
}

void Book::setAuthor(string author) {
    this->author = author;
}

void Book::setIsbn(string isbn) {
    this->isbn = isbn;
}
