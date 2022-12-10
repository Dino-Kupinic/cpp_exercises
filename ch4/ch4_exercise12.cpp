//
// Created by Dino on 10 Dec 2022.
//

#include <iostream>
#include <vector>

using namespace std;

int ch4_exercise11() {
    vector<int> prime_numbers;
    int max;

    cout << "How many prime numbers should I find? Give me a limit: \n";
    cin >> max;

    for (int i = 1; i <= max; ++i) {
        bool is_a_prime = true;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                is_a_prime = false;
                break;
            }
        }

        if (is_a_prime)
            prime_numbers.push_back(i);
    }

    for (int i = 0; i < prime_numbers.size(); ++i) {
        cout << prime_numbers[i] << " is a prime" << endl;
    }

    return 0;
}