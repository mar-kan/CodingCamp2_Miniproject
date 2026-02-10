#include "PremiumMember.h"


PremiumMember::PremiumMember(string name, int memberId) : Member(name, memberId, 5) {
    cout << "Created premium member" << name << "\n";    
}
