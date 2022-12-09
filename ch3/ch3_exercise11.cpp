//
// Created by Dino on 9 Dec 2022.
//

#include <iostream>

using namespace std;

int ch3_exercise11() {
    int pennies {0};
    int nickels {0};
    int dimes {0};
    int quarters {0};
    int halfDollars {0};
    int coins {0};

    cout << "\nHow many pennies do you have? \n";
    cin >> pennies;

    cout << "\nHow many nickels do you have? \n";
    cin >> nickels;

    cout << "\nHow many dimes do you have? \n";
    cin >> dimes;

    cout << "\nHow many quarters do you have? \n";
    cin >> quarters;

    cout << "\nHow many half dollars do you have? \n";
    cin >> halfDollars;

    cout << "\nHow many one-dollar coins do you have? \n";
    cin >> coins;

    cout << "\nYou have " << pennies << " pennies";
    cout << "\nYou have " << nickels << " nickels";
    cout << "\nYou have " << dimes << " dimes";
    cout << "\nYou have " << quarters << " quarters";
    cout << "\nYou have " << halfDollars << " half dollars";
    cout << "\nYou have " << coins << " one-dollar coins";

    int coin_sum = pennies + nickels * 5 + dimes * 10 + quarters * 25 + halfDollars * 50 + coins * 100;
    cout << "\nThe value of all coins is " << coin_sum << " cents";

    return 0;
}
