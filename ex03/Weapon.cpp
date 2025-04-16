/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:45:35 by tchobert          #+#    #+#             */
/*   Updated: 2025/04/16 14:45:46 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string&	Weapon::get_type(void) const
{
	return (_type);
}

void	Weapon::set_type(const std::string new_type)
{
	_type = new_type;
}


// Idee 1:
//
// HumanA prend une REFERENCE a l'arme
//
//
//
//HumanB prend un pointeur
//
//