//
// Created by Dino on 9 Dec 2022.
//

#include <iostream>

using namespace std;

int ch3_exercise2() {
    cout << "Enter the amount of miles you want to convert into kilometers: \n";

    double miles {0};
    cin >> miles;

    cout << miles << " miles are " << miles * 1.609 << " km.";

    return 0;
}
