# include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon& weapon)
{
	name = n;
	weapon = w;
}

void	HumanA::attack(void)
{
	cout << name << " attacks with their " << weapon.type << std::endl;
}
