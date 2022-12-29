//
// Created by Dino on 29 Dec 2022.
//

#include "Patron.h"

namespace Book_lib {
    bool hasFees(Patron& user) {
        return user.get_fees() > 0;
    }

    void Patron::setFees(const int& value) {
        fees = value;
    }
}
