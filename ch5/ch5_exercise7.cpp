//
// Created by Dino on 11 Dec 2022.
//

#include <iostream>
#include <cmath>

using namespace std;


int ch5_exercise7() {
    double a;
    double b;
    double c;

    cout << "Enter a: \n";
    cin >> a;
    cout << "Enter b: \n";
    cin >> b;
    cout << "Enter c: \n";
    cin >> c;

    bool isValid = (pow(b, 2) - 4 * a * c) > 0;

    // Quadratic Equation
    double x_minus = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    double x_plus = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

    if (isValid)
        cout << x_minus << '\n' << x_plus;
    else
        cout << "b^2 - 4ac is 0 or lower";
    return 0;
}
