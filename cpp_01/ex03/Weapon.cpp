/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejakob <ejakob@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 10:22:14 by ejakob            #+#    #+#             */
/*   Updated: 2026/02/27 10:22:16 by ejakob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(std::string set_type)
{
	type = set_type;
}

const std::string&	Weapon::getType()
{
	return (type);
}

void	Weapon::setType(std::string set_type)
{
	type = set_type;
}

