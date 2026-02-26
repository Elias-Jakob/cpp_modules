#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const int	int_value);
		Fixed(const float	float_value);
		Fixed(const Fixed	&other);
		Fixed &operator=(const Fixed	&other);
		~Fixed();

		int	getRawBits(void) const;
		void	setRawBits(const int	raw);
		int	toInt(void) const;
		float	toFloat(void) const;
	private:
		int	value;
		static const int	fractional_bits = 8;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &f);

#endif
