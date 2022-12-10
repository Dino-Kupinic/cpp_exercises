//
// Created by Dino on 10 Dec 2022.
//

#include <iostream>
#include <cmath>

using namespace std;

int ch4_exercise8() {
    constexpr int SQUARES {64};
    long current_rice {1};

    for (int i = 1; i <= SQUARES; ++i) {
        cout << "square " << i << ": " << current_rice << " rice grains\n";
        current_rice *= 2;
    }

    return 0;
}
