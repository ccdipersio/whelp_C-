#ifndef CHARACTER_H_INCLUDED
#define CHARACTER_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

enum Jobs {FIGHTER, MAGE, THIEF, SAGE, MONK};

class Character {
    protected:
        string name;
        Jobs job;
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
        Jobs getJob();
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
    public:
        Player();
};

class Enemy: public Character {

};

#endif // CHARACTER_H_INCLUDED
