# include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	foo("foo");
	DiamondTrap	bar("bar");

	foo.whoAmI();
	bar.attack(foo.getName());
}
