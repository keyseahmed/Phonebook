#include <iostream>
#include <map>

using namespace std; 
map<string, string> phonebook;


void addcontact(const string& name) {
    string number;
    string confirmation;
    
    while (true) {
        cout << "Please enter the phone number for " << name << ": ";
        cin >> number;
        
        cout << "You entered: " << number << ". Are you sure? (yes/no) ";
        cin >> confirmation;
        
        if (confirmation == "yes") {
            phonebook[name] = number;
            cout << "Contact added successfully!\n";
            break;
        } else {
            cout << "Let's try again.\n";
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc != 2) { 
        cerr << "Usage: " << argv[0] << " <name> <phone_number>" << endl;
        return 1; 
    }

    addcontact(argv[1]); 
    return 0; 
}
