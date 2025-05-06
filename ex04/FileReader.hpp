/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileOpener.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:48:36 by tchobert          #+#    #+#             */
/*   Updated: 2025/05/06 13:48:52 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>
# include <cstdlib>
# include <fstream>
# include <sstream>
# include "FileOpener.hpp"
# include "FileContentGetter.hpp"
class FileReader
{
	private:

	FileOpener			_fileopener;
	FileContentGetter	_contentgetter;

	public:

	std::string	readFile(const std::string& filename);
};
