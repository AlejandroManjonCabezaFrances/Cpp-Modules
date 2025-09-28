/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 01:38:04 by amanjon-          #+#    #+#             */
/*   Updated: 2024/10/17 11:55:51 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "The cat leaves for a walk" << std::endl;
    this->type = "Cat";
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
    std::cout << "Bye bye, MIAU Cat class" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "MIAU MIAU MIAUUUUUUU !!!" << std::endl;
}
