//
// Created by Dino on 28 Dec 2022.
//

#include "Book.h"

int ch9_exercise5_6_7_8_9() {
    Book_lib::Book book ("1919191919191", "testBook", "Me", 2022, false, Book_lib::Genre::biography);

    std::cout << book << std::endl;
    book.check_in();
    std::cout << book.get_bool_is_checked();
    return 0;
}
