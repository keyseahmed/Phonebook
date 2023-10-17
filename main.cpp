#include "Phonebook.h"
using namespace std;

int main(int argc, char *argv[]) {
    Phonebook phonebook;
    if (argc != 2) {
        cerr << "Usage: " << argv[0] << " <name>" << endl;
        return 1;
    }
    phonebook.addContact(argv[1]);
    return 0;
}
