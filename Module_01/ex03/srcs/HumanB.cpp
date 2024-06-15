/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 08:27:47 by amanjon-          #+#    #+#             */
/*   Updated: 2024/06/15 22:43:44 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string	name, Weapon* weapon)
{
	this->name = name;
	this->weapon = NULL;
}

HumanB::~HumanB()
{
}