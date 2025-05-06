/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContentReplacer.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:01:55 by tchobert          #+#    #+#             */
/*   Updated: 2025/05/06 17:02:07 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <cstdlib>

class	ContentReplacer
{
	public:

	std::string	replace(const std::string& content, const std::string& s1, const std::string& s2);
};
