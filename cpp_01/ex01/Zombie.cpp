/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejakob <ejakob@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 10:17:55 by ejakob            #+#    #+#             */
/*   Updated: 2026/02/27 10:17:56 by ejakob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	name = "default zombie";
}

Zombie::~Zombie()
{
	std::cout << "Destructing: " << name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << ": braiiiiiiinnnzzzz..." << std::endl;
}

void	Zombie::setName(std::string n)
{
	name = n;
}
