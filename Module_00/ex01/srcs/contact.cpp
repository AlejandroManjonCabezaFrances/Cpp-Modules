/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:34:32 by amanjon-          #+#    #+#             */
/*   Updated: 2024/04/15 18:45:58 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
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
	return (this->FirstName);
}

void	Contact::setFirstName(std::string _FirstName)
{
	this->FirstName = _FirstName;
}

std::string	Contact::getLastName(void)
{
	return (this->LastName);
}

void	Contact::setLastName(std::string _LastName)
{
	this->LastName = _LastName;
}

std::string	Contact::getNickName(void)
{
	return (this->NickName);
}

void	Contact::setNickName(std::string _NickName)
{
	this->NickName = _NickName;
}

std::string	Contact::getPhoneNumber(void)
{
	return (this->PhoneNumber);
}

void	Contact::setPhoneNumber(std::string _PhoneNumber)
{
	this->PhoneNumber = _PhoneNumber;
}

std::string	Contact::getDarkestSecret(void)
{
	return (this->DarkestSecret);	
}

void	Contact::setDarkestSecret(std::string _DarkestSecret)
{
	this->DarkestSecret = _DarkestSecret;
}
