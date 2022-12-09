//
// Created by Dino on 9 Dec 2022.
//

#include <iostream>

using namespace std;

int ch3_exercise9() {
    cout << "write a spelled-out number (zero, one): \n";

    string num;
    cin >> num;

    /*
     * im forced to do this
     */
    if (num == "zero")
        cout << "0";
    else if (num == "one")
        cout << "1";
    else if (num == "two")
        cout << "2";
    else if (num == "three")
        cout << "3";
    else if (num == "four")
        cout << "4";
    else
        cout << "What?";

    return 0;
}
