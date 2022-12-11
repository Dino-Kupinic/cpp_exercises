//
// Created by Dino on 11 Dec 2022.
//

#include <iostream>

using namespace std;

double ktoc(double k) { // Kelvin to C
    if (k >= 0.0)
        return k - 273.15;
    cout << "Invalid Temperature!\n";
}

int ch5_exercise5() {
    double k {0};
    cin >> k;

    double c = ktoc(k);

    if (c >= -273.15)
        cout << c << " C\n";

    return 0;
}
