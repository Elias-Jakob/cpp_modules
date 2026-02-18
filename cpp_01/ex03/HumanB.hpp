#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string n);
		std::string	name;
		Weapon*	weapon;
		void	attack(void);
		void	setWeapon(Weapon& w);
};
#endif
