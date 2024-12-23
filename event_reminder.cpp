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

void addEvent() {
    Event newEvent;
    cout << "Enter event name: ";
    cin.ignore();
    getline(cin, newEvent.name);
    cout << "Enter event date (YYYY-MM-DD): ";
    cin >> newEvent.date;
    events.push_back(newEvent);
    cout << "Event added successfully!\n";
}
