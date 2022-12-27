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
    }
}

int ch9_drill_p1() {
    Date today;

    init_day(today,2000,2,20);

    cout << today.y << '\n' << today.m << '\n' << today.d;

    return 0;
}
