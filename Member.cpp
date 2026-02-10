#include "Member.h"

Member::Member(string name, int id, int bookLimit) {
    this->name = name;
    this->memberId = id;
    this->bookLimit = bookLimit;
    this->borrowedBooks = new list<Book*>;
}

bool Member::borrowBook(Book * book) {
    if (this->bookLimit <= int(borrowedBooks->size())) {
        cout << "Member "<< this->name << " cannot borrow another book, limit exceeded\n";
        return 0;
    }

    this->borrowedBooks->push_back(book);
    cout << "Member "<< this->name << " borrowed book " << book->getTitle() << "\n";
    return 1;
}

Book * Member::returnBook(Book * book) {
    this->borrowedBooks->remove(book);
    cout << "Member "<< this->name << " returned book " << book->getTitle() << "\n";
    return book;
}

Book * Member::returnBook(string title) {
    Book * book = this->findBookByTitle(title);
    this->borrowedBooks->remove(book);
    cout << "Member "<< this->name << " returned book " << title << "\n";
    return book;
}

Book * Member::findBookByTitle(string title) {
    for (Book *book : *this->borrowedBooks) {
        if (book->getTitle() == title)
            return book;
    }

    cout << "Member " << this->name << " does not have book " << title << "\n";
    return nullptr;
}

int Member::getBookCount() {
    return int(borrowedBooks->size());
}

string Member::getName() {
    return this->name;
}

Member::~Member() {
    delete borrowedBooks;
}