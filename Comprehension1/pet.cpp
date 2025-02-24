#include <iostream>
#include <iomanip>
#include<string>
#include "pet.h"
using namespace std;

class pet {
    pet ();
    pet (string name, int age, string owner, bool isHouseTrained);

    pet::pet() { 
        name = "";
        age = -1;
        owner = "";
        isHouseTrained = false;
    }   
    
    void getName(string name);
    void getAge(int age);
    void getOwner(string owner);
    void getIsHouseTrained(bool isHouseTrained);

    //mutator functions
    void pet::updateName (string name) {
        this->name = name;
    }
    void pet::updateAge (int age) {
        this->age;
    }
    void pet::updateOwner (string owner) {
        this->owner = owner;
    }
    void pet::updateIsHouseTrained (bool isHouseTrained) {
        this->isHouseTrained = isHouseTrained;
    } 

private:
    string name;
    int age;
    string owner;
    bool isHouseTrained;    
};