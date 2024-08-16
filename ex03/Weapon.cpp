#include "Weapon.h"


Weapon::Weapon(){}

Weapon::~Weapon(){}

Weapon::Weapon(std::string type)
{
	this->setType(type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}

std::string Weapon::getType()
{
	return type;
}