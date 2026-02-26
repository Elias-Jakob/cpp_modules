/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejakob <ejakob@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 19:20:47 by ejakob            #+#    #+#             */
/*   Updated: 2026/02/26 19:20:48 by ejakob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
