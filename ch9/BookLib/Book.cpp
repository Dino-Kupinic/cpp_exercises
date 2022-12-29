//
// Created by Dino on 28 Dec 2022.
//

#include "Book.h"

namespace Book_lib {
    Book::Book(std::string_view ISBN,
               std::string_view title,
               std::string_view author,
               const int& copyright_date,
               const bool& book_is_checked,
               Genre genre)
    : ISBN{ISBN}, title{title}, author{author}, copyright_date{copyright_date}, book_is_checked{book_is_checked}, genre{genre}{
        if (!is_valid()) throw Invalid{};
    }

    bool Book::is_valid() {
        constexpr int ISBN_SIZE {13};

        if (ISBN.length() != ISBN_SIZE) return false;

        for (int i = 0; i < ISBN_SIZE; ++i) {
            char digitCheck {ISBN[i]};
            if (digitCheck < '0' || digitCheck > '9') return false;
        }
        return true;
    }

    void Book::check_in() {
        book_is_checked = true;
    }

    void Book::check_out() {
        book_is_checked = false;
    }

    bool operator== (const Book& b1, const Book& b2) {
        return b1.get_ISBN() == b2.get_ISBN();
    }

    bool operator!= (const Book& b1, const Book& b2) {
        return b1.get_ISBN() != b2.get_ISBN();
    }

    std::ostream& operator<< (std::ostream& os, const Book& book) {
        return os
        << book.get_title() << '\n'
        << book.get_author() << '\n'
        << book.get_ISBN() << '\n'
        << getGenreValue(book.get_genre()) << '\n';
    }

    std::string getGenreValue(Genre g) {
        switch (g) {
            case Genre::fiction:
                return "fiction";
            case Genre::nonfiction:
                return "nonfiction";
            case Genre::periodical:
                return "periodical";
            case Genre::biography:
                return "biography";
            case Genre::children:
                return "children";
        }
        return "";
    }
}
