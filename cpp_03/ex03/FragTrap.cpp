# include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->setHealth(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->setName(name);
	this->setHealth(100);
	this->setEnergy(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap: Constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap: Copy constructor called" << std::endl;
	*this = other;
}

FragTrap	&FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap: Copy assignment constructor called" << std::endl;
	if (this == &other)
		return (*this);
	this->setName(other.getName());
	this->setHealth(other.getHealth());
	this->setEnergy(other.getEnergy());
	this->setAttackDamage(other.getAttackDamage());
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: Destructing " << this->getName() << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->getName() << " high-fives!" << std::endl;
}
