#ifndef PREMIUMMEMBER_H
#define PREMIUMMEMBER_H

#include <string>
#include "Book.h"
#include "Member.h"

using namespace std;

class PremiumMember : public Member {
public:
    PremiumMember(string name, int memberId);
};

#endif