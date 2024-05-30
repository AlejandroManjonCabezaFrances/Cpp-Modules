/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 08:04:20 by amanjon-          #+#    #+#             */
/*   Updated: 2024/05/30 06:59:32 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{   
}

Zombie::~Zombie()
{   
    // std::cout << "destructor in action" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->name << this->lastName << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::nameZombie(std::string _name, int _lastName)
{
    this->name = _name;
    this->lastName = _lastName;
}