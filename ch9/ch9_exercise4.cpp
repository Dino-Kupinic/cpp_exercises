//
// Created by Dino on 28 Dec 2022.
//

#include <iostream>

struct X {
    void f(int x) {
        struct Y {
            int f() { return 1; }
            int m;
        };
        int m;
        m = x;
        Y m2;
        return f(m2.f());
    }

    int m;

    void g(int m) {
        if (m) {
            f(m+2);
        } else {
            g(m+2);
        }
    }

    X() {}

    void m3() {}

    void main() {
        X a;
        a.f(2);
    }
};

int ch9_exercise4() {
    // Simply format 8.4
    return 0;
}

