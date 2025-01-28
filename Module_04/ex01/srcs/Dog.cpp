/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 01:37:41 by amanjon-          #+#    #+#             */
/*   Updated: 2024/10/21 14:06:17 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog() : Animal()
{
    this->dogBrain = new Brain();
    this->type = "Dog";
    std::cout << GREEN <<"The dog leaves to the street" << RESET << std::endl;
}

/**
 * Constructor en copia: Guardamos en la instancia actual del objeto = dinámicamente 
 * llamamaos al constructor en copia de Brain, desreferenciando puntero para acceder a 
 * donde apunta el puntero "&"
*/
Dog::Dog(const Dog& constrCopy) : Animal()
{
    if (constrCopy.dogBrain)
        this->dogBrain = new Brain(*(constrCopy.dogBrain));
    this->type = constrCopy.type;
    std::cout << PURPLE << "Dog `s constructor copy" << RESET << std::endl;
}

/**
 * Operador de asignación: evitamos la autoasignación.
 * Liberamos memoria del objeto actual antes de copiar el nuevo: Dog copiedDog = originalDog;
 * Misma función que en contructor en copia.
*/
Dog& Dog::operator=(const Dog& constrCopy)
{
    if (this != &constrCopy)
    {
        delete this->dogBrain;
        if (constrCopy.dogBrain)
            this->dogBrain = new Brain(*(constrCopy.dogBrain));
        this->type = constrCopy.type;
        std::cout << PINK << "Dog `s assigned operator" << RESET << std::endl;
    }
    return (*this);
}

Dog::~Dog()
{
    delete this->dogBrain;
    std::cout << RED << "Bye bye, GUAU Dog class" << RESET << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "GUAU GUAU GUAUUUUUU !!!!" << std::endl;
}

std::string Dog::getType() const
{
    return (this->type);
}

std::ostream& operator<<(std::ostream &output, const Dog& constrCopy)
{
	output << constrCopy.dogBrain;
	return (output);
}
