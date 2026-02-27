# include "Fixed.hpp"

Fixed::Fixed() : value(0) {}

Fixed::Fixed(const int int_value)
{
	value = int_value << fractional_bits;
}

Fixed::Fixed(const float float_value)
{
	this->value = roundf(float_value * (1 << this->fractional_bits));
}

Fixed::Fixed(const Fixed &other) :
	value(other.getRawBits()) {}

Fixed	&Fixed::operator=(const Fixed &other)
{
	if (this == &other)
		return (*this);
	this->value = other.getRawBits();
	return (*this);
}

Fixed::~Fixed() {}

int	Fixed::getRawBits(void) const { return (this->value); }

void	Fixed::setRawBits(int const raw) { this->value = raw; }

float	Fixed::toFloat(void) const
{
	return ((float)this->value / (1 << this->fractional_bits));
}

int	Fixed::toInt(void) const
{
	return (this->value >> this->fractional_bits);
}

bool	Fixed::operator>(const Fixed &other) const
{
	return (value > other.value);
}

bool	Fixed::operator<(const Fixed &other) const
{
	return (value < other.value);
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return (value >= other.value);
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return (value <= other.value);
}

bool	Fixed::operator==(const Fixed &other) const
{
	return (value == other.value);
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return (value != other.value);
}

Fixed	Fixed::operator+(const Fixed &other) const
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &other) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &other) const
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed	&Fixed::operator++(void)
{
	value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	old(*this);
	value++;
	return (old);
}

Fixed	&Fixed::operator--(void)
{
	value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	old(*this);
	value--;
	return (old);
}

Fixed	&Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

const Fixed	&Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

Fixed	&Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return (f1);
	return (f2);
}

const Fixed	&Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1 > f2)
		return (f1);
	return (f2);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &f)
{
	out << f.toFloat();
	return (out);
}
