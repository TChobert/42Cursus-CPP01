/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileCloser.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:53:15 by tchobert          #+#    #+#             */
/*   Updated: 2025/05/06 15:53:28 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <cstdlib>
# include <fstream>
# include <iostream>

class	FileCloser
{
	public:

	void	closeFile(std::ifstream& openedFile);
};
