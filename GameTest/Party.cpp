#include "Party.h"
#include <iostream>
#include "Soul.h"

Party::Party(Soul* leader)
//Party std::vector<Soul*> Party::CreateParty(Soul* leader)
{
	members.push_back(leader);
	
}

std::vector<Soul*> Party::GetParty()
{
	return members;
}

bool Party::AddMember(Soul* newMember)
{
	bool daBool = false;
	if (members.size() < partySize)
	{
		auto it = std::find(members.begin(), members.end(), newMember);
		if (it == members.end())
		{
			members.push_back(newMember);
			daBool = true;

		//	std::cout << newMember->GetName() << "has joined the party." << std::endl;
		}
		
	}
	else
	{
	//	std::cout << "Your party is full." << std::endl;
	}
	return daBool;
}

bool Party::DelMember(Soul* newMember)
{
	bool daBool = false;
	auto it = std::find(members.begin(), members.end(), newMember);
	if (it != members.end())
	{
		members.erase(it);
		daBool = true;
	}
	return daBool;
}
