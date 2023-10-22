#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <map>
#include <string>
using namespace std; 

class Phonebook {
private:
    string name, number;
    map<string, string> entries;
    void saveToFile();

public:
    void addContact(const string &inputName);
    bool searchByName(const string &searchName) const;
    bool searchByNumber(const string &searchNumber) const;
};

#endif  
