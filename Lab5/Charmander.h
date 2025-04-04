#ifndef POKEMON_H
#define POKMEON_H

#include <string>
#include <vector>
#include "Pokemon.h"
using namespace std;

class Charmander : public Pokemon{
    public:
        Charmander();
        Charmander(string name, int hp, int att, int def, vector<string> type, vector<string> s);

        void speak();
        void PrintStats();
    private:
        vector<string> skills;
};
#endif