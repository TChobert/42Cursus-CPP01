/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileOpener.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:08:09 by tchobert          #+#    #+#             */
/*   Updated: 2025/05/06 14:08:23 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>
# include <cstdlib>
# include <fstream>

class	FileOpener
{
	public:

	void	openFile(std::ifstream& stream, const std::string& filename);
};
