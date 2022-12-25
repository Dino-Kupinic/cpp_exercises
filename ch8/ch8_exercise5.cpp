//
// Created by Dino on 25 Dec 2022.
//

#include <iostream>
#include <vector>

using namespace std;

void print3(string_view label, const vector<int>& v);
vector<int> fibonacci2(int x, int y, vector<int>& v, int n);
void revFibonacci(vector<int>& v);
vector<int> revFibonacciCopy(vector<int> v);

int ch8_exercise5() {
    vector<int> vec;
    vector<int> vec2 = fibonacci2(1, 2, vec, 10);
    vector<int> vec3 = fibonacci2(1, 2, vec, 10);

    //print3("fibo", fibonacci2(1, 2, vec, 10));

    //revFibonacci(vec2);
    //print3("fiboRev: ", vec2);

    print3("fiboRevCopy: ", revFibonacciCopy(vec3));

    return 0;
}

void print3(string_view label, const vector<int>& v) {
    for (int i : v) {
        cout << label << ": " << i << endl;
    }
}

vector<int> fibonacci2(int x, int y, vector<int>& v, int n) {
    v.push_back(x);
    v.push_back(y);

    for (int i = 2; i < n; ++i) {
        int nextNum = v[i-1] + v[i-2];
        v.push_back(nextNum);
    }

    return v;
}

void revFibonacci(vector<int>& v) {
    for (int i = 0; i < v.size() / 2; ++i) {
        swap(v[i], v[v.size() - 1 - i]);
    }
}

vector<int> revFibonacciCopy(vector<int> v) {
    vector<int> newVec;
    for (int i = 0; i < v.size(); ++i) {
        newVec.push_back(v[v.size() - 1 - i]);
    }
    return newVec;
}
