#include "RegularMember.h"


RegularMember::RegularMember(string name, int memberId) : Member(name, memberId, 3) {
    cout << "Created regular member" << name << "\n";    
}

void borrow(Book book);