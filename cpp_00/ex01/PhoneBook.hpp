#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# define MAX_N_CONTACTS 8
# include "Contact.hpp"
# include <iostream>
# include <iomanip>
# include <limits>

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void	addContact();
		void	searchContact();
	private:
		Contact	contacts[MAX_N_CONTACTS];
		int	newContactIndex;
		std::string	getInput(std::string prompt);
		void	displayContacts();
		void	truncateField(std::string field, bool last);
};

#endif
