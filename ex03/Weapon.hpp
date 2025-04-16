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

	const std::string&	get_type(void) const;
	void				set_type(const std::string new_type);
};
