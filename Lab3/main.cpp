#include <iostream>
#include <iomanip>
#include <string>
#include "RPG.h"
using namespace std;

//unused functions: attack, useSkill

int main(){
    RPG RPG1;
    RPG RPG2("John", 100, 10, 10, "mage");


    cout << "Name: " << RPG1.getName() << endl << "Health: " << RPG1.getHealth() << endl << "Str: " << RPG1.getStrength() << endl << "Def: " << RPG1.getDefense() << endl;

    RPG1.updateHealth(1000);
    
    cout << "New Health: " << RPG1.getHealth() << "Alive? " << RPG1.isAlive();

    cout << "Name: " << RPG2.getName() << endl << "Health: " << RPG2.getHealth() << endl << "Str: " << RPG2.getStrength() << endl << "Def: " << RPG2.getDefense() << endl;

    RPG2.updateHealth(1000);
    
    cout << "New Health: " << RPG2.getHealth() << "Alive? " << RPG2.isAlive();

}