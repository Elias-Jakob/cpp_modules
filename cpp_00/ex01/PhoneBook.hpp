#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# define MAX_N_CONTACTS 8
# include "Contact.hpp"


class PhoneBook
{
	public:
		void	addContact();
		void	displayContacts();
		void	searchContact(std::string searchIndex);
	private:
		Contact	contacts[MAX_N_CONTACTS];
};

#endif
