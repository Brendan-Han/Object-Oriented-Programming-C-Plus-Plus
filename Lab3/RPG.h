#ifndef RPG_H
#define RPG_H
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int SKILL_SIZE = 2;

class RPG {

public:

// constructors
RPG ();
RPG (string name, int health, int strength, int defense, string type);


void setSkills();
void printAction(string, RPG);
void updateHealth(int);
void attack(RPG *);
void useSkill(RPG *);


bool isAlive() const;
string getName() const;
int getHealth() const;
int getStrength() const;
int getDefense() const;

private:

string name;
int health;
int strength;
int defense;
string type;
string skills[SKILL_SIZE];

};

#endif