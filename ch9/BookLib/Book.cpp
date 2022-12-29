//
// Created by Dino on 28 Dec 2022.
//

#include "Book.h"

namespace BookLib {
    Book::Book(std::string ISBN, std::string title, std::string author, int copyright_date, bool book_is_checked)
    : ISBN{ISBN}, title{title}, author{author}, copyright_date{copyright_date}, book_is_checked{book_is_checked} {
        if (!is_valid(ISBN)) throw Invalid{};
    }

    bool Book::is_valid(std::string ISBN) {
        constexpr int ISBN_SIZE {13};

        if (ISBN.length() != ISBN_SIZE) return false;

        for (int i = 0; i < ISBN_SIZE; ++i) {
            char digitCheck {ISBN[i]};
            if (digitCheck < '0' || digitCheck > '9') return false;
        }
        return true;
    }


    void Book::check_in(Book& book) {
        book.book_is_checked = true;
    }

    void Book::check_out(Book& book) {
        book.book_is_checked = false;
    }
}