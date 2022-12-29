//
// Created by Dino on 28 Dec 2022.
//

#ifndef CPP_EXERCISES_BOOK_H
#define CPP_EXERCISES_BOOK_H

#include <iostream>

namespace Book_lib {
    enum class Genre {
        fiction, nonfiction, periodical, biography, children
    };

    class Book {
    public:
        class Invalid{};
        int get_copyright_date() const { return copyright_date; }
        int get_bool_is_checked() const { return book_is_checked; }
        std::string get_author() const { return author; }
        std::string get_title() const { return title; }
        std::string get_ISBN() const { return ISBN; }
        Genre get_genre() const { return genre; }

        Book(std::string_view ISBN,
             std::string_view title,
             std::string_view author,
             const int& copyright_date,
             const bool& book_is_checked,
             Genre genre);

        bool is_valid();
        void check_in();
        void check_out();
    private:
        int copyright_date; // year
        bool book_is_checked;
        std::string author;
        std::string title;
        std::string ISBN;
        Genre genre;
    };

    bool operator== (const Book& b1, const Book& b2);
    bool operator!= (const Book& b1, const Book& b2);
    std::ostream& operator<< (std::ostream& os, const Book& book);
    std::string getGenreValue(Genre g);
}

int ch9_exercise5_6_7_8_9();

#endif //CPP_EXERCISES_BOOK_H
