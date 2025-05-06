/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 20:27:10 by tchobert          #+#    #+#             */
/*   Updated: 2025/05/05 20:27:11 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacerUseCase.hpp"

int	main(int ac, char **av)
{
	FileReplacerUseCase	replacer;
	try
	{
		if (ac != 4)
		{
			std::cerr << "Usage: ./replacer <filename> <s1> <s2>" << std::endl;
			return (EXIT_FAILURE);
		}
		replacer.execute(av[1], av[2], av[3]);
	}
	catch (const std::exception& e)
	{
		std::cerr << "An error occurred:" << e.what() << std::endl;
	}
	return (EXIT_SUCCESS);
}
