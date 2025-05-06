/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileCreator.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 20:21:10 by tchobert          #+#    #+#             */
/*   Updated: 2025/05/06 20:21:22 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileCreator.hpp"

void	FileCreator::createFile(std::ofstream& fileStream, const std::string& oldFilename)
{
	std::string	newFilename = oldFilename + ".replace";

	fileStream.open(newFilename.c_str());
	if (!fileStream.is_open())
	{
		throw std::runtime_error("Cannot create file: " + newFilename);
	}
}
