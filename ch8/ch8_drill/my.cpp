//
// Created by Dino on 24 Dec 2022.

#include "my.h"
#include "../../std_lib_facilities.h"

void print_foo() {
    cout << foo;
}

void print(int i) {
    cout << i;
}

void swap_v(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "swap_v: a:" << a << " b:" << b << '\n';
}

void swap_r(int& a, int& b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "swap_r: a:" << a << " b:" << b << '\n';
}

void swap_cr(const int& a, const int& b) {
    /*
    int temp;
    temp = a;
    a = b;
    b = temp;
    */
}
