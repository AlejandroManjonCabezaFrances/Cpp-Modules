/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 19:52:44 by amanjon           #+#    #+#             */
/*   Updated: 2024/12/22 19:57:08 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/B.hpp"

B::B()
{
    std::cout << GREEN << " Default constructor B" << RESET << std::endl;
}

B::~B()
{
    std::cout << RED << " Default destructor B" << RESET << std::endl;
}
