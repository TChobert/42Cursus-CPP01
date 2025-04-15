/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 19:46:00 by tchobert          #+#    #+#             */
/*   Updated: 2025/03/21 19:46:02 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <cstdlib>
# include <string>
# include <iostream>
# include <new>

class Zombie
{
	private:

	std::string	_name;

	public:

	Zombie(const std::string& name);
	~Zombie();
	void	announce(void);
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);
