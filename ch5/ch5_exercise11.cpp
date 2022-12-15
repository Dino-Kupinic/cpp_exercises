//
// Created by Dino on 15 Dec 2022.
//

#include <iostream>

using namespace std;

int ch5_exercise11() {
    int fib;
    int num1 = 0;
    int num2 = 1;
    int count = 1;

    cout << 1 << endl;
    do {
        fib = num1 + num2;
        num1 = num2;
        num2 = fib;

        ++count;
        if (fib < 32768) cout << fib << endl;
    } while (fib < 32768);

    cout << "Fibonacci fits in an int (signed) " << count << " times"<< endl;

    return 0;
}