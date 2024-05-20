/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:34:32 by amanjon-          #+#    #+#             */
/*   Updated: 2024/05/20 07:05:44 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
// Inicializar el constructor
Contact::Contact()
{
}

// Inicializar el desconstructor
Contact::~Contact()
{
}

std::string	Contact::getFirstName(void)
{
	return (this->firstName);
}

void	Contact::setFirstName(std::string _firstName)
{
	this->firstName = _firstName;
}

std::string	Contact::getLastName(void)
{
	return (this->lastName);
}

void	Contact::setLastName(std::string _lastName)
{
	this->lastName = _lastName;
}

std::string	Contact::getNickName(void)
{
	return (this->nickName);
}

void	Contact::setNickName(std::string _nickName)
{
	this->nickName = _nickName;
}

std::string	Contact::getPhoneNumber(void)
{
	return (this->phoneNumber);
}

void	Contact::setPhoneNumber(std::string _phoneNumber)
{
	this->phoneNumber = _phoneNumber;
}

std::string	Contact::getDarkestSecret(void)
{
	return (this->darkestSecret);
}

void	Contact::setDarkestSecret(std::string _darkestSecret)
{
	this->darkestSecret = _darkestSecret;
}
