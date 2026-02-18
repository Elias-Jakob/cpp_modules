# include "Weapon.hpp"

Weapon::Weapon(std::string set_type)
{
	type = set_type;
}

std::string	Weapon::getType()
{
	return (type);
}

void	Weapon::setType(std::string set_type)
{
	type = set_type;
}

