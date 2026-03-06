#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &other);
		DiamondTrap &operator=(const DiamondTrap &other);
		~DiamondTrap();
		void	whoAmI();
	private:
		std::string	_name;
};

#endif
