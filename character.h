#ifndef CHARACTER_H_INCLUDED
#define CHARACTER_H_INCLUDED

#include <iostream>
#include <string>
#include "inventory.h"

using namespace std;

enum Job {FIGHTER, MAGE, THIEF, SAGE, MONK};
enum Monster {GOBLIN, ORC, OGRE, DRAGON};

class Character {
    protected:
        string name;
        int level;
        int exp;
        int hp;
        int attack;
        int defense;
        int magic;
        int resistance;
        int speed;
        int evasion;
    public:
        Character();
        ~Character();
        string getName() {return "Name: " + name;}
        int getHP() {return hp;}
        int getAttack() {return attack;}
        int getDefense() {return defense;}
        int getMagic() {return magic;}
        int getResistance() {return resistance;}
        int getSpeed() {return speed;}
        int getEvasion() {return evasion;}
        void printStats();
};

class Player: public Character {
    protected:
        Job job;
    public:
        Player();
        string getJob();
        void printStats();
};

class Enemy: public Character {
    protected:
        Monster monster;
    public:
        Enemy(Monster monster_type);
        string getMonster();
};

#endif // CHARACTER_H_INCLUDED
