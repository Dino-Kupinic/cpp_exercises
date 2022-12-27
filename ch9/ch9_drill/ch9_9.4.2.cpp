//
// Created by Dino on 27 Dec 2022.
//

#include <iostream>

using namespace std;

struct Date2 {
    int y, m, d;
    Date2(int y, int m, int d) : y{y}, m{m}, d{d} {}
    void add_day2(int n);
};

void Date2::add_day2(int n) {
    if (d + n <= 31) {
        d += n;
    } else {
        cout << "\nCan't go beyond 31\n";
    }
}

int ch9_drill_p2() {
    Date2 today (2000,2,20);
    Date2 tomorrow {today};

    tomorrow.add_day2(1);

    cout << today.y << '\n' << today.m << '\n' << today.d << "\n\n";
    cout << tomorrow.y << '\n' << tomorrow.m << '\n' << tomorrow.d;

    return 0;
}
