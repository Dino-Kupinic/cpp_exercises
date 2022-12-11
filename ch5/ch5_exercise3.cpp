//
// Created by Dino on 11 Dec 2022.
//

#include <iostream>

using namespace std;

double ctok2(double c) { // Celsius to Kelvin (2, because of already defined)
    int k = c + 273.15;
    return k;
}

int ch5_exercise3() {
    double c {0};
    cin >> c;
    if (c >= -273.15) {
        double k = ctok2(c);
        cout << k << "K\n";
    } else {
        cout << "Invalid Temperature!\n";
    }

    return 0;
}
