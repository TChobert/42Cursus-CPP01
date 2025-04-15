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
	Zombie	*Horde;
	Zombie	*SecondHorde;

	Bernard = newZombie("Bernard");
	Bernard->announce();
	randomChump("Didier");
	delete	Bernard;
	Horde = zombieHorde(10, "Dominic");
	destroyHorde(Horde);
	SecondHorde = zombieHorde(5, "DOMINIQUE");
	destroyHorde(SecondHorde);
	return (EXIT_SUCCESS);
}
