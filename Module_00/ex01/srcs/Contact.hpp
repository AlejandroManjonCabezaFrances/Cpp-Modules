/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:33:42 by amanjon-          #+#    #+#             */
/*   Updated: 2024/05/22 08:20:44 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class	Contact
{
	private:
		// Variables
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;
	public:
		// Método Constructor
		Contact();
		// Método Destructor
		~Contact();

		// Métodos getters --> obtener valor
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickName();
		std::string	getPhoneNumber();
		std::string	getDarkestSecret();

		// Métodos setter --> asignar valor a variable
		void	setFirstName(std::string _firstName);
		void	setLastName(std::string _lastName);
		void	setNickName(std::string _nickName);
		void	setPhoneNumber(std::string _phoneNumber);
		void	setDarkestSecret(std::string _darkestSecret);
};

#endif
