//
// Created by Dino on 9 Dec 2022.
//

#include <iostream>
#include <vector>

using namespace std;

int ch3_exercise6() {
    cout << "Please enter three integer values: \n";

    int val1 {0};
    int val2 {0};
    int val3 {0};

    cin >> val1 >> val2 >> val3;

    /*
     * vector is introduced in ch4, but I did these after ch4 so why not
     */
    vector<int> vec;
    vec.push_back(val1);
    vec.push_back(val2);
    vec.push_back(val3);

    std::sort(vec.begin(), vec.end());
    cout << vec[0] << "," << vec[1] << "," << vec[2];

    return 0;
}