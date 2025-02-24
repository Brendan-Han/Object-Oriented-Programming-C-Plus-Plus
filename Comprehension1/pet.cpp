#include <iostream>
#include "pet.h"
using namespace std;

    pet::pet(string name, int age, string owner, bool isHouseTrained){
        this->name = name;
        this->age = age;
        this->owner = owner;
        this->isHouseTrained = isHouseTrained;
    }

    pet::pet() { 
        name = "";
        age = -1;
        owner = "";
        isHouseTrained = false;
    }  

    string pet::getName() const {
        return name;
    };
    int pet::getAge() const {
        return age;
    }
    string pet::getOwner() const {
        return owner;
    }
    bool pet::getIsHouseTrained() const {
        return isHouseTrained;
    }

    void pet::updateName (string new_name) {
        name = new_name;
    }
    void pet::updateAge () {
        age = age++;
    }
    void pet::updateOwner (string new_owner) {
        owner = new_owner;
    }
    void pet::updateIsHouseTrained (bool isHouseTrained) {
        isHouseTrained = true;
    } 