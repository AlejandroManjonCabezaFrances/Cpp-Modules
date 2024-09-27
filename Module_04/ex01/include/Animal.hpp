/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 01:37:05 by amanjon-          #+#    #+#             */
/*   Updated: 2024/09/27 12:26:35 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Colors.hpp"

#include <iostream>
#include <iomanip>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const std::string& _type);
        Animal(const Animal& constrCopy);
        Animal& operator=(const Animal& constrCopy);
        virtual ~Animal();

        virtual std::string getType() const;
        virtual void makeSound() const;
};

#endif
