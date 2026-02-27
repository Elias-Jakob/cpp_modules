/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejakob <ejakob@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 10:18:01 by ejakob            #+#    #+#             */
/*   Updated: 2026/02/27 10:18:03 by ejakob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	N = 12;
	Zombie*	zs = zombieHorde(N, "Foo");
	for (int	i = 0; i < N; i++)
	{
		std::cout << "Zombie No.: " << i << std::endl;
		zs[i].announce();
	}
	delete[] zs;
}
