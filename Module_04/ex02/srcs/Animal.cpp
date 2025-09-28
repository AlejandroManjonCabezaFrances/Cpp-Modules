    /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 01:37:32 by amanjon-          #+#    #+#             */
/*   Updated: 2024/09/20 04:41:43 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

AAnimal::AAnimal()
{
    std::cout << GREEN << "The animals leaves its cave" << RESET << std::endl;
}

AAnimal::AAnimal(const std::string& _type) : type(_type)
{
    std::cout << "The animals leaves its cave" << std::endl;
}

AAnimal::AAnimal(const AAnimal& constrCopy)
{
    this->type = constrCopy.type;
}

AAnimal& AAnimal::operator=(const AAnimal& constrCopy)
{
    if (this != &constrCopy)
    {
        this->type = constrCopy.type;
    }

    return (*this);
}

AAnimal::~AAnimal()
{
    std::cout << RED << "Bye bye Animal class" << RESET << std::endl;
}

std::string AAnimal::getType() const
{
    return (this->type);
}

void AAnimal::makeSound() const
{
}
