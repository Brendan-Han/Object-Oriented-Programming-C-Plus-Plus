#ifndef PET_H
#define PET_H
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class pet {

public:

    pet ();
    pet (string name, int age, string owner, bool isHouseTrained);

    //mutator functions
    void updateName (string new_name);
    void updateAge ();
    void updateOwner (string new_owner);
    void updateIsHouseTrained (bool isHouseTrained);

    //accessor functions
    string getName() const;
    int getAge() const;
    string getOwner() const;
    bool getIsHouseTrained() const;

private:
    string name;
    int age;
    string owner;
    bool isHouseTrained;    
};
#endif