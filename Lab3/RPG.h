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
RPG();
RPG(string name, int health, int strength, int defense, string type);

//mutators
void setSkills() const;
void printAction(string, RPG) const;
void updateHealth(int) const;
void attack(RPG *) const;
void useSkill(RPG *) const;

//accessor
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
string typ;
string skills[SKILL_SIZE];

};

#endif