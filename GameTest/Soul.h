#pragma once
#include <string>
#include <vector>
class Soul
{

private:

	std::string charName;
	int charHealth;
	int charAttack;
	int charSpeed;
	bool isAlive = true;
public:

	void SetName(std::string newName);
	void SetHealth(int newHealth);
	void SetAttack(int newAttack);
	void SetSpeed(int newSpeed);

	std::string GetName() const;
	int GetHealth() const;
	int GetAttack() const;
	int GetSpeed() const;

	//const
	Soul();
	Soul(std::string name, int health, int attack, int speed);

	void TakeDamage(int damage);

	void DealDamage(Soul victim);

	
};

