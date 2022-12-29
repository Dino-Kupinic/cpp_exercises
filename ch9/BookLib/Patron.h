//
// Created by Dino on 29 Dec 2022.
//

#ifndef CPP_EXERCISES_PATRON_H
#define CPP_EXERCISES_PATRON_H


#include <iostream>

namespace BookLib {

    class Patron {
    public:
        std::string get_user_name() const { return user_name; }
        int get_card_number() const { return card_number; }
        int get_fees() const { return fees; }
    private:
        std::string user_name;
        int card_number;
        int fees;
    };

    bool hasFees(Patron& user);
}


#endif //CPP_EXERCISES_PATRON_H
