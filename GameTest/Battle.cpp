#include "Battle.h"
#include <vector>

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