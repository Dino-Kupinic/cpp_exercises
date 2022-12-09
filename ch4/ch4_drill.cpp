//
// Created by Dino on 9 Dec 2022.
//

#include <iostream>
#include <vector>

using namespace std;

int ch4_drill() {
    double val1 {0.0};
    double smallest {0.0};
    double largest {0.0};
    int number_of_values {0};
    double sum {0.0};
    double tempNum {0.0};

    constexpr int CM_TO_M {100};
    constexpr double FT_TO_M {3.281};
    constexpr double IN_TO_M {39.3701};

    vector<double> all_values;

    string unit;

    while (true) {
        cout << endl;
        cin >> val1 >> unit;

        if (unit == "m" || unit == "cm" || unit == "ft" || unit == "in") {

            if (unit == "cm")
                tempNum = val1 / CM_TO_M;
            else if (unit == "ft")
                tempNum = val1 / FT_TO_M;
            else if (unit == "in")
                tempNum = val1 / IN_TO_M;
            else
                tempNum = val1;
            all_values.push_back(tempNum);
            sum += tempNum;
            cout << val1 << unit;

            if (val1 > largest)
                largest = val1;
            else if (val1 < smallest)
                smallest = val1;

        } else {
            cout << "\nInvalid unit";
        }

        cout << "\n" << smallest << " smallest so far";
        cout << "\n" << largest << " biggest so far";
        cout << "\n" << sum << " m is the sum\n";

        sort(all_values.begin(), all_values.end());
        for (int i = 0; i < all_values.size(); ++i) {
            cout << all_values[i] << "m\n";
        }

        ++number_of_values;
    }
}

