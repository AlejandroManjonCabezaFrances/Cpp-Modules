/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 01:37:05 by amanjon-          #+#    #+#             */
/*   Updated: 2024/09/20 04:41:47 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const std::string& _target);
        Animal(const Animal& constrCopy);
        Animal& operator=(const Animal& constrCopy);
        virtual ~Animal();

        virtual std::string getType();
        virtual void makeSound();
};

#endif
