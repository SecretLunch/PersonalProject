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

	void addFighter(Soul* fighter, Side side);


};

