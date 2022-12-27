//
// Created by Dino on 27 Dec 2022.
//

#include <iostream>

using namespace std;

enum class Month {
    jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

class Date2 {
public:
    Date2(int y, Month m, int d);
    Date2();
    void add_day(int n);
    Month month() const { return m3; }
    int day() const { return d3; }
    int year() const { return y3;}
private:
    int y3;
    Month m3;
    int d3;
};

const Date2& default_date() {
    static Date2 dd {1970,Month::jan,1};
    return dd;
}

Date2::Date2() : y3{default_date().y3}, m3{default_date().m3}, d3{default_date().d3} {}

Date2::Date2(int y, Month m, int d) : y3{y}, m3{m}, d3{d} {}

void Date2::add_day(int n) {
    if (d3 + n <= 31) {
        d3 += n;
    } else {
        cout << "\nCan't go beyond 31\n";
    }
}

ostream& operator<<(ostream& os, Date2& d) {
    return os << '(' << d.year() << ',' << int(d.month()) << 'y' << d.day() << ')';
}

int ch9_drill_p4() {
    Date2 today (2000,Month::mar,10);
    Date2 tomorrow {today};

    tomorrow.add_day(1);

    cout << today.year() << '\n' << int(today.month()) << '\n' << today.day() << "\n\n";
    cout << tomorrow.year() << '\n' << int(tomorrow.month()) << '\n' << tomorrow.day();

    return 0;
}
