#include<iostream>
using namespace std;

class Sport {
    int age;
    string name, gameName, role;

public:
    Sport(string name, int age, string gameName, string role) {
        this->name = name;
        this->age = age;
        this->gameName = gameName;
        this->role = role;
    }

    void output() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Game Name: " << gameName << endl;
        cout << "Role: " << role << endl << endl;
    }
};

int main() {
    Sport player1("Shreyas Iyer", 29, "Cricket", "Batsman");
    Sport player2("Pat Cummins", 30, "Cricket", "Bowler");
    Sport player3("Kylian Mbappe", 25, "Football", "Forward");
    Sport player4("Neymar", 32, "Football", "Forward");
    Sport player5("Rashid Khan", 26, "Cricket", "All-Rounder");

    player1.output();
    player2.output();
    player3.output();
    player4.output();
    player5.output();

    return 0;
}
