# include "Fixed.hpp"

Fixed::Fixed() :
	value(0)
{
	std::cout << "Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed	&other) :
	value(other.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed	&other)
{
	if (this == &other)
		return (*this);
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = other.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits(const int	raw)
{
	std::cout << "setRawBits called" << std::endl;
	this->value = raw;
}
