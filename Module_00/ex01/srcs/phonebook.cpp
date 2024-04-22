/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:34:16 by amanjon-          #+#    #+#             */
/*   Updated: 2024/04/22 13:00:27 by amanjon-         ###   ########.fr       */
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
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;

	std::cout << "Enter first name: " << std::endl;
	std::cin >> firstName;
	this->contacts[this->index].setFirstName(firstName);
	std::cout << "Enter last name: " << std::endl;
	std::cin >> lastName;
	this->contacts[this->index].setLastName(lastName);
	std::cout << "Enter nick name: " << std::endl;
	std::cin >> nickName;
	this->contacts[this->index].setNickName(nickName);
	std::cout << "Enter phone number: " << std::endl;
	std::cin >> phoneNumber;
	this->contacts[this->index].setPhoneNumber(phoneNumber);
	std::cout << "Enter darkest secret: " << std::endl;
	std::cin >> darkestSecret;
	this->contacts[this->index].setDarkestSecret(darkestSecret);
	std::cout << "contact add correctly." << std::endl;
	this->index++;
	if (this->index == 8)
		this->index = 0;
}

void	Phonebook::search_contact()
{
	int	i;

	i = 0;
	std::cout << "  ===================================================" << std::endl;
	std::cout << " | " << std::setw(10) << "index" << " | ";
	std::cout << std::setw(10) << "first name" << " | ";
	std::cout << std::setw(10) << "last name" << " | ";
	std::cout << std::setw(10) << "nick name" << " | " << std::endl;
	std::cout << "  ===================================================" << std::endl;
	while (i < this->index)
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
