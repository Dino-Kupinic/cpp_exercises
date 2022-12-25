//
// Created by Dino on 24 Dec 2022.
//

#include "my.h"
#include <iostream>

int foo {1};

int use() {
    print_foo();
    print(99);

    int x = 7;
    int y = 9;

    std::cout << '\n';

    swap_v(x, y);
    //swap_r(7, 9);     geht nicht: kein lvalue

    const int cx = 7;
    const int cy = 9;

    swap_cr(cx, cy);
    swap_v(7.7, 7.9);

    double dx = 7.7;
    double dy = 9.9;

    //swap_r(dx, dy);   komisch... static_cast geht auch nicht
    swap_cr(7.7, 7.9);

    return 0;
}