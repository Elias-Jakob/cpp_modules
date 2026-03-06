# include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	ct("foo");
	ScavTrap	st("robot");

	ct.attack(st.getName());
	ct.takeDamage(3);
	ct.beRepaired(5);
	st.guardGate();
	st.attack(ct.getName());
	st.beRepaired(12);
}
