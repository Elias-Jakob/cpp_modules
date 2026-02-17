#include <iostream>

class Zombie {
	public:
		Zombie();
		Zombie(std::string n);
		~Zombie();
		void	announce(void);

	private:
		std::string	name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
Zombie*	zombieHorde(int N, std::string name);
