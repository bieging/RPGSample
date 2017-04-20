#include <iostream>
#include <stdlib.h>/* srand, rand */
#include <time.h>       /* time */

#include "NPC.h"

using namespace std;

void DisplayMainMenu();
void Fight(NPC, NPC);
bool FightReduceLifePoints(NPC, NPC);

int main()
{
	cout << "Welcome to the RPG Project 01" << endl;

	DisplayMainMenu();

	cin.get();
	return 0;
}

void DisplayMainMenu()
{
	cout << "Chose one action below: " << endl;
	cout << "1 - Fight random monster" << endl;
	cout << "2 - View Inventory monster" << endl;
}

void Fight(NPC npc1, NPC npc2)
{
	bool firstToFight = false;	// False = first player attacks first - True = second player attacks first

	srand(time(NULL));

	if ((rand() % 100 + 1) <= 50)
		firstToFight = true;

	if (firstToFight)
	{
		while (npc1.lifePoints <= 0 || npc2.lifePoints <= 0)
		{

		}
	}
	else
	{
		while (npc1.lifePoints <= 0 || npc2.lifePoints <= 0)
		{

		}
	}
}

// Receives two NPCs and reduce their life points based on each others attack power
bool FightReduceLifePoints(NPC &npc1, NPC &npc2)
{
	npc1.lifePoints -= npc2.attackPower;

	if (npc1.lifePoints <= 0)
		return false;

	npc2.lifePoints -= npc1.attackPower;

	if (npc2.lifePoints <= 0)
		return true;
}