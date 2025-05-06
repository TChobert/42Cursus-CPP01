/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContentWriter.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 20:36:52 by tchobert          #+#    #+#             */
/*   Updated: 2025/05/06 20:36:53 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContentWriter.hpp"

void	ContentWriter::writeContent(std::ofstream& fileStream, const std::string& content)
{
	fileStream << content;
	fileStream.close();
}
