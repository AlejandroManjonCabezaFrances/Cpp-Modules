/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:34:16 by amanjon-          #+#    #+#             */
/*   Updated: 2024/04/16 19:20:52 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{
	this->numContacts = 0;
	this->index = 0;
}

Phonebook::~Phonebook()
{
}

void	Phonebook::add_contact()
{
	std::string	input;

	std::cout << "Enter first name: " << std::endl;
	std::cin >> input;
	this->contacts[this->index].setFirstName(input);
	std::cout << "Enter last name: " << std::endl;
	std::cin >> input;
	this->contacts[this->index].setLastName(input);
	std::cout << "Enter nick name: " << std::endl;
	std::cin >> input;
	this->contacts[this->index].setNickName(input);
	std::cout << "Enter phone number: " << std::endl;
	std::cin >> input;
	this->contacts[this->index].setPhoneNumber(input);
	std::cout << "Enter darkest secret: " << std::endl;
	std::cin >> input;
	this->contacts[this->index].setDarkestSecret(input);
	std::cout << "contact add correctly." << std::endl;
	this->index++;
	if (this->index == 8)
		this->index = 0;
}

void	Phonebook::search_contact()
{
	int	i;

	i = 0;
	std::cout << std::setw(10) << "index" << " | ";
	std::cout << std::setw(10) << "first name" << " | ";
	std::cout << std::setw(10) << "last name" << " | ";
	std::cout << std::setw(10) << "nick name" << std::endl;

	while (i < this->index)
	{
		std::cout << "     --------------------------------------------" << std::endl;
		std::cout << std::setw(10) << i << " | ";
		std::cout << std::setw(10) << this->contacts[i].getFirstName() << " | ";
		std::cout << std::setw(10) << this->contacts[i].getLastName() << " | ";
		std::cout << std::setw(10) << this->contacts[i].getNickName() << std::endl;
		i++;
	}
}

void	Phonebook::exit()
{
	std::cout << "leaving the program ..." << std::endl;
}
