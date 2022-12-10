//
// Created by Dino on 10 Dec 2022.
//

#include <iostream>
#include <vector>

using namespace std;

string checkRock(string comAction) {
    if (comAction == "scissor") return "win";
    if (comAction == "paper") return "loss";
}

string checkPaper(string comAction) {
    if (comAction == "rock") return "win";
    if (comAction == "scissor") return "loss";
}

string checkScissor(string comAction) {
    if (comAction == "paper") return "win";
    if (comAction == "rock") return "loss";
}

int ch4_exercise10() {
    vector<string> actions;
    actions.push_back("rock");
    actions.push_back("paper");
    actions.push_back("scissor");

    string player_action;
    string com_action;
    string outcome;
    cout << "Enter either rock, paper or scissor: \n";

    while (cin >> player_action) {
        int random = rand() % 3;
        switch (random) {
            case 0:
                com_action = actions[0];
                cout << "\nthe computer chose: " << com_action;
                break;
            case 1:
                com_action = actions[1];
                cout << "\nthe computer chose: " << com_action;
                break;
            case 2:
                com_action = actions[2];
                cout << "\nthe computer chose: " << com_action;
                break;
        }
        if (player_action == com_action) {
            outcome = "\ndraw";
            cout << outcome;
        }
        if (outcome != "draw") {
            if (player_action == "rock") {
                outcome = checkRock(com_action);
            }
            if (player_action == "paper") {
                outcome = checkPaper(com_action);
            }
            if (player_action == "scissor") {
                outcome = checkScissor(com_action);
            }
        }
        cout << "\noutcome: " << outcome << "\n";
    }

    return 0;
}