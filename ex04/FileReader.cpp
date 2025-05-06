/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileOpener.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:53:47 by tchobert          #+#    #+#             */
/*   Updated: 2025/05/06 13:54:03 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReader.hpp"

std::string	FileReader::readFile(const std::string& filename)
{
	std::ifstream	openedFile;
	std::string		fileContent;

	_fileopener.openFile(openedFile, filename);
	_contentgetter.getFileContent(openedFile, fileContent);
	_filecloser.closeFile(openedFile);
	return (fileContent);
}
