#include "MyLibrary.h"


void MyLibrary::addBook(Book * book) {
    this->books.push_back(book);
    cout << "Book " << book->getTitle() << " added to library\n";
}
    
void MyLibrary::borrowBook(Member * member, string title) {
    Book * book = this->findBookByTitle(title);
    if (! book) {
        cout << "Book " << title << " is not available\n";
        return;
    }

    if (member->borrowBook(book))
        this->books.remove(book);

}

void MyLibrary::returnBook(Member * member, Book * book) {
    if (member->returnBook(book))
        this->addBook(book);
}

void MyLibrary::returnBook(Member * member, string title) {
    Book * book = member->returnBook(title);
    if (book)
        this->addBook(book);
}

Book * MyLibrary::findBookByTitle(string title) {
    for (Book *book : this->books) {
        if (book->getTitle() == title)
            return book;
    }
    return nullptr;
}

int MyLibrary::getBookCount() {
    return this->books.size();
}