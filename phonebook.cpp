#include "Phonebook.h"
#include <fstream>

using namespace std;

void Phonebook::saveToFile() {
    ofstream outFile("phonebook.txt");
    outFile << "Name Number" << endl;
    for (const auto &entry : entries) {
        outFile << entry.first << " " << entry.second << endl;
    }
    outFile.close();
}

void Phonebook::addContact(const string &inputName) {
    name = inputName;
    while (true) {
        cout << "Please enter the phone number for " << name << ": ";
        cin >> number;
        cout << "You entered: " << number << ". Are you sure? (yes/no) ";
        string confirmation;
        cin >> confirmation;
        if (confirmation == "yes") {
            entries[name] = number;
            cout << "Contact added successfully!\n";
            saveToFile();
            break;
        } else {
            cout << "Let's try again.\n";
        }
    }
}
