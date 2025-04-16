/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:43:43 by tchobert          #+#    #+#             */
/*   Updated: 2025/04/16 15:44:02 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Weapon.hpp"

class HumanB
{
	private:

	const std::string	_name;
	Weapon*				_weapon;

	public:

	HumanB(const std::string& name);
	~HumanB(void);
	void	attack(void) const;
	void	setWeapon(Weapon& weapon);
};
