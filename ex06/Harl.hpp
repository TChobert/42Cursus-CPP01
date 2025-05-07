/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:07:05 by tchobert          #+#    #+#             */
/*   Updated: 2025/05/07 14:07:14 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <cstdlib>
# include <iostream>
# include <string>

class	Harl
{
	private:

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

	public:

	Harl(void);
	enum		ComplainLevels {DEBUG, INFO, WARNING, ERROR, UNKNOWN};
	std::string	levels[4];
	void		(Harl::*complainLevels[4])();
	void		complain(std::string level);
	ComplainLevels getComplainLevel(std::string& level);
};
