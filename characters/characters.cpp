#include <iostream>
#include <array>
#include "headers/characters.h"
#include "../headers/menu.hpp"

const short C_OPTIONS = 3;

using std::string;

bool exit_menu = false;
typedef std::array<Option, C_OPTIONS> Options;

Options options = {
        Option(0, "jugar", "etc"),
        Option(0, "configuracion", "etc"),
        Option(0, "salir", "etc")};


void restore_menu() {
    exit_menu = false;
}

void stop_menu () {
    exit_menu = true;
}

int characters_menu() {
    string character_name;

    while (!exit_menu) {
        std::cout << "Ingrese el nombre de su personaje: ";
        std::getline(std::cin, character_name);
        Character character = Character(character_name);
        character.greetings();
        stop_menu();
    }

    for (int i = 0; i < C_OPTIONS; i++) {
        options[i].parse_option();
    }

    return 0;
}

