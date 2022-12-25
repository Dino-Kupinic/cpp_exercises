//
// Created by Dino on 25 Dec 2022.
//

#include <iostream>
#include <vector>

using namespace std;

void print2(string_view label, const vector<int>& v);
vector<int> fibonacci(int x, int y, vector<int>& v, int n);

int ch8_exercise3() {
    vector<int> vec;

    print2("fibo", fibonacci(1,2,vec,10));

    return 0;
}

void print2(string_view label, const vector<int>& v) {
    for (int i : v) {
        cout << label << ": " << i << endl;
    }
}

vector<int> fibonacci(int x, int y, vector<int>& v, int n) {
    v.push_back(x);
    v.push_back(y);

    for (int i = 2; i < n; ++i) {
        int nextNum = v[i-1] + v[i-2];
        v.push_back(nextNum);
    }

    return v;
}
