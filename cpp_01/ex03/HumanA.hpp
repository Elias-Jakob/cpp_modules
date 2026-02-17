# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string n, Weapon& w);
		~HumanA();
		std::string	name;
		void	attack(void);
	private:
		const Weapon&	weapon;
};
