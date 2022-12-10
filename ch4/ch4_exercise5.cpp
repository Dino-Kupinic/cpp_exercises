//
// Created by Dino on 10 Dec 2022.
//

#include <iostream>

using namespace std;

int ch4_exercise5() {
    double val1 {0.0};
    double val2 {0.0};
    char operation;

    cout << "Please enter the first number: ";
    cin >> val1;
    cout << "Please enter the second number: ";
    cin >> val2;

    cout << "Please enter an operation character [+,-,*,/]: ";
    cin >> operation;

    switch (operation) {
        case '+':
            cout << "\nThe sum of " << val1 << " and " << val2 << " is " << val1 + val2;
            break;
        case '-':
            cout << "\nThe difference of " << val1 << " and " << val2 << " is " << val1 - val2;
            break;
        case '*':
            cout << "\nThe product of " << val1 << " and " << val2 << " is " << val1 * val2;
            break;
        case '/':
            cout << "\nThe quotient of " << val1 << " and " << val2 << " is " << val1 / val2;
            break;
    }

    return 0;
}
