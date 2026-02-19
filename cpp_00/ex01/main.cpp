# include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	pb;
	std::string	input;
	
	while (input != "EXIT")
	{
		std::cout << ">> ";
		if (!std::getline(std::cin, input))
			break ;
		if (input == "ADD")
			pb.addContact();
		else if (input == "SEARCH")
		{
			pb.searchContact();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else if (input != "EXIT")
			std::cout << "The program only accepts ADD, SEARCH and EXIT." << std::endl;
	}
	return (0);
}
