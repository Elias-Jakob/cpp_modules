/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejakob <ejakob@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 10:32:29 by ejakob            #+#    #+#             */
/*   Updated: 2026/02/28 10:32:31 by ejakob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed	&other);
		Fixed &operator=(const Fixed	&other);
		~Fixed();
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int	value;
		static const int	fractional_bits = 8;
};

#endif
