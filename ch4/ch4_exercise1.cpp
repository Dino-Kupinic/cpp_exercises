//
// Created by Dino on 10 Dec 2022.
//

#include <iostream>

using namespace std;

int ch4_exercise1() {
    string disliked = "Broccoli";
    string disliked2 = "Walnuts";
    string input;

    while (cin >> input) {
        cout << endl;
        cin >> input;
        if (input == disliked || input == disliked2) {
            cout << "\nBLEEP";
        } else {
            cout << input;
        }
    }

    return 0;
}
