#include "Battle.h"
#include <vector>
#include <algorithm>

void Battle::addParty(std::vector<Soul*> party, Side side)
{
	switch (side)
	{
	case Side::ally:
		allies.insert(allies.end(), party.begin(), party.end());
		break;
	case Side::enemy:
		enemies.insert(enemies.end(), party.begin(), party.end());
		break;
	}
}

void Battle::addFighter(Soul* fighter, Side side)
{
	switch (side)
	{
	case Side::ally:
		allies.push_back(fighter);
		break;
	case Side::enemy:
		enemies.push_back(fighter);
		break;
	}
}

void Battle::Attack(std::vector<Soul*> team1, std::vector<Soul*> team2)
{
	std::vector<Soul*> turnQueue(team1.size() + team2.size());
	turnQueue.insert(turnQueue.end(), team1.begin(), team1.end());
	turnQueue.insert(turnQueue.end(), team2.begin(), team2.end());


}