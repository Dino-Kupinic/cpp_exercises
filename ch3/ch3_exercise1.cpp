//
// Created by Dino on 9 Dec 2022.
//

#include <iostream>

using namespace std;

int ch3_exercise1() {
    string previous = " ";
    string current;

    while (cin >> current) {
        if (previous == current) {
            cout << "repeated word: " << current << '\n';
        }
        previous = current;
    }

    return 0;
}
