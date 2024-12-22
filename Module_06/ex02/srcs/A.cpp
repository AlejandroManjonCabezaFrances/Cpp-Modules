/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 19:52:40 by amanjon           #+#    #+#             */
/*   Updated: 2024/12/22 19:55:31 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/A.hpp"

A::A()
{
    std::cout << GREEN << " Default constructor A" << RESET << std::endl;
}

A::~A()
{
    std::cout << RED << " Default destructor A" << RESET << std::endl;
}
