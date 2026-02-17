#include <iostream>

class Weapon
{
	public:
		Weapon();
		Weapon(std::string type_name);
		~Weapon();
		std::string	getType();
		void	setType(std::string type_name);
	private:
		std::string	type;
};
