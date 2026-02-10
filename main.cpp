#include <iostream>
#include "MyLibrary.h"
#include "RegularMember.h"
#include "PremiumMember.h"


void printBookStatus(MyLibrary * library, Member * member1, Member * member2) {
    // helper function to print book status
    
    cout << "\nLibrary has " << library->getBookCount() << " books\n";
    cout << "Member " << member1->getName() << " has " << member1->getBookCount() << " books\n";
    cout << "Member " << member2->getName() << " has " << member2->getBookCount() << " books\n";
    cout << "\n----------------------------------------------------------------\n";
}

int main() {
    MyLibrary * library = new MyLibrary();

    Book * book1 = new Book("1984", "George Orwell", "123456");
    Book * book2 = new Book("Brave New World", "Aldous Huxley", "654321");
    Book * book3 = new Book("Animal Farm", "George Orwell", "123123");
    Book * book4 = new Book("To kill a mockingbird", "Harper Lee", "321321");
    Book * book5 = new Book("The Outsider", "Albert Camus", "443322");
    Book * book6 = new Book("I, Robot", "Isaac Asimov", "112233");

    library->addBook(book1);
    library->addBook(book2);
    library->addBook(book3);
    library->addBook(book4);
    library->addBook(book5);
    library->addBook(book6);

    RegularMember * regularMember = new RegularMember("Alice", 1);
    PremiumMember * premiumMember = new PremiumMember("Bob", 2);
    printBookStatus(library, regularMember, premiumMember);

    cout << "Test: Borrowing available books:\n\n";
    library->borrowBook(regularMember, "1984");
    library->borrowBook(premiumMember, "Brave New World");
    printBookStatus(library, regularMember, premiumMember);

    cout << "Test: Borrowing already borrowed books:\n\n";
    library->borrowBook(premiumMember, "1984");
    printBookStatus(library, regularMember, premiumMember);

    cout << "Test: Exceeding book limit for regular member\n\n";
    library->borrowBook(regularMember, "Animal Farm");
    library->borrowBook(regularMember, "To kill a mockingbird");
    library->borrowBook(regularMember, "The Outsider");
    printBookStatus(library, regularMember, premiumMember);

    cout << "Test: Returning a book:\n\n";
    library->returnBook(regularMember, "1984");
    printBookStatus(library, regularMember, premiumMember);

    cout << "Test: Borrowing another book:\n\n";
    library->borrowBook(regularMember, "The Outsider");
    printBookStatus(library, regularMember, premiumMember);

    cout << "Returning all the books of " << regularMember->getName() << "\n\n";
    library->returnBook(regularMember, "Animal Farm");
    library->returnBook(regularMember, "To kill a mockingbird");
    library->returnBook(regularMember, "The Outsider");
    printBookStatus(library, regularMember, premiumMember);

    cout << "Test: Exceeding book limit for premium member\n\n";
    library->borrowBook(premiumMember, "Animal Farm");
    library->borrowBook(premiumMember, "To kill a mockingbird");
    library->borrowBook(premiumMember, "The Outsider");
    library->borrowBook(premiumMember, "I, Robot");
    library->borrowBook(premiumMember, "1984");
    printBookStatus(library, regularMember, premiumMember);

    delete library;

    delete book1;
    delete book2;
    delete book3;
    delete book4;
    delete book5;
    delete book6;

    delete regularMember;
    delete premiumMember;

    return 0;
}