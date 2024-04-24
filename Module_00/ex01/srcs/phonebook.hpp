/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:34:11 by amanjon-          #+#    #+#             */
/*   Updated: 2024/04/24 08:08:59 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip> // Manipula entrada/salida de datos formateados std::setw(10)

class	Phonebook
{
	private:
		static const int	maxContacts = 8;
		Contact				contacts[maxContacts];
		int					index;
		int					upDateTable;
		// int					secondRound;

	public:
		// Constructor
		Phonebook();
		// Destructor
		~Phonebook();

		// Métodos prototype
		void	addContact();
		void	searchContact();
		void	indexSearch();
		void	exit();
};

#endif
