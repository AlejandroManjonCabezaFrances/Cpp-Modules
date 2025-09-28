/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 08:24:42 by amanjon-          #+#    #+#             */
/*   Updated: 2024/12/10 08:40:26 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "../include/AForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

#include <iostream>
#include <iomanip>

/**
 * FUNCIÓN makeForm(); const - &
 * const: no se modificarán los valores dentro de la función y permite pasar cadenas literales "robotomy request form"
 * &: no pasa una copia, mayor eficiencia
*/
class Intern
{
    public:
        Intern();
        Intern(const Intern& constrCopy);
        Intern& operator=(const Intern& constrCopy);
        ~Intern();

        AForm* makeForm(const std::string& nameForm, const std::string& target);
};

#endif
