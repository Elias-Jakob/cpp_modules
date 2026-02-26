/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejakob <ejakob@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 19:20:27 by ejakob            #+#    #+#             */
/*   Updated: 2026/02/26 19:20:28 by ejakob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

PhoneBook::PhoneBook() :
	newContactIndex(0)
{
	std::cout << "Welcome to PhoneBook!\n"
		<< "Usage: There are three commands to use: ADD, SEARCH and EXIT" << std::endl;
}

PhoneBook::~PhoneBook()
{
	if (std::cin.eof())
		std::cout << std::endl;
	std::cout << "Bye bye!" << std::endl;
}

std::string	PhoneBook::getInput(std::string field)
{
	std::string	input;

	while (!std::cin.eof())
	{
		std::cout << "Please enter the " << field << " of your new contact: ";
		if (!std::getline(std::cin, input) || input != "")
			break ;
		std::cout << "This field can't be empty." << std::endl;
	}
	return (input);
}

void	PhoneBook::addContact()
{
	contacts[newContactIndex] = Contact(getInput("first name"),
		getInput("last name"), getInput("nickname"),
		getInput("phone number"), getInput("darkest secret"));
	newContactIndex++;
	if (newContactIndex >= MAX_N_CONTACTS)
		newContactIndex = 0;
	if (!std::cin.eof())
		std::cout << "Contact saved!" << std::endl;
}

void	PhoneBook::truncateField(std::string field, bool last = false)
{
	if (field.length() > 10)
		std::cout << std::setw(10) << field.substr(0, 9) + ".";
	else
		std::cout << std::setw(10) << field;
	if (last)
		std::cout << std::endl;
	else
		std::cout << "|";
}

void	PhoneBook::displayContacts()
{
	std::cout << std::setw(10) << "Index" << "|"
		<< std::setw(10) << "First name" << "|"
		<< std::setw(10) << "Last name" << "|"
		<< std::setw(10) << "Nickname" << std::endl;
	for (int	i = 0; i < MAX_N_CONTACTS; i++)
	{
		std::cout << std::setw(10) << i << "|";
		truncateField(contacts[i].firstName);
		truncateField(contacts[i].lastName);
		truncateField(contacts[i].nickname, true);
	}
}

void	PhoneBook::searchContact()
{
	std::string	input;
	int	contactIndex;

	displayContacts();
	std::cout << "Enter the index of the contact to display: ";
	std::cin >> contactIndex;
	if (std::cin.eof() && !std::cin.fail())
		return ;
	if (std::cin.fail() || contactIndex < 0 || contactIndex >= MAX_N_CONTACTS)
	{
		std::cout << "Invalid index!" << std::endl;
		std::cin.clear();
		return ;
	}
	Contact&	c = contacts[contactIndex];
	std::cout << "First name: " << c.firstName << "\n"
		<< "Last name: " << c.lastName << "\n"
		<< "Nickname: " << c.nickname << "\n"
		<< "Phone number: " << c.phoneNumber << "\n"
		<< "Darkest secret: " << c.darkestSecret << std::endl;
}
