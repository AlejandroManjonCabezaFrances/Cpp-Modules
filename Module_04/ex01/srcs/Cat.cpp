/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 01:38:04 by amanjon-          #+#    #+#             */
/*   Updated: 2024/09/26 17:03:56 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "The cat leaves for a walk" << std::endl;
}

Cat::Cat(const Cat& constrCopy)
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
    std::cout << "Bye bye, MIAU Cat class" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "MIAU MIAU MIAUUUUUUU !!!" << std::endl;
}

std::string Cat::getType()
{
    return (this->type);
}
