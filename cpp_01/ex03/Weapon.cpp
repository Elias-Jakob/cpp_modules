# include "Weapon.hpp"

Weapon::Weapon()
{
	type = "default weapon";
}

Weapon::~Weapon()
{
	std::cout << "Destructing weapon" << std::endl;
}

Weapon::Weapon(std::string type_name)
{
	type = type_name;
}

std::string	Weapon::getType()
{
	return (type);
}

void	Weapon::setType(std::string type_name)
{
	type = type_name;
}

