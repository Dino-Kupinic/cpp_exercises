//
// Created by Dino on 29 Dec 2022.
//

#ifndef CPP_EXERCISES_LIBRARY_H
#define CPP_EXERCISES_LIBRARY_H

#include <iostream>
#include <vector>
#include "Patron.h"
#include "Book.h"

namespace BookLib {

    class Library {
    private:
        std::vector<Patron> patrons;
        std::vector<Book> books;

        struct Transaction {
            Book t_book;
            Patron t_patron;
        };
    };
}


#endif //CPP_EXERCISES_LIBRARY_H
