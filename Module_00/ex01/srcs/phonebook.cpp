/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:34:16 by amanjon-          #+#    #+#             */
/*   Updated: 2024/04/17 15:43:41 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	this->numContacts = 0;
	this->index = 1;
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
	if (this->index == 9)
		this->index = 1;
}

void	Phonebook::search_contact()
{
	int	i;

	i = 1;
	std::cout << "  ===================================================" << std::endl;
	std::cout << " | " << std::setw(10) << "index" << " | ";
	std::cout << std::setw(10) << "first name" << " | ";
	std::cout << std::setw(10) << "last name" << " | ";
	// index 8 --> hasta aqui printea, luego SEGV
	std::cout << std::setw(10) << "nick name" << " | " << std::endl;
	std::cout << "  ===================================================" << std::endl;
	while (i < this->index)
	{
		std::cout << " | " << std::setw(10) << i << " | ";
		std::string firstName = this->contacts[i].getFirstName();
		std::string lastName = this->contacts[i].getLastName();
		std::string nickName = this->contacts[i].getNickName();
		if (firstName.length() > 9)
			firstName[9] = '.';
		if (lastName.length() > 9)
			lastName[9] = '.';
		if (nickName.length() > 9)
			nickName[9] = '.';	
		std::cout << std::setw(10) << firstName << " | ";;
		std::cout << std::setw(10) << lastName << " | ";;
		std::cout << std::setw(10) << nickName << " | " << std::endl;;
		std::cout << "  ---------------------------------------------------" << std::endl;
		i++;
	}
}

void	Phonebook::exit()
{
	std::cout << "leaving the program ..." << std::endl;
}
