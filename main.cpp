#include <iostream>
#include "character.h"

using namespace std;

int main() {
/*
    Player character;

    cout << character.getName() << endl;
    cout << character.getJob() << endl;
    character.printStats(); */

    Enemy enemy(GOBLIN);
    cout << enemy.getMonster() << endl;

}
