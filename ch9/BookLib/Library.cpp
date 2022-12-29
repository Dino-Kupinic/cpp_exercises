//
// Created by Dino on 29 Dec 2022.
//

#include "Library.h"

namespace Book_lib {
    void Library::add_book(const Book& b) {
        books.push_back(b);
    }

    void Library::add_patron(const Patron& p) {
        patrons.push_back(p);
    }
}