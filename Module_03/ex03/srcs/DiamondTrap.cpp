/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 16:33:44 by amanjon-          #+#    #+#             */
/*   Updated: 2024/09/09 08:34:59 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	std::cout << YELLOW << "DiamondTrap " << this->name << " New person has been created." << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& _name)
	:  ScavTrap(_name + "_clap_name"), FragTrap(_name + "_clap_name")
{
	this->name = _name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::ClapTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& constrCopy) : ScavTrap(constrCopy), FragTrap(constrCopy)
{
	this->name = constrCopy.name;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& constrCopy)
{
    if (this != &constrCopy)
        this->name = constrCopy.name;
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << YELLOW << "FragTrap " << this->name << " has finished the mision !" << RESET << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap ** My name recently is: " << this->name << std::endl;
	std::cout << "ClapTrap ** My name is this class is: " << ClapTrap::name << std::endl;
}