#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <map>
#include <string>

class Phonebook {
private:
    std::string name, number;
    std::map<std::string, std::string> entries;
    void saveToFile();

public:
    void addContact(const std::string &inputName);
};

#endif  
