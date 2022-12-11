//
// Created by Dino on 11 Dec 2022.
//

#include <iostream>
#include <vector>

using namespace std;

int ch5_exercise9() {
    int N {0};
    double num {0.0};
    double sum {0.0};
    vector<double> numbers;

    cout << "Please enter the number of values you want to sum: \n";
    cin >> N;

    cout << "Please enter some integers (press | to stop): \n";
    while (cin >> num) {
        numbers.push_back(num);
    }

    if (N > numbers.size()) {
        cout << "N larger than vector";
    } else {
        for (int i = 0; i < N; ++i) {
            sum += numbers[i];
        }
        cout << "The sum of the first " << N << " numbers is " << sum;
    }

    return 0;
}
