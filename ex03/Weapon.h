#pragma once

#include <string>

class Weapon
{
private:
	std::string type;
public:
	Weapon();
	Weapon(std::string);
	~Weapon();
	void setType(std::string);
	std::string getType();
};