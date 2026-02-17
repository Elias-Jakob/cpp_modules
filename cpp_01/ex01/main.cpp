#include "Zombie.hpp"

int	main(void)
{
	int	N = 12;
	Zombie*	zs = zombieHorde(N, "Foo");
	for (int	i = 0; i < N; i++)
	{
		std::cout << "Zombie No.: " << i << " with address: " << &zs[i] << std::endl;
		zs[i].announce();
	}
	delete[] zs;
}
