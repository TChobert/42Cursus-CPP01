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

static void	destroyHorde(int N, Zombie *horde)
{
	delete[]	horde;
}

int	main(void)
{
	Zombie	*Bernard;

	Bernard = newZombie("Bernard");
	Bernard->announce();
	randomChump("Didier");
	delete	Bernard;
	//call horde
	return (EXIT_SUCCESS);
}