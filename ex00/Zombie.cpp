#include "Zombie.h"

Zombie::Zombie()
{
	this->name = "";
	std::cout << "Created Zombie : " << std::endl;
}
Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "Created Zombie : " << name << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destroyed Zombie : " << name << std::endl;
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}