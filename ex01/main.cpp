#include "Zombie.h"

int	main()
{
	Zombie* horde = zombieHorde(5, "Georges");

	std::cout << "DESTROYING" << std::endl;

	delete [] horde;
}