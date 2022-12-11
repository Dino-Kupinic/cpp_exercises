//
// Created by Dino on 11 Dec 2022.
//

#include <iostream>

using namespace std;

double ctof(double c) { // Celsius to Fahrenheit
    if (c >= -273.15)
        return (c * 9/5) + 32;
    cout << "Invalid Celsius!\n";
}

double ftoc(double f) { // Fahrenheit to Celsius
    if (f >= -459.67)
        return (f -32) * 5/9;
    cout << "Invalid Fahrenheit!\n";
}

int ch5_exercise6() {
    char unit;
    double f{0.0};
    double c{0.0};
    cout << "Would you like to enter in Celsius or Fahrenheit? [c/f]: \n";
    cin >> unit;

    switch (unit) {
        case 'f':
            cout << "Enter your value: \n";
            cin >> f;
            cout << ftoc(f) << " C\n";
            break;
        case 'c':
            cout << "Enter your value: \n";
            cin >> c;
            cout << ctof(c) << " F\n";
            break;
        default:
            cout << "Invalid Input\n";
    }

    return 0;
}