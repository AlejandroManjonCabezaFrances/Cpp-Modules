/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 01:37:05 by amanjon-          #+#    #+#             */
/*   Updated: 2024/10/17 11:19:25 by amanjon-         ###   ########.fr       */
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
        Animal(const std::string& _type);
        Animal(const Animal& constrCopy);
        Animal& operator=(const Animal& constrCopy);
        virtual ~Animal();

        std::string getType() const;
        virtual void makeSound() const;
};

#endif
