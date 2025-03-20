#include <iostream>
#include <iomanip>
#include <string>
#include "RPG.h"
using namespace std;

void displayStats(RPG player1, RPG player2){
    cout << player1.getName() << " health: " << player1.getHealth() << " " << player2.getName() << " health: " << player2.getHealth() << endl;
}

void displayEnd(RPG player1, RPG player2){

    if(player1.isAlive() == true){
        cout << player1.getName() << " defeated " << player2.getName() << "! Good game!" << endl;
    }
    else{
        cout << player2.getName() << " defeated " << player1.getName() << "! Good game!" << endl;
    }

}
void gameLoop(RPG *player1, RPG *player2){
    while((*player1).isAlive() == true && (*player2).isAlive() == true){
        displayStats(*player1,*player2);
        cout << (*player1).getName() << "'s turn:" << endl;
        (*player1).useSkill(player2);
        cout << "-------------------------------" << endl;

        displayStats(*player1,*player2);
        cout << (*player2).getName() << "'s turn:" << endl;
        (*player2).useSkill(player1);
        cout << "-------------------------------" << endl;
    }
}
int main(){
    RPG player1 = RPG("Wiz", 70, 45, 15, "mage");
    RPG player2 = RPG();

    gameLoop(&player1, &player2);
    displayEnd(player1, player2);
    return 0;
}