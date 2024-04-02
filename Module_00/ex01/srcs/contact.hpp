/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:33:42 by amanjon-          #+#    #+#             */
/*   Updated: 2024/04/02 11:12:36 by amanjon-         ###   ########.fr       */
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
		std::string	FirstName;
		std::string	LastName;
		std::string	NickName;
		std::string	PhoneNumber;
		std::string	DarkestSecret;
	public:
		// Método Constructor
		Contact();
		// Método Destructor
		~Contact();

		// Métodos getters prototype
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickName();
		std::string	getPhoneNumber();
		std::string	getDarkestSecret();

		// Métodos setter
		void	setFirstName(std::string _FirstName);
		void	setLastName(std::string _LastName);
		void	setNickName(std::string _NickName);
		void	setPhoneNumber(std::string _PhoneNumber);
		void	setDarkestSecret(std::string _DarkestSecret);
};

#endif
