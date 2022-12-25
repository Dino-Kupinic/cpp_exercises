//
// Created by Dino on 25 Dec 2022.
//

#include <iostream>
#include <vector>

using namespace std;

void print(string_view label, vector<int>& v);

int ch8_exercise2() {
    vector<int> vec {2,3,4,5};

    print("test", vec);

    return 0;
}

void print(string_view label, vector<int>& v) {
    for (int i : v) {
        cout << label << ": " << i << endl;
    }
}
