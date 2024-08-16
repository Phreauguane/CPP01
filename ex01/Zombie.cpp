#include "Zombie.h"

Zombie::Zombie()
{
	std::cout << "Created Zombie." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destroyed Zombie : " << name << std::endl;
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
	std::cout << "Initialized Zombie : " << name << std::endl;
}