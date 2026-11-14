#pragma once
#include "Soul.h"
#include <vector>

class Party
{
private:
protected:
	int partySize = 3;
	std::vector<Soul*> members;
public:
	
	Party (Soul* leader);

	std::vector<Soul*> GetParty();


bool AddMember(Soul* newMember);
bool DelMember(Soul* newMember);

};