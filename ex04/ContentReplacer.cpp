/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContentReplacer.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:05:10 by tchobert          #+#    #+#             */
/*   Updated: 2025/05/06 17:05:30 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContentReplacer.hpp"

std::string	ContentReplacer::replace(const std::string& content,
				const std::string& s1, const std::string& s2)
{
	std::string					newContent;
	std::string::size_type		position;
	std::string::size_type		found;

	position = 0;
	while ((found = content.find(s1, position)) != std::string::npos)
	{
		newContent.append(content.substr(position, found - position));
		newContent.append(s2);
		position = found + s1.length();
	}
	newContent.append(content.substr(position));
	return (newContent);
}
