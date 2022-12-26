//
// Created by Dino on 25 Dec 2022.
//

#include <iostream>
#include <vector>

using namespace std;

struct Person {
    string name;
    int age;
};

bool compare(const Person& personA, const Person& personB) {
    return personA.name < personB.name;
}

int ch8_exercise7() {
    vector<Person> people;
    string pplName;
    double pplAge;

    cout << "Enter 5 names: " << endl;
    for (int i = 0; i < 5; ++i) {
        cin >> pplName;
        Person person;
        person.name = pplName;
        people.push_back(person);
    }

    cout << "Now enter the age for those respectively: " << endl;
    for (int i = 0; i < 5; ++i) {
        cin >> pplAge;
        people[i].age = pplAge;
    }

    sort(people.begin(), people.end(), compare);

    for (int a = 0; a < 5; ++a) {
        cout << people[a].name << " " << people[a].age << endl;
    }


    return 0;
}
