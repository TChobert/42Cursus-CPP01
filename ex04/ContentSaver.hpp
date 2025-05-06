/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContentSaver.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 20:07:31 by tchobert          #+#    #+#             */
/*   Updated: 2025/05/06 20:07:41 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <cstdlib>
# include <string>
# include <iostream>
# include <fstream>
# include "FileCreator.hpp"
# include "ContentWriter.hpp"

class	ContentSaver
{
	private:

	FileCreator		_filecreator;
	ContentWriter	_contentwriter;
	
	public:

	void	saveContent(const std::string& filename, const std::string& content);
};
