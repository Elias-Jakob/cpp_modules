#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string n, Weapon& w);
		void	attack(void);
		std::string	name;
		Weapon&	weapon;
};
#endif
