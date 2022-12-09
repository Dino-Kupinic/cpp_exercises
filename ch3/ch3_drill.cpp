//
// Created by Dino on 9 Dec 2022.
//

#include <iostream>

using namespace std;

void simple_error() {
    cout << "\nYou're kidding!";
}

int ch3_drill() {
    cout << "Enter the name of the person you want to write to: \n";

    string first_name;
    cin >> first_name;

    cout << "Dear " << first_name << ",\n";
    cout << "\nHow are you?\n";

    cout << "Enter the name of a friend: \n";

    string friend_name;
    cin >> friend_name;

    cout << "\nHave you seen " << friend_name << " lately?\n";
    cout << "\nEnter the gender of your friend (m/f): \n";

    char friend_sex {0};
    cin >> friend_sex;

    if (friend_sex == 'm')
        cout << "If you see " << friend_name << " please ask him to call me.";
    if (friend_sex == 'f')
        cout << "If you see " << friend_name << " please ask her to call me.";

    cout << "\nPlease enter the age of your recipient: \n";

    int age {0};
    cin >> age;

    cout << "\nI hear you just had a birthday and you are " << age << " years old.";

    if (age < 0 || age > 110)
        simple_error();

    if (age < 12)
        cout << "\nNext year you will be " << age + 1;
    if (age == 17)
        cout << "\nNext year you will be able to vote";
    if (age > 70)
        cout << "\nI hope you are enjoying retirement";

    cout << "Yours sincerely.\n\nDino";

    return 0;
}