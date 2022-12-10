//
// Created by Dino on 10 Dec 2022.
//

#include <iostream>
#include <vector>

using namespace std;

int ch4_exercise6() {
    vector<string> nums;
    int input_digit;

    nums.push_back("zero");
    nums.push_back("one");
    nums.push_back("two");
    nums.push_back("three");
    nums.push_back("four");
    nums.push_back("five");
    nums.push_back("six");
    nums.push_back("seven");
    nums.push_back("eight");
    nums.push_back("nine");

    while (input_digit >= 0 && input_digit <= 9) {
        cin >> input_digit;
        switch (input_digit) {
            case 0:
                cout << nums[0] << '\n';
                break;
            case 1:
                cout << nums[1] << '\n';
                break;
            case 2:
                cout << nums[2] << '\n';
                break;
            case 3:
                cout << nums[3] << '\n';
                break;
            case 4:
                cout << nums[4] << '\n';
                break;
            case 5:
                cout << nums[5] << '\n';
                break;
            case 6:
                cout << nums[6] << '\n';
                break;
            case 7:
                cout << nums[7] << '\n';
                break;
            case 8:
                cout << nums[8] << '\n';
                break;
            case 9:
                cout << nums[9] << '\n';
                break;
        }
    }

    return 0;
}
