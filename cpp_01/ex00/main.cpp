/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejakob <ejakob@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 10:17:39 by ejakob            #+#    #+#             */
/*   Updated: 2026/02/27 10:17:41 by ejakob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	z1("Foo");
	z1.announce();
	
	randomChump("Foo2");

	Zombie*	z2;
	z2 = newZombie("Foo3");
	z2->announce();
	delete z2;
}
