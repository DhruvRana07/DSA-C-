#include <iostream>
using namespace std;

class Sport {
private:
    string name;
    int age;
    string gameName;
    string role;

public:
    Sport(string n, int a, string g, string r) {
        name = n;
        age = a;
        gameName = g;
        role = r;
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Game Name: " << gameName << endl;
        cout << "Role: " << role << endl;
        cout << endl;
    }
};

int main() {
    Sport player1("Shreyas Iyer", 29, "Cricket", "Batsman");
    Sport player2("Pat Cummins", 30, "Cricket", "Bowler");
    Sport player3("Kylian Mbappe", 25, "Football", "Forward");
    Sport player4("Neymar", 32, "Football", "Forward");
    Sport player5("Rashid Khan", 26, "Cricket", "All-Rounder");

    cout << "Sports Player Details:\n" << endl;
    player1.displayDetails();
    player2.displayDetails();
    player3.displayDetails();
    player4.displayDetails();
    player5.displayDetails();

    return 0;
}
