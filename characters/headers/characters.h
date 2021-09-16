#include <iostream>

using std::string;

class Character {
private:
    string Name;
    string Description;
    int Level;
    long int Experience;

public:
    Character(string name) {
        Name = name;
    }

    void setName(string name) {
        Name = name;
    }

    string getName() {
        return Name;
    }

    void printName() {
        std::cout << "Name: " << getName() << std::endl;
    }

    void greetings() {
        std::cout << "Greetings! " << getName() << ", welcome to the game!" << std::endl;
    }
};

int characters_menu();
