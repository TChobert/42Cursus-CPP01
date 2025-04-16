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

Weapon::Weapon(const std::string& type): _type(type)
{
}

const std::string&	Weapon::getType(void) const
{
	return (_type);
}

void	Weapon::setType(const std::string new_type)
{
	_type = new_type;
}
