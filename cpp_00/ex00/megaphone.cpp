/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejakob <ejakob@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 19:19:28 by ejakob            #+#    #+#             */
/*   Updated: 2026/02/26 19:19:37 by ejakob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

void	str_to_uppper(std::string str)
{
	for (int	s = 0; str[s]; s++)
		std::cout << (char)std::toupper(str[s]);
}

int	main(int argc, char *argv[])
{
	std::string	str;

	if (argc == 1 || (argc == 2 && std::string(argv[1]).empty()))
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int	i = 1; i < argc; i++)
	{
		str = argv[i];
		str_to_uppper(str);
		if (i < argc - 1 && !str.empty() && !std::string(argv[i + 1]).empty())
			std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}
