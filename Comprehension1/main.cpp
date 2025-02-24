#include <iostream>
#include <iomanip>
#include<string>
#include "pet.h"
using namespace std;

int main(){
    pet petd;
    pet petov("Shiro", 2, "Bryan", false);

    cout << "Default Constructor" << endl;
    cout << "Name: " << petd.getName() << endl;
    cout << "Age: " << petd.getAge() << endl;
    cout << "Owner: " << petd.getOwner() << endl;
    cout << "House Trained: " << (petd.getisHouseTrained() ? "True":"False") << endl << endl;

    cout << "Overloaded Constructor" << endl;
    cout << "Name: " << petov.getName() << endl;
    cout << "Age: " << petov.getAge() << endl;
    cout << "Owner: " << petov.getOwner() << endl;
    cout << "House Trained: " << (petov.getisHouseTrained() ? "True":"False") << endl << endl;

    petov.updateName("Godzilla");
    petov.updateAge();
    petov.updateOwner("Eli");
    petov.updateisHouseTrained();

    cout << "Overloaded Constructor Updated" << endl;
    cout << "Name: " << petov.getName() << endl;
    cout << "Age: " << petov.getAge() << endl;
    cout << "Owner: " << petov.getOwner() << endl;
    cout << "House Trained: " << (petov.getisHouseTrained() ? "True":"False") << endl << endl;

return 0;
}