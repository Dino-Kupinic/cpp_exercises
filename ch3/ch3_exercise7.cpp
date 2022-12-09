//
// Created by Dino on 9 Dec 2022.
//

#include <iostream>
#include <vector>

using namespace std;

int ch3_exercise7() {
    cout << "Please enter three names: \n";

    string name1 {""};
    string name2 {0};
    string name3 {0};

    cin >> name1 >> name2 >> name3;

    /*
     * vector is introduced in ch4, but I did these after ch4 so why not
     */
    vector<string> vec;
    vec.push_back(name1);
    vec.push_back(name2);
    vec.push_back(name3);

    std::sort(vec.begin(), vec.end());
    cout << vec[0] << "," << vec[1] << "," << vec[2];

    return 0;
}
