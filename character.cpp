#include "character.h"

Character::Character(){}

Character::~Character() {}

string Player::getJob() {
    if (job == 0)
        return "FIGHTER";
    else if (job == 1)
        return "MAGE";
    else if (job == 2)
        return "THIEF";
    else if (job == 3)
        return "SAGE";
    else if (job == 4)
        return "MONK";
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
    for (int i = 0; i < name.size(); i++)
        name.at(i) = toupper(name.at(i));

    cout << "Select a job:" << endl << "\t1. FIGHTER" << endl << "\t2. MAGE" << endl << "\t3. THIEF" << endl << "\t4. SAGE" << endl << "\t5. MONK" << endl;
    char choice;
    do {
        cin >> choice;
        cin.sync();
    } while(choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '5');

    int choice_convert = choice - 49;
    switch (choice_convert) {
        case 0:
            job = FIGHTER;
            break;
        case 1:
            job = MAGE;
            break;
        case 2:
            job = THIEF;
            break;
        case 3:
            job = SAGE;
            break;
        case 4:
            job = MONK;
            break;
    };

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

void Player::printStats() {
    cout << getName() << endl
         << "HP: " << getHP() << endl
         << "Job: " << getJob() << endl
         << "Attack: " << getAttack() << endl
         << "Defense: " << getDefense() << endl
         << "Magic: " << getMagic() << endl
         << "Resistance: " << getResistance() << endl
         << "Speed: " << getSpeed() << endl
         << "Evasion: " << getEvasion() << endl;
}

Enemy::Enemy(Monster monster_type) {
    switch (monster_type) {
        case GOBLIN:
            name = "GOBLIN";
            monster = GOBLIN;
            level = 1;
            exp = 5;
            hp = 3;
            attack = 3;
            defense = 2;
            magic = 0;
            resistance = 0;
            speed = 1;
            evasion = 1;
            break;
    };
}

string Enemy::getMonster() {
    switch (monster) {
        case GOBLIN:
            return "GOBLIN";
        case ORC:
            return "ORC";
        case OGRE:
            return "OGRE";
        case DRAGON:
            return "DRAGON";
    };
}
