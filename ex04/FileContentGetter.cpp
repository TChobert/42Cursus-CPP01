/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileContentGetter.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:53:20 by tchobert          #+#    #+#             */
/*   Updated: 2025/05/06 14:53:38 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileContentGetter.hpp"

void	FileContentGetter::getFileContent(std::ifstream& openedFile, std::string& content)
{
	std::ostringstream ss;

	ss << openedFile.rdbuf();
	content = ss.str();
}
