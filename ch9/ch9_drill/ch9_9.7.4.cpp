//
// Created by Dino on 27 Dec 2022.
//

#include <iostream>

using namespace std;

namespace Chrono {
    enum class Month {
        jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
    };

    class Date {
    public:
        Date(int y, Month m, int d);
        Date();
        bool is_date(int y, Month , int d);
        void add_day(int n);
        Month month() const { return m; }
        int day() const { return d; }
        int year() const { return y;}
    private:
        int y;
        Month m;
        int d;
    };

    const Date& default_date() {
        static Date dd {1970,Month::jan,1};
        return dd;
    }

    Date::Date() : y{default_date().y}, m{default_date().m}, d{default_date().d} {}

    Date::Date(int y, Month m, int d) : y{y}, m{m}, d{d} {}


    bool Date::is_date(int y, Month m, int d) {
        bool validYear = y >= 0 && y <= 9999;
        bool validDay = d >= 1 && d <= 31;
        if (validYear && validDay) return true;
        return false;
    }

    void Date::add_day(int n) {
        if (d + n <= 31) {
            d += n;
        } else {
            cout << "\nCan't go beyond 31\n";
        }
    }

    ostream& operator<<(ostream& os, Date& d) {
        return os << '(' << d.year() << ',' << int(d.month()) << 'y' << d.day() << ')';
    }

}

int ch9_drill_p5() {
    Chrono::Date today (2000,Chrono::Month::mar,10);
    Chrono::Date tomorrow {today};

    tomorrow.add_day(1);

    Chrono::Date testDate;
    if (testDate.is_date(3,Chrono::Month::jan,31)) cout << "Valid Date" << endl;


    cout << today.year() << '\n' << int(today.month()) << '\n' << today.day() << "\n\n";
    cout << tomorrow.year() << '\n' << int(tomorrow.month()) << '\n' << tomorrow.day();

    return 0;
}

