#include <iostream>
#include <map>
#include <fstream>
#include <string>

using namespace std;

class Phonebook
{
private:
    string name, number;
    map<string, string> entries;

    void saveToFile()
    {
        ofstream outFile("phonebook.txt");
        outFile << "Name Number" << endl; 
        for (const auto &entry : entries)
        {
            outFile << entry.first << " " << entry.second << endl;
        }
        outFile.close();
    }

public:
    void addContact(const string &inputName)
    {
        name = inputName;

        while (true)
        {
            cout << "Please enter the phone number for " << name << ": ";
            cin >> number;

            cout << "You entered: " << number << ". Are you sure? (yes/no) ";
            string confirmation;
            cin >> confirmation;

            if (confirmation == "yes")
            {
                entries[name] = number;
                cout << "Contact added successfully!\n";
                saveToFile();
                break;
            }
            else
            {
                cout << "Let's try again.\n";
            }
        }
    }
};

int main(int argc, char *argv[])
{
    Phonebook phonebook;

    if (argc != 2)
    {
        cerr << "Usage: " << argv[0] << " <name> <phone_number>" << endl;
        return 1;
    }

    phonebook.addContact(argv[1]);
    return 0;
}
