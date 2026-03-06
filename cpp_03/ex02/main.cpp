# include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	ct("foo");
	ScavTrap	st("robot");
	ScavTrap	st2 = st;
	FragTrap	ft("Frag no. 1");

	ct.attack(st.getName());
	ct.takeDamage(3);
	ct.beRepaired(5);
	st.guardGate();
	st.attack(ct.getName());
	st2.setName("Ringo");
	st.beRepaired(12);
	st2.takeDamage(101);
	ft.highFivesGuys();
}
