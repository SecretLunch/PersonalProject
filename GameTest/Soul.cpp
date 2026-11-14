#include "Soul.h"
//hello
void Soul::SetName(std::string newName)
{
	charName = newName;
}

void Soul::SetHealth(int newHealth)
{
	charHealth = newHealth;
}

void Soul::SetAttack(int newAttack)
{
	charAttack = newAttack;
}

void Soul::SetSpeed(int newSpeed)
{
	charSpeed = newSpeed;
}

std::string Soul::GetName() const
{
	return charName;
}

int Soul::GetHealth() const
{
	return charHealth;
}

int Soul::GetAttack() const
{
	return charAttack;
}

int Soul::GetSpeed() const
{
	return charSpeed;
}

Soul::Soul()
{
	charName = "Default Name";
	charHealth = 10;
	charAttack = 1;
	charSpeed = 1;
}
Soul::Soul(std::string name, int health, int attack, int speed)
{
	charName=name;
	charAttack = attack;
	charHealth = health;
	charSpeed = speed;
}

void Soul::TakeDamage(int damage)
{
	charHealth -= damage;
}

void Soul::DealDamage(Soul victim)
{
	victim.charHealth -= charAttack;
}


