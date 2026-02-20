#include "Zombie.hpp"

Zombie::Zombie()
{
	name = "default zombie";
}

Zombie::~Zombie()
{
	std::cout << "Destructing: " << name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << ": braiiiiiiinnnzzzz..." << std::endl;
}

void	Zombie::setName(std::string n)
{
	name = n;
}
