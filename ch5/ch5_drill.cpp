//
// Created by Dino on 11 Dec 2022.
//

#include <iostream>
#include "../std_lib_facilities.h"

using namespace std;

int ch5_drill() {
    try {

        keep_window_open();
        return 0;
    } catch (exception& e) {
        cerr << "error: " << e.what() << '\n';
        keep_window_open();
        return 1;
    } catch (...) {
        cerr << "unknown exception!\n";
        keep_window_open();
        return 2;
    }
}
