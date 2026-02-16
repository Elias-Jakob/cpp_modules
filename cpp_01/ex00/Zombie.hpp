#include <iostream>

class Zombie {
	public:
		Zombie(std::string n);
		~Zombie();
		void	announce(void);

	private:
		std::string	name;
};
