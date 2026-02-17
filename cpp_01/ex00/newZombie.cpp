#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie*	z;

	z = new Zombie(name);
	// TODO: new failed
	return (z);
}
