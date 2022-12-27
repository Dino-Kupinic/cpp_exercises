//
// Created by Dino on 27 Dec 2022.
//

#include <iostream>

using namespace std;

class Date {
public:
    Date(int y, int m, int d);
    void add_day(int n);
    int month() const { return m2; }
    int day() const { return d2; }
    int year() const { return y2;}
private:
    int y2, m2, d2;
};

Date::Date(int y, int m, int d) : y2{y}, m2{m}, d2{d} {}

void Date::add_day(int n) {
    if (d2 + n <= 31) {
        d2 += n;
    } else {
        cout << "\nCan't go beyond 31\n";
    }
}

int ch9_drill_p3() {
    Date today (2000, 3, 10);
    Date tomorrow {today};

    tomorrow.add_day(1);

    cout << today.year() << '\n' << today.month() << '\n' << today.day() << "\n\n";
    cout << tomorrow.year() << '\n' << tomorrow.month() << '\n' << tomorrow.day();

    return 0;
}