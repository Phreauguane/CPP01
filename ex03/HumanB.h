#include "Weapon.h"

#include <string>
#include <iostream>

class HumanB
{
private:
	Weapon	 	*weapon;
	std::string name;
public:
	HumanB(std::string);
	~HumanB();
	void setWeapon(Weapon&);
	void attack();
};