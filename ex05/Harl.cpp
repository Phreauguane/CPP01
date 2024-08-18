#include "Harl.h"

Harl::Harl(){}

Harl::~Harl(){}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n> I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\n> I cannot believe adding extra bacon cost more money. You don't put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\n> I think I deserve to have some extra bacon for free. I've been coming here for years and you just started working here last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]\n> This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	func_ptr complains[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	bool found = false;

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*(complains[i]))();
			found = true;
		}
	}

	if (!found)
		std::cerr << "[ NOPE ]\n> Invalid input !" << std::endl;
}