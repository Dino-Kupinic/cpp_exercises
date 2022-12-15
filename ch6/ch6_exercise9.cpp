//
// Created by Dino on 12 Dec 2022.
//

#include <iostream>
#include <vector>
#include <regex>

using namespace std;

void display_one_unit(vector<int> vec) {
    if (vec[0] == 1) {
        cout << vec[0] << " is " << vec[0] << " one";
    } else {
        cout << vec[0] << " is " << vec[0] << " ones";
    }
}

// This solution is quite ugly, using a vector makes it really hard to read
void display_two_units(vector<int> vec) {
    if (vec[0] > 1 && vec[1] == 1) {
        cout << vec[0] << vec[1] << " is " << vec[0] << " tens and " << vec[1] << " one";
    } else if (vec[0] == 1 && vec[1] > 1) {
        cout << vec[0] << vec[1] << " is " << vec[0] << " ten and " << vec[1] << " ones";
    } else if (vec[0] == 1 && vec[1] == 1) {
        cout << vec[0] << vec[1] << " is " << vec[0] << " ten and " << vec[1] << " one";
    } else {
        cout << vec[0] << vec[1] << " is " << vec[0] << " tens and " << vec[1] << " ones";
    }
}

int ch6_exercise9() {
    vector<char> input_vec;
    vector<int> output_vec;
    char input_digit;

    cout << "Digit Program\nType d to stop input\n";

    while (cin >> input_digit) {
        if (input_digit == 'd') {
            break;
        } else if (isdigit(input_digit)) {
            input_vec.push_back(input_digit);
        } else {
            cout << "Invalid!";
        }
    }

    for (char i : input_vec) {
        output_vec.push_back(int(i - '0')); // convert to digit: '8' - '0' = 8
    }

    switch (output_vec.size()) {
        case 1:
            display_one_unit(output_vec);
            break;
        case 2:
            display_two_units(output_vec);
            break;
        case 3:
            // You get the idea with the functions above, so I stopped myself from doing more else if constructs with these
            // other two cases
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