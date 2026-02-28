/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejakob <ejakob@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 10:54:52 by ejakob            #+#    #+#             */
/*   Updated: 2026/02/28 11:02:23 by ejakob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed() : value(0) {}

Fixed::Fixed(const int int_value)
{
	this->value = int_value << this->fractional_bits;
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
	this->setRawBits(other.getRawBits());
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
	return (this->value > other.value);
}

bool	Fixed::operator<(const Fixed &other) const
{
	return (this->value < other.value);
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return (this->value >= other.value);
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return (this->value <= other.value);
}

bool	Fixed::operator==(const Fixed &other) const
{
	return (this->value == other.value);
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return (this->value != other.value);
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
	this->value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	old(*this);
	this->value++;
	return (old);
}

Fixed	&Fixed::operator--(void)
{
	this->value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	old(*this);
	this->value--;
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
