#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &other);
		ClapTrap &operator=(const ClapTrap &other);
		~ClapTrap();

		void				attack(const std::string& target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);

		std::string	getName(void) const;
		int					getHealth(void) const;
		int					getEnergy(void) const;
		int					getAttackDamage(void) const;

		void				setName(std::string name);
		void				setHealth(int amount);
		void				setEnergy(int amount);
		void				setAttackDamage(int amount);
	private:
		std::string	_name;
		int					_health;
		int					_energy;
		int					_attack_damage;
};

#endif
