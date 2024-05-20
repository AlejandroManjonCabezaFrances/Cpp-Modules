/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 08:54:03 by amanjon-          #+#    #+#             */
/*   Updated: 2024/05/20 08:58:11 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string _name)
{
    this->name = _name;
}

void	randomChump(std::string name)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}