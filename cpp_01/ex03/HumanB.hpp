/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejakob <ejakob@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 10:21:59 by ejakob            #+#    #+#             */
/*   Updated: 2026/02/27 10:22:00 by ejakob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string n);
		void	attack(void);
		void	setWeapon(Weapon& w);
	private:
		std::string	name;
		Weapon*	weapon;
};
#endif
