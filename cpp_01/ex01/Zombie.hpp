/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejakob <ejakob@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 10:17:58 by ejakob            #+#    #+#             */
/*   Updated: 2026/02/27 10:17:59 by ejakob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie {
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		void	setName(std::string n);

	private:
		std::string	name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif
