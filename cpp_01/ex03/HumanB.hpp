# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string n);
		~HumanB();
		std::string	name;
		Weapon	weapon;
		void	attack(void);
		void	setWeapon(Weapon w);
};
