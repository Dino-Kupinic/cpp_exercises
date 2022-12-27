//
// Created by Dino on 27 Dec 2022.
//

#include <iostream>

using namespace std;

struct Date {
    int y;
    int m;
    int d;
};

void init_day(Date& dd, int y, int m, int d) {
    bool validMonth = m >= 1 && m <= 12;
    bool validDay = d >= 1 && d <= 31;
    if (validMonth && validDay) {
        dd.y = y;
        dd.m = m;
        dd.d = d;
    } else {
        cout << "\nInvalid Date";
    }
}

void add_day(Date& dd, int n) {
    if (dd.d + n <= 31) {
        dd.d += n;
    } else {
        cout << "\nCan't go beyond 31\n";
    }
}

int ch9_drill_p1() {
    Date today{};

    init_day(today,2000,2,20);

    Date tomorrow {today};

    add_day(tomorrow,1);

    cout << today.y << '\n' << today.m << '\n' << today.d << "\n\n";
    cout << tomorrow.y << '\n' << tomorrow.m << '\n' << tomorrow.d;

    return 0;
}
