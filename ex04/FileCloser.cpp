/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileCloser.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:59:26 by tchobert          #+#    #+#             */
/*   Updated: 2025/05/06 15:59:43 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileCloser.hpp"

void	FileCloser::closeFile(std::ifstream &openedFile)
{
	openedFile.close();
}
