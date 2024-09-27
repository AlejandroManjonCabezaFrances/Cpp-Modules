/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 01:37:41 by amanjon-          #+#    #+#             */
/*   Updated: 2024/09/27 13:54:20 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog() : Animal()
{
    this->dogBrain = new Brain();
    this->type = "Dog";
    std::cout << GREEN <<"The dog leaves to the street" << RESET << std::endl;
}

Dog::Dog(const Dog& constrCopy) : Animal()
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
    delete this->dogBrain;
    std::cout << RED << "Bye bye, GUAU Dog class" << RESET << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "GUAU GUAU GUAUUUUUU !!!!" << std::endl;
}

std::string Dog::getType()
{
    return (this->type);
}

std::ostream& operator<<(std::ostream &output, const Dog& constrCopy)
{
	output << constrCopy.dogBrain;
	return (output);
}
