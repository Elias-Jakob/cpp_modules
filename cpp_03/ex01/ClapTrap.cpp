# include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) :
	_name(name), _health(10), _energy(10), _attack_damage(0)
{
	std::cout << "ClapTrap: Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap: Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	
	std::cout << "ClapTrap: Copy assignment constructor called" << std::endl;
	if (this == &other)
		return (*this);
	this->_name = other._name;
	this->_health = other._health;
	this->_energy = other._energy;
	this->_attack_damage = other._attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: Destructing " << this->_name << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energy <= 0 || this->_health <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " can not attack!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target
		<< ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	this->_energy--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " takes " << amount
		<< " points of damage!" << std::endl;
	this->_health -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy <= 0 || this->_health <= 0)
	{
		std::cout << "ClapTrap " << this->_name << "can't be repaired..." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " repairs itself, regaining " << amount
		<< " health points!" << std::endl;
	this->_health += amount;
	this->_energy--;
}

std::string	ClapTrap::getName(void) const { return (this->_name); }
int	ClapTrap::getHealth(void) const { return (this->_health); }
int	ClapTrap::getEnergy(void) const { return (this->_energy); }
int	ClapTrap::getAttackDamage(void) const { return (this->_attack_damage); }

void	ClapTrap::setName(std::string name) { this->_name = name; }
void	ClapTrap::setHealth(int amount) { this->_health = amount; }
void	ClapTrap::setEnergy(int amount) { this->_energy = amount; }
void	ClapTrap::setAttackDamage(int amount) { this->_attack_damage = amount; }

