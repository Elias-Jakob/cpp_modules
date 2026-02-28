/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejakob <ejakob@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 11:02:38 by ejakob            #+#    #+#             */
/*   Updated: 2026/02/28 11:02:40 by ejakob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

int	main(void)
{
	{
		Fixed ep(0.0031f);
		Fixed a(3.3f);
		Fixed b(9);
		Fixed c(9.0f);
		Fixed d;
		std::cout << "a: " << a << " b: " << b << " c: " << c << " d: " << d << std::endl;
		std::cout << "a + b: " << a + b << " b + a: " << b + a  << std::endl;
		std::cout << "a - b: " << a - b << " b - a: " << b - a  << std::endl;
		std::cout << "a * b: " << a * b << " b * a: " << b * a  << std::endl;
		std::cout << "a / b: " << a / b << " b / a: " << b / a << std::endl;
		std::cout << "a > b: " << (a > b) << " b > a: " << (b > a) << std::endl;
		std::cout << "a < b: " << (a < b) << " b < a: " << (b < a) << std::endl;
		std::cout << "a >= b: " << (a >= b) << " b >= c: " << (b >= c) << std::endl;
		std::cout << "a <= b: " << (a <= b) << " b <= c: " << (b <= c) << std::endl;
		std::cout << "a == b: " << (a == b) << " b == c: " << (b == c) << std::endl;
		std::cout << "a != b: " << (a != b) << " b != c: " << (b != c) << std::endl;
		std::cout << "a != a: " << (a != a) << " a == a: " << (a == a) << std::endl;
		d = Fixed::min(a, b);
		std::cout << "min of a and b: " << d << std::endl;
		std::cout << "ep: " << ep << std::endl;
		std::cout << "ep++: " << ep++ << " ep: " << ep << " ++ep: " << ++ep << std::endl;
		std::cout << "ep--: " << ep-- << " ep: " << ep << " --ep: " << --ep << std::endl;
	}
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}
	return (0);
}
