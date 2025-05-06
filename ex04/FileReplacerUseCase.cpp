/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacerUseCase.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 20:25:00 by tchobert          #+#    #+#             */
/*   Updated: 2025/05/05 20:25:06 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacerUseCase.hpp"
#include "FileReader.hpp"

void	FileReplacerUseCase::execute(const std::string& filename,
			const std::string& s1, const std::string& s2)
{
	std::string	fileContent;
	std::string	replacedContent;

	FileReader	filereader;
	fileContent = filereader.readFile(filename);
	//
	//FileWriter
}
