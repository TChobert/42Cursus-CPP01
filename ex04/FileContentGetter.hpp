/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileContentGetter.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:48:16 by tchobert          #+#    #+#             */
/*   Updated: 2025/05/06 14:48:21 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>
# include <cstdlib>
# include <fstream>
# include <sstream>
# include "FileOpener.hpp"

class	FileContentGetter
{
	public:

	void	getFileContent(std::ifstream& stream, std::string content);
};
