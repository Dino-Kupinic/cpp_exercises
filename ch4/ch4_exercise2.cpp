//
// Created by Dino on 10 Dec 2022.
//

#include <iostream>
#include <vector>

using namespace std;

int ch4_exercise2() {
    vector<double> temps;

    for (double temp; cin >> temp;) {
        temps.push_back(temp);
    }

    // 2
    
    double sum {0};
    for (int x : temps) sum += x;
    cout << "Average temperature: " << sum/temps.size() << '\n';

    sort(temps.begin(), temps.end());

    if (temps.size() % 2 == 1) {
        cout << "Median temperature: " << temps[temps.size() / 2] << '\n';
    } else {
        double tempMedian {0.0};
        tempMedian = (temps[temps.size() / 2] + temps[temps.size() / 2 - 1]) / 2;
        cout << "Median temperature: " << tempMedian << '\n';
    }

    return 0;
}
