/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:34:11 by amanjon-          #+#    #+#             */
/*   Updated: 2024/04/02 11:54:40 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
#include <iostream>
#include <string>

class	Phonebook
{
	private:
		static const int	maxContacts = 8;
		Contact				contacts[maxContacts];
		int					numContacts;
		int					index;

	public:
		// Constructor
		Phonebook();
		// Destructor
		~Phonebook();

		// Métodos prototype
		void	add();
		void	search();
		void	exit();
};

#endif