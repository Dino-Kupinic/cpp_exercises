//
// Created by Dino on 9 Dec 2022.
//

#include <iostream>

using namespace std;

int ch3_exercise4() {
    cout << "Please enter two integers: \n";

    int val1 {0};
    int val2 {0};

    cin >> val1 >> val2;

    if (val1 > val2)
        cout << "\nval1 is bigger.";
    else
        cout << "\nval2 is bigger.";

    cout << "\nthe sum is " << val1 + val2;
    cout << "\nthe difference is " << abs(val1 - val2); // std::abs -> absolute value
    cout << "\nthe product is " << val1 * val2;
    cout << "\nthe ratio is " << val1 / val2;

    return 0;
}