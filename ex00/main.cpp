/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:51:17 by tchobert          #+#    #+#             */
/*   Updated: 2025/03/21 20:51:28 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*Bernard;
	Zombie	*Louis;

	try
	{
		Bernard = newZombie("Bernard");
		Bernard->announce();
		Louis = newZombie("Louis");
		Louis->announce();
		randomChump("Didier");
		delete	Bernard;
		delete	Louis;
	}
	catch(const std::bad_alloc &e)
	{
		std::cout << "Memory allocation failure" << e.what() << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
