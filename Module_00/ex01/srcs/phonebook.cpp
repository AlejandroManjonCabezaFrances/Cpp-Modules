/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:34:16 by amanjon-          #+#    #+#             */
/*   Updated: 2024/04/23 15:29:42 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	this->index = 0;
}

Phonebook::~Phonebook()
{
}

void	spaceHandler(const std::string &prompt, std::string &input)
{
	while (1)
	{
		std::cout << prompt << std::endl;
		std::getline(std::cin, input);
		if (!(input.empty()))
			break;
	}
}

void	Phonebook::addContact()
{	
	std::string	input;
	
	if (this->index == 8)
		this->index = 0;
	std::cin.ignore();
	spaceHandler(std::string("Enter first name: "), input);
	this->contacts[this->index].setFirstName(input);
	spaceHandler("Enter last name: ", input);
	this->contacts[this->index].setLastName(input);
	spaceHandler("Enter nick name: ", input);
	this->contacts[this->index].setNickName(input);
	spaceHandler("Enter phone number: ", input);
	this->contacts[this->index].setPhoneNumber(input);
	spaceHandler("Enter darkest secret: ", input);
	this->contacts[this->index].setDarkestSecret(input);
	std::cout << "Contact add correctly." << std::endl;
	if (this->index < 8)
		this->index++;
}

void	Phonebook::indexSearch()
{
	// int	i;
	std::string	inputIndex;
	
	std::getline(std::cin, inputIndex);
	if (inputIndex == "0" || inputIndex == "1" || inputIndex == "2"
		|| inputIndex == "3" || inputIndex == "4" || inputIndex == "5"
			|| inputIndex == "6" || inputIndex == "7")
			{
					std::cout << "se ha puesto un NUMERO en SEARCH" << std::endl;
			}
	// for (i = 0; i < 7; i++)
	// {
	// 	if(contacts[i].getFirstName().empty())
	// 		std::cout << "entra en el if ?" << std::endl;
	// }	
}

void	Phonebook::searchContact()
{
	int	i;

	// indexSearch();
	std::cout << "  ===================================================" << std::endl;
	std::cout << " | " << std::setw(10) << "Index" << " | " << "First name | ";
	std::cout << std::setw(10) << "Last name  | ";
	std::cout << std::setw(10) << "Nick name  | " << std::endl;
	std::cout << "  ===================================================" << std::endl;
	for(i = 0; i < 8; i++)
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
