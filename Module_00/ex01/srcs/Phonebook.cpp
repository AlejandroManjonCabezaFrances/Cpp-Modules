/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:34:16 by amanjon-          #+#    #+#             */
/*   Updated: 2024/07/18 10:12:34 by amanjon-         ###   ########.fr       */
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
		if (std::cin.eof())
			break;
		if (!(input.empty())) 
			break;
	}
}

void	numberSpaceHandler(const std::string &prompt, std::string &input)
{
	size_t	i;
	int		noNumeric;
	
	noNumeric = false;
	while (1)
	{
		std::cout << prompt << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			break;
		for (i = 0; i < input.size(); i++)
		{
			if (!isdigit(input[i]))
			{
				noNumeric = true;	
				break;
			}
		}
		if (!input.empty() && !noNumeric)
			break;
		else
		{
			std::cout << std::endl << "** Error: enter numerical values **" << std::endl << std::endl;
			noNumeric = false;
		}
	}
}

void	Phonebook::addContact()
{	
	std::string	input;
	
	if (this->index == 8)
		this->index = 0;
	std::cin.ignore();
	spaceHandler("Enter first name: ", input);
	this->contacts[this->index].setFirstName(input);
	spaceHandler("Enter last name: ", input);
	this->contacts[this->index].setLastName(input);
	spaceHandler("Enter nick name: ", input);
	this->contacts[this->index].setNickName(input);
	numberSpaceHandler("Enter phone number: ", input);
	this->contacts[this->index].setPhoneNumber(input);
	spaceHandler("Enter darkest secret: ", input);
	this->contacts[this->index].setDarkestSecret(input);
	std::cout << "Contact add correctly." << std::endl;
	if (this->index < 8)
		this->index++;
}

void	Phonebook::indexSearch()
{
	int 		i;
	std::string	inputIndex;

	i = -1;
	std::cout << "Enter a number between 0 and 7" << std::endl;
	while (true)
	{
		if(std::cin.eof())
			break;
		std::cin >> inputIndex;
		if (inputIndex.size() == 1 && inputIndex[0] >= '0' && inputIndex[0] < '8')
		{
			if (!inputIndex.empty() && isdigit(inputIndex[0]))
				i = atoi(inputIndex.c_str());
			else
			{
				std::cout << "Empty index or invalid input entered (0-8)" << std::endl;
			}
			if (!this->contacts[i].getFirstName().empty() && isdigit(inputIndex[0]) && i != -1)
			{
				std::cout << "First name: " << this->contacts[i].getFirstName() << std::endl;
				std::cout << "Last name: " << this->contacts[i].getLastName() << std::endl;
				std::cout << "Nick name: " << this->contacts[i].getNickName() << std::endl;
				std::cout << "Phone number: " << this->contacts[i].getPhoneNumber() << std::endl;
				std::cout << "Darkest secret: " << this->contacts[i].getDarkestSecret() << std::endl;
				break;
			}
			else
				break;
		}
		/* std::cout << "Empty guide / only numbers / Only numbers from 0 to 7" << std::endl; */
	}
}

void	Phonebook::searchContact()
{
	int	i;

	std::cout << "  ===================================================" << std::endl;
	std::cout << " | " << std::setw(10) << "Index" << " | " << "First name | ";
	std::cout << std::setw(10) << " Last name | ";
	std::cout << std::setw(10) << " Nick name | " << std::endl;
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
		indexSearch();
}

void	Phonebook::exit()
{
	std::cout << "Leaving the program ..." << std::endl;
}
