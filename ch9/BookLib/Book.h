//
// Created by Dino on 28 Dec 2022.
//

#ifndef CPP_EXERCISES_BOOK_H
#define CPP_EXERCISES_BOOK_H

#include <iostream>

namespace BookLib {

    class Book {
    public:
        class Invalid{};
        int get_copyright_date() const { return copyright_date; }
        int get_bool_is_checked() const { return book_is_checked; }
        std::string get_author() const { return author; }
        std::string get_title() const { return title; }
        std::string get_ISBN() const { return ISBN; }

        void check_in(Book& book);
        void check_out(Book& book);

        Book(std::string ISBN, std::string title, std::string author, int copyright_date, bool book_is_checked);
        bool is_valid(std::string ISBN);
    private:
        int copyright_date; // year
        bool book_is_checked;
        std::string author;
        std::string title;
        std::string ISBN;
    };
}

int ch9_exercise5_6_7_8_9();

#endif //CPP_EXERCISES_BOOK_H
