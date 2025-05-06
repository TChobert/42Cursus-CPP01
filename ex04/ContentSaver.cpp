/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContentSaver.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 20:05:09 by tchobert          #+#    #+#             */
/*   Updated: 2025/05/06 20:05:29 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContentSaver.hpp"

void	ContentSaver::saveContent(const std::string& filename, const std::string& content)
{
	std::ofstream	newFileStream;

	_filecreator.createFile(newFileStream, filename);
	_contentwriter.writeContent(newFileStream, content);
}
