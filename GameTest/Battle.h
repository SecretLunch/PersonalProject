#pragma once
#include "Soul.h"
#include <vector>
enum class Side 
{
	ally,
	enemy
};

class Battle
{
private:
protected:
	std::vector<Soul*> allies;
	std::vector<Soul*> enemies;

public:
	void addParty(std::vector<Soul*> party, Side side);
	void addFighter(Soul* fighter, Side side);
	void Attack(std::vector<Soul*> team1, std::vector<Soul*> team2);

};

