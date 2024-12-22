/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 19:52:47 by amanjon           #+#    #+#             */
/*   Updated: 2024/12/22 19:57:11 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/C.hpp"

C::C()
{
    std::cout << GREEN << " Default constructor C" << RESET << std::endl;
}

C::~C()
{
    std::cout << RED << " Default destructor C" << RESET << std::endl;
}
