# include "HumanB.hpp"

HumanB::HumanB(std::string set_name)
{
	name = set_name;
	weapon = NULL;
}

void	HumanB::attack(void)
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " attacks with their bare hands???" << std::endl;
}

void	HumanB::setWeapon(Weapon& w)
{
	weapon = &w;
}
