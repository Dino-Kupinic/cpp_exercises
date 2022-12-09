//
// Created by Dino on 9 Dec 2022.
//

#include <iostream>

using namespace std;

int ch3_exercise10() {
    cout << "Enter an operand [+,-,*,/]: \n";

    char operation;
    cin >> operation;

    cout << "\nEnter two numbers: \n";

    double val1 {0};
    double val2 {0};

    cin >> val1 >> val2;

    if (operation == '+')
        cout << val1 + val2;
    if (operation == '-')
        cout << val1 - val2;
    if (operation == '*')
        cout << val1 * val2;
    if (operation == '/')
        cout << val1 / val2;

    return 0;
}
