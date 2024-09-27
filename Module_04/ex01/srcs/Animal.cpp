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

Animal::Animal()
{
    std::cout << GREEN << "The animals leaves its cave" << RESET << std::endl;
}

Animal::Animal(const std::string& _type) : type(_type)
{
    std::cout << "The animals leaves its cave" << std::endl;
}

Animal::Animal(const Animal& constrCopy)
{
    this->type = constrCopy.type;
}

Animal& Animal::operator=(const Animal& constrCopy)
{
    if (this != &constrCopy)
    {
        this->type = constrCopy.type;
    }

    return (*this);
}

Animal::~Animal()
{
    std::cout << RED << "Bye bye Animal class" << RESET << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::makeSound() const
{
    std::cout << "Animals make noise" << std::endl;
}
