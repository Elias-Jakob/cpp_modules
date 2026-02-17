#include "Zombie.hpp"

int	main(void)
{
	Zombie	z1("Foo");
	z1.announce();
	
	randomChump("Foo2");

	Zombie*	z2;
	z2 = newZombie("Foo3");
	z2->announce();
	delete z2;
}
