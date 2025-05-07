/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:10:47 by tchobert          #+#    #+#             */
/*   Updated: 2025/05/07 14:10:58 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	complainLevels[0] = &Harl::debug;
	complainLevels[1] = &Harl::info;
	complainLevels[2] = &Harl::error;
	complainLevels[3] = &Harl::warning;

	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "ERROR";
	levels[3] = "WARNING";
}

void	Harl::debug(void)
{
	std::cout <<  "I love having extra bacon for my 7XL-double-cheese"
	"-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std:: cout << "I cannot believe adding extra bacon costs more money."
	" You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming for"
	" years, whereas you started working here just last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::ComplainLevels	Harl::getComplainLevel(std::string& level)
{
	for (unsigned long i = 0; i < 4; ++i)
	{
		if (this->levels[i] == level)
			return ComplainLevels(i);
	}
	return (UNKNOWN);
}

void	Harl::complain(std::string level)
{
	Harl::ComplainLevels	complainLevel  = getComplainLevel(level);

	switch(complainLevel)
	{
		case DEBUG:
		(this->*complainLevels[0])();
		// fall through
		case INFO:
		(this->*complainLevels[1])();
		// fall through
		case ERROR:
		(this->*complainLevels[2])();
		// fall through
		case WARNING:
		(this->*complainLevels[3])();
		// fall through
		case UNKNOWN:
			std::cout << "Harl! You there?" << std::endl;
			break;
	}
}
