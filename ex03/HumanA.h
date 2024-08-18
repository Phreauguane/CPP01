#include "Weapon.h"

#include <string>
#include <iostream>

class HumanA
{
private:
	Weapon	 	*weapon;
	std::string name;
public:
	HumanA(std::string, Weapon&);
	~HumanA();
	void attack();
};