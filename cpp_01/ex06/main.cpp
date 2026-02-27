/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejakob <ejakob@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 10:23:26 by ejakob            #+#    #+#             */
/*   Updated: 2026/02/27 10:23:28 by ejakob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	Harl	h;

	if (argc != 2 || !argv[1][0])
		return (std::cout << "Usage: ./harlFilter <level>\nLevels: DEBUG, INFO, WARNING and ERROR" << std::endl, 1);
	h.complain(argv[1]);
	return (0);
}
