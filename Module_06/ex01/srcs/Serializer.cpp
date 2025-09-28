/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 16:47:44 by amanjon           #+#    #+#             */
/*   Updated: 2024/12/22 17:50:23 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.hpp"

Serializer::Serializer()
{
	std::cout << GREEN << " Default constructor Serializer" << RESET << std::endl;
}

Serializer::Serializer(const Serializer& constrCopy)
{
	std::cout << GREEN << " Default constructor copy Serializer" << RESET << std::endl;
	*this = constrCopy;
}

Serializer& Serializer::operator=(const Serializer& constrCopy)
{
	(void)constrCopy;
	std::cout << GREEN << " Default assignment operator Serializer" << RESET << std::endl;

	return (*this);
}

Serializer::~Serializer()
{
	std::cout << RED << " Default destructor Serializer" << RESET << std::endl;
}

/**
 * Conversiones entre punteros y enteros, te permite hacer conversiones de bajo nivel sin restricciones de tipo.
 * Transformamos un puntero en una representación numérica
*/
uintptr_t Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

/**
 * Conversiones entre punteros y enteros, te permite hacer conversiones de bajo nivel sin restricciones de tipo.
 * Volvemos a transformar esa representación numérica en un puntero
*/
Data* Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
