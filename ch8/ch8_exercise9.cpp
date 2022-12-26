//
// Created by Dino on 26 Dec 2022.
//

#include <iostream>
#include <vector>

using namespace std;

double sumUntilIndex(const vector<double>& price, const vector<double>& weight, int index) {
    double sum;
    if (price.size() != weight.size()) {
        cout << "Vectors have different length" << endl;
    } else {
        for (int i = 0; i <= index; ++i) {
            sum += weight[i] * price[i];
        }
    }
    return sum;
}

int ch8_exercise9() {
    vector<double> price {1,9.12,8,2.3,3};
    vector<double> weight {2,3,9,22,4};
    int index;

    cout << "Please enter an index: " << endl;
    cin >> index;
    if (index >= price.size() || index >= weight.size()) {
        cout << "Invalid index";
    } else {
        double temp = sumUntilIndex(price, weight, index);
        if (price.size() == weight.size()) {
            cout << "sum: " << temp;
        }
    }

    return 0;
}
