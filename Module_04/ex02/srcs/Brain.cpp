/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:08:52 by amanjon-          #+#    #+#             */
/*   Updated: 2024/09/28 08:30:24 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain()
{
	std::cout << GREEN << "Brain has been created !!" << RESET << std::endl;
}

Brain::Brain(const Brain& constrCopy)
{
	int i;

	i = 0;
	while (i < 100)
	{
		this->ideas[i] = constrCopy.ideas[i];
		i++;
	}
}

Brain& Brain::operator=(const Brain& constrCopy)
{
	int i;

	i = 0;
	if (this != &constrCopy)
	{
		while (i < 100)
		{
			this->ideas[i] = constrCopy.ideas[i];
			i++;
		}
	}

	return (*this);
}

Brain::~Brain()
{
	std::cout << RED << "Bye bye Brain class" << RESET << std::endl;
}

