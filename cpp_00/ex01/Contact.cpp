/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejakob <ejakob@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 19:20:04 by ejakob            #+#    #+#             */
/*   Updated: 2026/02/26 19:20:05 by ejakob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

Contact::Contact() {}

Contact::Contact(std::string fN, std::string lN, std::string n,
		std::string pN, std::string dS) :
	firstName(fN), lastName(lN), nickname(n),
	phoneNumber(pN), darkestSecret(dS) {}
