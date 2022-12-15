//
// Created by Dino on 12 Dec 2022.
//

#include <iostream>
#include <vector>

using namespace std;



int ch6_exercise9() {
    vector<char> input_vec;
    vector<int> output_vec;
    char input_digit;

    while (cin >> input_digit) {
        if (input_digit == 'd') {
            break;
        }
        input_vec.push_back(input_digit);
    }

    for (char i : input_vec) {
        output_vec.push_back(int(i - '0')); // convert to digit: '8' - '0' = 8
    }

    switch (output_vec.size()) {
        case 1:
            cout << output_vec[0] << " is " << output_vec[0] << " ones";
            break;
        case 2:
            cout << output_vec[0] << output_vec[1] << " is " << output_vec[1] << " tens and " << output_vec[0] << " ones";
            break;
        case 3:
            cout << output_vec[0] << output_vec[1] << output_vec[2] << " is " << output_vec[0] << " hundreds and "
            << output_vec[1] << " tens and " << output_vec[2] << " ones";
            break;
        case 4:
            cout << output_vec[0] << output_vec[1] << output_vec[2] << output_vec[3] << " is " << output_vec[0]
            << " thousands and " << output_vec[1] << " hundreds and " << output_vec[2] << " tens and " << output_vec[3] << " ones";
            break;
    }

    return 0;
}