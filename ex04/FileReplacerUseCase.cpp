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
#include "ContentReplacer.hpp"
#include "ContentSaver.hpp"

void	FileReplacerUseCase::execute(const std::string& filename,
			const std::string& s1, const std::string& s2)
{
	std::string	fileContent;
	std::string	newFileContent;

	FileReader	filereader;
	fileContent = filereader.readFile(filename);
	ContentReplacer	replacer;
	newFileContent = replacer.replace(fileContent, s1, s2);
	ContentSaver	contentsaver;
	contentsaver.saveContent(filename, newFileContent);
}
