/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 01:38:04 by amanjon-          #+#    #+#             */
/*   Updated: 2024/09/27 12:33:16 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat() : Animal()
{
    this->catBrain = new Brain();
    this->type = "Cat";
    std::cout << GREEN << "The cat leaves for a walk" << RESET << std::endl;
}

Cat::Cat(const Cat& constrCopy) : Animal()
{
    this->type = constrCopy.type;
}

Cat& Cat::operator=(const Cat& constrCopy)
{
    if (this != &constrCopy)
    {
        this->type = constrCopy.type;
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
    std::cout << "MIAU MIAU MIAUUUUUUU !!!" << std::endl;
}

std::string Cat::getType()
{
    return (this->type);
}

std::ostream& operator<<(std::ostream &output, const Cat& constrCopy)
{
	output << constrCopy;
	return (output);
}
