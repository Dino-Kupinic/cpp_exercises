//
// Created by Dino on 11 Dec 2022.
//

#include <iostream>

using namespace std;

double ctok3(double c) { // Celsius to Kelvin (3, because of already defined)
    if (c >= -273.15)
        return c + 273.15;
    cout << "Invalid Temperature!\n";
}

int ch5_exercise4() {
    double c {0};
    cin >> c;

    double k = ctok3(c);

    if (k <= 0)
        cout << k << "K\n";

    return 0;
}
