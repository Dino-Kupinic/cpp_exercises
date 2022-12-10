//
// Created by Dino on 10 Dec 2022.
//

#include <iostream>
#include <vector>

using namespace std;

int get_num() {
    vector<string> num_vector;

    num_vector.push_back("zero");
    num_vector.push_back("one");
    num_vector.push_back("two");
    num_vector.push_back("three");
    num_vector.push_back("four");
    num_vector.push_back("five");
    num_vector.push_back("six");
    num_vector.push_back("seven");
    num_vector.push_back("eight");
    num_vector.push_back("nine");

    string number;
    int digit {0};

    while (cin >> digit) {
        return digit;
    }
    cin.clear();

    cin >> number;

    for (int i = 0; i < num_vector.size(); i++) {
        if (number == num_vector[i])
            return i;
    }

    return 0;
}

int ch4_exercise7() {
    double val1 {0.0};
    double val2 {0.0};
    char operation;

    cout << "Please enter the first number: ";
    val1 = get_num();
    cout << "Please enter the second number: ";
    val2 = get_num();

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