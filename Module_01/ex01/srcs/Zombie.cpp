/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 08:04:20 by amanjon-          #+#    #+#             */
/*   Updated: 2024/10/03 12:57:25 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{   
}

Zombie::~Zombie()
{   
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