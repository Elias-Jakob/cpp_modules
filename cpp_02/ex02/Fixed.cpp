# include "Fixed.hpp"

Fixed::Fixed() : value(0) {}

Fixed::Fixed(const int int_value)
{
	value = int_value << fractional_bits;
}

Fixed::Fixed(const float float_value)
{
	this->value = (int)(float_value * (1 << this->fractional_bits));
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

Fixed::~Fixed() {}

int	Fixed::getRawBits(void) const { return (this->value); }

void	Fixed::setRawBits(const int raw) { this->value = raw; }

float	Fixed::toFloat(void) const
{
	return ((float)this->value / (1 << this->fractional_bits));
}

int	Fixed::toInt(void) const
{
	return (this->value >> this->fractional_bits);
}

// Member overload operators
Fixed Fixed::operator+(const Fixed	&other)
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed	&other)
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed	&other)
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed	&other)
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

bool	Fixed::operator>(const Fixed &other)
{
	return (this->toFloat() > other.toFloat());
}

bool	Fixed::operator<(const Fixed &other)
bool	Fixed::operator>=(const Fixed &other)
bool	Fixed::operator<=(const Fixed &other)
bool	Fixed::operator==(const Fixed &other)
bool	Fixed::operator!=(const Fixed &other)
// Insertion overload operator
std::ostream	&operator<<(std::ostream &out, const Fixed &f)
{
	out << f.toFloat();
	return (out);
}
