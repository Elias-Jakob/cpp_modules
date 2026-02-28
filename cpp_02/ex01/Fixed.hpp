/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejakob <ejakob@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 10:51:29 by ejakob            #+#    #+#             */
/*   Updated: 2026/02/28 10:51:30 by ejakob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const int int_value);
		Fixed(const float float_value);
		Fixed(const Fixed &other);
		Fixed &operator=(const Fixed &other);
		~Fixed();

		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		int	toInt(void) const;
		float	toFloat(void) const;
	private:
		int	value;
		static const int	fractional_bits = 8;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &f);

#endif
