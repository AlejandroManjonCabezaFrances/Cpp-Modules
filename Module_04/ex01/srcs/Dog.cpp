/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 01:37:41 by amanjon-          #+#    #+#             */
/*   Updated: 2024/09/26 17:03:36 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "The dog leaves to the street" << std::endl;
}

Dog::Dog(const Dog& constrCopy)
{
    this->type = constrCopy.type;
}

Dog& Dog::operator=(const Dog& constrCopy)
{
    if (this != &constrCopy)
    {
        this->type = constrCopy.type;
    }

    return (*this);
}

Dog::~Dog()
{
    std::cout << "Bye bye, GUAU Dog class" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "GUAU GUAU GUAUUUUUU !!!!" << std::endl;
}

std::string Dog::getType()
{
    return (this->type);
}
