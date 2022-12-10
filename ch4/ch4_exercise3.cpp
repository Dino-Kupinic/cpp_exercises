//
// Created by Dino on 10 Dec 2022.
//

#include <iostream>
#include <vector>

using namespace std;

int ch4_exercise3() {
    vector<double> vector1;
    double val1 {0.0};
    double sum {0.0};

    double smallestDistance {0.0};
    double largestDistance {0.0};

    while (cin >> val1) {
        vector1.push_back(val1);
        sum += val1;

        if (val1 > largestDistance)
            largestDistance = val1;
        if (val1 < smallestDistance)
            smallestDistance = val1;
    }

    double mean_distance {sum / vector1.size()};

    cout << mean_distance;

    return 0;
}
