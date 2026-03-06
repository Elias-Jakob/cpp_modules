# include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	ct("foo");

	ct.attack("bar");
	ct.takeDamage(3);
	ct.beRepaired(5);
}
