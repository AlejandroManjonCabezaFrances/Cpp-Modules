/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 08:54:03 by amanjon-          #+#    #+#             */
/*   Updated: 2024/05/23 07:46:30 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string _name)
{
    this->name = _name;
}

Zombie::~Zombie()
{
    std::cout << this->name << ": Zombie destroyed, is back underground!!" << std::endl;
    std::cout << "***********" << std::endl << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    
    std::cout << std::endl;
    std::cout << "--------------" << std::endl;
    std::cout << std::endl;
}