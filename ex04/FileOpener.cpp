/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileOpener.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:12:00 by tchobert          #+#    #+#             */
/*   Updated: 2025/05/06 14:12:29 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileOpener.hpp"

void	FileOpener::openFile(std::ifstream& stream, const std::string& filename)
{
	stream.open(filename);
	if (!stream.is_open())
	{
		throw (std::runtime_error("Cannot open file:" + filename));
	}
}
