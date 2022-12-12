//
// Created by Dino on 12 Dec 2022.
//

#include <iostream>
#include <vector>
//#include "../std_lib_facilities.h"

using namespace std;

class Name_value {
public:
    string str;
    int value;
};

int ch6_exercise4() {
    string name;
    int age;
    vector<Name_value> vec;
    Name_value nameValue;

    while (cin >> name >> age) {
        if (name == "NoName" && age == 0) {
            break;
        }
        nameValue.str = name;
        nameValue.value = age;
        vec.push_back(nameValue);
    }

    for (int i = 0; i < vec.size(); ++i) {
        cout << "Name: " << vec[i].str << " Age: " << vec[i].value << endl;
    }

    return 0;
}