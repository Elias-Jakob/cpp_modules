#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	Harl	h;

	if (argc != 2 || !argv[1][0])
		return (std::cout << "Usage: ./harlFilter <level>\nLevels: DEBUG, INFO, WARNING and ERROR" << std::endl, 1);
	h.complain(argv[1]);
	return (0);
}
