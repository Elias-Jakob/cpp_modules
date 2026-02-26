# include "Fixed.hpp"

int	main(void)
{
	Fixed a(3.3f);
	Fixed b(9);
	std::cout << "a + b: " << a + b << " b + a: " << b + a  << std::endl;
	std::cout << "a - b: " << a - b << " b - a: " << b - a  << std::endl;
	std::cout << "a * b: " << a * b << " b * a: " << b * a  << std::endl;
	std::cout << "a / b: " << a / b << " b / a: " << b / a << std::endl;
	std::cout << "a > b: " << (a > b) << " b > a: " << (b > a) << std::endl;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	//
	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;
	return (0);
}
