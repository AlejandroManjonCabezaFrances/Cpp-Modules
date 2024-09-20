/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 01:37:15 by amanjon-          #+#    #+#             */
/*   Updated: 2024/09/20 04:38:29 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

#include <iostream>
#include <iomanip>

class Dog : virtual public Animal
{
    public:
        Dog();
        Dog(const Dog& constrCopy);
        Dog& operator=(const Dog& constrCopy);
        ~Dog();

        virtual void makeSound();
};

#endif
