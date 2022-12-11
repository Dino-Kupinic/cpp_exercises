//
// Created by Dino on 11 Dec 2022.
//

#include <iostream>

using namespace std;

double ctok(double c) {
    int k = c + 273.15;
    return k;
}

int ch5_exercise2() {
    double c {0};
    cin >> c;
    double k = ctok(c);
    cout << k << '\n';

    return 0;
}
