#pragma once
#include <string>
#include <vector>
class Soul
{

private:

	std::string charName;
	int charHealth;
	int charAttack;
	bool isAlive = true;
public:

	void SetName(std::string newName);
	void SetHealth(int newHealth);
	void SetAttack(int newAttack);

	std::string GetName() const;
	int GetHealth() const;
	int GetAttack() const;

	//const
	Soul();
	Soul(std::string name, int health, int attack);

	void TakeDamage(int damage);

	void DealDamage(Soul victim);

	
};

