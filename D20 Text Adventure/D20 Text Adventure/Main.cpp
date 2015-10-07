#include <iostream>
#include "PlayerStats.h"
#include "Dice.h"
#include <random>
#include <time.h>

/*This class will define a players stats and everything that will be affected.
It is not complete, but I will keep adding to it as stuff is added*/
class Player
{

public:
	int strength, dexterity, constitution, wisdom, intelligence, charisma;
	int strMod = (strength -= 10) / 2;
	int dexMod = (dexterity -= 10) / 2;
	int conMod = (constitution -= 10) / 2;
	int wisMod = (wisdom -= 10) / 2;
	int intMod = (intelligence -= 10) / 2;
	int chaMod = (charisma -= 10) / 2;
	int initiative = dexMod;
	int lvl;
	int hitDie;
	int health = ((conMod * lvl) + (hitDie * lvl));
};