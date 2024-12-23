#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Event {
    string name;
    string date; // Format: "YYYY-MM-DD"
};

void menu();

int main() {
    menu();
    return 0;
}

void menu() {
    cout << "Welcome to the Event Reminder System!\n";
    cout << "Menu will be implemented soon.\n";
}

vector<Event> events; // Stores all events
