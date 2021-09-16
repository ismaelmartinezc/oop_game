#include <iostream>

using std::string;


class Option {
private:
    int Id;
    string Name;
    string Description;

public:
    Option(int id, string name, string description) {
        Id = id;
        Name = name;
        Description = description;
    }

    void parse_option() {
        std::cout << "id: " << Id << ", name: " << Name << ", description: " << Description << std::endl;
    }
};


class Menu {
private:
    int Id;
    string Name;

public:
    Menu(int id, string name) {
        Id = id;
        Name = name;
    }

};
