# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	this->_name = name;
	std::cout << "DiamondTrap: Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	std::cout << "DiamondTrap: Copy constructor called" << std::endl;
	*this = other;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "DiamondTrap: Copy assignment constructor called" << std::endl;
	if (this == &other)
		return (*this);
	this->_name = other._name;
	this->setName(other.getName());
	this->setHealth(other.getHealth());
	this->setEnergy(other.getEnergy());
	this->setAttackDamage(other.getAttackDamage());
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: Destructing " << this->getName() << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Who Am I??? Hi, my name is " << this->_name
		<< " and ClapTrap's name is " << this->getName() << std::endl;
}
