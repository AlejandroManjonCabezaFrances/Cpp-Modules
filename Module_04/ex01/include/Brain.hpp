/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:09:03 by amanjon-          #+#    #+#             */
/*   Updated: 2024/09/26 13:09:06 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

/* #include "Dog.hpp"
#include "Cat.hpp" */

#include <iostream>
#include <iomanip>

class Brain
{
    private:
        std::string ideas[100];

    public:
        Brain();
        Brain(const Brain& constrCopy);
        Brain& operator=(const Brain& constrCopy);
        ~Brain();
};

#endif
