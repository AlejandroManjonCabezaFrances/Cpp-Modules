/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:34:16 by amanjon-          #+#    #+#             */
/*   Updated: 2024/04/15 18:54:43 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

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

	std::cout << "Ingresar Nombre: " << std::endl;
	std::cin >> input;
	this->contacts[this->index].setFirstName(input);

	std::cout << "Ingresar apellido: " << std::endl;
	std::cin >> input;
	this->contacts[this->index].setFirstName(input);

	std::cout << "Ingresar apodo: " << std::endl;
	std::cin >> input;
	this->contacts[this->index].setFirstName(input);

	std::cout << "Ingresar número de teléfono: " << std::endl;
	std::cin >> input;
	this->contacts[this->index].setFirstName(input);
	
	std::cout << "Ingresar secreto oscuro: " << std::endl;
	std::cin >> input;
	this->contacts[this->index].setFirstName(input);
}

void	Phonebook::search_contact()
{
	
}

// int main()
// {
// 	Contact	miContacto;

// 	std::cout << "Ingrese el nombre: ";
// 	std::string	getFirstName();
// 	std::cin >> miContacto.FirstName;
// 	return (0);
// }
