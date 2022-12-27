//
// Created by Dino on 27 Dec 2022.
//

#include <iostream>

using namespace std;

struct Date {
    int y, m, d;
    Date(int y, int m, int d) : y{y}, m{m}, d{d} {};
    void add_day2(int n);
};

void Date::add_day2(int n) {
    if (d + n <= 31) {
        d += n;
    } else {
        cout << "\nCan't go beyond 31\n";
    }
}

int ch9_drill_p2() {
    Date today (2000,2,20);

    today.add_day2(5);

    cout << today.y << '\n' << today.m << '\n' << today.d;

    return 0;
}
