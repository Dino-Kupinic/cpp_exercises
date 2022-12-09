//
// Created by Dino on 9 Dec 2022.
//

#include <iostream>

using namespace std;

int ch3_exercise8() {
    cout << "Enter a integer value: \n";

    int val {0};
    cin >> val;

    if (val % 2 == 0)
        cout << "even";
    else
        cout << "odd";

    return 0;
}
