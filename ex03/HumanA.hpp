/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:28:14 by tchobert          #+#    #+#             */
/*   Updated: 2025/04/16 15:28:28 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
	private:

	std::string	_name;
	Weapon&		_weapon;

	public:

	HumanA(const std::string& name, Weapon& weapon);
	~HumanA(void);
	void	attack(void) const;
};
