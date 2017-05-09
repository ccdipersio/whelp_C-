#include "character.h"

Character::Character(){}

Character::~Character() {}

Jobs Character::getJob() {
    return job;
}

void Character::printStats() {
    cout << getName() << endl
         << "HP: " << getHP() << endl
         << "Attack: " << getAttack() << endl
         << "Defense: " << getDefense() << endl
         << "Magic: " << getMagic() << endl
         << "Resistance: " << getResistance() << endl
         << "Speed: " << getSpeed() << endl
         << "Evasion: " << getEvasion() << endl;
}

Player::Player() {
    cout << "Name: ";
    cin >> name;

    cout << "Select a job:" << endl << "\t1. FIGHTER" << endl << "\t2. MAGE" << endl << "\t3. THIEF" << endl << "\t4. SAGE" << endl << "\t5. MONK" << endl;
    char choice;
    do {
        cin >> choice;
        cin.sync();
    } while(choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '5');

    int choice_convert = choice - 49;
    if (choice_convert == 0)
        job = FIGHTER;
    else if (choice_convert == 1)
        job = MAGE;
    else if (choice_convert == 2)
        job = THIEF;
    else if (choice_convert == 3)
        job = SAGE;
    else
        job = MONK;

    level = 1;
    exp = 0;
    hp = 20;

    if (job == FIGHTER) {
        attack = 10;
        defense = 8;
        magic = 2;
        resistance = 4;
        speed = 5;
        evasion = 5;
    } else if (job == MAGE) {
        attack = 3;
        defense = 3;
        magic = 10;
        resistance = 8;
        speed = 7;
        evasion = 7;
    } else if (job == THIEF) {
        attack = 6;
        defense = 5;
        magic = 4;
        resistance = 4;
        speed = 10;
        evasion = 8;
    } else if (job == SAGE) {
        attack = 3;
        defense = 3;
        magic = 8;
        resistance = 10;
        speed = 7;
        evasion = 7;
    } else if (job == MONK) {
        attack = 8;
        defense = 10;
        magic = 6;
        resistance = 6;
        speed = 5;
        evasion = 5;
    }
}
