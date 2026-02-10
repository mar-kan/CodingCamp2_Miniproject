#ifndef REGULARMEMBER_H
#define REGULARMEMBER_H

#include <string>
#include "Book.h"
#include "Member.h"

using namespace std;

class RegularMember : public Member {
public:
    RegularMember(string name, int member_id);
};

#endif