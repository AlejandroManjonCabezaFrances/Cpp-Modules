/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:34:16 by amanjon-          #+#    #+#             */
/*   Updated: 2024/04/22 19:11:44 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

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
	
	if (this->index == 8)
		this->index = 0;

	while(1)
	{
		std::cout << "Enter first name: " << std::endl;
		std::cin.ignore();
		std::getline(std::cin, input);
		if (!(input.empty()))
		{
			this->contacts[this->index].setFirstName(input);
			break;
		}
	}


	if (input.empty())
		std::cout << "ha entrado en el if por input esta vacio" << std::endl;
	
	std::cout << "Enter last name: " << std::endl;
	std::getline(std::cin, input);
	this->contacts[this->index].setLastName(input);
	std::cout << "Enter nick name: " << std::endl;
	std::getline(std::cin, input);
	this->contacts[this->index].setNickName(input);
	std::cout << "Enter phone number: " << std::endl;
	std::getline(std::cin, input);
	this->contacts[this->index].setPhoneNumber(input);
	std::cout << "Enter darkest secret: " << std::endl;
	std::getline(std::cin, input);
	this->contacts[this->index].setDarkestSecret(input);
	std::cout << "Contact add correctly." << std::endl;
	this->index++;
}

void	Phonebook::search_contact()
{
	int	i;

	std::cout << "index = " << this->index << std::endl;
	
	std::cout << "  ===================================================" << std::endl;
	std::cout << " | " << std::setw(10) << "Index" << " | " << "First name | ";
	std::cout << std::setw(10) << "Last name  | ";
	std::cout << std::setw(10) << "Nick name  | " << std::endl;
	std::cout << "  ===================================================" << std::endl;
	for(i = 0; i < this->index; i++)
	{
		std::cout << " | " << std::setw(10) << i << " | ";
		std::string firstName = this->contacts[i].getFirstName().substr(0, 10);
		std::string lastName = this->contacts[i].getLastName().substr(0, 10);
		std::string nickName = this->contacts[i].getNickName().substr(0, 10);
		if (firstName.length() > 9)
			firstName[9] = '.';
		if (lastName.length() > 9)
			lastName[9] = '.';
		if (nickName.length() > 9)
			nickName[9] = '.';	
		std::cout << std::setw(10) << firstName << " | ";
		std::cout << std::setw(10) << lastName << " | ";
		std::cout << std::setw(10) << nickName << " | " << std::endl;
		std::cout << "  ---------------------------------------------------" << std::endl;
	}
}

void	Phonebook::exit()
{
	std::cout << "leaving the program ..." << std::endl;
}
