#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>

class Weapon
{
	public:
		Weapon(std::string type_name);
		std::string	getType();
		void	setType(std::string type_name);
	private:
		std::string	type;
};
#endif
