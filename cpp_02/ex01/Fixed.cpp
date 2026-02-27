# include "Fixed.hpp"

Fixed::Fixed() :
	value(0)
{
	std::cout << "Constructor called" << std::endl;
}

Fixed::Fixed(const int int_value)
{
	std::cout << "Int constructor called" << std::endl;
	value = int_value << fractional_bits;
}

Fixed::Fixed(const float float_value)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = roundf(float_value * (1 << this->fractional_bits));
}

Fixed::Fixed(const Fixed &other) :
	value(other.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
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
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->value / (1 << this->fractional_bits));
}

int	Fixed::toInt(void) const
{
	return (this->value >> this->fractional_bits);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &f)
{
	out << f.toFloat();
	return (out);
}
