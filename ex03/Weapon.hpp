/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:42:06 by tchobert          #+#    #+#             */
/*   Updated: 2025/04/16 14:42:10 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <cstdlib>
# include <iostream>

class Weapon
{
	private:

	std::string	_type;

	public:

	Weapon(const std::string& type);
	const std::string&	getType(void) const;
	void				setType(const std::string new_type);
};
