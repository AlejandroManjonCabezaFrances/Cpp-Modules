/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 01:38:04 by amanjon-          #+#    #+#             */
/*   Updated: 2024/10/21 14:12:01 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat() : AAnimal()
{
	this->catBrain = new Brain();
	this->type = "Cat";
	std::cout << GREEN << "The cat leaves for a walk" << RESET << std::endl;
}

/**
 * Constructor en copia: Guardamos en la instancia actual del objeto = dinámicamente 
 * llamamaos al constructor en copia de Brain, desreferenciando puntero para acceder a 
 * donde apunta el puntero "&"
*/
Cat::Cat(const Cat& constrCopy) : AAnimal()
{
	if (constrCopy.catBrain)
		this->catBrain = new Brain(*(constrCopy.catBrain));
	this->type = constrCopy.type;
	std::cout << PURPLE << "Cat `s constructor copy" << RESET << std::endl;
}

/**
 * Operador de asignación: evitamos la autoasignación.
 * Liberamos la memoria de la primera instancia del objeto: Cat copiedCat = originalCat;
 * Misma función que en contructor en copia.
*/
Cat& Cat::operator=(const Cat& constrCopy)
{
	if (this != &constrCopy)
	{
		delete this->catBrain;
		if (constrCopy.catBrain)
			this->catBrain = new Brain(*(constrCopy.catBrain));
		this->type = constrCopy.type;
		std::cout << PINK << "Cat `s assigned operator" << RESET << std::endl;
	}
	return (*this);
}

Cat::~Cat()
{
	delete this->catBrain;
	std::cout << RED << "Bye bye, MIAU Cat class" << RESET << std::endl;
}

void Cat::makeSound() const
{
	std::cout << PURPLE << "****************************************" << RESET << std::endl;
	std::cout << YELLOW << "MIAU MIAU MIAUUUUUU !!!, overriding the AAnimal class, which cannot be instantiated !!!!"
		<< RESET << std::endl;
	std::cout << PURPLE << "****************************************" << RESET << std::endl;
}

std::string Cat::getType() const
{
	return (this->type);
}

std::ostream& operator<<(std::ostream &output, const Cat& constrCopy)
{
	output << constrCopy.catBrain;
	return (output);
}