/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 08:27:47 by amanjon-          #+#    #+#             */
/*   Updated: 2024/10/03 14:01:08 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

HumanB::HumanB(std::string	name)
{
	this->name = name;
	this->weapon = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon& _weapon)
{
	this->weapon = &_weapon;
}

void	HumanB::attack(void)
{
	if (weapon != NULL)
		std::cout << this->name << " attacking with " << this->weapon->getType() << std::endl;
	else
		std::cout << " Oh Jesus Chrits, nobody gaven " << this->name << " a weapon!!!" << std::endl;
}
