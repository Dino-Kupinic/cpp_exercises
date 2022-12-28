//
// Created by Dino on 27 Dec 2022.
//

#include <iostream>
#include <vector>

namespace exercise2 {
    class Name_pairs {
    public:
        void read_names();
        void read_ages();
        void print() const;
    private:
        std::vector<std::string> name;
        std::vector<double> age;
    };

    int determine_amount() {
        std::cout << "How many names/ages would you like to input?\n";
        int amount;
        std::cin >> amount;
        return amount;
    }

    void Name_pairs::read_names() {
        int cycles {determine_amount()};
        for (int i = 0; i < cycles; ++i) {
            std::cout << "Enter a name: ";
            std::string input_name;
            std::cin >> input_name;
            name.push_back(input_name);
        }
    }

    void Name_pairs::read_ages() {
        int cycles {determine_amount()};
        for (int i = 0; i < cycles; ++i) {
            std::cout << "Enter an age: ";
            double input_age;
            std::cin >> input_age;
            age.push_back(input_age);
        }
    }

    void Name_pairs::print() const {
        if (name.size() != age.size()) return;
        for (int i = 0; i < name.size(); ++i) {
            std::cout << name[i] << ' ' << age[i] << std::endl;
        }
    }
}

int ch9_exercise2() {
    exercise2::Name_pairs namePairs;
    namePairs.read_names();
    namePairs.read_ages();
    namePairs.print();
    return 0;
}