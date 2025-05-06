/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileCreator.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 20:18:45 by tchobert          #+#    #+#             */
/*   Updated: 2025/05/06 20:18:51 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <fstream>
# include <string>

class	FileCreator
{
	public:

	void	createFile(std::ofstream& fileStream, const std::string& oldFilename);
};
