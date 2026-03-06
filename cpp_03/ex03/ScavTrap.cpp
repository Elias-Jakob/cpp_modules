# include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->setEnergy(50);
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->setName(name);
	this->setHealth(100);
	this->setEnergy(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap: Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap: Copy constructor called" << std::endl;
	*this = other;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap: Copy assignment constructor called" << std::endl;
	if (this == &other)
		return (*this);
	this->setName(other.getName());
	this->setHealth(other.getHealth());
	this->setEnergy(other.getEnergy());
	this->setAttackDamage(other.getAttackDamage());
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: Destructing " << this->getName() << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->getEnergy() <= 0 || this->getHealth() <= 0)
	{
		std::cout << "ScavTrap " << this->getName() << " can not attack!" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->getName() << " attacks " << target
		<< ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	this->setEnergy(this->getEnergy() - 1);
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->getName() << " is now in gate keeper mode" << std::endl;
}
